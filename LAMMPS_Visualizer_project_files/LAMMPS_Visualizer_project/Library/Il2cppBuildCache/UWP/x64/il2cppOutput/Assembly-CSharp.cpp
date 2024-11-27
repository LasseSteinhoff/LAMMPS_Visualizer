#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// UnityEngine.UIElements.ChangeEvent`1<System.Boolean>
struct ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B;
// UnityEngine.UIElements.ChangeEvent`1<System.Single>
struct ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E;
// UnityEngine.UIElements.ClampedDragger`1<System.Single>
struct ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>
struct Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond>
struct Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>
struct EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>
struct EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A;
// UnityEngine.UIElements.EventCallback`1<System.Object>
struct EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// UnityEngine.UIElements.INotifyValueChanged`1<System.Boolean>
struct INotifyValueChanged_1_t688BCC3C6D1DB1A3415DB438063ADD73883ABF14;
// UnityEngine.UIElements.INotifyValueChanged`1<System.Single>
struct INotifyValueChanged_1_t6ED9607E6FB11EC5AA9A1A4D6F6B2DEF1A7D6315;
// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>
struct IReadOnlyDictionary_2_t2F838E481D354E127B23CF506037122C82E16CC7;
// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.GameObject,System.Int32>
struct IReadOnlyDictionary_2_t07DA1ABA9CEC58087B971B8FB5B901C7D455D828;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>
struct IReadOnlyDictionary_2_t32861E459F99FBBC49FE87C2887414587928A852;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_t38BAE2A79A8C85F8795E24CF5DB231156D5A3B66;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,System.Collections.ArrayList>
struct KeyCollection_t3272E666017698B05FCA5F1FAEACC574DD0BF0F2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,System.Int32>
struct KeyCollection_t38E13111257CE7BB96B48D3EC0F0B382912E83F1;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,UI/Bond>
struct KeyCollection_t09CDD44C96118D7A993011BEDD7049F95C2775AD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t83B5C938D73A29E7198A545AE88DC67240DDA6DF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>
struct ObjectPool_1_t8BEC5A7E2986A02A5A01CD523423A728794BD0E1;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>
struct ObjectPool_1_tFF144489BB8C0C001C589EE1D9C8AA94E457BCC2;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Collections.ArrayList>
struct ValueCollection_t8B159F09C16707020E275932E2010F28FA82BEC8;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,UI/Bond>
struct ValueCollection_tE63C68D5C576DC46617C44787439713402AC8963;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,System.Collections.ArrayList>[]
struct EntryU5BU5D_t768E25BB68EA244495AF44E0F87620A43CF9ABA6;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,System.Int32>[]
struct EntryU5BU5D_t51F4A4322BFAC6DB39A1B56F224A995B859310C4;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,UI/Bond>[]
struct EntryU5BU5D_t90B0E13FE0DFBD1FCB4E6A983C6BB33C86BE7475;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.UIElements.BaseBoolField
struct BaseBoolField_t01F8AFD72D18F0EB65F949062615550A9ED30B0D;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.UIElements.Clickable
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.ITextHandle
struct ITextHandle_tE073838D8ECC8553222F256E181F96527EC273E4;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
// UnityEngine.UIElements.RadioButton
struct RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UIElements.Slider
struct Slider_t5891706383A14955E3FAD68A79829F3234681652;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UIElements.TextField
struct TextField_tDB34369F9468D7F02670087D9444EC23115827D9;
// UnityEngine.UIElements.Toggle
struct Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539;
// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77;
// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3;
// UI/Bond
struct Bond_tB9B39E768E2824236B746799DD3D2F26963B366C;
// UI/Molecule
struct Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013F4D7A9758E3D4BD0E05CA57E60519372A3080;
IL2CPP_EXTERN_C String_t* _stringLiteral05FF7F9C444685975140278FFB6CECEE4EBE5DB6;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE6130D6DB3E2D0FC908FE2C66895928BFB2EA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26064B1C6177399F994D4D88E7C611C3E720A01F;
IL2CPP_EXTERN_C String_t* _stringLiteral297053DD260F1A612E64AEB43C06286160BA63A8;
IL2CPP_EXTERN_C String_t* _stringLiteral3546251C082281F77B37FD6207F52C8A275D6311;
IL2CPP_EXTERN_C String_t* _stringLiteral3618B782769A6A5B07A111A51AB6674F0D95CD05;
IL2CPP_EXTERN_C String_t* _stringLiteral3BEC1FDE5348C5167C25C669866BC67A5A99E742;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0;
IL2CPP_EXTERN_C String_t* _stringLiteral569ACA962BBCF7ABB435F614DF2DA5140DAED0FB;
IL2CPP_EXTERN_C String_t* _stringLiteral56F6D65F00470BF041A364C468506539B064DA9E;
IL2CPP_EXTERN_C String_t* _stringLiteral738F6449BFCE9C5FAAD364729B134557DE65F5C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7E4B217F6FA639CD77AEB9F7D3FA9B72F66B0C51;
IL2CPP_EXTERN_C String_t* _stringLiteral899057FA48A4E0B5FD7A2FB6EB136F9906502253;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF6DB26BAB6D866E1E92568027E7DAB2075EC07;
IL2CPP_EXTERN_C String_t* _stringLiteral93467AC1FDB7397C36533A1097B3D91021A34EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral95739D9F3D7CFEBCEEC64C5111BA1EE7DC01DB8B;
IL2CPP_EXTERN_C String_t* _stringLiteral9658CC65667A989321F8238BF09A33B870196CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C5439975A14B5CA4814E6DEF75F57091E7E5AA;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D25157D865AB3D683CF02D3433561BFB347652;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C;
IL2CPP_EXTERN_C String_t* _stringLiteralB91691E67A856421D917CDF2F0F86CF1CC7B832C;
IL2CPP_EXTERN_C String_t* _stringLiteralB941EDDC2534C0E1FA77E19F3767EDBBF6556DC9;
IL2CPP_EXTERN_C String_t* _stringLiteralBE07E045AF72EB2D217B45DB4C41D543A00EC8B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC1048498E4A087F7F8985C9121AC2AA06E55772B;
IL2CPP_EXTERN_C String_t* _stringLiteralC5DFB3FB7AB7AE75641BCBC1DA2F8FC37CD3C1ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC613FB6E7DB88755F7CA113B07435CFF253C1FDE;
IL2CPP_EXTERN_C String_t* _stringLiteralC6555B42477400CBC16E2986A896747E6ED796D2;
IL2CPP_EXTERN_C String_t* _stringLiteralD813F30CE17647F9015D87C2CF4B4D12BEFBB1E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralE52EA8CA2EF69A4549412284F805C71449A4D88E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralEE5A9496BF3A09F757E830172FB334F6845BCE01;
IL2CPP_EXTERN_C String_t* _stringLiteralF22061D4FCC718BD100790CD5887C047FD1CDA2E;
IL2CPP_EXTERN_C String_t* _stringLiteralF4263AB788777DAA700FC388252D575035B6DAD3;
IL2CPP_EXTERN_C String_t* _stringLiteralFDDE279FBAB43FB2F38C54FEF2C17CFE9D377602;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_m9B256C57CAD754D9415CAB1C583273C7E6B990FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6AE1BF2623D89FA7417E6BD80C9CED8ADFC5F3F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m16CA1C6BF7BD7388F0E56FFD79497813FD767698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8FF41324C29E3A40BFB1C404B315CA3D2449776F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mEE2C527BDE7A18611ADAF3B770FB6965153BF3A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1C8D1CFB24426934BBD0E7B86411D947FBD85369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDE5D0893A485CD99AC67B6A3EB4ACE4E7A32BB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8445906813876C0429F983634F795D33AD8716E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m3AC44C8BD4E7085EE46D35A4D995A84A50D15DCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CinitToggelU3Eb__0_m1B8BB00D635A263A669A6528680B86D6CF4A215F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_Slider_Position_Change_m2B2193EF554AD4D4DBE3D75E87E2D7CCC5F750E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_Slider_Width_Change_mDFAC317E338421076C4FF50BE533A817AA0175FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_0_m69FD57618B269D70BB375590B0CD069ABBD71C7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_10_m4A8E44DE472DD0979F36DD63DC82DDA18F18A4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_11_m91FF4F5B1F6E49397598DE098F78FBC4946AE26C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_1_mDC344CE62E1B106E5361958B9BD1F9B32D8CA287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_2_m00326B157A070286731840720C78BDCE9549CEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_3_m26CD92D98EAD354083CC0C6C0F9D6A77885DD6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_4_m0AAAFD99E67C0CD392A3E8A68E22BC581200BE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_5_m0688AC0F4F31B8A6EE00CCD33ED34480CD0784D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_6_m94634E37AD49DDA3620E0F18735491F8AA08F3B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_7_m1F3787C049AA5F39EDA2AA6A86BE1AE0FDD4FF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_8_m2172F330256D23B9FF10D5D3B3C15F8B4BC55D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_U3COnEnableU3Eb__19_9_m2018F2A8F6968026E5F3850A67F9461A3AAE8547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>
struct Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t768E25BB68EA244495AF44E0F87620A43CF9ABA6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3272E666017698B05FCA5F1FAEACC574DD0BF0F2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8B159F09C16707020E275932E2010F28FA82BEC8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t51F4A4322BFAC6DB39A1B56F224A995B859310C4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t38E13111257CE7BB96B48D3EC0F0B382912E83F1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond>
struct Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t90B0E13FE0DFBD1FCB4E6A983C6BB33C86BE7475* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t09CDD44C96118D7A993011BEDD7049F95C2775AD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE63C68D5C576DC46617C44787439713402AC8963* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ____dictionary_0;
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3  : public RuntimeObject
{
	// UI UI/<>c__DisplayClass20_0::<>4__this
	UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* ___U3CU3E4__this_0;
	// UnityEngine.UIElements.Toggle UI/<>c__DisplayClass20_0::toggle
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_1;
	// UI/Molecule UI/<>c__DisplayClass20_0::molecule
	Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* ___molecule_2;
};

// UI/Bond
struct Bond_tB9B39E768E2824236B746799DD3D2F26963B366C  : public RuntimeObject
{
	// UnityEngine.GameObject UI/Bond::bond
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bond_0;
	// UnityEngine.GameObject UI/Bond::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
	// UnityEngine.GameObject UI/Bond::gameObject2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject2_2;
};

// UnityEngine.UIElements.CustomStyleProperty`1<System.Single>
struct CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 
{
	// System.String UnityEngine.UIElements.CustomStyleProperty`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>
struct Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>
struct Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Int32 System.IO.FileSystemInfo::_dataInitialized
	int32_t ____dataInitialized_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	// UnityEngine.Font UnityEngine.UIElements.FontDefinition::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.UIElements.FontDefinition::m_FontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField_14;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_6;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_7;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_8;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_9;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_10;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_11;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_12;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_13;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_20;
};

// UnityEngine.UIElements.StyleColor
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	// UnityEngine.Color UnityEngine.UIElements.StyleColor::m_Value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleColor::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// System.String UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::text
	String_t* ___text_1;
	// UnityEngine.Font UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	// UnityEngine.UIElements.FontDefinition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontDefinition
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___fontDefinition_3;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontSize
	int32_t ___fontSize_4;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::letterSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::paragraphSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	// UnityEngine.FontStyle UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontStyle
	int32_t ___fontStyle_8;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	// UnityEngine.TextAnchor UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::anchor
	int32_t ___anchor_10;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrap
	bool ___wordWrap_11;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrapWidth
	float ___wordWrapWidth_12;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::richText
	bool ___richText_13;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	// UnityEngine.UIElements.TextOverflow UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflow
	int32_t ___textOverflow_15;
	// UnityEngine.UIElements.TextOverflowPosition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflowPosition
	int32_t ___textOverflowPosition_16;
	// UnityEngine.UIElements.OverflowInternal UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::overflow
	int32_t ___overflow_17;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::panel
	RuntimeObject* ___panel_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	char* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Il2CppChar* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};

// UI/Molecule
struct Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA  : public RuntimeObject
{
	// System.String UI/Molecule::name
	String_t* ___name_0;
	// System.Single UI/Molecule::radius
	float ___radius_1;
	// UnityEngine.Color UI/Molecule::hexColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___hexColor_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UI/Molecule::bindingdistance
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___bindingdistance_3;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>
struct EventBase_1_tBA26F1F71F5552622D291E958C5BAAF8FC084715  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>
struct EventBase_1_tFD2814ACBD849EFC6EA7F16B7E12945AD1904ACD  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

// UnityEngine.UIElements.ChangeEvent`1<System.Boolean>
struct ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B  : public EventBase_1_tBA26F1F71F5552622D291E958C5BAAF8FC084715
{
	// T UnityEngine.UIElements.ChangeEvent`1::<previousValue>k__BackingField
	bool ___U3CpreviousValueU3Ek__BackingField_18;
	// T UnityEngine.UIElements.ChangeEvent`1::<newValue>k__BackingField
	bool ___U3CnewValueU3Ek__BackingField_19;
};

// UnityEngine.UIElements.ChangeEvent`1<System.Single>
struct ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E  : public EventBase_1_tFD2814ACBD849EFC6EA7F16B7E12945AD1904ACD
{
	// T UnityEngine.UIElements.ChangeEvent`1::<previousValue>k__BackingField
	float ___U3CpreviousValueU3Ek__BackingField_18;
	// T UnityEngine.UIElements.ChangeEvent`1::<newValue>k__BackingField
	float ___U3CnewValueU3Ek__BackingField_19;
};

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>
struct EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>
struct EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_65;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_66;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BaseField`1<System.Boolean>
struct BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelWidthRatio
	float ___m_LabelWidthRatio_81;
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelExtraPadding
	float ___m_LabelExtraPadding_82;
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelBaseMinWidth
	float ___m_LabelBaseMinWidth_83;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseField`1::m_VisualInput
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_VisualInput_84;
	// TValueType UnityEngine.UIElements.BaseField`1::m_Value
	bool ___m_Value_85;
	// UnityEngine.UIElements.Label UnityEngine.UIElements.BaseField`1::<labelElement>k__BackingField
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___U3ClabelElementU3Ek__BackingField_86;
	// System.Boolean UnityEngine.UIElements.BaseField`1::m_ShowMixedValue
	bool ___m_ShowMixedValue_87;
	// UnityEngine.UIElements.Label UnityEngine.UIElements.BaseField`1::m_MixedValueLabel
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___m_MixedValueLabel_88;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseField`1::m_CachedInspectorElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedInspectorElement_89;
	// System.Int32 UnityEngine.UIElements.BaseField`1::m_CachedListAndFoldoutDepth
	int32_t ___m_CachedListAndFoldoutDepth_90;
};

// UnityEngine.UIElements.BaseField`1<System.Single>
struct BaseField_1_t1BD309672FAB87887168305A09C320E26F166DA7  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelWidthRatio
	float ___m_LabelWidthRatio_81;
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelExtraPadding
	float ___m_LabelExtraPadding_82;
	// System.Single UnityEngine.UIElements.BaseField`1::m_LabelBaseMinWidth
	float ___m_LabelBaseMinWidth_83;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseField`1::m_VisualInput
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_VisualInput_84;
	// TValueType UnityEngine.UIElements.BaseField`1::m_Value
	float ___m_Value_85;
	// UnityEngine.UIElements.Label UnityEngine.UIElements.BaseField`1::<labelElement>k__BackingField
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___U3ClabelElementU3Ek__BackingField_86;
	// System.Boolean UnityEngine.UIElements.BaseField`1::m_ShowMixedValue
	bool ___m_ShowMixedValue_87;
	// UnityEngine.UIElements.Label UnityEngine.UIElements.BaseField`1::m_MixedValueLabel
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___m_MixedValueLabel_88;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseField`1::m_CachedInspectorElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedInspectorElement_89;
	// System.Int32 UnityEngine.UIElements.BaseField`1::m_CachedListAndFoldoutDepth
	int32_t ___m_CachedListAndFoldoutDepth_90;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// UnityEngine.UIElements.ITextHandle UnityEngine.UIElements.TextElement::m_TextHandle
	RuntimeObject* ___m_TextHandle_68;
	// System.String UnityEngine.UIElements.TextElement::m_Text
	String_t* ___m_Text_70;
	// System.Boolean UnityEngine.UIElements.TextElement::m_EnableRichText
	bool ___m_EnableRichText_71;
	// System.Boolean UnityEngine.UIElements.TextElement::m_DisplayTooltipWhenElided
	bool ___m_DisplayTooltipWhenElided_72;
	// System.Boolean UnityEngine.UIElements.TextElement::<isElided>k__BackingField
	bool ___U3CisElidedU3Ek__BackingField_73;
	// System.Boolean UnityEngine.UIElements.TextElement::m_WasElided
	bool ___m_WasElided_75;
	// System.Boolean UnityEngine.UIElements.TextElement::m_UpdateTextParams
	bool ___m_UpdateTextParams_76;
	// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams UnityEngine.UIElements.TextElement::m_TextParams
	TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F ___m_TextParams_77;
	// System.Int32 UnityEngine.UIElements.TextElement::m_PreviousTextParamsHashCode
	int32_t ___m_PreviousTextParamsHashCode_78;
};

// UnityEngine.UIElements.BaseSlider`1<System.Single>
struct BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA  : public BaseField_1_t1BD309672FAB87887168305A09C320E26F166DA7
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseSlider`1::<dragContainer>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CdragContainerU3Ek__BackingField_91;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseSlider`1::<dragElement>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CdragElementU3Ek__BackingField_92;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseSlider`1::<dragBorderElement>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CdragBorderElementU3Ek__BackingField_93;
	// UnityEngine.UIElements.TextField UnityEngine.UIElements.BaseSlider`1::<inputTextField>k__BackingField
	TextField_tDB34369F9468D7F02670087D9444EC23115827D9* ___U3CinputTextFieldU3Ek__BackingField_94;
	// TValueType UnityEngine.UIElements.BaseSlider`1::m_LowValue
	float ___m_LowValue_95;
	// TValueType UnityEngine.UIElements.BaseSlider`1::m_HighValue
	float ___m_HighValue_96;
	// System.Single UnityEngine.UIElements.BaseSlider`1::m_PageSize
	float ___m_PageSize_97;
	// System.Boolean UnityEngine.UIElements.BaseSlider`1::m_ShowInputField
	bool ___m_ShowInputField_98;
	// System.Boolean UnityEngine.UIElements.BaseSlider`1::<clamped>k__BackingField
	bool ___U3CclampedU3Ek__BackingField_99;
	// UnityEngine.UIElements.ClampedDragger`1<TValueType> UnityEngine.UIElements.BaseSlider`1::<clampedDragger>k__BackingField
	ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3* ___U3CclampedDraggerU3Ek__BackingField_100;
	// UnityEngine.Rect UnityEngine.UIElements.BaseSlider`1::m_DragElementStartPos
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_DragElementStartPos_101;
	// UnityEngine.UIElements.SliderDirection UnityEngine.UIElements.BaseSlider`1::m_Direction
	int32_t ___m_Direction_102;
	// System.Boolean UnityEngine.UIElements.BaseSlider`1::m_Inverted
	bool ___m_Inverted_103;
};

// UnityEngine.UIElements.BaseBoolField
struct BaseBoolField_t01F8AFD72D18F0EB65F949062615550A9ED30B0D  : public BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26
{
	// UnityEngine.UIElements.Label UnityEngine.UIElements.BaseBoolField::m_Label
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___m_Label_91;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseBoolField::m_CheckMark
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CheckMark_92;
	// UnityEngine.UIElements.Clickable UnityEngine.UIElements.BaseBoolField::m_Clickable
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___m_Clickable_93;
	// System.String UnityEngine.UIElements.BaseBoolField::m_OriginalText
	String_t* ___m_OriginalText_94;
};

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
	// UnityEngine.UIElements.Clickable UnityEngine.UIElements.Button::m_Clickable
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___m_Clickable_80;
};

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Movement::mainSpeed
	float ___mainSpeed_4;
	// System.Single Movement::shiftAdd
	float ___shiftAdd_5;
	// System.Single Movement::maxShift
	float ___maxShift_6;
	// System.Single Movement::camSens
	float ___camSens_7;
	// UnityEngine.Vector3 Movement::lastMouse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMouse_8;
	// System.Single Movement::totalRun
	float ___totalRun_9;
	// System.Boolean Movement::isLocked
	bool ___isLocked_10;
};

// UI
struct UI_t16DF663EF61FBCB2402111DB12E3091C775B4539  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UI::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
	// UnityEngine.UIElements.VisualElement UI::slice_Container
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___slice_Container_5;
	// UnityEngine.UIElements.VisualElement UI::analysis_Container
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___analysis_Container_6;
	// System.Boolean UI::slice_isVisible
	bool ___slice_isVisible_7;
	// UnityEngine.UIElements.Label UI::timestep_Label
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___timestep_Label_8;
	// UnityEngine.UIElements.Label UI::fps_Label
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___fps_Label_9;
	// UnityEngine.UIElements.Toggle UI::toggle_1
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_1_10;
	// UnityEngine.UIElements.Toggle UI::toggle_2
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_2_11;
	// UnityEngine.UIElements.Toggle UI::toggle_3
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_3_12;
	// UnityEngine.UIElements.Toggle UI::toggle_4
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_4_13;
	// UnityEngine.UIElements.Toggle UI::toggle_5
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_5_14;
	// UnityEngine.UIElements.Toggle UI::toggle_6
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_6_15;
	// UnityEngine.UIElements.Toggle UI::toggle_7
	Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___toggle_7_16;
	// UnityEngine.UIElements.Slider UI::slider_position
	Slider_t5891706383A14955E3FAD68A79829F3234681652* ___slider_position_17;
	// UnityEngine.UIElements.Slider UI::slider_width
	Slider_t5891706383A14955E3FAD68A79829F3234681652* ___slider_width_18;
	// System.Int32 UI::selectedRadioButton
	int32_t ___selectedRadioButton_19;
	// UnityEngine.UIElements.Button UI::oneBond_Button
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___oneBond_Button_20;
	// UnityEngine.UIElements.Button UI::twoBond_Button
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___twoBond_Button_21;
	// UnityEngine.UIElements.Button UI::threeBond_Button
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ___threeBond_Button_22;
	// System.String UI::data
	String_t* ___data_23;
	// System.String UI::format
	String_t* ___format_24;
	// System.IO.StreamReader UI::reader
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___reader_25;
	// System.IO.StreamReader UI::formatReader
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___formatReader_26;
	// System.Collections.ArrayList UI::geoData
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___geoData_27;
	// System.Collections.ArrayList UI::gameObjects
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___gameObjects_28;
	// System.Collections.ArrayList UI::molecules
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___molecules_29;
	// System.Collections.ArrayList UI::bonds
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___bonds_30;
	// System.Int32 UI::NUMBER_OF_ATOMS
	int32_t ___NUMBER_OF_ATOMS_31;
	// System.Int32 UI::BOX_BOUND
	int32_t ___BOX_BOUND_32;
	// System.Int32 UI::timeStep
	int32_t ___timeStep_33;
	// System.Int32 UI::depth
	int32_t ___depth_34;
	// System.Int32 UI::one
	int32_t ___one_35;
	// System.Int32 UI::two
	int32_t ___two_36;
	// System.Int32 UI::three
	int32_t ___three_37;
	// System.Int32 UI::oneStep
	int32_t ___oneStep_38;
	// System.Int32 UI::twoStep
	int32_t ___twoStep_39;
	// System.Int32 UI::threeStep
	int32_t ___threeStep_40;
	// System.Collections.ArrayList UI::ones
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___ones_41;
	// System.Collections.ArrayList UI::twos
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___twos_42;
	// System.Collections.ArrayList UI::threes
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___threes_43;
	// System.Int32 UI::fastMode
	int32_t ___fastMode_44;
	// System.Single UI::lerpFactor
	float ___lerpFactor_45;
	// System.Single UI::deltaTime
	float ___deltaTime_46;
	// System.Boolean UI::reachedEnd
	bool ___reachedEnd_47;
	// System.Boolean UI::lerpMode
	bool ___lerpMode_48;
	// System.Boolean UI::isBond
	bool ___isBond_49;
	// System.Boolean UI::isHoldingMouseButton
	bool ___isHoldingMouseButton_50;
	// System.Boolean UI::isVisible
	bool ___isVisible_51;
	// UnityEngine.GameObject UI::slicingCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slicingCube_52;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList> UI::bindingPartners
	Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* ___bindingPartners_53;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond> UI::bondPartners
	Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085* ___bondPartners_54;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> UI::bondFigures
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ___bondFigures_55;
	// System.Collections.ArrayList UI::tagged_GameObjects
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___tagged_GameObjects_56;
};

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.UIElements.UIDocument::m_UIDocumentCreationIndex
	int32_t ___m_UIDocumentCreationIndex_8;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PanelSettings_9;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PreviousPanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PreviousPanelSettings_10;
	// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::m_ParentUI
	UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* ___m_ParentUI_11;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.UIDocument::m_ChildrenContent
	UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3* ___m_ChildrenContent_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocument::m_ChildrenContentCopy
	List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344* ___m_ChildrenContentCopy_13;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::sourceAsset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset_14;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::m_RootVisualElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_RootVisualElement_15;
	// System.Int32 UnityEngine.UIElements.UIDocument::m_FirstChildInsertIndex
	int32_t ___m_FirstChildInsertIndex_16;
	// System.Single UnityEngine.UIElements.UIDocument::m_SortingOrder
	float ___m_SortingOrder_17;
};

// UnityEngine.UIElements.RadioButton
struct RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8  : public BaseBoolField_t01F8AFD72D18F0EB65F949062615550A9ED30B0D
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.RadioButton::m_CheckmarkBackground
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CheckmarkBackground_101;
};

// UnityEngine.UIElements.Slider
struct Slider_t5891706383A14955E3FAD68A79829F3234681652  : public BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA
{
};

// UnityEngine.UIElements.Toggle
struct Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C  : public BaseBoolField_t01F8AFD72D18F0EB65F949062615550A9ED30B0D
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>

// System.Collections.ArrayList

// System.Collections.ArrayList

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UI/<>c__DisplayClass20_0

// UI/<>c__DisplayClass20_0

// UI/Bond

// UI/Bond

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// UnityEngine.UIElements.StyleColor

// UnityEngine.UIElements.StyleColor

// UI/Molecule

// UI/Molecule

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// UnityEngine.UIElements.VisualElement

// UnityEngine.UIElements.ChangeEvent`1<System.Boolean>

// UnityEngine.UIElements.ChangeEvent`1<System.Boolean>

// UnityEngine.UIElements.ChangeEvent`1<System.Single>

// UnityEngine.UIElements.ChangeEvent`1<System.Single>

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>

// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>

// System.Action

// System.Action

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.UIElements.BaseField`1<System.Boolean>
struct BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26_StaticFields
{
	// System.String UnityEngine.UIElements.BaseField`1::ussClassName
	String_t* ___ussClassName_67;
	// System.String UnityEngine.UIElements.BaseField`1::labelUssClassName
	String_t* ___labelUssClassName_68;
	// System.String UnityEngine.UIElements.BaseField`1::inputUssClassName
	String_t* ___inputUssClassName_69;
	// System.String UnityEngine.UIElements.BaseField`1::noLabelVariantUssClassName
	String_t* ___noLabelVariantUssClassName_70;
	// System.String UnityEngine.UIElements.BaseField`1::labelDraggerVariantUssClassName
	String_t* ___labelDraggerVariantUssClassName_71;
	// System.String UnityEngine.UIElements.BaseField`1::mixedValueLabelUssClassName
	String_t* ___mixedValueLabelUssClassName_72;
	// System.String UnityEngine.UIElements.BaseField`1::alignedFieldUssClassName
	String_t* ___alignedFieldUssClassName_73;
	// System.String UnityEngine.UIElements.BaseField`1::inspectorFieldUssClassName
	String_t* ___inspectorFieldUssClassName_74;
	// System.String UnityEngine.UIElements.BaseField`1::mixedValueString
	String_t* ___mixedValueString_76;
	// UnityEngine.PropertyName UnityEngine.UIElements.BaseField`1::serializedPropertyCopyName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___serializedPropertyCopyName_77;
	// UnityEngine.UIElements.CustomStyleProperty`1<System.Single> UnityEngine.UIElements.BaseField`1::s_LabelWidthRatioProperty
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___s_LabelWidthRatioProperty_78;
	// UnityEngine.UIElements.CustomStyleProperty`1<System.Single> UnityEngine.UIElements.BaseField`1::s_LabelExtraPaddingProperty
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___s_LabelExtraPaddingProperty_79;
	// UnityEngine.UIElements.CustomStyleProperty`1<System.Single> UnityEngine.UIElements.BaseField`1::s_LabelBaseMinWidthProperty
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___s_LabelBaseMinWidthProperty_80;
};

// UnityEngine.UIElements.BaseField`1<System.Boolean>

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	// System.String UnityEngine.UIElements.TextElement::ussClassName
	String_t* ___ussClassName_67;
	// System.Int32 UnityEngine.UIElements.TextElement::maxTextVertices
	int32_t ___maxTextVertices_69;
	// System.String UnityEngine.UIElements.TextElement::k_EllipsisText
	String_t* ___k_EllipsisText_74;
};

// UnityEngine.UIElements.TextElement

// UnityEngine.UIElements.BaseBoolField

// UnityEngine.UIElements.BaseBoolField

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2_StaticFields
{
	// System.String UnityEngine.UIElements.Button::ussClassName
	String_t* ___ussClassName_79;
	// System.String UnityEngine.UIElements.Button::NonEmptyString
	String_t* ___NonEmptyString_81;
};

// UnityEngine.UIElements.Button

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_StaticFields
{
	// System.String UnityEngine.UIElements.Label::ussClassName
	String_t* ___ussClassName_79;
};

// UnityEngine.UIElements.Label

// Movement

// Movement

// UI

// UI

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIDocument::s_CurrentUIDocumentCounter
	int32_t ___s_CurrentUIDocumentCounter_7;
};

// UnityEngine.UIElements.UIDocument

// UnityEngine.UIElements.RadioButton
struct RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_StaticFields
{
	// System.String UnityEngine.UIElements.RadioButton::ussClassName
	String_t* ___ussClassName_95;
	// System.String UnityEngine.UIElements.RadioButton::labelUssClassName
	String_t* ___labelUssClassName_96;
	// System.String UnityEngine.UIElements.RadioButton::inputUssClassName
	String_t* ___inputUssClassName_97;
	// System.String UnityEngine.UIElements.RadioButton::checkmarkBackgroundUssClassName
	String_t* ___checkmarkBackgroundUssClassName_98;
	// System.String UnityEngine.UIElements.RadioButton::checkmarkUssClassName
	String_t* ___checkmarkUssClassName_99;
	// System.String UnityEngine.UIElements.RadioButton::textUssClassName
	String_t* ___textUssClassName_100;
};

// UnityEngine.UIElements.RadioButton

// UnityEngine.UIElements.Slider
struct Slider_t5891706383A14955E3FAD68A79829F3234681652_StaticFields
{
	// System.String UnityEngine.UIElements.Slider::ussClassName
	String_t* ___ussClassName_118;
	// System.String UnityEngine.UIElements.Slider::labelUssClassName
	String_t* ___labelUssClassName_119;
	// System.String UnityEngine.UIElements.Slider::inputUssClassName
	String_t* ___inputUssClassName_120;
};

// UnityEngine.UIElements.Slider

// UnityEngine.UIElements.Toggle
struct Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_StaticFields
{
	// System.String UnityEngine.UIElements.Toggle::ussClassName
	String_t* ___ussClassName_95;
	// System.String UnityEngine.UIElements.Toggle::labelUssClassName
	String_t* ___labelUssClassName_96;
	// System.String UnityEngine.UIElements.Toggle::inputUssClassName
	String_t* ___inputUssClassName_97;
	// System.String UnityEngine.UIElements.Toggle::noTextVariantUssClassName
	String_t* ___noTextVariantUssClassName_98;
	// System.String UnityEngine.UIElements.Toggle::checkmarkUssClassName
	String_t* ___checkmarkUssClassName_99;
	// System.String UnityEngine.UIElements.Toggle::textUssClassName
	String_t* ___textUssClassName_100;
};

// UnityEngine.UIElements.Toggle
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.EventCallback`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_1__ctor_m8E83F917FC9541DE1168E498CDF99D58A6DC329B_gshared (EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.INotifyValueChangedExtensions::RegisterValueChangedCallback<System.Single>(UnityEngine.UIElements.INotifyValueChanged`1<T>,UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_gshared (RuntimeObject* ___0_control, EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A* ___1_callback, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.INotifyValueChangedExtensions::RegisterValueChangedCallback<System.Boolean>(UnityEngine.UIElements.INotifyValueChanged`1<T>,UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_gshared (RuntimeObject* ___0_control, EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* ___1_callback, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared (int32_t ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t83B5C938D73A29E7198A545AE88DC67240DDA6DF* Dictionary_2_get_Keys_m0CE1D5AD248E8D3A8F8C9F391681DE9F8B368430_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79 KeyCollection_GetEnumerator_m873138E5D56FEC4D3C20D4BA041BB8FC463A1A83_gshared (KeyCollection_t83B5C938D73A29E7198A545AE88DC67240DDA6DF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m82D0DFAAED3882EF88646AF8E4740FC8DF523B7D_gshared (Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m8822DA51C6512AC6B5E66D0D6139A981EFAD0DD1_gshared_inline (Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m27201A0D92B39DBDD10227D96E3B66AF07DA924D_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m86AF33D442BC5EB00E0B0C682747BF7B5F830A82_gshared (Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Int32>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4DF30879EBF9478E00B03F99F67C119BA9A2D88E_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.ChangeEvent`1<System.Single>::get_newValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_gshared_inline (ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Movement::GetBaseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Movement_GetBaseInput_m7AAD8FD5D1840DBB61B4FF0890739FBE9CF9EC1D (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UIElements.UIDocument>()
inline UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1 (UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.VisualElement>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Button>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Button::add_clicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81 (Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Label>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Toggle>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Slider>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Slider_t5891706383A14955E3FAD68A79829F3234681652* UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Slider_t5891706383A14955E3FAD68A79829F3234681652* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// System.Void UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Single>>::.ctor(System.Object,System.IntPtr)
inline void EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970 (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m8E83F917FC9541DE1168E498CDF99D58A6DC329B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean UnityEngine.UIElements.INotifyValueChangedExtensions::RegisterValueChangedCallback<System.Single>(UnityEngine.UIElements.INotifyValueChanged`1<T>,UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<T>>)
inline bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9 (RuntimeObject* ___0_control, EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A* ___1_callback, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A*, const RuntimeMethod*))INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_gshared)(___0_control, ___1_callback, method);
}
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.RadioButton>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// System.Void UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9 (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_m8E83F917FC9541DE1168E498CDF99D58A6DC329B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean UnityEngine.UIElements.INotifyValueChangedExtensions::RegisterValueChangedCallback<System.Boolean>(UnityEngine.UIElements.INotifyValueChanged`1<T>,UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.ChangeEvent`1<T>>)
inline bool INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90 (RuntimeObject* ___0_control, EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* ___1_callback, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*, const RuntimeMethod*))INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_gshared)(___0_control, ___1_callback, method);
}
// System.Void UI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m42C23ABF17ECFA7B6C985DEDE205066F6404B877 (U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.BaseBoolField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBoolField_set_text_mEE1205D6F5A9E94D75B77A385580C0867420A52D (BaseBoolField_t01F8AFD72D18F0EB65F949062615550A9ED30B0D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleColor::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 StyleColor_op_Implicit_m3FA77647D59BDC823B5810F5ED299E90C9C044D1 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_v, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m3E6AA407767C85CD62C5FD2750747274D1C4EA76 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D (String_t* ___0_htmlString, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UI/Molecule::.ctor(System.String,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Molecule__ctor_m7BB6D6DE709002EF4FFE7531319BCB7F537B977C (Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* __this, String_t* ___0_name, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_hexColor, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, float, const RuntimeMethod*))Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void UI::initToggel(UnityEngine.UIElements.Toggle,UI/Molecule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___0_toggle, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* ___1_molecule, const RuntimeMethod* method) ;
// System.Void UI::initAtoms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_initAtoms_m451185E0B2144C345CD77695FAE44B37EECEFD40 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UI::escape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_escape_mA9CBCA24D9E05FC456FBFE1FB563069A228349CB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::backward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_backward_m07CE540CBEC557D3609AC1E8530028929AB07C5E (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::toggleVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleVisibility_m27A99E9D28B77F2A9139442AFBDC024236A17875 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::bind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_bind_mB74964E816DD162A79E29337202BB243DFB04CF2 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::analyse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_analyse_mB9FB11BC4407E57FC942687D50FEA9A015D87323 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::toggleLerpMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleLerpMode_mEC299F67510A6730046BC0F0B8548ACED223B36C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::loadNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_loadNew_m7BBCDA358567D2F4253401B69B8F12071B9DFC9E (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_forward_mD0AB673DA5DE5C0CA6D3E47609A70DFB8F33299F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList UI::loadTimeStep(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, bool ___0_backward, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UI::lerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_lerp_mA64290911AC1EC74681E670D3FAC7908B74A9465 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_move_m8AC970BD593BDEB7CAA90970CD310C82B4EF7246 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Implicit(T)
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___0_v, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared)(___0_v, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void UI::removeBonds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_removeBonds_m1F081190FE410579D028A3CC652E17A8F4F74943 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>::.ctor()
inline void Dictionary_2__ctor_m8FF41324C29E3A40BFB1C404B315CA3D2449776F (Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UI/Bond>::.ctor()
inline void Dictionary_2__ctor_m16CA1C6BF7BD7388F0E56FFD79497813FD767698 (Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UI::turnOnVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_turnOnVisibility_mDB69F858EFCDF6682D55C26FA1084FFEF5444CC5 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
inline KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* Dictionary_2_get_Keys_mEE2C527BDE7A18611ADAF3B770FB6965153BF3A1 (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2_get_Keys_m0CE1D5AD248E8D3A8F8C9F391681DE9F8B368430_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>::GetEnumerator()
inline Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276 KeyCollection_GetEnumerator_m3AC44C8BD4E7085EE46D35A4D995A84A50D15DCB (KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276 (*) (KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771*, const RuntimeMethod*))KeyCollection_GetEnumerator_m873138E5D56FEC4D3C20D4BA041BB8FC463A1A83_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>::Dispose()
inline void Enumerator_Dispose_m1C8D1CFB24426934BBD0E7B86411D947FBD85369 (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276*, const RuntimeMethod*))Enumerator_Dispose_m82D0DFAAED3882EF88646AF8E4740FC8DF523B7D_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>::get_Current()
inline String_t* Enumerator_get_Current_m8445906813876C0429F983634F795D33AD8716E3_inline (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276*, const RuntimeMethod*))Enumerator_get_Current_m8822DA51C6512AC6B5E66D0D6139A981EFAD0DD1_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
inline float Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared)(__this, ___0_key, method);
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<UnityEngine.GameObject,System.Collections.ArrayList>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
inline ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_m9B256C57CAD754D9415CAB1C583273C7E6B990FC (RuntimeObject* ___0_dictionary, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_key, const RuntimeMethod* method)
{
	return ((  ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* (*) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m27201A0D92B39DBDD10227D96E3B66AF07DA924D_gshared)(___0_dictionary, ___1_key, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Void UI/Bond::.ctor(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bond__ctor_mE9E3168057F2662F5ADD78D49D356DB50819ABC6 (Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_bond, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_gameObject2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Single>::MoveNext()
inline bool Enumerator_MoveNext_mDE5D0893A485CD99AC67B6A3EB4ACE4E7A32BB31 (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276*, const RuntimeMethod*))Enumerator_MoveNext_m86AF33D442BC5EB00E0B0C682747BF7B5F830A82_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.ArrayList>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6AE1BF2623D89FA7417E6BD80C9CED8ADFC5F3F8 (Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UI::dig(UnityEngine.GameObject,System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___1_bonds_tmp, const RuntimeMethod* method) ;
// System.Void UI::turnOffVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_turnOffVisibility_m1CE0BDCE02BB3FB09E8999F566800C9026AC5800 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5 (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23 (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<UnityEngine.GameObject,System.Int32>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
inline int32_t CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084 (RuntimeObject* ___0_dictionary, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4DF30879EBF9478E00B03F99F67C119BA9A2D88E_gshared)(___0_dictionary, ___1_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
// T UnityEngine.UIElements.ChangeEvent`1<System.Single>::get_newValue()
inline float ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline (ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* __this, const RuntimeMethod* method)
{
	return ((  float (*) (ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E*, const RuntimeMethod*))ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UI::openSlice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_openSlice_m9CB02E2D5446C51B7AC56B7DFD4AE04BB029D3F0 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_undo_mA690A87E9A5757878E829393A3DB23472DC7B611 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::slice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_slice_mA407B30BE3D680CA1956B947AD0846530355104F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::goOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goOne_m48A006CA358E6902D4C2802DB1BCB5AA9B15753C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::goTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goTwo_mB713711FFF8C7CC5FE7482E3B73EDCA7A108C50F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::goThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goThree_mE7D03FE4EB987B4F25309824C4902A6ACA4F7739 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) ;
// System.Void UI::OnRadioGroupChanged(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE_inline (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UI::OnToggleValueChanged(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_OnToggleValueChanged_m0A34C5C5AA11CF56ED5CABAD3B0676BB9E81A6DB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, bool ___1_value, String_t* ___2_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m4B99F519DF0A29B476F90FE4314A770CD53EC418 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.GetMouseButtonDown(1)) isLocked = !isLocked;
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if(Input.GetMouseButtonDown(1)) isLocked = !isLocked;
		bool L_1 = __this->___isLocked_10;
		__this->___isLocked_10 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		// if(!isLocked) {
		bool L_2 = __this->___isLocked_10;
		if (L_2)
		{
			goto IL_0223;
		}
	}
	{
		// lastMouse = Input.mousePosition - lastMouse ;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___lastMouse_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		__this->___lastMouse_8 = L_5;
		// lastMouse = new Vector3(-lastMouse.y * camSens, lastMouse.x * camSens, 0 );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___lastMouse_8);
		float L_7 = L_6->___y_3;
		float L_8 = __this->___camSens_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___lastMouse_8);
		float L_10 = L_9->___x_2;
		float L_11 = __this->___camSens_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(((-L_7)), L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), (0.0f), /*hidden argument*/NULL);
		__this->___lastMouse_8 = L_12;
		// lastMouse = new Vector3(transform.eulerAngles.x + lastMouse.x , transform.eulerAngles.y + lastMouse.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_13, NULL);
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___lastMouse_8);
		float L_17 = L_16->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_18, NULL);
		float L_20 = L_19.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___lastMouse_8);
		float L_22 = L_21->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_15, L_17)), ((float)il2cpp_codegen_add(L_20, L_22)), (0.0f), /*hidden argument*/NULL);
		__this->___lastMouse_8 = L_23;
		// transform.eulerAngles = lastMouse;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___lastMouse_8;
		NullCheck(L_24);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_24, L_25, NULL);
		// lastMouse =  Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___lastMouse_8 = L_26;
		// Vector3 p = GetBaseInput();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Movement_GetBaseInput_m7AAD8FD5D1840DBB61B4FF0890739FBE9CF9EC1D(__this, NULL);
		V_0 = L_27;
		// if (p.sqrMagnitude > 0){ // only move while a direction key is pressed
		float L_28;
		L_28 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_0223;
		}
	}
	{
		// if (Input.GetKey (KeyCode.LeftShift)){
		bool L_29;
		L_29 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (!L_29)
		{
			goto IL_0181;
		}
	}
	{
		// totalRun += Time.deltaTime;
		float L_30 = __this->___totalRun_9;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___totalRun_9 = ((float)il2cpp_codegen_add(L_30, L_31));
		// p  = p * totalRun * shiftAdd;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = __this->___totalRun_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		float L_35 = __this->___shiftAdd_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		V_0 = L_36;
		// p.x = Mathf.Clamp(p.x, -maxShift, maxShift);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_0;
		float L_38 = L_37.___x_2;
		float L_39 = __this->___maxShift_6;
		float L_40 = __this->___maxShift_6;
		float L_41;
		L_41 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_38, ((-L_39)), L_40, NULL);
		(&V_0)->___x_2 = L_41;
		// p.y = Mathf.Clamp(p.y, -maxShift, maxShift);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		float L_43 = L_42.___y_3;
		float L_44 = __this->___maxShift_6;
		float L_45 = __this->___maxShift_6;
		float L_46;
		L_46 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_43, ((-L_44)), L_45, NULL);
		(&V_0)->___y_3 = L_46;
		// p.z = Mathf.Clamp(p.z, -maxShift, maxShift);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_0;
		float L_48 = L_47.___z_4;
		float L_49 = __this->___maxShift_6;
		float L_50 = __this->___maxShift_6;
		float L_51;
		L_51 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_48, ((-L_49)), L_50, NULL);
		(&V_0)->___z_4 = L_51;
		goto IL_01af;
	}

IL_0181:
	{
		// totalRun = Mathf.Clamp(totalRun * 0.5f, 1f, 1000f);
		float L_52 = __this->___totalRun_9;
		float L_53;
		L_53 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_52, (0.5f))), (1.0f), (1000.0f), NULL);
		__this->___totalRun_9 = L_53;
		// p = p * mainSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_0;
		float L_55 = __this->___mainSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_54, L_55, NULL);
		V_0 = L_56;
	}

IL_01af:
	{
		// p = p * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_0;
		float L_58;
		L_58 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_57, L_58, NULL);
		V_0 = L_59;
		// Vector3 newPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		V_1 = L_61;
		// if (Input.GetKey(KeyCode.Space)){ //If player wants to move on X and Z axis only
		bool L_62;
		L_62 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_62)
		{
			goto IL_0217;
		}
	}
	{
		// transform.Translate(p);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_0;
		NullCheck(L_63);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_63, L_64, NULL);
		// newPosition.x = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
		float L_67 = L_66.___x_2;
		(&V_1)->___x_2 = L_67;
		// newPosition.z = transform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		float L_70 = L_69.___z_4;
		(&V_1)->___z_4 = L_70;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_1;
		NullCheck(L_71);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_71, L_72, NULL);
		return;
	}

IL_0217:
	{
		// transform.Translate(p);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_0;
		NullCheck(L_73);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_73, L_74, NULL);
	}

IL_0223:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Movement::GetBaseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Movement_GetBaseInput_m7AAD8FD5D1840DBB61B4FF0890739FBE9CF9EC1D (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 p_Velocity = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Input.GetKey (KeyCode.W)){
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// p_Velocity += new Vector3(0, 0 , 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
	}

IL_002c:
	{
		// if (Input.GetKey (KeyCode.S)){
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// p_Velocity += new Vector3(0, 0, -1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		V_0 = L_7;
	}

IL_0050:
	{
		// if (Input.GetKey (KeyCode.A)){
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// p_Velocity += new Vector3(-1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_0074:
	{
		// if (Input.GetKey (KeyCode.D)){
		bool L_12;
		L_12 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		// p_Velocity += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		V_0 = L_15;
	}

IL_0098:
	{
		// return p_Velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		return L_16;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// float mainSpeed = 100.0f; //regular speed
		__this->___mainSpeed_4 = (100.0f);
		// float shiftAdd = 250.0f; //multiplied by how long shift is held.  Basically running
		__this->___shiftAdd_5 = (250.0f);
		// float maxShift = 1000.0f; //Maximum speed when holdin gshift
		__this->___maxShift_6 = (1000.0f);
		// float camSens = 0.25f; //How sensitive it with mouse
		__this->___camSens_7 = (0.25f);
		// private Vector3 lastMouse = new Vector3(255, 255, 255); //kind of in the middle of the screen, rather than at the top (play)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___lastMouse_8 = L_0;
		// private float totalRun= 1.0f;
		__this->___totalRun_9 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_OnEnable_m44B9420109C4449103DE83E15A90586994BF473A (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Slider_Position_Change_m2B2193EF554AD4D4DBE3D75E87E2D7CCC5F750E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Slider_Width_Change_mDFAC317E338421076C4FF50BE533A817AA0175FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_0_m69FD57618B269D70BB375590B0CD069ABBD71C7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_10_m4A8E44DE472DD0979F36DD63DC82DDA18F18A4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_11_m91FF4F5B1F6E49397598DE098F78FBC4946AE26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_1_mDC344CE62E1B106E5361958B9BD1F9B32D8CA287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_2_m00326B157A070286731840720C78BDCE9549CEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_3_m26CD92D98EAD354083CC0C6C0F9D6A77885DD6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_4_m0AAAFD99E67C0CD392A3E8A68E22BC581200BE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_5_m0688AC0F4F31B8A6EE00CCD33ED34480CD0784D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_6_m94634E37AD49DDA3620E0F18735491F8AA08F3B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_7_m1F3787C049AA5F39EDA2AA6A86BE1AE0FDD4FF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_8_m2172F330256D23B9FF10D5D3B3C15F8B4BC55D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_U3COnEnableU3Eb__19_9_m2018F2A8F6968026E5F3850A67F9461A3AAE8547_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013F4D7A9758E3D4BD0E05CA57E60519372A3080);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05FF7F9C444685975140278FFB6CECEE4EBE5DB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE6130D6DB3E2D0FC908FE2C66895928BFB2EA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26064B1C6177399F994D4D88E7C611C3E720A01F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral297053DD260F1A612E64AEB43C06286160BA63A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3546251C082281F77B37FD6207F52C8A275D6311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618B782769A6A5B07A111A51AB6674F0D95CD05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BEC1FDE5348C5167C25C669866BC67A5A99E742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569ACA962BBCF7ABB435F614DF2DA5140DAED0FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F6D65F00470BF041A364C468506539B064DA9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E4B217F6FA639CD77AEB9F7D3FA9B72F66B0C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF6DB26BAB6D866E1E92568027E7DAB2075EC07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93467AC1FDB7397C36533A1097B3D91021A34EAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95739D9F3D7CFEBCEEC64C5111BA1EE7DC01DB8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9658CC65667A989321F8238BF09A33B870196CEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D25157D865AB3D683CF02D3433561BFB347652);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91691E67A856421D917CDF2F0F86CF1CC7B832C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE07E045AF72EB2D217B45DB4C41D543A00EC8B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1048498E4A087F7F8985C9121AC2AA06E55772B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613FB6E7DB88755F7CA113B07435CFF253C1FDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD813F30CE17647F9015D87C2CF4B4D12BEFBB1E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE52EA8CA2EF69A4549412284F805C71449A4D88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE5A9496BF3A09F757E830172FB334F6845BCE01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22061D4FCC718BD100790CD5887C047FD1CDA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4263AB788777DAA700FC388252D575035B6DAD3);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	{
		// VisualElement root = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_0;
		L_0 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_0, NULL);
		V_0 = L_1;
		// slice_Container = root.Q<VisualElement>("Slice_Container");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB(L_2, _stringLiteral05FF7F9C444685975140278FFB6CECEE4EBE5DB6, (String_t*)NULL, UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var);
		__this->___slice_Container_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slice_Container_5), (void*)L_3);
		// analysis_Container = root.Q<VisualElement>("Analysis_Container");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5;
		L_5 = UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB(L_4, _stringLiteral3618B782769A6A5B07A111A51AB6674F0D95CD05, (String_t*)NULL, UQueryExtensions_Q_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m9FBF22C0E270F6EC6772878355A935E4AC2119EB_RuntimeMethod_var);
		__this->___analysis_Container_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___analysis_Container_6), (void*)L_5);
		// Button openslice_Button = root.Q<Button>("Slice_Open");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_7;
		L_7 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_6, _stringLiteralE52EA8CA2EF69A4549412284F805C71449A4D88E, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// openslice_Button.clicked += () => openSlice();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_0_m69FD57618B269D70BB375590B0CD069ABBD71C7B_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_7, L_8, NULL);
		// Button undo_Button = root.Q<Button>("Undo");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_10;
		L_10 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_9, _stringLiteralC1048498E4A087F7F8985C9121AC2AA06E55772B, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// undo_Button.clicked += () => undo();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_1_mDC344CE62E1B106E5361958B9BD1F9B32D8CA287_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_10, L_11, NULL);
		// Button slice_Button = slice_Container.Q<Button>("Slice");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = __this->___slice_Container_5;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_13;
		L_13 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_12, _stringLiteral3546251C082281F77B37FD6207F52C8A275D6311, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// slice_Button.clicked += () => slice();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_2_m00326B157A070286731840720C78BDCE9549CEEC_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_13, L_14, NULL);
		// Button bind_Button = root.Q<Button>("Bind");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_16;
		L_16 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_15, _stringLiteralEE5A9496BF3A09F757E830172FB334F6845BCE01, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// bind_Button.clicked += () => bind();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_3_m26CD92D98EAD354083CC0C6C0F9D6A77885DD6ED_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_16, L_17, NULL);
		// Button escape_Button = root.Q<Button>("Escape");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_19;
		L_19 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_18, _stringLiteral297053DD260F1A612E64AEB43C06286160BA63A8, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// escape_Button.clicked += () => escape();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_4_m0AAAFD99E67C0CD392A3E8A68E22BC581200BE6D_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_19, L_20, NULL);
		// Button analysis_Button = root.Q<Button>("Analysis");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_22;
		L_22 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_21, _stringLiteral8BF6DB26BAB6D866E1E92568027E7DAB2075EC07, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		// analysis_Button.clicked += () => analyse();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_5_m0688AC0F4F31B8A6EE00CCD33ED34480CD0784D8_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_22, L_23, NULL);
		// oneBond_Button = root.Q<Button>("OneBond");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_25;
		L_25 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_24, _stringLiteralF4263AB788777DAA700FC388252D575035B6DAD3, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___oneBond_Button_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oneBond_Button_20), (void*)L_25);
		// oneBond_Button.clicked += () => goOne();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_26 = __this->___oneBond_Button_20;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_6_m94634E37AD49DDA3620E0F18735491F8AA08F3B3_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_26, L_27, NULL);
		// twoBond_Button = root.Q<Button>("TwoBond");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_29;
		L_29 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_28, _stringLiteralA9D25157D865AB3D683CF02D3433561BFB347652, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___twoBond_Button_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___twoBond_Button_21), (void*)L_29);
		// twoBond_Button.clicked += () => goTwo();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_30 = __this->___twoBond_Button_21;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_31, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_7_m1F3787C049AA5F39EDA2AA6A86BE1AE0FDD4FF11_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_30, L_31, NULL);
		// threeBond_Button = root.Q<Button>("ThreeBond");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = V_0;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_33;
		L_33 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_32, _stringLiteral569ACA962BBCF7ABB435F614DF2DA5140DAED0FB, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->___threeBond_Button_22 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threeBond_Button_22), (void*)L_33);
		// threeBond_Button.clicked += () => goThree();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_34 = __this->___threeBond_Button_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_35 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_35, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_8_m2172F330256D23B9FF10D5D3B3C15F8B4BC55D4E_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		Button_add_clicked_m8F3895E73CAC223492F25142874FFF38A1830C81(L_34, L_35, NULL);
		// fps_Label = root.Q<Label>("Percentage");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_37;
		L_37 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_36, _stringLiteralD813F30CE17647F9015D87C2CF4B4D12BEFBB1E5, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___fps_Label_9 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fps_Label_9), (void*)L_37);
		// timestep_Label = root.Q<Label>("Timestep_Label");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = V_0;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_39;
		L_39 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_38, _stringLiteral56F6D65F00470BF041A364C468506539B064DA9E, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->___timestep_Label_8 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timestep_Label_8), (void*)L_39);
		// toggle_1 = root.Q<Toggle>("Toggle_1");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_41;
		L_41 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_40, _stringLiteral7E4B217F6FA639CD77AEB9F7D3FA9B72F66B0C51, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_1_10 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_1_10), (void*)L_41);
		// toggle_2 = root.Q<Toggle>("Toggle_2");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_43;
		L_43 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_42, _stringLiteral9658CC65667A989321F8238BF09A33B870196CEC, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_2_11 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_2_11), (void*)L_43);
		// toggle_3 = root.Q<Toggle>("Toggle_3");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_45;
		L_45 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_44, _stringLiteral3BEC1FDE5348C5167C25C669866BC67A5A99E742, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_3_12 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_3_12), (void*)L_45);
		// toggle_4 = root.Q<Toggle>("Toggle_4");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_47;
		L_47 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_46, _stringLiteralC613FB6E7DB88755F7CA113B07435CFF253C1FDE, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_4_13 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_4_13), (void*)L_47);
		// toggle_5 = root.Q<Toggle>("Toggle_5");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_49;
		L_49 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_48, _stringLiteral1FE6130D6DB3E2D0FC908FE2C66895928BFB2EA8, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_5_14 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_5_14), (void*)L_49);
		// toggle_6 = root.Q<Toggle>("Toggle_6");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_50 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_51;
		L_51 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_50, _stringLiteralF22061D4FCC718BD100790CD5887C047FD1CDA2E, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_6_15 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_6_15), (void*)L_51);
		// toggle_7 = root.Q<Toggle>("Toggle_7");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_53;
		L_53 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA(L_52, _stringLiteral93467AC1FDB7397C36533A1097B3D91021A34EAA, (String_t*)NULL, UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var);
		__this->___toggle_7_16 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_7_16), (void*)L_53);
		// slider_position = slice_Container.Q<Slider>("Slider_Position");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = __this->___slice_Container_5;
		Slider_t5891706383A14955E3FAD68A79829F3234681652* L_55;
		L_55 = UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D(L_54, _stringLiteral013F4D7A9758E3D4BD0E05CA57E60519372A3080, (String_t*)NULL, UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D_RuntimeMethod_var);
		__this->___slider_position_17 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_position_17), (void*)L_55);
		// slider_position.RegisterValueChangedCallback(Slider_Position_Change);
		Slider_t5891706383A14955E3FAD68A79829F3234681652* L_56 = __this->___slider_position_17;
		EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A* L_57 = (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A*)il2cpp_codegen_object_new(EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970(L_57, __this, (intptr_t)((void*)UI_Slider_Position_Change_m2B2193EF554AD4D4DBE3D75E87E2D7CCC5F750E6_RuntimeMethod_var), NULL);
		bool L_58;
		L_58 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9(L_56, L_57, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_RuntimeMethod_var);
		// slider_width = slice_Container.Q<Slider>("Slider_Width");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = __this->___slice_Container_5;
		Slider_t5891706383A14955E3FAD68A79829F3234681652* L_60;
		L_60 = UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D(L_59, _stringLiteral26064B1C6177399F994D4D88E7C611C3E720A01F, (String_t*)NULL, UQueryExtensions_Q_TisSlider_t5891706383A14955E3FAD68A79829F3234681652_m0360C95C6AF7D74CFB0345CCB530DFC7CBD1FE4D_RuntimeMethod_var);
		__this->___slider_width_18 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_width_18), (void*)L_60);
		// slider_width.RegisterValueChangedCallback(Slider_Width_Change);
		Slider_t5891706383A14955E3FAD68A79829F3234681652* L_61 = __this->___slider_width_18;
		EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A* L_62 = (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A*)il2cpp_codegen_object_new(EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970(L_62, __this, (intptr_t)((void*)UI_Slider_Width_Change_mDFAC317E338421076C4FF50BE533A817AA0175FD_RuntimeMethod_var), NULL);
		bool L_63;
		L_63 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9(L_61, L_62, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9_RuntimeMethod_var);
		// RadioButton radiobutton_X = slice_Container.Q<RadioButton>("RadioButton_X");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_64 = __this->___slice_Container_5;
		RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* L_65;
		L_65 = UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E(L_64, _stringLiteral95739D9F3D7CFEBCEEC64C5111BA1EE7DC01DB8B, (String_t*)NULL, UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E_RuntimeMethod_var);
		// radiobutton_X.value = true;
		RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* L_66 = L_65;
		NullCheck(L_66);
		VirtualActionInvoker1< bool >::Invoke(102 /* System.Void UnityEngine.UIElements.BaseField`1<System.Boolean>::set_value(TValueType) */, L_66, (bool)1);
		// radiobutton_X.RegisterValueChangedCallback(evt => OnRadioGroupChanged(0));
		EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* L_67 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*)il2cpp_codegen_object_new(EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9(L_67, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_9_m2018F2A8F6968026E5F3850A67F9461A3AAE8547_RuntimeMethod_var), NULL);
		bool L_68;
		L_68 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90(L_66, L_67, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		// RadioButton radiobutton_Y = slice_Container.Q<RadioButton>("RadioButton_Y");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_69 = __this->___slice_Container_5;
		RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* L_70;
		L_70 = UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E(L_69, _stringLiteralB91691E67A856421D917CDF2F0F86CF1CC7B832C, (String_t*)NULL, UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E_RuntimeMethod_var);
		// radiobutton_Y.RegisterValueChangedCallback(evt => OnRadioGroupChanged(1));
		EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* L_71 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*)il2cpp_codegen_object_new(EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9(L_71, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_10_m4A8E44DE472DD0979F36DD63DC82DDA18F18A4F7_RuntimeMethod_var), NULL);
		bool L_72;
		L_72 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90(L_70, L_71, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		// RadioButton radiobutton_Z = slice_Container.Q<RadioButton>("RadioButton_Z");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_73 = __this->___slice_Container_5;
		RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8* L_74;
		L_74 = UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E(L_73, _stringLiteralBE07E045AF72EB2D217B45DB4C41D543A00EC8B3, (String_t*)NULL, UQueryExtensions_Q_TisRadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_m630B7C4CA45130915A00E926856403862A386E5E_RuntimeMethod_var);
		// radiobutton_Z.RegisterValueChangedCallback(evt => OnRadioGroupChanged(2));
		EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* L_75 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*)il2cpp_codegen_object_new(EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9(L_75, __this, (intptr_t)((void*)UI_U3COnEnableU3Eb__19_11_m91FF4F5B1F6E49397598DE098F78FBC4946AE26C_RuntimeMethod_var), NULL);
		bool L_76;
		L_76 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90(L_74, L_75, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UI::initToggel(UnityEngine.UIElements.Toggle,UI/Molecule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* ___0_toggle, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* ___1_molecule, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CinitToggelU3Eb__0_m1B8BB00D635A263A669A6528680B86D6CF4A215F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_0 = (U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_m42C23ABF17ECFA7B6C985DEDE205066F6404B877(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_2 = V_0;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_3 = ___0_toggle;
		NullCheck(L_2);
		L_2->___toggle_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___toggle_1), (void*)L_3);
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_4 = V_0;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_5 = ___1_molecule;
		NullCheck(L_4);
		L_4->___molecule_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___molecule_2), (void*)L_5);
		// toggle.text = molecule.name;
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_6 = V_0;
		NullCheck(L_6);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_7 = L_6->___toggle_1;
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_8 = V_0;
		NullCheck(L_8);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_9 = L_8->___molecule_2;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_0;
		NullCheck(L_7);
		BaseBoolField_set_text_mEE1205D6F5A9E94D75B77A385580C0867420A52D(L_7, L_10, NULL);
		// toggle.style.color = molecule.hexColor;
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_11 = V_0;
		NullCheck(L_11);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_12 = L_11->___toggle_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_12, NULL);
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_14 = V_0;
		NullCheck(L_14);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_15 = L_14->___molecule_2;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = L_15->___hexColor_2;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_17;
		L_17 = StyleColor_op_Implicit_m3FA77647D59BDC823B5810F5ED299E90C9C044D1(L_16, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(14 /* System.Void UnityEngine.UIElements.IStyle::set_color(UnityEngine.UIElements.StyleColor) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_13, L_17);
		// toggle.RegisterValueChangedCallback(evt => OnToggleValueChanged(evt, toggle.value, molecule.name));
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_18 = V_0;
		NullCheck(L_18);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_19 = L_18->___toggle_1;
		U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* L_20 = V_0;
		EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103* L_21 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103*)il2cpp_codegen_object_new(EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CinitToggelU3Eb__0_m1B8BB00D635A263A669A6528680B86D6CF4A215F_RuntimeMethod_var), NULL);
		bool L_22;
		L_22 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90(L_19, L_21, INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UI::OnRadioGroupChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// selectedRadioButton = index;
		int32_t L_0 = ___0_index;
		__this->___selectedRadioButton_19 = L_0;
		// }
		return;
	}
}
// System.Void UI::OnToggleValueChanged(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_OnToggleValueChanged_m0A34C5C5AA11CF56ED5CABAD3B0676BB9E81A6DB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, bool ___1_value, String_t* ___2_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// GameObject gameObject = (GameObject)gameObjects[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___gameObjects_28;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// if(gameObject.name.Equals(name)) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5 = ___2_name;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// gameObject.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		bool L_8 = ___1_value;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
	}

IL_002b:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_10 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_11 = __this->___gameObjects_28;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Start_m36F3E11677AB5677BD3A76B5865E90CD3609183A (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C5439975A14B5CA4814E6DEF75F57091E7E5AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* V_5 = NULL;
	int32_t V_6 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	{
		// if(!Directory.Exists(Application.dataPath + "/geodata")) Directory.CreateDirectory(Application.dataPath + "/geodata");
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0, NULL);
		bool L_2;
		L_2 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_1, NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// if(!Directory.Exists(Application.dataPath + "/geodata")) Directory.CreateDirectory(Application.dataPath + "/geodata");
		String_t* L_3;
		L_3 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_002b:
	{
		// string[] dataDir = Directory.GetFiles(Application.dataPath + "/geodata");
		String_t* L_6;
		L_6 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Directory_GetFiles_m3E6AA407767C85CD62C5FD2750747274D1C4EA76(L_7, NULL);
		V_0 = L_8;
		// if(dataDir.Length > 0) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		NullCheck(L_9);
		if (!(((RuntimeArray*)L_9)->max_length))
		{
			goto IL_004f;
		}
	}
	{
		// data = dataDir[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___data_23 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_23), (void*)L_12);
		goto IL_0068;
	}

IL_004f:
	{
		// Debug.Log("No Data available in " + Application.dataPath + "/geodata");
		String_t* L_13;
		L_13 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA6C5439975A14B5CA4814E6DEF75F57091E7E5AA, L_13, _stringLiteral5024FEF94AA2793F5ED3FD136E24FC3727BC3AB0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
	}

IL_0068:
	{
		// if(!Directory.Exists(Application.dataPath + "/format")) Directory.CreateDirectory(Application.dataPath + "/format");
		String_t* L_15;
		L_15 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C, NULL);
		bool L_17;
		L_17 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_16, NULL);
		if (L_17)
		{
			goto IL_0093;
		}
	}
	{
		// if(!Directory.Exists(Application.dataPath + "/format")) Directory.CreateDirectory(Application.dataPath + "/format");
		String_t* L_18;
		L_18 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, _stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_20;
		L_20 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_19, NULL);
	}

IL_0093:
	{
		// string[] formatDir = Directory.GetFiles(Application.dataPath + "/format");
		String_t* L_21;
		L_21 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, _stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = Directory_GetFiles_m3E6AA407767C85CD62C5FD2750747274D1C4EA76(L_22, NULL);
		V_1 = L_23;
		// if(formatDir.Length > 0) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_1;
		NullCheck(L_24);
		if (!(((RuntimeArray*)L_24)->max_length))
		{
			goto IL_00b7;
		}
	}
	{
		// format = formatDir[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = 0;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		__this->___format_24 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___format_24), (void*)L_27);
		goto IL_00d0;
	}

IL_00b7:
	{
		// Debug.Log("No Data available in " + Application.dataPath + "/format");
		String_t* L_28;
		L_28 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA6C5439975A14B5CA4814E6DEF75F57091E7E5AA, L_28, _stringLiteralA9FD62A060CD89516BC6913DD8AB5B6406368B3C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
	}

IL_00d0:
	{
		// formatReader = new StreamReader(format);
		String_t* L_30 = __this->___format_24;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_31 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_31, L_30, NULL);
		__this->___formatReader_26 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formatReader_26), (void*)L_31);
		goto IL_0183;
	}

IL_00e6:
	{
		// string[] moleculeAttributes = formatReader.ReadLine().Split("|");
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_32 = __this->___formatReader_26;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_32);
		NullCheck(L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34;
		L_34 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_33, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, 0, NULL);
		V_2 = L_34;
		// Color hexColor = ColorUtility.TryParseHtmlString(moleculeAttributes[2].Substring(9), out Color resultColor) ? resultColor : Color.white;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = 2;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_37, ((int32_t)9), NULL);
		bool L_39;
		L_39 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_38, (&V_4), NULL);
		if (L_39)
		{
			goto IL_0117;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B14_0 = L_40;
		goto IL_0119;
	}

IL_0117:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_4;
		G_B14_0 = L_41;
	}

IL_0119:
	{
		V_3 = G_B14_0;
		// Molecule molecule = new Molecule(moleculeAttributes[0].Substring(5), float.Parse(moleculeAttributes[1].Substring(4)), hexColor);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = 0;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_44, 5, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = 1;
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		String_t* L_49;
		L_49 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_48, 4, NULL);
		float L_50;
		L_50 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_49, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = V_3;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_52 = (Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)il2cpp_codegen_object_new(Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Molecule__ctor_m7BB6D6DE709002EF4FFE7531319BCB7F537B977C(L_52, L_45, L_50, L_51, NULL);
		V_5 = L_52;
		// for(int i = 3; i < moleculeAttributes.Length; i++) {
		V_6 = 3;
		goto IL_016e;
	}

IL_013e:
	{
		// string[] bindingattributes = moleculeAttributes[i].Split(";");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_2;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		String_t* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57;
		L_57 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_56, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, 0, NULL);
		V_7 = L_57;
		// molecule.bindingdistance[bindingattributes[0]] = float.Parse(bindingattributes[1]);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_58 = V_5;
		NullCheck(L_58);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_59 = L_58->___bindingdistance_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_7;
		NullCheck(L_60);
		int32_t L_61 = 0;
		String_t* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = 1;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		float L_66;
		L_66 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_65, NULL);
		NullCheck(L_59);
		Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A(L_59, L_62, L_66, Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		// for(int i = 3; i < moleculeAttributes.Length; i++) {
		int32_t L_67 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_016e:
	{
		// for(int i = 3; i < moleculeAttributes.Length; i++) {
		int32_t L_68 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = V_2;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_013e;
		}
	}
	{
		// molecules.Add(molecule);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_70 = __this->___molecules_29;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_71 = V_5;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_71);
	}

IL_0183:
	{
		// while(!formatReader.EndOfStream) {
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_73 = __this->___formatReader_26;
		NullCheck(L_73);
		bool L_74;
		L_74 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_73, NULL);
		if (!L_74)
		{
			goto IL_00e6;
		}
	}
	{
		// initToggel(toggle_1, (Molecule)molecules[0]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_75 = __this->___toggle_1_10;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_76 = __this->___molecules_29;
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_76, 0);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_75, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_77, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_2, (Molecule)molecules[1]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_78 = __this->___toggle_2_11;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_79 = __this->___molecules_29;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_79, 1);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_78, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_80, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_3, (Molecule)molecules[2]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_81 = __this->___toggle_3_12;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_82 = __this->___molecules_29;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_82, 2);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_81, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_83, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_4, (Molecule)molecules[3]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_84 = __this->___toggle_4_13;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_85 = __this->___molecules_29;
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_85, 3);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_84, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_86, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_5, (Molecule)molecules[4]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_87 = __this->___toggle_5_14;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_88 = __this->___molecules_29;
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_88, 4);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_87, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_89, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_6, (Molecule)molecules[5]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_90 = __this->___toggle_6_15;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_91 = __this->___molecules_29;
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_91, 5);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_90, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_92, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initToggel(toggle_7, (Molecule)molecules[6]);
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_93 = __this->___toggle_7_16;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_94 = __this->___molecules_29;
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_94, 6);
		UI_initToggel_mBF70593BDDFC7E933A9870BF7CD9ADA634A56C95(__this, L_93, ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_95, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var)), NULL);
		// initAtoms();
		UI_initAtoms_m451185E0B2144C345CD77695FAE44B37EECEFD40(__this, NULL);
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_96;
		L_96 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_4 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_96);
		// }
		return;
	}
}
// System.Void UI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Update_m7F9212980C571870E0700BAB400E09111370F6ED (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5DFB3FB7AB7AE75641BCBC1DA2F8FC37CD3C1ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Input.GetMouseButtonDown(0)) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(ray, out hit)) {
		bool L_4;
		L_4 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// GameObject clickedObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		// if(clickedObject.name.Equals("Bond")) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralC5DFB3FB7AB7AE75641BCBC1DA2F8FC37CD3C1ED, NULL);
		// Debug.Log(clickedObject.name);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
	}

IL_0048:
	{
		// if(Input.GetKeyDown(KeyCode.Escape)) escape();
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape)) escape();
		UI_escape_mA9CBCA24D9E05FC456FBFE1FB563069A228349CB(__this, NULL);
	}

IL_0057:
	{
		// if(Input.GetKeyDown(KeyCode.Q) | Input.GetKey(KeyCode.Q)) backward();
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)113), NULL);
		bool L_13;
		L_13 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		if (!((int32_t)((int32_t)L_12|(int32_t)L_13)))
		{
			goto IL_006e;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Q) | Input.GetKey(KeyCode.Q)) backward();
		UI_backward_m07CE540CBEC557D3609AC1E8530028929AB07C5E(__this, NULL);
	}

IL_006e:
	{
		// if(Input.GetKeyDown(KeyCode.Y)) toggleVisibility();
		bool L_14;
		L_14 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)121), NULL);
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Y)) toggleVisibility();
		UI_toggleVisibility_m27A99E9D28B77F2A9139442AFBDC024236A17875(__this, NULL);
	}

IL_007d:
	{
		// if(Input.GetKeyDown(KeyCode.R)) bind();
		bool L_15;
		L_15 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.R)) bind();
		UI_bind_mB74964E816DD162A79E29337202BB243DFB04CF2(__this, NULL);
	}

IL_008c:
	{
		// if(Input.GetKeyDown(KeyCode.T)) analyse();
		bool L_16;
		L_16 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)116), NULL);
		if (!L_16)
		{
			goto IL_009b;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.T)) analyse();
		UI_analyse_mB9FB11BC4407E57FC942687D50FEA9A015D87323(__this, NULL);
	}

IL_009b:
	{
		// if(Input.GetKeyDown(KeyCode.X)) toggleLerpMode();
		bool L_17;
		L_17 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)120), NULL);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.X)) toggleLerpMode();
		UI_toggleLerpMode_mEC299F67510A6730046BC0F0B8548ACED223B36C(__this, NULL);
	}

IL_00aa:
	{
		// if(Input.GetKeyDown(KeyCode.C)) {
		bool L_18;
		L_18 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// reachedEnd = false;
		__this->___reachedEnd_47 = (bool)0;
		// loadNew();
		UI_loadNew_m7BBCDA358567D2F4253401B69B8F12071B9DFC9E(__this, NULL);
	}

IL_00c0:
	{
		// if(!reachedEnd) {
		bool L_19 = __this->___reachedEnd_47;
		if (L_19)
		{
			goto IL_013d;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.E) | Input.GetKey(KeyCode.E)) forward();
		bool L_20;
		L_20 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		bool L_21;
		L_21 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		if (!((int32_t)((int32_t)L_20|(int32_t)L_21)))
		{
			goto IL_00df;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.E) | Input.GetKey(KeyCode.E)) forward();
		UI_forward_mD0AB673DA5DE5C0CA6D3E47609A70DFB8F33299F(__this, NULL);
	}

IL_00df:
	{
		// if(Input.GetKeyDown(KeyCode.F) | Input.GetKey(KeyCode.F)) {
		bool L_22;
		L_22 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)102), NULL);
		bool L_23;
		L_23 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)102), NULL);
		if (!((int32_t)((int32_t)L_22|(int32_t)L_23)))
		{
			goto IL_013d;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// long step = fastMode*(NUMBER_OF_ATOMS + 9);
			int32_t L_24 = __this->___fastMode_44;
			int32_t L_25 = __this->___NUMBER_OF_ATOMS_31;
			V_1 = ((int64_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)9))))));
			// for(int i = 0; i < step; i++) reader.ReadLine();
			V_2 = 0;
			goto IL_0116_1;
		}

IL_0106_1:
		{
			// for(int i = 0; i < step; i++) reader.ReadLine();
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_26 = __this->___reader_25;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_26);
			// for(int i = 0; i < step; i++) reader.ReadLine();
			int32_t L_28 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		}

IL_0116_1:
		{
			// for(int i = 0; i < step; i++) reader.ReadLine();
			int32_t L_29 = V_2;
			int64_t L_30 = V_1;
			if ((((int64_t)((int64_t)L_29)) < ((int64_t)L_30)))
			{
				goto IL_0106_1;
			}
		}
		{
			// geoData = loadTimeStep(false);
			ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_31;
			L_31 = UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE(__this, (bool)0, NULL);
			__this->___geoData_27 = L_31;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___geoData_27), (void*)L_31);
			// forward();
			UI_forward_mD0AB673DA5DE5C0CA6D3E47609A70DFB8F33299F(__this, NULL);
			// } catch (Exception ex) {
			goto IL_013d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0130;
		}
		throw e;
	}

CATCH_0130:
	{// begin catch(System.Exception)
		// loadNew();
		UI_loadNew_m7BBCDA358567D2F4253401B69B8F12071B9DFC9E(__this, NULL);
		// Debug.Log(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013d;
	}// end catch (depth: 1)

IL_013d:
	{
		// deltaTime += (Time.unscaledDeltaTime  - deltaTime) * 0.1f;
		float L_32 = __this->___deltaTime_46;
		float L_33;
		L_33 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_34 = __this->___deltaTime_46;
		__this->___deltaTime_46 = ((float)il2cpp_codegen_add(L_32, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_33, L_34)), (0.100000001f)))));
		// fps_Label.text = "FPS: " + Mathf.Round(1.0f / deltaTime);
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_35 = __this->___fps_Label_9;
		float L_36 = __this->___deltaTime_46;
		float L_37;
		L_37 = bankers_roundf(((float)((1.0f)/L_36)));
		V_3 = L_37;
		String_t* L_38;
		L_38 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2, L_38, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_35, L_39);
		// }
		return;
	}
}
// System.Void UI::forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_forward_mD0AB673DA5DE5C0CA6D3E47609A70DFB8F33299F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isBond) return;
		bool L_0 = __this->___isBond_49;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(isBond) return;
		return;
	}

IL_0009:
	{
		// geoData = loadTimeStep(false);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1;
		L_1 = UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE(__this, (bool)0, NULL);
		__this->___geoData_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoData_27), (void*)L_1);
		// timestep_Label.text = "Timestep : " + timeStep.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_2 = __this->___timestep_Label_8;
		int32_t* L_3 = (&__this->___timeStep_33);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_2, L_5);
		// if(lerpMode) {
		bool L_6 = __this->___lerpMode_48;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// lerp();
		UI_lerp_mA64290911AC1EC74681E670D3FAC7908B74A9465(__this, NULL);
		return;
	}

IL_0045:
	{
		// } else move();
		UI_move_m8AC970BD593BDEB7CAA90970CD310C82B4EF7246(__this, NULL);
		// }
		return;
	}
}
// System.Void UI::backward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_backward_m07CE540CBEC557D3609AC1E8530028929AB07C5E (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6555B42477400CBC16E2986A896747E6ED796D2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(isBond) return;
		bool L_0 = __this->___isBond_49;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(isBond) return;
		return;
	}

IL_0009:
	{
		// reader = new StreamReader(data);
		String_t* L_1 = __this->___data_23;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_2, L_1, NULL);
		__this->___reader_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_25), (void*)L_2);
		// timeStep = timeStep - 5000;
		int32_t L_3 = __this->___timeStep_33;
		__this->___timeStep_33 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)5000)));
		// if(timeStep >= 0) {
		int32_t L_4 = __this->___timeStep_33;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_0099;
	}

IL_0037:
	{
		// string line = reader.ReadLine();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = __this->___reader_25;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_5);
		V_0 = L_6;
		// if(timeStep.ToString() == line) {
		int32_t* L_7 = (&__this->___timeStep_33);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0099;
		}
	}
	{
		// timestep_Label.text = "Timestep : " + timeStep.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_11 = __this->___timestep_Label_8;
		int32_t* L_12 = (&__this->___timeStep_33);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D, L_13, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_11, L_14);
		// geoData = loadTimeStep(true);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_15;
		L_15 = UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE(__this, (bool)1, NULL);
		__this->___geoData_27 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoData_27), (void*)L_15);
		// if(lerpMode) {
		bool L_16 = __this->___lerpMode_48;
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		// lerp();
		UI_lerp_mA64290911AC1EC74681E670D3FAC7908B74A9465(__this, NULL);
		return;
	}

IL_0092:
	{
		// } else move();
		UI_move_m8AC970BD593BDEB7CAA90970CD310C82B4EF7246(__this, NULL);
		// break;
		return;
	}

IL_0099:
	{
		// while(!reader.EndOfStream) {
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_17 = __this->___reader_25;
		NullCheck(L_17);
		bool L_18;
		L_18 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_17, NULL);
		if (!L_18)
		{
			goto IL_0037;
		}
	}
	{
		return;
	}

IL_00a7:
	{
		// } else timestep_Label.text = "Timestep : 0";
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_19 = __this->___timestep_Label_8;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_19, _stringLiteralC6555B42477400CBC16E2986A896747E6ED796D2);
		// }
		return;
	}
}
// System.Void UI::removeBonds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_removeBonds_m1F081190FE410579D028A3CC652E17A8F4F74943 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* V_0 = NULL;
	{
		goto IL_002b;
	}

IL_0002:
	{
		// Bond bond = (Bond) bonds[0];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___bonds_30;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, 0);
		V_0 = ((Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)CastclassClass((RuntimeObject*)L_1, Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var));
		// Destroy(bond.bond);
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_2 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___bond_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// bonds.Remove(bond);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = __this->___bonds_30;
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_4, L_5);
	}

IL_002b:
	{
		// while(bonds.Count > 0) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->___bonds_30;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// isBond = false;
		__this->___isBond_49 = (bool)0;
		// }
		return;
	}
}
// System.Void UI::lerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_lerp_mA64290911AC1EC74681E670D3FAC7908B74A9465 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// float current = Mathf.MoveTowards(0, 1, lerpFactor * Time.deltaTime);
		float L_0 = __this->___lerpFactor_45;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2;
		L_2 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline((0.0f), (1.0f), ((float)il2cpp_codegen_multiply(L_0, L_1)), NULL);
		V_0 = L_2;
		// for(int i = 0; i < gameObjects.Count; i++) {
		V_1 = 0;
		goto IL_0068;
	}

IL_0020:
	{
		// GameObject gameObject = (GameObject) gameObjects[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->___gameObjects_28;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_2 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_5, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
	}
	try
	{// begin try (depth: 1)
		// gameObject.transform.position = Vector3.Lerp((Vector3) gameObject.transform.position, (Vector3) geoData[i], current);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_11 = __this->___geoData_27;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, L_12);
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_13, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), L_14, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_15, NULL);
		// } catch(Exception ex) {}
		goto IL_0064;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{// begin catch(System.Exception)
		// } catch(Exception ex) {}
		// } catch(Exception ex) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0064;
	}// end catch (depth: 1)

IL_0064:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0068:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_17 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18 = __this->___gameObjects_28;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0020;
		}
	}
	{
		// current = 0;
		V_0 = (0.0f);
		// }
		return;
	}
}
// System.Void UI::move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_move_m8AC970BD593BDEB7CAA90970CD310C82B4EF7246 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// GameObject gameObject = (GameObject) gameObjects[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___gameObjects_28;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
	}
	try
	{// begin try (depth: 1)
		// gameObject.transform.position = (Vector3) geoData[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = __this->___geoData_27;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// } catch(Exception ex) {}
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Exception)
		// } catch(Exception ex) {}
		// } catch(Exception ex) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	}// end catch (depth: 1)

IL_0037:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_9 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = __this->___gameObjects_28;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.ArrayList UI::loadTimeStep(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, bool ___0_backward, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ArrayList position = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			// if(!backward) {
			bool L_1 = ___0_backward;
			if (L_1)
			{
				goto IL_002b_1;
			}
		}
		{
			// reader.ReadLine();
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = __this->___reader_25;
			NullCheck(L_2);
			String_t* L_3;
			L_3 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_2);
			// timeStep = int.Parse(reader.ReadLine());
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = __this->___reader_25;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_4);
			int32_t L_6;
			L_6 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_5, NULL);
			__this->___timeStep_33 = L_6;
		}

IL_002b_1:
		{
			// for(int j = 0; j < 7; j++) reader.ReadLine(); // format skipping
			V_1 = 0;
			goto IL_003f_1;
		}

IL_002f_1:
		{
			// for(int j = 0; j < 7; j++) reader.ReadLine(); // format skipping
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = __this->___reader_25;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_7);
			// for(int j = 0; j < 7; j++) reader.ReadLine(); // format skipping
			int32_t L_9 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		}

IL_003f_1:
		{
			// for(int j = 0; j < 7; j++) reader.ReadLine(); // format skipping
			int32_t L_10 = V_1;
			if ((((int32_t)L_10) < ((int32_t)7)))
			{
				goto IL_002f_1;
			}
		}
		{
			// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
			V_2 = 0;
			goto IL_00a3_1;
		}

IL_0047_1:
		{
			// string[] substrings = reader.ReadLine().Split(" ");
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = __this->___reader_25;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_11);
			NullCheck(L_12);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
			L_13 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_12, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
			V_3 = L_13;
			// position.Add(new Vector3(float.Parse(substrings[2]) * BOX_BOUND, float.Parse(substrings[3]) * BOX_BOUND, float.Parse(substrings[4]) * BOX_BOUND));
			ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_14 = V_0;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_3;
			NullCheck(L_15);
			int32_t L_16 = 2;
			String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			float L_18;
			L_18 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_17, NULL);
			int32_t L_19 = __this->___BOX_BOUND_32;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_3;
			NullCheck(L_20);
			int32_t L_21 = 3;
			String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			float L_23;
			L_23 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_22, NULL);
			int32_t L_24 = __this->___BOX_BOUND_32;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_3;
			NullCheck(L_25);
			int32_t L_26 = 4;
			String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			float L_28;
			L_28 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_27, NULL);
			int32_t L_29 = __this->___BOX_BOUND_32;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
			memset((&L_30), 0, sizeof(L_30));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((float)il2cpp_codegen_multiply(L_18, ((float)L_19))), ((float)il2cpp_codegen_multiply(L_23, ((float)L_24))), ((float)il2cpp_codegen_multiply(L_28, ((float)L_29))), /*hidden argument*/NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30;
			RuntimeObject* L_32 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_31);
			NullCheck(L_14);
			int32_t L_33;
			L_33 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_32);
			// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
			int32_t L_34 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		}

IL_00a3_1:
		{
			// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
			int32_t L_35 = V_2;
			int32_t L_36 = __this->___NUMBER_OF_ATOMS_31;
			if ((((int32_t)L_35) < ((int32_t)L_36)))
			{
				goto IL_0047_1;
			}
		}
		{
			// } catch (Exception ex) {
			goto IL_00bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{// begin catch(System.Exception)
		// reachedEnd = true;
		__this->___reachedEnd_47 = (bool)1;
		// UnityEngine.Debug.Log(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	}// end catch (depth: 1)

IL_00bc:
	{
		// return position;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_37 = V_0;
		return L_37;
	}
}
// System.Void UI::loadNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_loadNew_m7BBCDA358567D2F4253401B69B8F12071B9DFC9E (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// reader = new StreamReader(data);
		String_t* L_0 = __this->___data_23;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_1, L_0, NULL);
		__this->___reader_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_25), (void*)L_1);
		// ArrayList firstPosition = loadTimeStep(false);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2;
		L_2 = UI_loadTimeStep_mF1858667DCDEE84E534F39B6C2B2CE1396EAC6BE(__this, (bool)0, NULL);
		V_0 = L_2;
		// for(int i = 0; i < gameObjects.Count; i++) {
		V_1 = 0;
		goto IL_0048;
	}

IL_001d:
	{
		// GameObject gameObject = (GameObject) gameObjects[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->___gameObjects_28;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		// gameObject.transform.position = (Vector3) firstPosition[i];
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_5, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_5, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, L_8);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0048:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_11 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = __this->___gameObjects_28;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI::initAtoms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_initAtoms_m451185E0B2144C345CD77695FAE44B37EECEFD40 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Exception_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// reader = new StreamReader(data);
		String_t* L_0 = __this->___data_23;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_1 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_1, L_0, NULL);
		__this->___reader_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_25), (void*)L_1);
		// reader.ReadLine(); // ITEM:TIMESTEP
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_2 = __this->___reader_25;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_2);
		// timeStep = int.Parse(reader.ReadLine());
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = __this->___reader_25;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_4);
		int32_t L_6;
		L_6 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_5, NULL);
		__this->___timeStep_33 = L_6;
		// timestep_Label.text = "Timestep : " + timeStep.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_7 = __this->___timestep_Label_8;
		int32_t* L_8 = (&__this->___timeStep_33);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4D9746632251A4BD8098D5D06148D5954F727A1D, L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_7, L_10);
		// reader.ReadLine(); //ITEM: NUMBER OF ATOMS
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = __this->___reader_25;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_11);
		// NUMBER_OF_ATOMS = int.Parse(reader.ReadLine());
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_13 = __this->___reader_25;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_13);
		int32_t L_15;
		L_15 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_14, NULL);
		__this->___NUMBER_OF_ATOMS_31 = L_15;
		// reader.ReadLine(); //ITEM: BOX BOUNDS"
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_16 = __this->___reader_25;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_16);
		// reader.ReadLine();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_18 = __this->___reader_25;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_18);
		// reader.ReadLine();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_20 = __this->___reader_25;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_20);
		// reader.ReadLine();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_22 = __this->___reader_25;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_22);
		// reader.ReadLine(); //ITEM: ATOMS id type xs ys zs
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_24 = __this->___reader_25;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_24);
		// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
		V_0 = 0;
		goto IL_01a9;
	}

IL_00b8:
	{
		// string[] substrings = reader.ReadLine().Split(" ");
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_26 = __this->___reader_25;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadLine() */, L_26);
		NullCheck(L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28;
		L_28 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_27, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		V_1 = L_28;
		// GameObject gameObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		V_2 = L_29;
		// gameObject.transform.position = new Vector3(float.Parse(substrings[2]) * BOX_BOUND, float.Parse(substrings[3]) * BOX_BOUND, float.Parse(substrings[4]) * BOX_BOUND);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_2;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 2;
		String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		float L_35;
		L_35 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_34, NULL);
		int32_t L_36 = __this->___BOX_BOUND_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = 3;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		float L_40;
		L_40 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_39, NULL);
		int32_t L_41 = __this->___BOX_BOUND_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = 4;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		float L_45;
		L_45 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_44, NULL);
		int32_t L_46 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), ((float)il2cpp_codegen_multiply(L_35, ((float)L_36))), ((float)il2cpp_codegen_multiply(L_40, ((float)L_41))), ((float)il2cpp_codegen_multiply(L_45, ((float)L_46))), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_47, NULL);
	}
	try
	{// begin try (depth: 1)
		// Molecule molecule = (Molecule) molecules[int.Parse(substrings[1]) - 1]; // in Lammpstrij file it starts with 1
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_48 = __this->___molecules_29;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50 = 1;
		String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52;
		L_52 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_51, NULL);
		NullCheck(L_48);
		RuntimeObject* L_53;
		L_53 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_48, ((int32_t)il2cpp_codegen_subtract(L_52, 1)));
		V_3 = ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_53, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var));
		// gameObject.name = molecule.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = V_2;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_55 = V_3;
		NullCheck(L_55);
		String_t* L_56 = L_55->___name_0;
		NullCheck(L_54);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_54, L_56, NULL);
		// gameObject.transform.localScale = new Vector3(molecule.radius, molecule.radius, molecule.radius);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_2;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_59 = V_3;
		NullCheck(L_59);
		float L_60 = L_59->___radius_1;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_61 = V_3;
		NullCheck(L_61);
		float L_62 = L_61->___radius_1;
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_63 = V_3;
		NullCheck(L_63);
		float L_64 = L_63->___radius_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), L_60, L_62, L_64, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_58, L_65, NULL);
		// Renderer rend = gameObject.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_2;
		NullCheck(L_66);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_67;
		L_67 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_66, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// rend.material.color = molecule.hexColor;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_67, NULL);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_69 = V_3;
		NullCheck(L_69);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70 = L_69->___hexColor_2;
		NullCheck(L_68);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_68, L_70, NULL);
		// } catch(Exception ex) {
		goto IL_0198;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0177;
		}
		throw e;
	}

CATCH_0177:
	{// begin catch(System.Exception)
		{
			// } catch(Exception ex) {
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// UnityEngine.Debug.Log("Format Bug " +  ex);
			Exception_t* L_71 = V_4;
			Exception_t* L_72 = L_71;
			G_B4_0 = L_72;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB941EDDC2534C0E1FA77E19F3767EDBBF6556DC9));
			if (L_72)
			{
				G_B5_0 = L_72;
				G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB941EDDC2534C0E1FA77E19F3767EDBBF6556DC9));
				goto IL_0187;
			}
		}
		{
			G_B6_0 = ((String_t*)(NULL));
			G_B6_1 = G_B4_1;
			goto IL_018c;
		}

IL_0187:
		{
			NullCheck(G_B5_0);
			String_t* L_73;
			L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
			G_B6_0 = L_73;
			G_B6_1 = G_B5_1;
		}

IL_018c:
		{
			String_t* L_74;
			L_74 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_74, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0198;
		}
	}// end catch (depth: 1)

IL_0198:
	{
		// gameObjects.Add(gameObject);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_75 = __this->___gameObjects_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_2;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_75, L_76);
		// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
		int32_t L_78 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01a9:
	{
		// for(int i = 0; i < NUMBER_OF_ATOMS; i++) {
		int32_t L_79 = V_0;
		int32_t L_80 = __this->___NUMBER_OF_ATOMS_31;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_00b8;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI::openSlice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_openSlice_m9CB02E2D5446C51B7AC56B7DFD4AE04BB029D3F0 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slice_isVisible = !slice_isVisible;
		bool L_0 = __this->___slice_isVisible_7;
		__this->___slice_isVisible_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(slice_isVisible) {
		bool L_1 = __this->___slice_isVisible_7;
		if (!L_1)
		{
			goto IL_009a;
		}
	}
	{
		// slice_Container.style.display = DisplayStyle.Flex;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = __this->___slice_Container_5;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_2, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_4;
		L_4 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_3, L_4);
		// slicingCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		__this->___slicingCube_52 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slicingCube_52), (void*)L_5);
		// slicingCube.transform.position = new Vector3(BOX_BOUND/2, BOX_BOUND/2, BOX_BOUND/2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___slicingCube_52;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		int32_t L_8 = __this->___BOX_BOUND_32;
		int32_t L_9 = __this->___BOX_BOUND_32;
		int32_t L_10 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)((int32_t)(L_8/2))), ((float)((int32_t)(L_9/2))), ((float)((int32_t)(L_10/2))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// slicingCube.transform.localScale = new Vector3(BOX_BOUND/10, BOX_BOUND, BOX_BOUND);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___slicingCube_52;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		int32_t L_14 = __this->___BOX_BOUND_32;
		int32_t L_15 = __this->___BOX_BOUND_32;
		int32_t L_16 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)((int32_t)(L_14/((int32_t)10)))), ((float)L_15), ((float)L_16), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_17, NULL);
		return;
	}

IL_009a:
	{
		// slice_Container.style.display = DisplayStyle.None;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = __this->___slice_Container_5;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_18, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_20;
		L_20 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_19);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_19, L_20);
		// Destroy(slicingCube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___slicingCube_52;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_21, NULL);
		// }
		return;
	}
}
// System.Void UI::undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_undo_mA690A87E9A5757878E829393A3DB23472DC7B611 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach(GameObject gameObject in gameObjects) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___gameObjects_28;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach(GameObject gameObject in gameObjects) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// gameObject.SetActive(true);
				NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), (bool)1, NULL);
			}

IL_001f_1:
			{
				// foreach(GameObject gameObject in gameObjects) {
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// foreach(GameObject bond in bonds) Destroy(bond);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9 = __this->___bonds_30;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_9);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_12 = V_1;
					if (!L_12)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_13 = V_1;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_0048_1:
			{
				// foreach(GameObject bond in bonds) Destroy(bond);
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				// foreach(GameObject bond in bonds) Destroy(bond);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_15, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
			}

IL_0058_1:
			{
				// foreach(GameObject bond in bonds) Destroy(bond);
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		// bonds = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_18, NULL);
		__this->___bonds_30 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bonds_30), (void*)L_18);
		// }
		return;
	}
}
// System.Void UI::slice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_slice_mA407B30BE3D680CA1956B947AD0846530355104F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// Bounds cubeBounds = slicingCube.transform.GetComponent<Renderer>().bounds;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___slicingCube_52;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_1, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_2, NULL);
		V_0 = L_3;
		// foreach(GameObject gameObject in gameObjects)
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = __this->___gameObjects_28;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_0024_1:
			{
				// foreach(GameObject gameObject in gameObjects)
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_2 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_10, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
				// if(!cubeBounds.Contains(gameObject.transform.position))
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
				L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
				bool L_14;
				L_14 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_0), L_13, NULL);
				if (L_14)
				{
					goto IL_004b_1;
				}
			}
			{
				// gameObject.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
			}

IL_004b_1:
			{
				// foreach(GameObject gameObject in gameObjects)
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// Destroy(slicingCube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___slicingCube_52;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
		// }
		return;
	}
}
// System.Void UI::bind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_bind_mB74964E816DD162A79E29337202BB243DFB04CF2 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_m9B256C57CAD754D9415CAB1C583273C7E6B990FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6AE1BF2623D89FA7417E6BD80C9CED8ADFC5F3F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m16CA1C6BF7BD7388F0E56FFD79497813FD767698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8FF41324C29E3A40BFB1C404B315CA3D2449776F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mEE2C527BDE7A18611ADAF3B770FB6965153BF3A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1C8D1CFB24426934BBD0E7B86411D947FBD85369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDE5D0893A485CD99AC67B6A3EB4ACE4E7A32BB31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8445906813876C0429F983634F795D33AD8716E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m3AC44C8BD4E7085EE46D35A4D995A84A50D15DCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5DFB3FB7AB7AE75641BCBC1DA2F8FC37CD3C1ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* V_3 = NULL;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_4 = NULL;
	Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_7 = NULL;
	int32_t V_8 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(isBond) {
		bool L_0 = __this->___isBond_49;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// removeBonds();
		UI_removeBonds_m1F081190FE410579D028A3CC652E17A8F4F74943(__this, NULL);
		// analysis_Container.style.display = DisplayStyle.None;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = __this->___analysis_Container_6;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_3;
		L_3 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2, L_3);
		// return;
		return;
	}

IL_0025:
	{
		// isBond = true;
		__this->___isBond_49 = (bool)1;
		// analysis_Container.style.display = DisplayStyle.Flex;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = __this->___analysis_Container_6;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_4, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_6;
		L_6 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030(0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_5, L_6);
		// bindingPartners = new Dictionary<GameObject, ArrayList>();
		Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* L_7 = (Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978*)il2cpp_codegen_object_new(Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m8FF41324C29E3A40BFB1C404B315CA3D2449776F(L_7, Dictionary_2__ctor_m8FF41324C29E3A40BFB1C404B315CA3D2449776F_RuntimeMethod_var);
		__this->___bindingPartners_53 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bindingPartners_53), (void*)L_7);
		// bondPartners = new Dictionary<GameObject, Bond>();
		Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085* L_8 = (Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085*)il2cpp_codegen_object_new(Dictionary_2_t5A440AEA35D063EF56AACFF878E641899D7B9085_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m16CA1C6BF7BD7388F0E56FFD79497813FD767698(L_8, Dictionary_2__ctor_m16CA1C6BF7BD7388F0E56FFD79497813FD767698_RuntimeMethod_var);
		__this->___bondPartners_54 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bondPartners_54), (void*)L_8);
		// turnOnVisibility();
		UI_turnOnVisibility_mDB69F858EFCDF6682D55C26FA1084FFEF5444CC5(__this, NULL);
		// for(int i = 0; i < gameObjects.Count; i++) {
		V_0 = 0;
		goto IL_0264;
	}

IL_0065:
	{
		// GameObject gameObject = (GameObject) gameObjects[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9 = __this->___gameObjects_28;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_9, L_10);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_11, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// foreach(Molecule molecule in molecules) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = __this->___molecules_29;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_12);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_024c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_2;
					V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_15 = V_14;
					if (!L_15)
					{
						goto IL_025f;
					}
				}
				{
					RuntimeObject* L_16 = V_14;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_025f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_023f_1;
			}

IL_0088_1:
			{
				// foreach(Molecule molecule in molecules) {
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				V_3 = ((Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA*)CastclassClass((RuntimeObject*)L_18, Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA_il2cpp_TypeInfo_var));
				// if(molecule.name.Equals(gameObject.name)) {
				Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_19 = V_3;
				NullCheck(L_19);
				String_t* L_20 = L_19->___name_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
				NullCheck(L_20);
				bool L_23;
				L_23 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_20, L_22, NULL);
				if (!L_23)
				{
					goto IL_023f_1;
				}
			}
			{
				// ArrayList partners = new ArrayList();
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_24 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_24, NULL);
				V_4 = L_24;
				// ArrayList extendedPartners = new ArrayList();
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_25 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_25, NULL);
				// foreach(string name in molecule.bindingdistance.Keys) {
				Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_26 = V_3;
				NullCheck(L_26);
				Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_27 = L_26->___bindingdistance_3;
				NullCheck(L_27);
				KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* L_28;
				L_28 = Dictionary_2_get_Keys_mEE2C527BDE7A18611ADAF3B770FB6965153BF3A1(L_27, Dictionary_2_get_Keys_mEE2C527BDE7A18611ADAF3B770FB6965153BF3A1_RuntimeMethod_var);
				NullCheck(L_28);
				Enumerator_tD044AFDDA2FE10222DD10F10A919D99429BAE276 L_29;
				L_29 = KeyCollection_GetEnumerator_m3AC44C8BD4E7085EE46D35A4D995A84A50D15DCB(L_28, KeyCollection_GetEnumerator_m3AC44C8BD4E7085EE46D35A4D995A84A50D15DCB_RuntimeMethod_var);
				V_5 = L_29;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0221_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1C8D1CFB24426934BBD0E7B86411D947FBD85369((&V_5), Enumerator_Dispose_m1C8D1CFB24426934BBD0E7B86411D947FBD85369_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0213_2;
					}

IL_00ce_2:
					{
						// foreach(string name in molecule.bindingdistance.Keys) {
						String_t* L_30;
						L_30 = Enumerator_get_Current_m8445906813876C0429F983634F795D33AD8716E3_inline((&V_5), Enumerator_get_Current_m8445906813876C0429F983634F795D33AD8716E3_RuntimeMethod_var);
						V_6 = L_30;
						// Collider[] colliders = Physics.OverlapSphere(gameObject.transform.position, molecule.bindingdistance[name]);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_1;
						NullCheck(L_31);
						Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
						L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
						NullCheck(L_32);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
						L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
						Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_34 = V_3;
						NullCheck(L_34);
						Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_35 = L_34->___bindingdistance_3;
						String_t* L_36 = V_6;
						NullCheck(L_35);
						float L_37;
						L_37 = Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC(L_35, L_36, Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var);
						ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_38;
						L_38 = Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69(L_33, L_37, NULL);
						// foreach(Collider collider in colliders) {
						V_7 = L_38;
						V_8 = 0;
						goto IL_0208_2;
					}

IL_00fe_2:
					{
						// foreach(Collider collider in colliders) {
						ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_39 = V_7;
						int32_t L_40 = V_8;
						NullCheck(L_39);
						int32_t L_41 = L_40;
						Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
						// GameObject nearby = collider.gameObject;
						NullCheck(L_42);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
						L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
						V_9 = L_43;
					}
					try
					{// begin try (depth: 3)
						{
							// if(!nearby.name.Equals(name)) continue;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_9;
							NullCheck(L_44);
							String_t* L_45;
							L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
							String_t* L_46 = V_6;
							NullCheck(L_45);
							bool L_47;
							L_47 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_45, L_46, NULL);
							if (L_47)
							{
								goto IL_011f_3;
							}
						}
						{
							// if(!nearby.name.Equals(name)) continue;
							goto IL_0202_2;
						}

IL_011f_3:
						{
							// ArrayList nearbyPartners = bindingPartners.GetValueOrDefault(nearby);
							Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* L_48 = __this->___bindingPartners_53;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = V_9;
							ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_50;
							L_50 = CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_m9B256C57CAD754D9415CAB1C583273C7E6B990FC(L_48, L_49, CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_m9B256C57CAD754D9415CAB1C583273C7E6B990FC_RuntimeMethod_var);
							// if(nearbyPartners.Contains(gameObject)) continue;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_1;
							NullCheck(L_50);
							bool L_52;
							L_52 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(31 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_50, L_51);
							if (!L_52)
							{
								goto IL_0139_3;
							}
						}
						{
							// if(nearbyPartners.Contains(gameObject)) continue;
							goto IL_0202_2;
						}

IL_0139_3:
						{
							// partners.Add(nearby);
							ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_53 = V_4;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = V_9;
							NullCheck(L_53);
							int32_t L_55;
							L_55 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_53, L_54);
							// Vector3 startPoint = gameObject.transform.position;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_1;
							NullCheck(L_56);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
							L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
							NullCheck(L_57);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
							L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
							// Vector3 endPoint = nearby.transform.position;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_9;
							NullCheck(L_59);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
							L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
							NullCheck(L_60);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
							L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
							V_10 = L_61;
							// Vector3 midPoint = (startPoint + endPoint) / 2f;
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = L_58;
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_10;
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
							L_64 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_63, NULL);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
							L_65 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_64, (2.0f), NULL);
							V_11 = L_65;
							// float length = Vector3.Distance(startPoint, endPoint);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_10;
							float L_67;
							L_67 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_62, L_66, NULL);
							V_12 = L_67;
							// GameObject bond = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
							L_68 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(2, NULL);
							// bond.name = "Bond";
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = L_68;
							NullCheck(L_69);
							Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_69, _stringLiteralC5DFB3FB7AB7AE75641BCBC1DA2F8FC37CD3C1ED, NULL);
							// bond.transform.localScale = new Vector3(.5f, length / 2f, .5f);
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = L_69;
							NullCheck(L_70);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
							L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
							float L_72 = V_12;
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
							memset((&L_73), 0, sizeof(L_73));
							Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_73), (0.5f), ((float)(L_72/(2.0f))), (0.5f), /*hidden argument*/NULL);
							NullCheck(L_71);
							Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_73, NULL);
							// bond.transform.position = midPoint;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = L_70;
							NullCheck(L_74);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
							L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_11;
							NullCheck(L_75);
							Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_75, L_76, NULL);
							// bond.transform.LookAt(endPoint);
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = L_74;
							NullCheck(L_77);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
							L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_10;
							NullCheck(L_78);
							Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_78, L_79, NULL);
							// bond.transform.Rotate(new Vector3(90f, 0f, 0f));
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = L_77;
							NullCheck(L_80);
							Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
							L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
							Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
							memset((&L_82), 0, sizeof(L_82));
							Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_82), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
							NullCheck(L_81);
							Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_81, L_82, NULL);
							// Bond bond_ = new Bond(bond, gameObject, nearby);
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = V_1;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_9;
							Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_85 = (Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)il2cpp_codegen_object_new(Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
							NullCheck(L_85);
							Bond__ctor_mE9E3168057F2662F5ADD78D49D356DB50819ABC6(L_85, L_80, L_83, L_84, NULL);
							V_13 = L_85;
							// bonds.Add(bond_);
							ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_86 = __this->___bonds_30;
							Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_87 = V_13;
							NullCheck(L_86);
							int32_t L_88;
							L_88 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_86, L_87);
							// } catch(Exception e) {}
							goto IL_0202_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_01ff_2;
						}
						throw e;
					}

CATCH_01ff_2:
					{// begin catch(System.Exception)
						// } catch(Exception e) {}
						// } catch(Exception e) {}
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_0202_2;
					}// end catch (depth: 3)

IL_0202_2:
					{
						int32_t L_89 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_89, 1));
					}

IL_0208_2:
					{
						// foreach(Collider collider in colliders) {
						int32_t L_90 = V_8;
						ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_91 = V_7;
						NullCheck(L_91);
						if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
						{
							goto IL_00fe_2;
						}
					}

IL_0213_2:
					{
						// foreach(string name in molecule.bindingdistance.Keys) {
						bool L_92;
						L_92 = Enumerator_MoveNext_mDE5D0893A485CD99AC67B6A3EB4ACE4E7A32BB31((&V_5), Enumerator_MoveNext_mDE5D0893A485CD99AC67B6A3EB4ACE4E7A32BB31_RuntimeMethod_var);
						if (L_92)
						{
							goto IL_00ce_2;
						}
					}
					{
						goto IL_022f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_022f_1:
			{
				// bindingPartners.Add(gameObject, partners);
				Dictionary_2_t04D5F44E2DE0A38BC529F6ADB174BA0D96D1D978* L_93 = __this->___bindingPartners_53;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = V_1;
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_95 = V_4;
				NullCheck(L_93);
				Dictionary_2_Add_m6AE1BF2623D89FA7417E6BD80C9CED8ADFC5F3F8(L_93, L_94, L_95, Dictionary_2_Add_m6AE1BF2623D89FA7417E6BD80C9CED8ADFC5F3F8_RuntimeMethod_var);
				// break;
				goto IL_0260;
			}

IL_023f_1:
			{
				// foreach(Molecule molecule in molecules) {
				RuntimeObject* L_96 = V_2;
				NullCheck(L_96);
				bool L_97;
				L_97 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_96);
				if (L_97)
				{
					goto IL_0088_1;
				}
			}
			{
				goto IL_0260;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0260:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_98 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0264:
	{
		// for(int i = 0; i < gameObjects.Count; i++) {
		int32_t L_99 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_100 = __this->___gameObjects_28;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_100);
		if ((((int32_t)L_99) < ((int32_t)L_101)))
		{
			goto IL_0065;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI::analyse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_analyse_mB9FB11BC4407E57FC942687D50FEA9A015D87323 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F6449BFCE9C5FAAD364729B134557DE65F5C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899057FA48A4E0B5FD7A2FB6EB136F9906502253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDDE279FBAB43FB2F38C54FEF2C17CFE9D377602);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// one = 0;
		__this->___one_35 = 0;
		// two = 0;
		__this->___two_36 = 0;
		// three = 0;
		__this->___three_37 = 0;
		// ones = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___ones_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ones_41), (void*)L_0);
		// twos=new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_1, NULL);
		__this->___twos_42 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___twos_42), (void*)L_1);
		// threes= new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_2, NULL);
		__this->___threes_43 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threes_43), (void*)L_2);
		// ArrayList bonds_tmp = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_3, NULL);
		V_0 = L_3;
		// foreach(Bond bond in bonds) bonds_tmp.Add(bond);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = __this->___bonds_30;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_007b;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_004a_1:
			{
				// foreach(Bond bond in bonds) bonds_tmp.Add(bond);
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_2 = ((Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)CastclassClass((RuntimeObject*)L_10, Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var));
				// foreach(Bond bond in bonds) bonds_tmp.Add(bond);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_11 = V_0;
				Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_12 = V_2;
				NullCheck(L_11);
				int32_t L_13;
				L_13 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_11, L_12);
			}

IL_005e_1:
			{
				// foreach(Bond bond in bonds) bonds_tmp.Add(bond);
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_004a_1;
				}
			}
			{
				goto IL_0169;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// Bond bond = (Bond) bonds_tmp[0];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_16, 0);
		V_4 = ((Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)CastclassClass((RuntimeObject*)L_17, Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var));
		// bonds_tmp.Remove(bond);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18 = V_0;
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_19 = V_4;
		NullCheck(L_18);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_18, L_19);
		// depth = 0;
		__this->___depth_34 = 0;
		// dig(bond.gameObject, bonds_tmp);
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_20 = V_4;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___gameObject_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_22 = V_0;
		UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107(__this, L_21, L_22, NULL);
		// dig(bond.gameObject2, bonds_tmp);
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_23 = V_4;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___gameObject2_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_25 = V_0;
		UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107(__this, L_24, L_25, NULL);
		// switch(depth) {
		int32_t L_26 = __this->___depth_34;
		V_5 = L_26;
		int32_t L_27 = V_5;
		switch (L_27)
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_0139;
			}
		}
	}
	{
		goto IL_0169;
	}

IL_00d5:
	{
		// case 0: one += 1;
		int32_t L_28 = __this->___one_35;
		__this->___one_35 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		// ones.Add(bond.gameObject.transform.position);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_29 = __this->___ones_41;
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_30 = V_4;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30->___gameObject_1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33;
		RuntimeObject* L_35 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_29);
		int32_t L_36;
		L_36 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_29, L_35);
		// break;
		goto IL_0169;
	}

IL_0107:
	{
		// case 1: two += 1;
		int32_t L_37 = __this->___two_36;
		__this->___two_36 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// twos.Add(bond.gameObject.transform.position);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_38 = __this->___twos_42;
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_39 = V_4;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = L_39->___gameObject_1;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42;
		RuntimeObject* L_44 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_38);
		int32_t L_45;
		L_45 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_38, L_44);
		// break;
		goto IL_0169;
	}

IL_0139:
	{
		// three += 1;
		int32_t L_46 = __this->___three_37;
		__this->___three_37 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		// threes.Add(bond.gameObject.transform.position);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_47 = __this->___threes_43;
		Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_48 = V_4;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = L_48->___gameObject_1;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51;
		RuntimeObject* L_53 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_47);
		int32_t L_54;
		L_54 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_53);
	}

IL_0169:
	{
		// while(bonds_tmp.Count != 0) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_55 = V_0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_55);
		if (L_56)
		{
			goto IL_007c;
		}
	}
	{
		// oneBond_Button.text = "Ones : " + one.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_57 = __this->___oneBond_Button_20;
		int32_t* L_58 = (&__this->___one_35);
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_58, NULL);
		String_t* L_60;
		L_60 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDDE279FBAB43FB2F38C54FEF2C17CFE9D377602, L_59, NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_57, L_60);
		// twoBond_Button.text = "Twos : " + two.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_61 = __this->___twoBond_Button_21;
		int32_t* L_62 = (&__this->___two_36);
		String_t* L_63;
		L_63 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_62, NULL);
		String_t* L_64;
		L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral899057FA48A4E0B5FD7A2FB6EB136F9906502253, L_63, NULL);
		NullCheck(L_61);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_61, L_64);
		// threeBond_Button.text = "Three : " + three.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_65 = __this->___threeBond_Button_22;
		int32_t* L_66 = (&__this->___three_37);
		String_t* L_67;
		L_67 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_66, NULL);
		String_t* L_68;
		L_68 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral738F6449BFCE9C5FAAD364729B134557DE65F5C0, L_67, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_65, L_68);
		// }
		return;
	}
}
// System.Void UI::dig(UnityEngine.GameObject,System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___1_bonds_tmp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(depth == 6) return;
		int32_t L_0 = __this->___depth_34;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_000a;
		}
	}
	{
		// if(depth == 6) return;
		return;
	}

IL_000a:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// foreach(Bond bond in bonds_tmp) {
			ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___1_bonds_tmp;
			NullCheck(L_1);
			RuntimeObject* L_2;
			L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
			V_0 = L_2;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_3 = V_0;
						V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
						RuntimeObject* L_4 = V_2;
						if (!L_4)
						{
							goto IL_0094_1;
						}
					}
					{
						RuntimeObject* L_5 = V_2;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
					}

IL_0094_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_007a_2;
				}

IL_0014_2:
				{
					// foreach(Bond bond in bonds_tmp) {
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					RuntimeObject* L_7;
					L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
					V_1 = ((Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)CastclassClass((RuntimeObject*)L_7, Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var));
					// if(ReferenceEquals(bond.gameObject2, gameObject)){
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_8 = V_1;
					NullCheck(L_8);
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___gameObject2_2;
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___0_gameObject;
					if ((!(((RuntimeObject*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_9) == ((RuntimeObject*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_10))))
					{
						goto IL_004d_2;
					}
				}
				{
					// depth +=  1;
					int32_t L_11 = __this->___depth_34;
					__this->___depth_34 = ((int32_t)il2cpp_codegen_add(L_11, 1));
					// bonds_tmp.Remove(bond);
					ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = ___1_bonds_tmp;
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_13 = V_1;
					NullCheck(L_12);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_12, L_13);
					// dig(bond.gameObject, bonds_tmp);
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_14 = V_1;
					NullCheck(L_14);
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___gameObject_1;
					ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = ___1_bonds_tmp;
					UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107(__this, L_15, L_16, NULL);
					// break;
					goto IL_0082_2;
				}

IL_004d_2:
				{
					// } else if(ReferenceEquals(bond.gameObject, gameObject)) {
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_17 = V_1;
					NullCheck(L_17);
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___gameObject_1;
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___0_gameObject;
					if ((!(((RuntimeObject*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_18) == ((RuntimeObject*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_19))))
					{
						goto IL_007a_2;
					}
				}
				{
					// depth +=  1;
					int32_t L_20 = __this->___depth_34;
					__this->___depth_34 = ((int32_t)il2cpp_codegen_add(L_20, 1));
					// bonds_tmp.Remove(bond);
					ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = ___1_bonds_tmp;
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_22 = V_1;
					NullCheck(L_21);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_21, L_22);
					// dig(bond.gameObject2, bonds_tmp);
					Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_23 = V_1;
					NullCheck(L_23);
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___gameObject2_2;
					ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_25 = ___1_bonds_tmp;
					UI_dig_m5AB88CFB0AF6E1560621E88C5EB6C7A7F8AF0107(__this, L_24, L_25, NULL);
					// break;
					goto IL_0082_2;
				}

IL_007a_2:
				{
					// foreach(Bond bond in bonds_tmp) {
					RuntimeObject* L_26 = V_0;
					NullCheck(L_26);
					bool L_27;
					L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
					if (L_27)
					{
						goto IL_0014_2;
					}
				}

IL_0082_2:
				{
					goto IL_0095_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0095_1:
		{
			// }catch(Exception e){}
			goto IL_009a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Exception)
		// }catch(Exception e){}
		// }catch(Exception e){}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009a;
	}// end catch (depth: 1)

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UI::analyse2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_analyse2_m856AC78C7E89EC64AC3755B4CE5FBDC05211C86F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F6449BFCE9C5FAAD364729B134557DE65F5C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899057FA48A4E0B5FD7A2FB6EB136F9906502253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDDE279FBAB43FB2F38C54FEF2C17CFE9D377602);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_9 = NULL;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_16 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_17 = NULL;
	int32_t V_18 = 0;
	{
		// turnOffVisibility();
		UI_turnOffVisibility_m1CE0BDCE02BB3FB09E8999F566800C9026AC5800(__this, NULL);
		// ArrayList figures = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		V_0 = L_0;
		// bondFigures = new Dictionary<GameObject, int>();
		Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_1 = (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*)il2cpp_codegen_object_new(Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5(L_1, Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var);
		__this->___bondFigures_55 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bondFigures_55), (void*)L_1);
		// foreach(Bond bond in bonds) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->___bonds_30;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e3:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_13;
					if (!L_5)
					{
						goto IL_01f6;
					}
				}
				{
					RuntimeObject* L_6 = V_13;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_01f6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01d6_1;
			}

IL_0028_1:
			{
				// foreach(Bond bond in bonds) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				// GameObject g1 = bond.gameObject;
				Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* L_9 = ((Bond_tB9B39E768E2824236B746799DD3D2F26963B366C*)CastclassClass((RuntimeObject*)L_8, Bond_tB9B39E768E2824236B746799DD3D2F26963B366C_il2cpp_TypeInfo_var));
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___gameObject_1;
				V_2 = L_10;
				// GameObject g2 = bond.gameObject2;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_9->___gameObject2_2;
				V_3 = L_11;
				// bool in1 = bondFigures.ContainsKey(g1);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_12 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
				NullCheck(L_12);
				bool L_14;
				L_14 = Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23(L_12, L_13, Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23_RuntimeMethod_var);
				V_4 = L_14;
				// bool in2 = bondFigures.ContainsKey(g2);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_15 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
				NullCheck(L_15);
				bool L_17;
				L_17 = Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23(L_15, L_16, Dictionary_2_ContainsKey_mB87894E9D3FB5D25F8A936D02D7EE19A74742F23_RuntimeMethod_var);
				V_5 = L_17;
				// if(!in1 & !in2) {
				bool L_18 = V_4;
				bool L_19 = V_5;
				if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&((((int32_t)L_19) == ((int32_t)0))? 1 : 0))))
				{
					goto IL_00b6_1;
				}
			}
			{
				// ArrayList figure = new ArrayList();
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_20 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_20, NULL);
				V_6 = L_20;
				// figure.Add(g1);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
				NullCheck(L_21);
				int32_t L_23;
				L_23 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_21, L_22);
				// figure.Add(g2);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_24 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
				NullCheck(L_24);
				int32_t L_26;
				L_26 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_24, L_25);
				// figures.Add(figure);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_27 = V_0;
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_28 = V_6;
				NullCheck(L_27);
				int32_t L_29;
				L_29 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_27, L_28);
				// bondFigures.Add(g1, figure.Count);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_30 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_32 = V_6;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_32);
				NullCheck(L_30);
				Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B(L_30, L_31, L_33, Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
				// bondFigures.Add(g2, figure.Count);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_34 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_3;
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_36 = V_6;
				NullCheck(L_36);
				int32_t L_37;
				L_37 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_36);
				NullCheck(L_34);
				Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B(L_34, L_35, L_37, Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
				goto IL_01d6_1;
			}

IL_00b6_1:
			{
				// } else if(in1 & in2) {
				bool L_38 = V_4;
				bool L_39 = V_5;
				if (!((int32_t)((int32_t)L_38&(int32_t)L_39)))
				{
					goto IL_016c_1;
				}
			}
			{
				// int g1_index = bondFigures.GetValueOrDefault(g1);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_40 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_2;
				int32_t L_42;
				L_42 = CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084(L_40, L_41, CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var);
				V_7 = L_42;
				// int g2_index = bondFigures.GetValueOrDefault(g2);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_43 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_3;
				int32_t L_45;
				L_45 = CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084(L_43, L_44, CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var);
				V_8 = L_45;
				// ArrayList g1_array = (ArrayList) figures[g1_index];
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_46 = V_0;
				int32_t L_47 = V_7;
				NullCheck(L_46);
				RuntimeObject* L_48;
				L_48 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_46, L_47);
				V_9 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_48, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
				// if(g1_index != g2_index) {
				int32_t L_49 = V_7;
				int32_t L_50 = V_8;
				if ((((int32_t)L_49) == ((int32_t)L_50)))
				{
					goto IL_01d6_1;
				}
			}
			{
				// ArrayList g2_array = (ArrayList) figures[g2_index];
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_51 = V_0;
				int32_t L_52 = V_8;
				NullCheck(L_51);
				RuntimeObject* L_53;
				L_53 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_51, L_52);
				V_10 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_53, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
				// foreach(GameObject g in g2_array) {
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_54 = V_10;
				NullCheck(L_54);
				RuntimeObject* L_55;
				L_55 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_54);
				V_11 = L_55;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_013a_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_56 = V_11;
							V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_56, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_57 = V_13;
							if (!L_57)
							{
								goto IL_014e_1;
							}
						}
						{
							RuntimeObject* L_58 = V_13;
							NullCheck(L_58);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_58);
						}

IL_014e_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_012f_2;
					}

IL_010e_2:
					{
						// foreach(GameObject g in g2_array) {
						RuntimeObject* L_59 = V_11;
						NullCheck(L_59);
						RuntimeObject* L_60;
						L_60 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_59);
						V_12 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_60, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
						// g1_array.Add(g);
						ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_61 = V_9;
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_12;
						NullCheck(L_61);
						int32_t L_63;
						L_63 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_62);
						// g2_array.Remove(g);
						ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_64 = V_10;
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_12;
						NullCheck(L_64);
						VirtualActionInvoker1< RuntimeObject* >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_64, L_65);
					}

IL_012f_2:
					{
						// foreach(GameObject g in g2_array) {
						RuntimeObject* L_66 = V_11;
						NullCheck(L_66);
						bool L_67;
						L_67 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_66);
						if (L_67)
						{
							goto IL_010e_2;
						}
					}
					{
						goto IL_014f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_014f_1:
			{
				// bondFigures.Remove(g2);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_68 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_3;
				NullCheck(L_68);
				bool L_70;
				L_70 = Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF(L_68, L_69, Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var);
				// bondFigures.Add(g2, g1_index);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_71 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_3;
				int32_t L_73 = V_7;
				NullCheck(L_71);
				Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B(L_71, L_72, L_73, Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
				goto IL_01d6_1;
			}

IL_016c_1:
			{
				// } else if(in1) {
				bool L_74 = V_4;
				if (!L_74)
				{
					goto IL_01a2_1;
				}
			}
			{
				// int g1_index = bondFigures.GetValueOrDefault(g1);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_75 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_2;
				int32_t L_77;
				L_77 = CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084(L_75, L_76, CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var);
				V_14 = L_77;
				// ArrayList g1_array = (ArrayList) figures[g1_index];
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_78 = V_0;
				int32_t L_79 = V_14;
				NullCheck(L_78);
				RuntimeObject* L_80;
				L_80 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_78, L_79);
				// g1_array.Add(g2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_3;
				NullCheck(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_80, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
				int32_t L_82;
				L_82 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_80, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_81);
				// bondFigures.Add(g2, g1_index);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_83 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_3;
				int32_t L_85 = V_14;
				NullCheck(L_83);
				Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B(L_83, L_84, L_85, Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
				goto IL_01d6_1;
			}

IL_01a2_1:
			{
				// } else if(in2) {
				bool L_86 = V_5;
				if (!L_86)
				{
					goto IL_01d6_1;
				}
			}
			{
				// int g2_index = bondFigures.GetValueOrDefault(g2);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_87 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_3;
				int32_t L_89;
				L_89 = CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084(L_87, L_88, CollectionExtensions_GetValueOrDefault_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE20E736BC3A571E1128B11B75851ADC6B6C4B084_RuntimeMethod_var);
				V_15 = L_89;
				// ArrayList g2_array = (ArrayList) figures[g2_index];
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_90 = V_0;
				int32_t L_91 = V_15;
				NullCheck(L_90);
				RuntimeObject* L_92;
				L_92 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_90, L_91);
				// g2_array.Add(g1);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_2;
				NullCheck(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_92, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
				int32_t L_94;
				L_94 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_92, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_93);
				// bondFigures.Add(g1, g2_index);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_95 = __this->___bondFigures_55;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = V_2;
				int32_t L_97 = V_15;
				NullCheck(L_95);
				Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B(L_95, L_96, L_97, Dictionary_2_Add_m5134B74E42D8582CA9443CB7CD4CD203C7F0119B_RuntimeMethod_var);
			}

IL_01d6_1:
			{
				// foreach(Bond bond in bonds) {
				RuntimeObject* L_98 = V_1;
				NullCheck(L_98);
				bool L_99;
				L_99 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_98);
				if (L_99)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_01f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f7:
	{
		// foreach(ArrayList figure in figures) {
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_100 = V_0;
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_100);
		V_1 = L_101;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02e0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_102 = V_1;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_102, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_103 = V_13;
					if (!L_103)
					{
						goto IL_02f3;
					}
				}
				{
					RuntimeObject* L_104 = V_13;
					NullCheck(L_104);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_104);
				}

IL_02f3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02d3_1;
			}

IL_0203_1:
			{
				// foreach(ArrayList figure in figures) {
				RuntimeObject* L_105 = V_1;
				NullCheck(L_105);
				RuntimeObject* L_106;
				L_106 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_105);
				V_16 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_106, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
				// if(figure.Count == 0) continue;
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_107 = V_16;
				NullCheck(L_107);
				int32_t L_108;
				L_108 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_107);
				if (!L_108)
				{
					goto IL_02d3_1;
				}
			}
			{
				// GameObject gameObject = (GameObject)figure[0];
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_109 = V_16;
				NullCheck(L_109);
				RuntimeObject* L_110;
				L_110 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_109, 0);
				V_17 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_110, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
				// switch(figure.Count) {
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_111 = V_16;
				NullCheck(L_111);
				int32_t L_112;
				L_112 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_111);
				V_18 = L_112;
				int32_t L_113 = V_18;
				switch (((int32_t)il2cpp_codegen_subtract(L_113, 2)))
				{
					case 0:
					{
						goto IL_024e_1;
					}
					case 1:
					{
						goto IL_027b_1;
					}
					case 2:
					{
						goto IL_02a8_1;
					}
				}
			}
			{
				goto IL_02d3_1;
			}

IL_024e_1:
			{
				// case 2: one += 1;
				int32_t L_114 = __this->___one_35;
				__this->___one_35 = ((int32_t)il2cpp_codegen_add(L_114, 1));
				// ones.Add(gameObject.transform.position);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_115 = __this->___ones_41;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = V_17;
				NullCheck(L_116);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
				L_117 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_116, NULL);
				NullCheck(L_117);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
				L_118 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_117, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = L_118;
				RuntimeObject* L_120 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_119);
				NullCheck(L_115);
				int32_t L_121;
				L_121 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_115, L_120);
				// break;
				goto IL_02d3_1;
			}

IL_027b_1:
			{
				// case 3: two += 1;
				int32_t L_122 = __this->___two_36;
				__this->___two_36 = ((int32_t)il2cpp_codegen_add(L_122, 1));
				// twos.Add(gameObject.transform.position);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_123 = __this->___twos_42;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = V_17;
				NullCheck(L_124);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
				L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
				NullCheck(L_125);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
				L_126 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_125, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = L_126;
				RuntimeObject* L_128 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_127);
				NullCheck(L_123);
				int32_t L_129;
				L_129 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_123, L_128);
				// break;
				goto IL_02d3_1;
			}

IL_02a8_1:
			{
				// three += 1;
				int32_t L_130 = __this->___three_37;
				__this->___three_37 = ((int32_t)il2cpp_codegen_add(L_130, 1));
				// threes.Add(gameObject.transform.position);
				ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_131 = __this->___threes_43;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = V_17;
				NullCheck(L_132);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
				L_133 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_132, NULL);
				NullCheck(L_133);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
				L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = L_134;
				RuntimeObject* L_136 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_135);
				NullCheck(L_131);
				int32_t L_137;
				L_137 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_131, L_136);
			}

IL_02d3_1:
			{
				// foreach(ArrayList figure in figures) {
				RuntimeObject* L_138 = V_1;
				NullCheck(L_138);
				bool L_139;
				L_139 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_138);
				if (L_139)
				{
					goto IL_0203_1;
				}
			}
			{
				goto IL_02f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02f4:
	{
		// oneBond_Button.text = "Ones : " + one.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_140 = __this->___oneBond_Button_20;
		int32_t* L_141 = (&__this->___one_35);
		String_t* L_142;
		L_142 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_141, NULL);
		String_t* L_143;
		L_143 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDDE279FBAB43FB2F38C54FEF2C17CFE9D377602, L_142, NULL);
		NullCheck(L_140);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_140, L_143);
		// twoBond_Button.text = "Twos : " + two.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_144 = __this->___twoBond_Button_21;
		int32_t* L_145 = (&__this->___two_36);
		String_t* L_146;
		L_146 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_145, NULL);
		String_t* L_147;
		L_147 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral899057FA48A4E0B5FD7A2FB6EB136F9906502253, L_146, NULL);
		NullCheck(L_144);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_144, L_147);
		// threeBond_Button.text = "Three : " + three.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_148 = __this->___threeBond_Button_22;
		int32_t* L_149 = (&__this->___three_37);
		String_t* L_150;
		L_150 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_149, NULL);
		String_t* L_151;
		L_151 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral738F6449BFCE9C5FAAD364729B134557DE65F5C0, L_150, NULL);
		NullCheck(L_148);
		VirtualActionInvoker1< String_t* >::Invoke(103 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_148, L_151);
		// }
		return;
	}
}
// System.Void UI::Slider_Position_Change(UnityEngine.UIElements.ChangeEvent`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Slider_Position_Change_m2B2193EF554AD4D4DBE3D75E87E2D7CCC5F750E6 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (selectedRadioButton) {
		int32_t L_0 = __this->___selectedRadioButton_19;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_008c;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// slicingCube.transform.position = new Vector3(evt.newValue * (float) (BOX_BOUND / 100), BOX_BOUND/2, BOX_BOUND/2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___slicingCube_52;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_4 = ___0_evt;
		NullCheck(L_4);
		float L_5;
		L_5 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_4, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_6 = __this->___BOX_BOUND_32;
		int32_t L_7 = __this->___BOX_BOUND_32;
		int32_t L_8 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_5, ((float)((int32_t)(L_6/((int32_t)100)))))), ((float)((int32_t)(L_7/2))), ((float)((int32_t)(L_8/2))), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// slicingCube.transform.position = new Vector3(BOX_BOUND/2, evt.newValue * (float) (BOX_BOUND / 100), BOX_BOUND/2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___slicingCube_52;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		int32_t L_12 = __this->___BOX_BOUND_32;
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_13 = ___0_evt;
		NullCheck(L_13);
		float L_14;
		L_14 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_13, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_15 = __this->___BOX_BOUND_32;
		int32_t L_16 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)((int32_t)(L_12/2))), ((float)il2cpp_codegen_multiply(L_14, ((float)((int32_t)(L_15/((int32_t)100)))))), ((float)((int32_t)(L_16/2))), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		// break;
		return;
	}

IL_008c:
	{
		// slicingCube.transform.position = new Vector3(evt.newValue * (float) (BOX_BOUND / 100), BOX_BOUND/2, evt.newValue * (float) (BOX_BOUND / 100));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___slicingCube_52;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_20 = ___0_evt;
		NullCheck(L_20);
		float L_21;
		L_21 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_20, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_22 = __this->___BOX_BOUND_32;
		int32_t L_23 = __this->___BOX_BOUND_32;
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_24 = ___0_evt;
		NullCheck(L_24);
		float L_25;
		L_25 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_24, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_26 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), ((float)il2cpp_codegen_multiply(L_21, ((float)((int32_t)(L_22/((int32_t)100)))))), ((float)((int32_t)(L_23/2))), ((float)il2cpp_codegen_multiply(L_25, ((float)((int32_t)(L_26/((int32_t)100)))))), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_27, NULL);
		// }
		return;
	}
}
// System.Void UI::Slider_Width_Change(UnityEngine.UIElements.ChangeEvent`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Slider_Width_Change_mDFAC317E338421076C4FF50BE533A817AA0175FD (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (selectedRadioButton) {
		int32_t L_0 = __this->___selectedRadioButton_19;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0084;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// slicingCube.transform.localScale = new Vector3(evt.newValue * (float) (BOX_BOUND / 100), BOX_BOUND, BOX_BOUND);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___slicingCube_52;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_4 = ___0_evt;
		NullCheck(L_4);
		float L_5;
		L_5 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_4, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_6 = __this->___BOX_BOUND_32;
		int32_t L_7 = __this->___BOX_BOUND_32;
		int32_t L_8 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_5, ((float)((int32_t)(L_6/((int32_t)100)))))), ((float)L_7), ((float)L_8), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_9, NULL);
		// break;
		return;
	}

IL_004f:
	{
		// slicingCube.transform.localScale = new Vector3(BOX_BOUND, evt.newValue * (float) (BOX_BOUND / 100), BOX_BOUND);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___slicingCube_52;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		int32_t L_12 = __this->___BOX_BOUND_32;
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_13 = ___0_evt;
		NullCheck(L_13);
		float L_14;
		L_14 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_13, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_15 = __this->___BOX_BOUND_32;
		int32_t L_16 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)L_12), ((float)il2cpp_codegen_multiply(L_14, ((float)((int32_t)(L_15/((int32_t)100)))))), ((float)L_16), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_17, NULL);
		// break;
		return;
	}

IL_0084:
	{
		// slicingCube.transform.localScale = new Vector3(BOX_BOUND, BOX_BOUND, evt.newValue * (float) (BOX_BOUND / 100));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___slicingCube_52;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		int32_t L_20 = __this->___BOX_BOUND_32;
		int32_t L_21 = __this->___BOX_BOUND_32;
		ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* L_22 = ___0_evt;
		NullCheck(L_22);
		float L_23;
		L_23 = ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_inline(L_22, ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_RuntimeMethod_var);
		int32_t L_24 = __this->___BOX_BOUND_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)L_20), ((float)L_21), ((float)il2cpp_codegen_multiply(L_23, ((float)((int32_t)(L_24/((int32_t)100)))))), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_25, NULL);
		// }
		return;
	}
}
// System.Void UI::escape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_escape_mA9CBCA24D9E05FC456FBFE1FB563069A228349CB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void UI::turnOffVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_turnOffVisibility_m1CE0BDCE02BB3FB09E8999F566800C9026AC5800 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// isVisible = false;
		__this->___isVisible_51 = (bool)0;
		// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___gameObjects_28;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), (bool)0, NULL);
			}

IL_0026_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UI::turnOnVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_turnOnVisibility_mDB69F858EFCDF6682D55C26FA1084FFEF5444CC5 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// isVisible = true;
		__this->___isVisible_51 = (bool)1;
		// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___gameObjects_28;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_6, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), (bool)1, NULL);
			}

IL_0026_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UI::toggleVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleVisibility_m27A99E9D28B77F2A9139442AFBDC024236A17875 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if(isVisible) {
		bool L_0 = __this->___isVisible_51;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// isVisible = false;
		__this->___isVisible_51 = (bool)0;
		// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->___gameObjects_28;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_001d_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_7, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_7, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), (bool)0, NULL);
			}

IL_002e_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(false);
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// isVisible = true;
		__this->___isVisible_51 = (bool)1;
		// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = __this->___gameObjects_28;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_10);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_13 = V_1;
					if (!L_13)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_14 = V_1;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0089:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_005e_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_16, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_16, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), (bool)1, NULL);
			}

IL_006f_1:
			{
				// foreach(GameObject gameObject in gameObjects) gameObject.SetActive(true);
				RuntimeObject* L_17 = V_0;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void UI::toggleLerpMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_toggleLerpMode_mEC299F67510A6730046BC0F0B8548ACED223B36C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// lerpMode = !lerpMode;
		bool L_0 = __this->___lerpMode_48;
		__this->___lerpMode_48 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void UI::goOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goOne_m48A006CA358E6902D4C2802DB1BCB5AA9B15753C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject mainCamera = GameObject.Find("Main Camera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		// mainCamera.transform.position = (Vector3) ones[oneStep];
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->___ones_41;
		int32_t L_3 = __this->___oneStep_38;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// oneStep += 1;
		int32_t L_5 = __this->___oneStep_38;
		__this->___oneStep_38 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void UI::goTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goTwo_mB713711FFF8C7CC5FE7482E3B73EDCA7A108C50F (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject mainCamera = GameObject.Find("Main Camera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		// mainCamera.transform.position = (Vector3) twos[twoStep];
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->___twos_42;
		int32_t L_3 = __this->___twoStep_39;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// twoStep += 1;
		int32_t L_5 = __this->___twoStep_39;
		__this->___twoStep_39 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void UI::goThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_goThree_mE7D03FE4EB987B4F25309824C4902A6ACA4F7739 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject mainCamera = GameObject.Find("Main Camera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		// mainCamera.transform.position = (Vector3) threes[threeStep];
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->___threes_43;
		int32_t L_3 = __this->___threeStep_40;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// threeStep += 1;
		int32_t L_5 = __this->___threeStep_40;
		__this->___threeStep_40 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void UI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI__ctor_m177FCA8E7C6A148BFF6FED9F758B3396F25FDFBB (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArrayList geoData = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->___geoData_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoData_27), (void*)L_0);
		// public ArrayList gameObjects = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_1, NULL);
		__this->___gameObjects_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjects_28), (void*)L_1);
		// public ArrayList molecules = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_2, NULL);
		__this->___molecules_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___molecules_29), (void*)L_2);
		// private ArrayList bonds = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_3, NULL);
		__this->___bonds_30 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bonds_30), (void*)L_3);
		// int BOX_BOUND = 2000;
		__this->___BOX_BOUND_32 = ((int32_t)2000);
		// ArrayList ones = new ArrayList(), twos = new ArrayList(), threes = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_4, NULL);
		__this->___ones_41 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ones_41), (void*)L_4);
		// ArrayList ones = new ArrayList(), twos = new ArrayList(), threes = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_5, NULL);
		__this->___twos_42 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___twos_42), (void*)L_5);
		// ArrayList ones = new ArrayList(), twos = new ArrayList(), threes = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_6, NULL);
		__this->___threes_43 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threes_43), (void*)L_6);
		// private int fastMode = 10;
		__this->___fastMode_44 = ((int32_t)10);
		// private float lerpFactor = 0.1f;
		__this->___lerpFactor_45 = (0.100000001f);
		// private bool lerpMode = true;
		__this->___lerpMode_48 = (bool)1;
		// private bool isVisible = true;
		__this->___isVisible_51 = (bool)1;
		// ArrayList tagged_GameObjects = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_7, NULL);
		__this->___tagged_GameObjects_56 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagged_GameObjects_56), (void*)L_7);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_0_m69FD57618B269D70BB375590B0CD069ABBD71C7B (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// openslice_Button.clicked += () => openSlice();
		UI_openSlice_m9CB02E2D5446C51B7AC56B7DFD4AE04BB029D3F0(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_1_mDC344CE62E1B106E5361958B9BD1F9B32D8CA287 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// undo_Button.clicked += () => undo();
		UI_undo_mA690A87E9A5757878E829393A3DB23472DC7B611(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_2_m00326B157A070286731840720C78BDCE9549CEEC (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// slice_Button.clicked += () => slice();
		UI_slice_mA407B30BE3D680CA1956B947AD0846530355104F(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_3_m26CD92D98EAD354083CC0C6C0F9D6A77885DD6ED (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// bind_Button.clicked += () => bind();
		UI_bind_mB74964E816DD162A79E29337202BB243DFB04CF2(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_4_m0AAAFD99E67C0CD392A3E8A68E22BC581200BE6D (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// escape_Button.clicked += () => escape();
		UI_escape_mA9CBCA24D9E05FC456FBFE1FB563069A228349CB(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_5_m0688AC0F4F31B8A6EE00CCD33ED34480CD0784D8 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// analysis_Button.clicked += () => analyse();
		UI_analyse_mB9FB11BC4407E57FC942687D50FEA9A015D87323(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_6_m94634E37AD49DDA3620E0F18735491F8AA08F3B3 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// oneBond_Button.clicked += () => goOne();
		UI_goOne_m48A006CA358E6902D4C2802DB1BCB5AA9B15753C(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_7_m1F3787C049AA5F39EDA2AA6A86BE1AE0FDD4FF11 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// twoBond_Button.clicked += () => goTwo();
		UI_goTwo_mB713711FFF8C7CC5FE7482E3B73EDCA7A108C50F(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_8_m2172F330256D23B9FF10D5D3B3C15F8B4BC55D4E (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, const RuntimeMethod* method) 
{
	{
		// threeBond_Button.clicked += () => goThree();
		UI_goThree_mE7D03FE4EB987B4F25309824C4902A6ACA4F7739(__this, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_9(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_9_m2018F2A8F6968026E5F3850A67F9461A3AAE8547 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, const RuntimeMethod* method) 
{
	{
		// radiobutton_X.RegisterValueChangedCallback(evt => OnRadioGroupChanged(0));
		UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE_inline(__this, 0, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_10(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_10_m4A8E44DE472DD0979F36DD63DC82DDA18F18A4F7 (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, const RuntimeMethod* method) 
{
	{
		// radiobutton_Y.RegisterValueChangedCallback(evt => OnRadioGroupChanged(1));
		UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE_inline(__this, 1, NULL);
		return;
	}
}
// System.Void UI::<OnEnable>b__19_11(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_U3COnEnableU3Eb__19_11_m91FF4F5B1F6E49397598DE098F78FBC4946AE26C (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, const RuntimeMethod* method) 
{
	{
		// radiobutton_Z.RegisterValueChangedCallback(evt => OnRadioGroupChanged(2));
		UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE_inline(__this, 2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI/Molecule::.ctor(System.String,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Molecule__ctor_m7BB6D6DE709002EF4FFE7531319BCB7F537B977C (Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* __this, String_t* ___0_name, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_hexColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, float> bindingdistance = new Dictionary<string, float>();
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_0 = (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*)il2cpp_codegen_object_new(Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED(L_0, Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		__this->___bindingdistance_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bindingdistance_3), (void*)L_0);
		// public Molecule(string name, float radius, Color hexColor) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_1 = ___0_name;
		__this->___name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_1);
		// this.radius = radius;
		float L_2 = ___1_radius;
		__this->___radius_1 = L_2;
		// this.hexColor = hexColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_hexColor;
		__this->___hexColor_2 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI/Bond::.ctor(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bond__ctor_mE9E3168057F2662F5ADD78D49D356DB50819ABC6 (Bond_tB9B39E768E2824236B746799DD3D2F26963B366C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_bond, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_gameObject2, const RuntimeMethod* method) 
{
	{
		// public Bond(GameObject bond, GameObject gameObject, GameObject gameObject2) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.gameObject = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_gameObject;
		__this->___gameObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_1), (void*)L_0);
		// this.gameObject2 = gameObject2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___2_gameObject2;
		__this->___gameObject2_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject2_2), (void*)L_1);
		// this.bond = bond;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_bond;
		__this->___bond_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bond_0), (void*)L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m42C23ABF17ECFA7B6C985DEDE205066F6404B877 (U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UI/<>c__DisplayClass20_0::<initToggel>b__0(UnityEngine.UIElements.ChangeEvent`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CinitToggelU3Eb__0_m1B8BB00D635A263A669A6528680B86D6CF4A215F (U3CU3Ec__DisplayClass20_0_t9686250549874F117CCE1436834D369A5AEF23D3* __this, ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* ___0_evt, const RuntimeMethod* method) 
{
	{
		// toggle.RegisterValueChangedCallback(evt => OnToggleValueChanged(evt, toggle.value, molecule.name));
		UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* L_0 = __this->___U3CU3E4__this_0;
		ChangeEvent_1_t2AA4161DCA648D276CFE726DD08B0D55FA799D4B* L_1 = ___0_evt;
		Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C* L_2 = __this->___toggle_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(101 /* TValueType UnityEngine.UIElements.BaseField`1<System.Boolean>::get_value() */, L_2);
		Molecule_tB5FC91C0CEEEB08E44B8E906F7CCA8C5A40F9BFA* L_4 = __this->___molecule_2;
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		NullCheck(L_0);
		UI_OnToggleValueChanged_m0A34C5C5AA11CF56ED5CABAD3B0676BB9E81A6DB(L_0, L_1, L_3, L_5, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UI_OnRadioGroupChanged_m49E260404AB53DA56F9FEF070422BFBE788FDEDE_inline (UI_t16DF663EF61FBCB2402111DB12E3091C775B4539* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// selectedRadioButton = index;
		int32_t L_0 = ___0_index;
		__this->___selectedRadioButton_19 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m8822DA51C6512AC6B5E66D0D6139A981EFAD0DD1_gshared_inline (Enumerator_t48C87AC7B90E312E39C6BA4AC2D90D98B7E43A79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ChangeEvent_1_get_newValue_m4C3DDEEB0E2CE7F1A413E3203D8D94F0F2B57808_gshared_inline (ChangeEvent_1_tAB4351D85EACEBEE9040F90F3A0430C076BE372E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___U3CnewValueU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
