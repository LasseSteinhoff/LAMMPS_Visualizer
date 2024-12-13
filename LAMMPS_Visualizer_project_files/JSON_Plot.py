import os
import json
import matplotlib.pyplot as plt
import numpy as np

def plot_json_data(file_path):

    with open(file_path, "r") as file:
        content = json.load(file)

    proteinsize_plot = {
        "first": [], "second": [], "third": [], "fourth": [], "fifth": [],
        "sixth": [], "seventh": [], "eighth": [], "nineth": [], "tenth": []
    }

    results = content.get('results', [])
    timestep_size = len(results)
    pml_plot = {
        "SUMO3 PML ": [0] * timestep_size,
        "SUMO2 PML ": [0] * timestep_size,
        "SUMO1 PML ": [0] * timestep_size,
        "SUMO2 SUMO3 PML ": [0] * timestep_size,
        "SUMO1 SUMO3 PML ": [0] * timestep_size,
        "SUMO1 SUMO2 SUMO3 PML ": [0] * timestep_size,
        "SUMO1 SUMO2 PML ": [0] * timestep_size,
    }
    sumo_plot = {
        "SUMO1 SUMO2 ": [0] * timestep_size,
        "SUMO1 SUMO3 ": [0] * timestep_size,
        "SUMO2 SUMO3 ": [0] * timestep_size,
        "SUMO2 ": [0] * timestep_size,
        "SUMO3 ": [0] * timestep_size,
        "SUMO1 SUMO2 SUMO3 ": [0] * timestep_size,
    }
    daxx_plot = {
        "SUMO3 DAXX ": [0] * timestep_size,
        "SUMO2 DAXX ": [0] * timestep_size,
        "SUMO2 SUMO3 DAXX ": [0] * timestep_size,
        "SUMO1 DAXX ": [0] * timestep_size,
        "SUMO1 SUMO2 SUMO3 DAXX ": [0] * timestep_size,
        "SUMO1 SUMO2 DAXX ": [0] * timestep_size,
        "SUMO1 SUMO3 DAXX ": [0] * timestep_size,
    }
    sp100_plot = {
        "SUMO2 SP100 ": [0] * timestep_size,
        "SUMO3 SP100 ": [0] * timestep_size,
        "SUMO1 SP100 ": [0] * timestep_size,
        "SUMO2 SUMO3 SP100 ": [0] * timestep_size,
        "SUMO1 SUMO2 SP100 ": [0] * timestep_size,
        "SUMO1 SUMO3 SP100 ": [0] * timestep_size,
        "SUMO1 SUMO2 SUMO3 SP100 ": [0] * timestep_size,
    }
    type_five_plot = {
        "SUMO1 SUMO2 SUMO3 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO2 SUMO3 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO1 SUMO3 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO1 SUMO2 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO1 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO2 PML DAXX SP100 ": [0] * timestep_size,
        "SUMO3 PML DAXX SP100 ": [0] * timestep_size,
    }
    type_six_plot = {
        "SUMO1 SUMO2 SUMO3 PML SP100 ": [0] * timestep_size,
        "SUMO2 SUMO3 PML SP100 ": [0] * timestep_size,
        "SUMO1 SUMO3 PML SP100 ": [0] * timestep_size,
        "SUMO1 SUMO2 PML SP100 ": [0] * timestep_size,
        "SUMO1 PML SP100 ": [0] * timestep_size,
        "SUMO2 PML SP100 ": [0] * timestep_size,
        "SUMO3 PML SP100 ": [0] * timestep_size,
    }
    type_seven_plot = {
        "SUMO1 SUMO2 SUMO3 PML DAXX ": [0] * timestep_size,
        "SUMO2 SUMO3 PML DAXX ": [0] * timestep_size,
        "SUMO1 SUMO3 PML DAXX ": [0] * timestep_size,
        "SUMO1 SUMO2 PML DAXX ": [0] * timestep_size,
        "SUMO1 PML DAXX ": [0] * timestep_size,
        "SUMO2 PML DAXX ": [0] * timestep_size,
        "SUMO3 PML DAXX ": [0] * timestep_size,
    }
    type_eight_plot = {
        "SUMO1 SUMO2 SUMO3 DAXX SP100 ": [0] * timestep_size,
        "SUMO2 SUMO3 DAXX SP100 ": [0] * timestep_size,
        "SUMO1 SUMO3 DAXX SP100 ": [0] * timestep_size,
        "SUMO1 SUMO2 DAXX SP100 ": [0] * timestep_size,
        "SUMO1 DAXX SP100 ": [0] * timestep_size,
        "SUMO2 DAXX SP100 ": [0] * timestep_size,
        "SUMO3 DAXX SP100 ": [0] * timestep_size,
    }

    counter = 0
    timesteps = []
    for resultentry in results:     
        timestep = resultentry.get('timestep', 0)
        timesteps.append(timestep)
        proteinsize_plot["first"].append(resultentry.get("first", 0))
        proteinsize_plot["second"].append(resultentry.get("second", 0))
        proteinsize_plot["third"].append(resultentry.get("third", 0))
        proteinsize_plot["fourth"].append(resultentry.get("fourth", 0))
        proteinsize_plot["fifth"].append(resultentry.get("fifth", 0))
        proteinsize_plot["sixth"].append(resultentry.get("sixth", 0))
        proteinsize_plot["seventh"].append(resultentry.get("seventh", 0))
        proteinsize_plot["eighth"].append(resultentry.get("eighth", 0))
        proteinsize_plot["nineth"].append(resultentry.get("nineth", 0))
        proteinsize_plot["tenth"].append(resultentry.get("tenth", 0))
        proteinCombination = resultentry.get('proteinCombination', [])
        for entry in proteinCombination:                   
            protein_combination = ""
            if entry.get("SUMO1"):
                protein_combination += "SUMO1 "
            if entry.get("SUMO2"):
                protein_combination += "SUMO2 "
            if entry.get("SUMO3"):
                protein_combination += "SUMO3 "
            if entry.get("PML"):
                protein_combination += "PML "
            if entry.get("DAXX"):
                protein_combination += "DAXX "
            if entry.get("SP100"):
                protein_combination += "SP100 "
          
            if protein_combination in pml_plot:
                pml_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in sumo_plot:
                sumo_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in daxx_plot:
                daxx_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in sp100_plot:
                sp100_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in type_five_plot:
                type_five_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in type_six_plot:
                type_six_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in type_seven_plot:
                type_seven_plot[protein_combination][counter] = entry.get("occurrence", 0)
            elif protein_combination in type_eight_plot:
                type_eight_plot[protein_combination][counter] = entry.get("occurrence", 0)

        counter += 1

    plt.figure(figsize=(10, 6))
    for combination, occ in proteinsize_plot.items():
        plt.scatter(timesteps, occ, label=combination)

    plt.title('Ten Largest Protein Structures')
    plt.xlabel('Timestep in femtoseconds')
    plt.ylabel('Amount of Protein')
    plt.grid(True)
    plt.legend(loc='upper right', bbox_to_anchor=(1.1, 1))
    plt.tight_layout()
    plt.show()

if __name__ == "__main__":
    directory = 'C:/Users/LasseSteinhoff/Desktop/3875000.json'
    plot_json_data(directory)