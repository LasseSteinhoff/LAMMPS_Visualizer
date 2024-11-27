/**************************************************************
// Author:        Lasse Steinhoff
// Date:          11.10.2024
// Description:   LAMMPS Random Dataset Generator
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <string>
#include <sys/stat.h>
#include <tuple>
#ifdef _WIN32
    #include <direct.h>  // Windows specific
#include <chrono>

#define mkdir _mkdir
#else
    #include <sys/stat.h>  // Linux specific
#endif

std::string lammps_summary_german =
        "Das Programm ermöglicht die einfache Erstellung von randomisierten normalisierte Trajektorien \n"
        "in Molekulardynamiksimulationen.\n"
        "Die LAMMPS-Klasse stellt die Trajektorien der Atome in einer LAMMPS-Simulation dar.\n"
        "Dabei enthält sie Informationen über die Anzahl der Zeitschritte, Atommenge und Simulationsgrenzen.\n"
        "Dann erzeugt zufällige Atomdaten (ID, Typ, x, y, z), die es Daten in einer .lammpstrj Datei schreiben kann.\n"
        "Dafür notwendig ist eine Inputdatei, die pro Zeile eine .lammpstrj Datei baut aus den mit einem Leerzeichen seperierten Parameteren.\n"
        "Die Reihenfolge der Parameter ist : Zeitschrittanzahl Atomtypenanzahl Atomanzahl \n"
        "negative_X_Grenze positive_X_Grenze negative_Y_Grenze positive_Y_Grenze negative_Z_Grenze positive_Z_Grenze.\n"
        "Pipeline configurations : only the flag -y english or -u german for information\n"
        "input_file_path output_directory_path Random_Dataset_Generator.cpp\n"
        "input_file_path -o output_directory_path Random_Dataset_Generator.cpp\n";

std::string lammps_summary_english =
        "The LAMMPS class enables the simple creation of random normalized trajectories\n"
        "in molecular dynamics simulations.\n"
        "It represents the trajectories of the atoms in a LAMMPS simulation,\n"
        "because it contains information about the number of time steps, atoms and simulation boundaries.\n"
        "Then it generates random atom data (ID, type, x, y, z) and can save this data in a LAMMPS file .lammpstrj.\n"
        "The parameters are seperated with one space and\n"
        "each row will be one .lammpstrj file with the sequence:\n"
        "number_of_timesteps number_of_atomtypes number_of_atoms \n"
        "negativ_x_boundary positiv_x_boundary negativ_y_boundary positiv_y_boundary negativ_z_boundary positiv_z_boundary\n"
        "Die Pipeline Konfigurations ist : nur ein flag -y englisch oder -u deutsch zeigt Informationen an\n"
        "Eingabedateipfad Ausgabeordnerpfad Random_Dataset_Generator.cpp\n"
        "Eingabedateipfad -o Ausgabeordnerpfad Random_Dataset_Generator.cpp\n";

/**
 * .lammpstrj LAMMPS format
 *
 * ITEM: TIMESTEP
 * timesteps
 * ITEM: NUMER OF ATOMS
 * numberOfAtoms
 * ITEM: BOX BOUND
 * x : negativ positiv
 * y : negativ positiv
 * z : negativ positiv
 * ITEM: ATOM
 * (ID, Typ, x, y, z)
 */

int number_created_files = 0;

class LAMMPS {

private:
    std::string output_dir;
    int num_timesteps;
    int num_atoms;
    int atomtypesize;
    double boxboundneg_X, boxboundpos_X;
    double boxboundneg_Y, boxboundpos_Y;
    double boxboundneg_Z, boxboundpos_Z;
    std::vector<std::tuple<int, double, double, double, double>> atoms;  // Atom data (ID, type, x, y, z)

public:
    LAMMPS(std::string output_dir, int timesteps, int num_atoms, int atomtypesize,
           double boxboundneg_X, double boxboundpos_X, double boxboundneg_Y, double boxboundpos_Y,
           double boxboundneg_Z, double boxboundpos_Z)
    : num_timesteps(timesteps), num_atoms(num_atoms), atomtypesize(atomtypesize),
      boxboundneg_X(boxboundneg_X), boxboundpos_X(boxboundpos_X),
      boxboundneg_Y(boxboundneg_Y), boxboundpos_Y(boxboundpos_Y),
      boxboundneg_Z(boxboundneg_Z), boxboundpos_Z(boxboundpos_Z)
    {
        write_lammpstrj_file(output_dir);
    }

    // uses the boundaries to create the normalized random data
    void generate_random_atoms() {
        for (int i = 0; i < num_atoms; ++i) {
            // the time of the system clock serves as a random seed
            unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
            std::default_random_engine generator(seed);

            std::uniform_real_distribution<double> distribution_X(boxboundneg_X, boxboundpos_X);
            std::uniform_real_distribution<double> distribution_Y(boxboundneg_Y, boxboundpos_Y);
            std::uniform_real_distribution<double> distribution_Z(boxboundneg_Z, boxboundpos_Z);
            std::uniform_int_distribution<int> type_distribution(1, atomtypesize);

            double x = (distribution_X(generator) - boxboundneg_X )/ (boxboundpos_X - boxboundneg_X);
            double y = (distribution_Y(generator) - boxboundneg_Y )/ (boxboundpos_Y - boxboundneg_Y);
            double z = (distribution_Z(generator) - boxboundneg_Z )/ (boxboundpos_Z - boxboundneg_Z);
            int type = type_distribution(generator);

            atoms.push_back(std::make_tuple(i + 1, type, x , y, z));
        }
    }

    /**
     * transfers the data of the lammps class into a file
     * @param directory path for the output destination
     */
    void write_lammpstrj_file(const std::string& outputDir) {
        number_created_files++;
        std::string file_path = outputDir + "/" +
                std::to_string(number_created_files) + "_" +
                std::to_string(num_timesteps) + "_" +
                std::to_string(num_atoms) + "_" +
                std::to_string(atomtypesize) + ".lammpstrj";
        std::ofstream file(file_path);

        if (!file) {
            std::cerr << "Error creating file at path: " << file_path << std::endl;
            return;
        }

        for (int t = 0; t < num_timesteps; ++t) {
            file << "ITEM: TIMESTEP\n";
            file << t << "\n";
            file << "ITEM: NUMBER OF ATOMS\n";
            file << num_atoms << "\n";
            file << "ITEM: BOX BOUNDS\n";
            file << boxboundneg_X << " " << boxboundpos_X << "\n";
            file << boxboundneg_Y << " " << boxboundpos_Y << "\n";
            file << boxboundneg_Z << " " << boxboundpos_Z << "\n";
            file << "ITEM: ATOMS id type x y z\n";

            generate_random_atoms();
            for (const auto& atom : atoms) {
                file << std::get<0>(atom) << " "
                     << std::get<1>(atom) << " "
                     << std::get<2>(atom) << " "
                     << std::get<3>(atom) << " "
                     << std::get<4>(atom) << "\n";
            }
            atoms.clear();
        }

        file.close();
        std::cout << "LAMMPS-trajectory was successfully created at : " << file_path << std::endl;
    }
};

/**
 * Checks and creates a directory if it does not exist
 * @param directory path for the output destination
 * @return boolean value indicating whether the directory is viable
 */
bool create_check_directory(const std::string& outputDir) {
    struct stat info;
    if (stat(outputDir.c_str(), &info) != 0) {
        std::cerr << "Directory doesn't exist, creating it: " << outputDir << std::endl;
        if (mkdir(outputDir.c_str()) == -1) {
            std::cerr << "Error creating directory: " << std::endl;
            return false;
        }
        return true;
    } else if (info.st_mode & S_IFDIR) {
        std::cout << "Directory already exists: " << outputDir << std::endl;
        return true;
    } else {
        std::cerr << outputDir << " is not a directory!" << std::endl;
        return false;
    }
}

// Main function to process the parameter combinations list
int main(int argc, char* argv[]) {
    std::string input_parameters_file_path, outputDir;

    // information if only the script runs
    if (argc == 1) {
        std::cout << "False Input! \n" + lammps_summary_english;
        return 1;
    }
    // information if the script runs with one flag only
    if (argv[1] == "-y") {
        std::cout << "Information about the program:\n" + lammps_summary_english;
        return 1;
    } else if (argv[1] == "-u") {
        std::cout << "Informationen über das Programm:\n" + lammps_summary_german;
        return 1;
    }
    // input
    input_parameters_file_path = argv[1];
    if (input_parameters_file_path.empty()) {
        std::cerr << "Error: Missing input file path!" << std::endl;
        return 1;
    }
    // output
    if (argv[2] == "-o") {
        outputDir = argv[3];
    } else outputDir = argv[2];

    if (outputDir.empty() || !create_check_directory(outputDir)) {
        std::cerr << "Error: unreachable destination!" << std::endl;
        return 1;
    }

    // Reading each line of the input and constructs for each row of parameters a LAMMPS object
    std::ifstream inputFile(input_parameters_file_path);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }
    int num_timesteps, num_atoms, atomtypesize;
    double x_neg, x_pos, y_neg, y_pos, z_neg, z_pos;
    while (inputFile >> num_timesteps >> num_atoms >> atomtypesize >> x_neg >> x_pos >> y_neg >> y_pos >> z_neg >> z_pos) {
        LAMMPS lammps(outputDir, num_timesteps, num_atoms, atomtypesize, x_neg, x_pos, y_neg, y_pos, z_neg, z_pos);
    }

    inputFile.close();
    return 0;
}
