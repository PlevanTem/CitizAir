#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Point[]
struct PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameControlleBackupr
struct GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28;
// Pointer
struct Pointer_t1B9D3F65B0F1F094124F5B4ADABF110931C3D9E2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// GameControlleBackupr/<GenerateMeshModel>d__14
struct U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D;
// GameController/<GenerateMeshModel>d__16
struct U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral09D9DCC98BA35FE5FC1C329D95703D4C05BB8EC2;
IL2CPP_EXTERN_C String_t* _stringLiteral105C054424B01CA7570E9CCB66D35EA72B8AF382;
IL2CPP_EXTERN_C String_t* _stringLiteral15FE3FEDD3D11E1DC36394B625A199395BCE688F;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED53C90EE100F41E188E1C472D50502BA8E5949;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2947A2FD34628D0F7BB0152512C4B88D541E52B0;
IL2CPP_EXTERN_C String_t* _stringLiteral29DBB6DE944F1E24C747AE175B1F362898DC4710;
IL2CPP_EXTERN_C String_t* _stringLiteral33404F65975F0B52C3AA54B1AC27964F659501D1;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C23058E0F523C9D446D11523BBE625522FE9F14;
IL2CPP_EXTERN_C String_t* _stringLiteral438517EF890BCB22429748935B1617C0BB05B4D9;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1FB33AE15562FC95F4C29BEDBE4A5CC81AEC96;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral547DEC8B4FC04540DC45D846265D968D20EABD31;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB286037DE77843AFE162093AFEB535D94A863C;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D;
IL2CPP_EXTERN_C String_t* _stringLiteral65552504B13F21E3F071BDA050A25B3209BCE8FE;
IL2CPP_EXTERN_C String_t* _stringLiteral68FDD062FB2ABAE4AC3F10B120BDA042A9D35958;
IL2CPP_EXTERN_C String_t* _stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2;
IL2CPP_EXTERN_C String_t* _stringLiteral75A4AC320A0043E6C0216E072DB3F74B71AA7792;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3F817739A5DE0E62FF8837C11FF3A8B812E274;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral97ACC6E3C57285B25935D27B4D0244B903D1A1F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1EF409691D94512EE1F3421EB4D49BF778C29E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F683005E8FC2DE14D566414D191F58EA35ABEBF;
IL2CPP_EXTERN_C String_t* _stringLiteralA66DF5AB45A9D6E451C74DE16A69818CA614B4B4;
IL2CPP_EXTERN_C String_t* _stringLiteralA94ABED0452AAEBFEDBA59C94E3234DA6F0BEB66;
IL2CPP_EXTERN_C String_t* _stringLiteralAD606231D7CB0C8F74A10A79395AF75F66F84503;
IL2CPP_EXTERN_C String_t* _stringLiteralADACB51F990ED04B91D3CFC7684A977F52FB326B;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706;
IL2CPP_EXTERN_C String_t* _stringLiteralB6A7F149A4A57942CA33DC715D5D8110E90D071F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3B473C6EA82E1FF65E4BB1AB9465E33AA86C21;
IL2CPP_EXTERN_C String_t* _stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A1E35CE7B5E32EA25F3CB9096077A76AFE60F3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A;
IL2CPP_EXTERN_C String_t* _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF40D5BE650B2E93C7D364ACA9F45552013AFB0D6;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m1489F3D80C3FAD738803B0BF60191CAC88FEAC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDCB17862B496888E185379734D9A3349C683BE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m17B4535D501AF018ED1771884E8F8B8ECC8000FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m619E55CB88757D0C2CBB98297CB628762B7AC141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDBC0DE5AB9960055FFE6FDC70402968D2A333D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateMeshModelU3Ed__14_System_Collections_IEnumerator_Reset_m4DFF987D200807BA326E8556A444FD8FC7E59C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateMeshModelU3Ed__16_System_Collections_IEnumerator_Reset_m13A6224493A31BBCF0F33DED14B33CF9DB20BF98_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___entries_1)); }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___keys_7)); }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___values_8)); }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____items_1)); }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____items_1)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields, ____emptyArray_5)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameControlleBackupr/<GenerateMeshModel>d__14
struct U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D  : public RuntimeObject
{
public:
	// System.Int32 GameControlleBackupr/<GenerateMeshModel>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameControlleBackupr/<GenerateMeshModel>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single GameControlleBackupr/<GenerateMeshModel>d__14::time
	float ___time_2;
	// GameControlleBackupr GameControlleBackupr/<GenerateMeshModel>d__14::<>4__this
	GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * ___U3CU3E4__this_3;
	// System.String GameControlleBackupr/<GenerateMeshModel>d__14::filename
	String_t* ___filename_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D, ___U3CU3E4__this_3)); }
	inline GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_filename_4() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D, ___filename_4)); }
	inline String_t* get_filename_4() const { return ___filename_4; }
	inline String_t** get_address_of_filename_4() { return &___filename_4; }
	inline void set_filename_4(String_t* value)
	{
		___filename_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_4), (void*)value);
	}
};


// GameController/<GenerateMeshModel>d__16
struct U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B  : public RuntimeObject
{
public:
	// System.Int32 GameController/<GenerateMeshModel>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameController/<GenerateMeshModel>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single GameController/<GenerateMeshModel>d__16::time
	float ___time_2;
	// GameController GameController/<GenerateMeshModel>d__16::<>4__this
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___U3CU3E4__this_3;
	// System.String GameController/<GenerateMeshModel>d__16::filename
	String_t* ___filename_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B, ___U3CU3E4__this_3)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_filename_4() { return static_cast<int32_t>(offsetof(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B, ___filename_4)); }
	inline String_t* get_filename_4() const { return ___filename_4; }
	inline String_t** get_address_of_filename_4() { return &___filename_4; }
	inline void set_filename_4(String_t* value)
	{
		___filename_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_4), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
struct KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346, ___value_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_value_1() const { return ___value_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>
struct Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42, ___dictionary_0)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42, ___current_3)); }
	inline KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28  : public RuntimeObject
{
public:
	// System.String Point::id
	String_t* ___id_0;
	// UnityEngine.Vector3 Point::v
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_v_1() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___v_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_v_1() const { return ___v_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_v_1() { return &___v_1; }
	inline void set_v_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___v_1 = value;
	}
};


// Pointer
struct Pointer_t1B9D3F65B0F1F094124F5B4ADABF110931C3D9E2  : public RuntimeObject
{
public:
	// System.String Pointer::id
	String_t* ___id_0;
	// UnityEngine.Vector3 Pointer::v
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Pointer_t1B9D3F65B0F1F094124F5B4ADABF110931C3D9E2, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_v_1() { return static_cast<int32_t>(offsetof(Pointer_t1B9D3F65B0F1F094124F5B4ADABF110931C3D9E2, ___v_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_v_1() const { return ___v_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_v_1() { return &___v_1; }
	inline void set_v_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___v_1 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameControlleBackupr
struct GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String GameControlleBackupr::path
	String_t* ___path_4;
	// System.Collections.Hashtable GameControlleBackupr::points
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___points_5;
	// System.Collections.Hashtable GameControlleBackupr::file_vertices
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___file_vertices_6;
	// System.Collections.Hashtable GameControlleBackupr::file_indices
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___file_indices_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> GameControlleBackupr::meshes
	List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___meshes_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GameControlleBackupr::vertices
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices_9;
	// System.Collections.Generic.List`1<Point> GameControlleBackupr::verticesPointArr
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___verticesPointArr_10;
	// System.Collections.Generic.List`1<UnityEngine.Color> GameControlleBackupr::colors
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors_11;
	// UnityEngine.Material GameControlleBackupr::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_12;
	// UnityEngine.Vector3 GameControlleBackupr::originPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originPos_13;
	// System.String GameControlleBackupr::file_name
	String_t* ___file_name_14;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___points_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_points_5() const { return ___points_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_5), (void*)value);
	}

	inline static int32_t get_offset_of_file_vertices_6() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___file_vertices_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_file_vertices_6() const { return ___file_vertices_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_file_vertices_6() { return &___file_vertices_6; }
	inline void set_file_vertices_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___file_vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_file_indices_7() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___file_indices_7)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_file_indices_7() const { return ___file_indices_7; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_file_indices_7() { return &___file_indices_7; }
	inline void set_file_indices_7(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___file_indices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_indices_7), (void*)value);
	}

	inline static int32_t get_offset_of_meshes_8() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___meshes_8)); }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * get_meshes_8() const { return ___meshes_8; }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 ** get_address_of_meshes_8() { return &___meshes_8; }
	inline void set_meshes_8(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * value)
	{
		___meshes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_8), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_9() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___vertices_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_vertices_9() const { return ___vertices_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_vertices_9() { return &___vertices_9; }
	inline void set_vertices_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___vertices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_9), (void*)value);
	}

	inline static int32_t get_offset_of_verticesPointArr_10() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___verticesPointArr_10)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get_verticesPointArr_10() const { return ___verticesPointArr_10; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of_verticesPointArr_10() { return &___verticesPointArr_10; }
	inline void set_verticesPointArr_10(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		___verticesPointArr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticesPointArr_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors_11() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___colors_11)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_colors_11() const { return ___colors_11; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_colors_11() { return &___colors_11; }
	inline void set_colors_11(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___colors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_11), (void*)value);
	}

	inline static int32_t get_offset_of_mat_12() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___mat_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_12() const { return ___mat_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_12() { return &___mat_12; }
	inline void set_mat_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_12), (void*)value);
	}

	inline static int32_t get_offset_of_originPos_13() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___originPos_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originPos_13() const { return ___originPos_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originPos_13() { return &___originPos_13; }
	inline void set_originPos_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originPos_13 = value;
	}

	inline static int32_t get_offset_of_file_name_14() { return static_cast<int32_t>(offsetof(GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF, ___file_name_14)); }
	inline String_t* get_file_name_14() const { return ___file_name_14; }
	inline String_t** get_address_of_file_name_14() { return &___file_name_14; }
	inline void set_file_name_14(String_t* value)
	{
		___file_name_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_name_14), (void*)value);
	}
};


// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String GameController::path
	String_t* ___path_4;
	// System.Collections.Hashtable GameController::points
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___points_5;
	// System.Collections.Hashtable GameController::file_vertices
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___file_vertices_6;
	// System.Collections.Hashtable GameController::file_indices
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___file_indices_7;
	// System.Collections.Hashtable GameController::mesh_color
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___mesh_color_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> GameController::meshes
	List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___meshes_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GameController::vertices
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices_10;
	// System.Collections.Generic.List`1<Point> GameController::verticesPointArr
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___verticesPointArr_11;
	// System.Collections.Generic.List`1<UnityEngine.Color> GameController::colors
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> GameController::objs
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___objs_13;
	// UnityEngine.Material GameController::mat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat_14;
	// UIController GameController::uIController
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ___uIController_15;
	// UnityEngine.Vector3 GameController::originPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originPos_16;
	// System.String GameController::file_name
	String_t* ___file_name_17;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___points_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_points_5() const { return ___points_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_5), (void*)value);
	}

	inline static int32_t get_offset_of_file_vertices_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___file_vertices_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_file_vertices_6() const { return ___file_vertices_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_file_vertices_6() { return &___file_vertices_6; }
	inline void set_file_vertices_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___file_vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_file_indices_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___file_indices_7)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_file_indices_7() const { return ___file_indices_7; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_file_indices_7() { return &___file_indices_7; }
	inline void set_file_indices_7(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___file_indices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_indices_7), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_color_8() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___mesh_color_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_mesh_color_8() const { return ___mesh_color_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_mesh_color_8() { return &___mesh_color_8; }
	inline void set_mesh_color_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___mesh_color_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_color_8), (void*)value);
	}

	inline static int32_t get_offset_of_meshes_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___meshes_9)); }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * get_meshes_9() const { return ___meshes_9; }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 ** get_address_of_meshes_9() { return &___meshes_9; }
	inline void set_meshes_9(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * value)
	{
		___meshes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_9), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___vertices_10)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_vertices_10() const { return ___vertices_10; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_vertices_10() { return &___vertices_10; }
	inline void set_vertices_10(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___vertices_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_10), (void*)value);
	}

	inline static int32_t get_offset_of_verticesPointArr_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___verticesPointArr_11)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get_verticesPointArr_11() const { return ___verticesPointArr_11; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of_verticesPointArr_11() { return &___verticesPointArr_11; }
	inline void set_verticesPointArr_11(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		___verticesPointArr_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticesPointArr_11), (void*)value);
	}

	inline static int32_t get_offset_of_colors_12() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___colors_12)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_colors_12() const { return ___colors_12; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_colors_12() { return &___colors_12; }
	inline void set_colors_12(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___colors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_12), (void*)value);
	}

	inline static int32_t get_offset_of_objs_13() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___objs_13)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_objs_13() const { return ___objs_13; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_objs_13() { return &___objs_13; }
	inline void set_objs_13(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___objs_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objs_13), (void*)value);
	}

	inline static int32_t get_offset_of_mat_14() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___mat_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mat_14() const { return ___mat_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mat_14() { return &___mat_14; }
	inline void set_mat_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mat_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_14), (void*)value);
	}

	inline static int32_t get_offset_of_uIController_15() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___uIController_15)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get_uIController_15() const { return ___uIController_15; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of_uIController_15() { return &___uIController_15; }
	inline void set_uIController_15(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		___uIController_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uIController_15), (void*)value);
	}

	inline static int32_t get_offset_of_originPos_16() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___originPos_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originPos_16() const { return ___originPos_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originPos_16() { return &___originPos_16; }
	inline void set_originPos_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originPos_16 = value;
	}

	inline static int32_t get_offset_of_file_name_17() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___file_name_17)); }
	inline String_t* get_file_name_17() const { return ___file_name_17; }
	inline String_t** get_address_of_file_name_17() { return &___file_name_17; }
	inline void set_file_name_17(String_t* value)
	{
		___file_name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_name_17), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIController::pointer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pointer_4;
	// UnityEngine.GameObject UIController::tips
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tips_5;
	// System.Int32 UIController::CurrentFrame
	int32_t ___CurrentFrame_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIController::Models
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___Models_7;
	// UnityEngine.UI.Slider UIController::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_8;
	// UnityEngine.UI.Text UIController::loadingTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___loadingTxt_9;
	// System.Int32 UIController::total
	int32_t ___total_10;
	// System.Int32 UIController::current
	int32_t ___current_11;
	// UnityEngine.GameObject UIController::LoadingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LoadingPanel_12;
	// UnityEngine.UI.InputField UIController::moveOffset
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___moveOffset_13;
	// UnityEngine.UI.Slider UIController::rotXSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___rotXSlider_14;
	// UnityEngine.UI.Slider UIController::rotYSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___rotYSlider_15;
	// UnityEngine.UI.Slider UIController::rotZSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___rotZSlider_16;
	// UnityEngine.UI.Slider UIController::scaleSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___scaleSlider_17;
	// System.Single UIController::curScale
	float ___curScale_18;

public:
	inline static int32_t get_offset_of_pointer_4() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___pointer_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pointer_4() const { return ___pointer_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pointer_4() { return &___pointer_4; }
	inline void set_pointer_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pointer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_4), (void*)value);
	}

	inline static int32_t get_offset_of_tips_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___tips_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tips_5() const { return ___tips_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tips_5() { return &___tips_5; }
	inline void set_tips_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tips_5), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentFrame_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___CurrentFrame_6)); }
	inline int32_t get_CurrentFrame_6() const { return ___CurrentFrame_6; }
	inline int32_t* get_address_of_CurrentFrame_6() { return &___CurrentFrame_6; }
	inline void set_CurrentFrame_6(int32_t value)
	{
		___CurrentFrame_6 = value;
	}

	inline static int32_t get_offset_of_Models_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___Models_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_Models_7() const { return ___Models_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_Models_7() { return &___Models_7; }
	inline void set_Models_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___Models_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Models_7), (void*)value);
	}

	inline static int32_t get_offset_of_slider_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___slider_8)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_8() const { return ___slider_8; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_8() { return &___slider_8; }
	inline void set_slider_8(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_8), (void*)value);
	}

	inline static int32_t get_offset_of_loadingTxt_9() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___loadingTxt_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_loadingTxt_9() const { return ___loadingTxt_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_loadingTxt_9() { return &___loadingTxt_9; }
	inline void set_loadingTxt_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___loadingTxt_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingTxt_9), (void*)value);
	}

	inline static int32_t get_offset_of_total_10() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___total_10)); }
	inline int32_t get_total_10() const { return ___total_10; }
	inline int32_t* get_address_of_total_10() { return &___total_10; }
	inline void set_total_10(int32_t value)
	{
		___total_10 = value;
	}

	inline static int32_t get_offset_of_current_11() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___current_11)); }
	inline int32_t get_current_11() const { return ___current_11; }
	inline int32_t* get_address_of_current_11() { return &___current_11; }
	inline void set_current_11(int32_t value)
	{
		___current_11 = value;
	}

	inline static int32_t get_offset_of_LoadingPanel_12() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___LoadingPanel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LoadingPanel_12() const { return ___LoadingPanel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LoadingPanel_12() { return &___LoadingPanel_12; }
	inline void set_LoadingPanel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LoadingPanel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingPanel_12), (void*)value);
	}

	inline static int32_t get_offset_of_moveOffset_13() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___moveOffset_13)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_moveOffset_13() const { return ___moveOffset_13; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_moveOffset_13() { return &___moveOffset_13; }
	inline void set_moveOffset_13(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___moveOffset_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveOffset_13), (void*)value);
	}

	inline static int32_t get_offset_of_rotXSlider_14() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___rotXSlider_14)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_rotXSlider_14() const { return ___rotXSlider_14; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_rotXSlider_14() { return &___rotXSlider_14; }
	inline void set_rotXSlider_14(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___rotXSlider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotXSlider_14), (void*)value);
	}

	inline static int32_t get_offset_of_rotYSlider_15() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___rotYSlider_15)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_rotYSlider_15() const { return ___rotYSlider_15; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_rotYSlider_15() { return &___rotYSlider_15; }
	inline void set_rotYSlider_15(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___rotYSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotYSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_rotZSlider_16() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___rotZSlider_16)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_rotZSlider_16() const { return ___rotZSlider_16; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_rotZSlider_16() { return &___rotZSlider_16; }
	inline void set_rotZSlider_16(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___rotZSlider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotZSlider_16), (void*)value);
	}

	inline static int32_t get_offset_of_scaleSlider_17() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___scaleSlider_17)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_scaleSlider_17() const { return ___scaleSlider_17; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_scaleSlider_17() { return &___scaleSlider_17; }
	inline void set_scaleSlider_17(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___scaleSlider_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleSlider_17), (void*)value);
	}

	inline static int32_t get_offset_of_curScale_18() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___curScale_18)); }
	inline float get_curScale_18() const { return ___curScale_18; }
	inline float* get_address_of_curScale_18() { return &___curScale_18; }
	inline void set_curScale_18(float value)
	{
		___curScale_18 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UIController>()
inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void GameControlleBackupr::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_playAnimation_mADDC098CD6631903AB70A5E4A35D1C6E48FDF0F2 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameControlleBackupr::GenerateMeshModel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, String_t* ___filename0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameControlleBackupr/<GenerateMeshModel>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__14__ctor_m199760DB293DB10A813FB2C4FCAA458806690E67 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC (String_t* ___path0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD (String_t* __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0)
inline void List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2 (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7423A417FF831176F417E85141B0A56B11051913 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Point>::Add(!0)
inline void List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
inline void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared)(__this, ___item0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameControlleBackupr::ResetModelPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_ResetModelPosition_m6010B8D11EBE9B9475A9D0CB370327B72C5AC811 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 GameControlleBackupr::getDiffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameControlleBackupr_getDiffer_m095B74B6F17D30C85C7D26D53B5B4CC8B4D1245F (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Item(System.Int32)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Count()
inline int32_t List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateTangents_m7FFF420167166E54C34D57E4E121BD4775B275E6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91 (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor()
inline void List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618 (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Point>::.ctor()
inline void List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameController::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_playAnimation_m35343FC338FAE00A20C00EBE15CE7181E38D8FEE (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameController::GenerateMeshModel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, String_t* ___filename0, float ___time1, const RuntimeMethod* method);
// System.Void GameController/<GenerateMeshModel>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__16__ctor_m7A42B99DB1DB5BC295F9F5180711FA0765702B95 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameController::ResetModelPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ResetModelPosition_mC615818AEBCD4FDFDC063EAC92FA500EA519255D (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 GameController::getDiffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameController_getDiffer_m3D566811B1EA17985E372D29B1D11A570C7D0BD6 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___tag0, String_t* ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UIController::showModel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showModel_mBF2EE1CFE4D20D7E33DBF5351975743A183ADDA1 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void GameControlleBackupr::ReadTxt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_ReadTxt_m61D66DB897542104FC07629BC2CD0200065892FD (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void GameControlleBackupr::geneMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_geneMesh_mE2B4CBE112CF61D4236D5A1FAF47F5950C567ACA (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void GameController::ReadTxt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ReadTxt_m25E9FFD0EC8F50666519BE46E60204CFB7A623FD (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void GameController::geneMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_geneMesh_mBE2140334EDDAD1EF300D3D3FF3F2499D56E7053 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42  Dictionary_2_GetEnumerator_m1489F3D80C3FAD738803B0BF60191CAC88FEAC70 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42  (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  Enumerator_get_Current_m619E55CB88757D0C2CBB98297CB628762B7AC141_inline (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  (*) (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>::get_Value()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * KeyValuePair_2_get_Value_mDBC0DE5AB9960055FFE6FDC70402968D2A333D1D_inline (KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m17B4535D501AF018ED1771884E8F8B8ECC8000FA (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mDCB17862B496888E185379734D9A3349C683BE8D (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void GameControlleBackupr::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_Awake_mB48E1AA3D0DCDA87F329ADDE565069B0F01EBBA7 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Canvas").GetComponent<UIController>().pointer = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_1;
		L_1 = GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C(L_0, /*hidden argument*/GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_pointer_4(L_2);
		// playAnimation();
		GameControlleBackupr_playAnimation_mADDC098CD6631903AB70A5E4A35D1C6E48FDF0F2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameControlleBackupr::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_OnEnable_mB3576C1FF99DC8D240D6DAF543A2559F27FB2D7D (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameControlleBackupr::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_playAnimation_mADDC098CD6631903AB70A5E4A35D1C6E48FDF0F2 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D9DCC98BA35FE5FC1C329D95703D4C05BB8EC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FE3FEDD3D11E1DC36394B625A199395BCE688F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED53C90EE100F41E188E1C472D50502BA8E5949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2947A2FD34628D0F7BB0152512C4B88D541E52B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33404F65975F0B52C3AA54B1AC27964F659501D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C23058E0F523C9D446D11523BBE625522FE9F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1FB33AE15562FC95F4C29BEDBE4A5CC81AEC96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547DEC8B4FC04540DC45D846265D968D20EABD31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB286037DE77843AFE162093AFEB535D94A863C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65552504B13F21E3F071BDA050A25B3209BCE8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75A4AC320A0043E6C0216E072DB3F74B71AA7792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F817739A5DE0E62FF8837C11FF3A8B812E274);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97ACC6E3C57285B25935D27B4D0244B903D1A1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1EF409691D94512EE1F3421EB4D49BF778C29E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA66DF5AB45A9D6E451C74DE16A69818CA614B4B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD606231D7CB0C8F74A10A79395AF75F66F84503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADACB51F990ED04B91D3CFC7684A977F52FB326B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A1E35CE7B5E32EA25F3CB9096077A76AFE60F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = new Material(Shader.Find("Standard"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_mat_12(L_1);
		// StartCoroutine(GenerateMeshModel("0ms.k", 0.000f));
		RuntimeObject* L_2;
		L_2 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, (0.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("8ms.k", 0.008f));
		RuntimeObject* L_4;
		L_4 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral547DEC8B4FC04540DC45D846265D968D20EABD31, (0.00800000038f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("16ms.k", 0.016f));
		RuntimeObject* L_6;
		L_6 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral3C23058E0F523C9D446D11523BBE625522FE9F14, (0.0160000008f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("24ms.k", 0.024f));
		RuntimeObject* L_8;
		L_8 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral09D9DCC98BA35FE5FC1C329D95703D4C05BB8EC2, (0.0240000002f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("32ms.k", 0.032f));
		RuntimeObject* L_10;
		L_10 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral5BB286037DE77843AFE162093AFEB535D94A863C, (0.0320000015f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("40ms.k", 0.040f));
		RuntimeObject* L_12;
		L_12 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral65552504B13F21E3F071BDA050A25B3209BCE8FE, (0.0399999991f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("48ms.k", 0.048f));
		RuntimeObject* L_14;
		L_14 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral97ACC6E3C57285B25935D27B4D0244B903D1A1F2, (0.0480000004f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("56ms.k", 0.056f));
		RuntimeObject* L_16;
		L_16 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral4D1FB33AE15562FC95F4C29BEDBE4A5CC81AEC96, (0.0560000017f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("64ms.k", 0.064f));
		RuntimeObject* L_18;
		L_18 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral1ED53C90EE100F41E188E1C472D50502BA8E5949, (0.064000003f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_18, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("72ms.k", 0.072f));
		RuntimeObject* L_20;
		L_20 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteralAD606231D7CB0C8F74A10A79395AF75F66F84503, (0.0719999969f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("80ms.k", 0.080f));
		RuntimeObject* L_22;
		L_22 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral75A4AC320A0043E6C0216E072DB3F74B71AA7792, (0.0799999982f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("88ms.k", 0.088f));
		RuntimeObject* L_24;
		L_24 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral33404F65975F0B52C3AA54B1AC27964F659501D1, (0.0879999995f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_25;
		L_25 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_24, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("96ms.k", 0.096f));
		RuntimeObject* L_26;
		L_26 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteralD3A1E35CE7B5E32EA25F3CB9096077A76AFE60F3, (0.0960000008f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("104ms.k", 0.104f));
		RuntimeObject* L_28;
		L_28 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteralA66DF5AB45A9D6E451C74DE16A69818CA614B4B4, (0.104000002f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_28, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("112ms.k", 0.112f));
		RuntimeObject* L_30;
		L_30 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral15FE3FEDD3D11E1DC36394B625A199395BCE688F, (0.112000003f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_31;
		L_31 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_30, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("120ms.k", 0.120f));
		RuntimeObject* L_32;
		L_32 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral2947A2FD34628D0F7BB0152512C4B88D541E52B0, (0.119999997f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_33;
		L_33 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_32, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("128ms.k", 0.128f));
		RuntimeObject* L_34;
		L_34 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteralADACB51F990ED04B91D3CFC7684A977F52FB326B, (0.128000006f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_35;
		L_35 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_34, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("136ms.k", 0.136f));
		RuntimeObject* L_36;
		L_36 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral7B3F817739A5DE0E62FF8837C11FF3A8B812E274, (0.136000007f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_37;
		L_37 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_36, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("144ms.k", 0.144f));
		RuntimeObject* L_38;
		L_38 = GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01(__this, _stringLiteral9E1EF409691D94512EE1F3421EB4D49BF778C29E, (0.143999994f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_39;
		L_39 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameControlleBackupr::GenerateMeshModel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameControlleBackupr_GenerateMeshModel_mA03E2918110EDFA9DA5E777930A79E22D3951A01 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, String_t* ___filename0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * L_0 = (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D *)il2cpp_codegen_object_new(U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D_il2cpp_TypeInfo_var);
		U3CGenerateMeshModelU3Ed__14__ctor_m199760DB293DB10A813FB2C4FCAA458806690E67(L_0, 0, /*hidden argument*/NULL);
		U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * L_2 = L_1;
		String_t* L_3 = ___filename0;
		NullCheck(L_2);
		L_2->set_filename_4(L_3);
		U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * L_4 = L_2;
		float L_5 = ___time1;
		NullCheck(L_4);
		L_4->set_time_2(L_5);
		return L_4;
	}
}
// System.Void GameControlleBackupr::ReadTxt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_ReadTxt_m61D66DB897542104FC07629BC2CD0200065892FD (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F683005E8FC2DE14D566414D191F58EA35ABEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_10 = NULL;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_11 = NULL;
	String_t* V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	{
		// Debug.Log("read_k_file");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F683005E8FC2DE14D566414D191F58EA35ABEBF, /*hidden argument*/NULL);
		// if (file_indices[file_name] != null) return;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get_file_indices_7();
		String_t* L_1 = __this->get_file_name_14();
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (file_indices[file_name] != null) return;
		return;
	}

IL_001e:
	{
		// path = Path.Combine(Application.streamingAssetsPath, filename);
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_4 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_3, L_4, /*hidden argument*/NULL);
		__this->set_path_4(L_5);
		// str = System.IO.File.ReadAllText(path);
		String_t* L_6 = __this->get_path_4();
		String_t* L_7;
		L_7 = File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC(L_6, /*hidden argument*/NULL);
		// string str_a = str.Split(new string[] { "*ELEMENT_SHELL" }, StringSplitOptions.None)[1]; //points and its location  new string[] { "125" }, StringSplitOptions.None)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		NullCheck(L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10;
		L_10 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_7, L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		// string str_a1 = str_a.Split(new string[] { "*NODE" }, StringSplitOptions.None)[0]; // points
		String_t* L_13 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16;
		L_16 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_13, L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		// string str_a2 = str_a.Split(new string[] { "*NODE" }, StringSplitOptions.None)[1]; //location
		String_t* L_19 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		NullCheck(L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22;
		L_22 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_19, L_21, 0, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_2 = L_24;
		// string[] str_a1_b1 = str_a1.Split(new string[] { "\n" }, StringSplitOptions.None);
		String_t* L_25 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28;
		L_28 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_25, L_27, 0, /*hidden argument*/NULL);
		V_3 = L_28;
		// if(filename == "0ms.k"){
		String_t* L_29 = ___filename0;
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0142;
		}
	}
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		V_5 = 0;
		goto IL_0138;
	}

IL_00af:
	{
		// string[] str_a1_b1_c = str_a1_b1[i].Trim().Replace(" ", "()").Replace(")(", "").Replace("()", " ").Split(new string[] { " " }, StringSplitOptions.None);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_36, _stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_37, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		NullCheck(L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41;
		L_41 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_38, L_40, 0, /*hidden argument*/NULL);
		V_6 = L_41;
		// List<string> m_mesh = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_42, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_7 = L_42;
		// if(str_a1_b1_c.Length == 6)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = V_6;
		NullCheck(L_43);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))) == ((uint32_t)6))))
		{
			goto IL_0132;
		}
	}
	{
		// for (int j = 0; j < 6; j++)
		V_8 = 0;
		goto IL_0120;
	}

IL_010e:
	{
		// m_mesh.Add(str_a1_b1_c[j]);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_6;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		String_t* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_44);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_44, L_48, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int j = 0; j < 6; j++)
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0120:
	{
		// for (int j = 0; j < 6; j++)
		int32_t L_50 = V_8;
		if ((((int32_t)L_50) < ((int32_t)6)))
		{
			goto IL_010e;
		}
	}
	{
		// meshes.Add(m_mesh);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_51 = __this->get_meshes_8();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_52 = V_7;
		NullCheck(L_51);
		List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2(L_51, L_52, /*hidden argument*/List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
	}

IL_0132:
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0138:
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		int32_t L_54 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = V_3;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))
		{
			goto IL_00af;
		}
	}

IL_0142:
	{
		// string[] str_a2_b2 = str_a2.Trim().Split(new string[] { "*END" }, StringSplitOptions.None)[0].Split(new string[] { "\n" }, StringSplitOptions.None);
		String_t* L_56 = V_2;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_56, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		NullCheck(L_57);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60;
		L_60 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_57, L_59, 0, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = 0;
		String_t* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65;
		L_65 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_62, L_64, 0, /*hidden argument*/NULL);
		V_4 = L_65;
		// points.Clear();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_66 = __this->get_points_5();
		NullCheck(L_66);
		VirtActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_66);
		// vertices.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_67 = __this->get_vertices_9();
		NullCheck(L_67);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_67, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for (int i = 0; i < str_a2_b2.Length; i++)
		V_9 = 0;
		goto IL_02bc;
	}

IL_0192:
	{
		// string[] str_a2_b2_c = str_a2_b2[i].Replace("\n", "").Trim().Replace(" ", "()").Replace(")(", "").Replace("()", " ").Split(new string[] { " " }, StringSplitOptions.None);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = V_4;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		String_t* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_71, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_72);
		String_t* L_73;
		L_73 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_73, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_74, _stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_75);
		String_t* L_76;
		L_76 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_75, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_77;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		NullCheck(L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79;
		L_79 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_76, L_78, 0, /*hidden argument*/NULL);
		V_10 = L_79;
		// Point p = new Point();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_80 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_m7423A417FF831176F417E85141B0A56B11051913(L_80, /*hidden argument*/NULL);
		V_11 = L_80;
		// if(str_a2_b2_c.Length == 4)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = V_10;
		NullCheck(L_81);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))) == ((uint32_t)4))))
		{
			goto IL_02b6;
		}
	}
	{
		// string id = str_a2_b2_c[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = V_10;
		NullCheck(L_82);
		int32_t L_83 = 0;
		String_t* L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_12 = L_84;
		// p.id = id;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_85 = V_11;
		String_t* L_86 = V_12;
		NullCheck(L_85);
		L_85->set_id_0(L_86);
		// float x = float.Parse(str_a2_b2_c[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = V_10;
		NullCheck(L_87);
		int32_t L_88 = 1;
		String_t* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		float L_90;
		L_90 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_89, /*hidden argument*/NULL);
		V_13 = L_90;
		// float y = float.Parse(str_a2_b2_c[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = V_10;
		NullCheck(L_91);
		int32_t L_92 = 2;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		float L_94;
		L_94 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_93, /*hidden argument*/NULL);
		V_14 = L_94;
		// float z = float.Parse(str_a2_b2_c[3]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = V_10;
		NullCheck(L_95);
		int32_t L_96 = 3;
		String_t* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		float L_98;
		L_98 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_97, /*hidden argument*/NULL);
		V_15 = L_98;
		// if (filename == "0ms.k" && id == "1180355")
		String_t* L_99 = ___filename0;
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_025b;
		}
	}
	{
		String_t* L_101 = V_12;
		bool L_102;
		L_102 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_101, _stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_025b;
		}
	}
	{
		// originPos = new Vector3(x, y, z);
		float L_103 = V_13;
		float L_104 = V_14;
		float L_105 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_106), L_103, L_104, L_105, /*hidden argument*/NULL);
		__this->set_originPos_13(L_106);
	}

IL_025b:
	{
		// p.v = new Vector3(x, y, z);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_107 = V_11;
		float L_108 = V_13;
		float L_109 = V_14;
		float L_110 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_111), L_108, L_109, L_110, /*hidden argument*/NULL);
		NullCheck(L_107);
		L_107->set_v_1(L_111);
		// points.Add(str_a2_b2_c[0], i);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_112 = __this->get_points_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = V_10;
		NullCheck(L_113);
		int32_t L_114 = 0;
		String_t* L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116 = V_9;
		int32_t L_117 = L_116;
		RuntimeObject * L_118 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_117);
		NullCheck(L_112);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_112, L_115, L_118);
		// vertices.Add(new Vector3(x, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_119 = __this->get_vertices_9();
		float L_120 = V_13;
		float L_121 = V_14;
		float L_122 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_123), L_120, L_121, L_122, /*hidden argument*/NULL);
		NullCheck(L_119);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_119, L_123, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticesPointArr.Add(p);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_124 = __this->get_verticesPointArr_10();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_125 = V_11;
		NullCheck(L_124);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_124, L_125, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// colors.Add(Color.white);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_126 = __this->get_colors_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_127;
		L_127 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_126);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_126, L_127, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
	}

IL_02b6:
	{
		// for (int i = 0; i < str_a2_b2.Length; i++)
		int32_t L_128 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_02bc:
	{
		// for (int i = 0; i < str_a2_b2.Length; i++)
		int32_t L_129 = V_9;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = V_4;
		NullCheck(L_130);
		if ((((int32_t)L_129) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length))))))
		{
			goto IL_0192;
		}
	}
	{
		// if(filename != "0ms.k")
		String_t* L_131 = ___filename0;
		bool L_132;
		L_132 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_131, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_02da;
		}
	}
	{
		// ResetModelPosition();
		GameControlleBackupr_ResetModelPosition_m6010B8D11EBE9B9475A9D0CB370327B72C5AC811(__this, /*hidden argument*/NULL);
	}

IL_02da:
	{
		// }
		return;
	}
}
// System.Void GameControlleBackupr::ResetModelPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_ResetModelPosition_m6010B8D11EBE9B9475A9D0CB370327B72C5AC811 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 diff = getDiffer();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = GameControlleBackupr_getDiffer_m095B74B6F17D30C85C7D26D53B5B4CC8B4D1245F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < vertices.Count; i++)
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		// vertices[i] = new Vector3(diff.x + vertices[i].x , diff.y + vertices[i].y, diff.z + vertices[i].z);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_vertices_9();
		int32_t L_2 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = __this->get_vertices_9();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_y_3();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = __this->get_vertices_9();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_z_4();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_17 = __this->get_vertices_9();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_4, (float)L_8)), ((float)il2cpp_codegen_add((float)L_10, (float)L_14)), ((float)il2cpp_codegen_add((float)L_16, (float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406(L_1, L_2, L_21, /*hidden argument*/List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0068:
	{
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_23 = V_1;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_24 = __this->get_vertices_9();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_24, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GameControlleBackupr::getDiffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameControlleBackupr_getDiffer_m095B74B6F17D30C85C7D26D53B5B4CC8B4D1245F (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 _pos = vertices[(int)points["1180355"]];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_vertices_9();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = __this->get_points_5();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_0 = L_3;
		// float x = originPos.x - _pos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_originPos_13();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		// float y = originPos.y - _pos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_originPos_13();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		// float z = originPos.z - _pos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_originPos_13();
		float L_13 = L_12->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		// return new Vector3(x, y, z);
		float L_16 = V_1;
		float L_17 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void GameControlleBackupr::geneMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr_geneMesh_mE2B4CBE112CF61D4236D5A1FAF47F5950C567ACA (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105C054424B01CA7570E9CCB66D35EA72B8AF382);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Material mat = new Material(Shader.Find("Standard"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// this.GetComponent<MeshRenderer>().material = mat;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = V_0;
		NullCheck(L_2);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_2, L_3, /*hidden argument*/NULL);
		// if (file_indices[file_name] == null)
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_4 = __this->get_file_indices_7();
		String_t* L_5 = __this->get_file_name_14();
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		if (L_6)
		{
			goto IL_01a2;
		}
	}
	{
		// List<int> indices = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_7, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_2 = L_7;
		// for (int j = 0; j < meshes.Count; j++)
		V_3 = 0;
		goto IL_015e;
	}

IL_003f:
	{
		// indices.Add((int)points[meshes[j][2]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_9 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_10 = __this->get_meshes_8();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12;
		L_12 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_12, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, L_13);
		NullCheck(L_8);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_8, ((*(int32_t*)((int32_t*)UnBox(L_14, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indices.Add((int)points[meshes[j][4]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_16 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_17 = __this->get_meshes_8();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19;
		L_19 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_19, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_16);
		RuntimeObject * L_21;
		L_21 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_16, L_20);
		NullCheck(L_15);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_15, ((*(int32_t*)((int32_t*)UnBox(L_21, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indices.Add((int)points[meshes[j][3]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_22 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_23 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_24 = __this->get_meshes_8();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26;
		L_26 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_26, 3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_23);
		RuntimeObject * L_28;
		L_28 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_23, L_27);
		NullCheck(L_22);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_22, ((*(int32_t*)((int32_t*)UnBox(L_28, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// if (meshes[j][4] != meshes[j][5]) {
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_29 = __this->get_meshes_8();
		int32_t L_30 = V_3;
		NullCheck(L_29);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31;
		L_31 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_31, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_33 = __this->get_meshes_8();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35;
		L_35 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_35, 5, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		bool L_37;
		L_37 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_32, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_015a;
		}
	}
	{
		// indices.Add((int)points[meshes[j][2]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_38 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_39 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_40 = __this->get_meshes_8();
		int32_t L_41 = V_3;
		NullCheck(L_40);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42;
		L_42 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_40, L_41, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_42, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_39);
		RuntimeObject * L_44;
		L_44 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_39, L_43);
		NullCheck(L_38);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_38, ((*(int32_t*)((int32_t*)UnBox(L_44, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indices.Add((int)points[meshes[j][5]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_45 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_46 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_47 = __this->get_meshes_8();
		int32_t L_48 = V_3;
		NullCheck(L_47);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_49;
		L_49 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_47, L_48, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_49, 5, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_46);
		RuntimeObject * L_51;
		L_51 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_46, L_50);
		NullCheck(L_45);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_45, ((*(int32_t*)((int32_t*)UnBox(L_51, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// indices.Add((int)points[meshes[j][4]]);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_52 = V_2;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_53 = __this->get_points_5();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_54 = __this->get_meshes_8();
		int32_t L_55 = V_3;
		NullCheck(L_54);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_56;
		L_56 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_54, L_55, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_56, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_53);
		RuntimeObject * L_58;
		L_58 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_53, L_57);
		NullCheck(L_52);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_52, ((*(int32_t*)((int32_t*)UnBox(L_58, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_015a:
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_015e:
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_60 = V_3;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_61 = __this->get_meshes_8();
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_61, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_003f;
		}
	}
	{
		// file_vertices.Add(file_name, vertices.ToArray());
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_63 = __this->get_file_vertices_6();
		String_t* L_64 = __this->get_file_name_14();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_65 = __this->get_vertices_9();
		NullCheck(L_65);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66;
		L_66 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_65, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_63);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_63, L_64, (RuntimeObject *)(RuntimeObject *)L_66);
		// file_indices.Add(file_name, indices.ToArray());
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_67 = __this->get_file_indices_7();
		String_t* L_68 = __this->get_file_name_14();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_69 = V_2;
		NullCheck(L_69);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70;
		L_70 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_69, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_67);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_67, L_68, (RuntimeObject *)(RuntimeObject *)L_70);
	}

IL_01a2:
	{
		// Mesh mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_71 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_71, /*hidden argument*/NULL);
		V_1 = L_71;
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_72 = V_1;
		NullCheck(L_72);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_72, /*hidden argument*/NULL);
		// mesh.vertices = (Vector3[])file_vertices[file_name];
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_73 = V_1;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_74 = __this->get_file_vertices_6();
		String_t* L_75 = __this->get_file_name_14();
		NullCheck(L_74);
		RuntimeObject * L_76;
		L_76 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_74, L_75);
		NullCheck(L_73);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_73, ((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)Castclass((RuntimeObject*)L_76, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// mesh.triangles = (int[])file_indices[file_name];
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_77 = V_1;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_78 = __this->get_file_indices_7();
		String_t* L_79 = __this->get_file_name_14();
		NullCheck(L_78);
		RuntimeObject * L_80;
		L_80 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_78, L_79);
		NullCheck(L_77);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_77, ((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)Castclass((RuntimeObject*)L_80, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_81 = V_1;
		NullCheck(L_81);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_81, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_82 = V_1;
		NullCheck(L_82);
		Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_82, /*hidden argument*/NULL);
		// mesh.RecalculateTangents();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_83 = V_1;
		NullCheck(L_83);
		Mesh_RecalculateTangents_m7FFF420167166E54C34D57E4E121BD4775B275E6(L_83, /*hidden argument*/NULL);
		// MeshFilter meshfilter = this.gameObject.GetComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_85;
		L_85 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_84, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		// meshfilter.mesh = mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_86 = V_1;
		NullCheck(L_85);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_85, L_86, /*hidden argument*/NULL);
		// Debug.Log("geneMesh" + file_name);
		String_t* L_87 = __this->get_file_name_14();
		String_t* L_88;
		L_88 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral105C054424B01CA7570E9CCB66D35EA72B8AF382, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_88, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameControlleBackupr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControlleBackupr__ctor_mA3C78E0997CD0B2E85C1EE79C1AB8D6843C2BCA0 (GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hashtable points = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_0, /*hidden argument*/NULL);
		__this->set_points_5(L_0);
		// Hashtable file_vertices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_1, /*hidden argument*/NULL);
		__this->set_file_vertices_6(L_1);
		// Hashtable file_indices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_2 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_2, /*hidden argument*/NULL);
		__this->set_file_indices_7(L_2);
		// List<List<string>> meshes = new List<List<string>>();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_3 = (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *)il2cpp_codegen_object_new(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618(L_3, /*hidden argument*/List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		__this->set_meshes_8(L_3);
		// List<Vector3> vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_4, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_vertices_9(L_4);
		// List<Point> verticesPointArr = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_5 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_5, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		__this->set_verticesPointArr_10(L_5);
		// List<Color> colors = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_6 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_6, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		__this->set_colors_11(L_6);
		// string file_name = "";
		__this->set_file_name_14(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_mE678A4EEF012294E485A814D37D93231A90B4BEC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uIController = GameObject.Find("Canvas").GetComponent<UIController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_1;
		L_1 = GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C(L_0, /*hidden argument*/GameObject_GetComponent_TisUIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_m75C76C18224963A8D578700C7B2F6D2DBD2DF66C_RuntimeMethod_var);
		__this->set_uIController_15(L_1);
		// uIController.pointer = gameObject;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_2 = __this->get_uIController_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_pointer_4(L_3);
		// uIController.total = 19;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_4 = __this->get_uIController_15();
		NullCheck(L_4);
		L_4->set_total_10(((int32_t)19));
		// playAnimation();
		GameController_playAnimation_m35343FC338FAE00A20C00EBE15CE7181E38D8FEE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::playAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_playAnimation_m35343FC338FAE00A20C00EBE15CE7181E38D8FEE (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D9DCC98BA35FE5FC1C329D95703D4C05BB8EC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FE3FEDD3D11E1DC36394B625A199395BCE688F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED53C90EE100F41E188E1C472D50502BA8E5949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2947A2FD34628D0F7BB0152512C4B88D541E52B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33404F65975F0B52C3AA54B1AC27964F659501D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C23058E0F523C9D446D11523BBE625522FE9F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1FB33AE15562FC95F4C29BEDBE4A5CC81AEC96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547DEC8B4FC04540DC45D846265D968D20EABD31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB286037DE77843AFE162093AFEB535D94A863C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65552504B13F21E3F071BDA050A25B3209BCE8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75A4AC320A0043E6C0216E072DB3F74B71AA7792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F817739A5DE0E62FF8837C11FF3A8B812E274);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97ACC6E3C57285B25935D27B4D0244B903D1A1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1EF409691D94512EE1F3421EB4D49BF778C29E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA66DF5AB45A9D6E451C74DE16A69818CA614B4B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD606231D7CB0C8F74A10A79395AF75F66F84503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADACB51F990ED04B91D3CFC7684A977F52FB326B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A1E35CE7B5E32EA25F3CB9096077A76AFE60F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = new Material(Shader.Find("Standard"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_mat_14(L_1);
		// StartCoroutine(GenerateMeshModel("0ms.k", 0.000f));
		RuntimeObject* L_2;
		L_2 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, (0.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("8ms.k", 0.008f));
		RuntimeObject* L_4;
		L_4 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral547DEC8B4FC04540DC45D846265D968D20EABD31, (0.00800000038f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("16ms.k", 0.016f));
		RuntimeObject* L_6;
		L_6 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral3C23058E0F523C9D446D11523BBE625522FE9F14, (0.0160000008f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("24ms.k", 0.024f));
		RuntimeObject* L_8;
		L_8 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral09D9DCC98BA35FE5FC1C329D95703D4C05BB8EC2, (0.0240000002f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("32ms.k", 0.032f));
		RuntimeObject* L_10;
		L_10 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral5BB286037DE77843AFE162093AFEB535D94A863C, (0.0320000015f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("40ms.k", 0.040f));
		RuntimeObject* L_12;
		L_12 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral65552504B13F21E3F071BDA050A25B3209BCE8FE, (0.0399999991f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("48ms.k", 0.048f));
		RuntimeObject* L_14;
		L_14 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral97ACC6E3C57285B25935D27B4D0244B903D1A1F2, (0.0480000004f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("56ms.k", 0.056f));
		RuntimeObject* L_16;
		L_16 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral4D1FB33AE15562FC95F4C29BEDBE4A5CC81AEC96, (0.0560000017f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("64ms.k", 0.064f));
		RuntimeObject* L_18;
		L_18 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral1ED53C90EE100F41E188E1C472D50502BA8E5949, (0.064000003f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_18, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("72ms.k", 0.072f));
		RuntimeObject* L_20;
		L_20 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteralAD606231D7CB0C8F74A10A79395AF75F66F84503, (0.0719999969f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("80ms.k", 0.080f));
		RuntimeObject* L_22;
		L_22 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral75A4AC320A0043E6C0216E072DB3F74B71AA7792, (0.0799999982f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("88ms.k", 0.088f));
		RuntimeObject* L_24;
		L_24 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral33404F65975F0B52C3AA54B1AC27964F659501D1, (0.0879999995f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_25;
		L_25 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_24, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("96ms.k", 0.096f));
		RuntimeObject* L_26;
		L_26 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteralD3A1E35CE7B5E32EA25F3CB9096077A76AFE60F3, (0.0960000008f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("104ms.k", 0.104f));
		RuntimeObject* L_28;
		L_28 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteralA66DF5AB45A9D6E451C74DE16A69818CA614B4B4, (0.104000002f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_28, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("112ms.k", 0.112f));
		RuntimeObject* L_30;
		L_30 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral15FE3FEDD3D11E1DC36394B625A199395BCE688F, (0.112000003f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_31;
		L_31 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_30, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("120ms.k", 0.120f));
		RuntimeObject* L_32;
		L_32 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral2947A2FD34628D0F7BB0152512C4B88D541E52B0, (0.119999997f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_33;
		L_33 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_32, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("128ms.k", 0.128f));
		RuntimeObject* L_34;
		L_34 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteralADACB51F990ED04B91D3CFC7684A977F52FB326B, (0.128000006f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_35;
		L_35 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_34, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("136ms.k", 0.136f));
		RuntimeObject* L_36;
		L_36 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral7B3F817739A5DE0E62FF8837C11FF3A8B812E274, (0.136000007f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_37;
		L_37 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_36, /*hidden argument*/NULL);
		// StartCoroutine(GenerateMeshModel("144ms.k", 0.144f));
		RuntimeObject* L_38;
		L_38 = GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97(__this, _stringLiteral9E1EF409691D94512EE1F3421EB4D49BF778C29E, (0.143999994f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_39;
		L_39 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameController::GenerateMeshModel(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_GenerateMeshModel_m7EFB94546B56910C0CB0A3C153DF3CA784362C97 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, String_t* ___filename0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * L_0 = (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B *)il2cpp_codegen_object_new(U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B_il2cpp_TypeInfo_var);
		U3CGenerateMeshModelU3Ed__16__ctor_m7A42B99DB1DB5BC295F9F5180711FA0765702B95(L_0, 0, /*hidden argument*/NULL);
		U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * L_2 = L_1;
		String_t* L_3 = ___filename0;
		NullCheck(L_2);
		L_2->set_filename_4(L_3);
		U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * L_4 = L_2;
		float L_5 = ___time1;
		NullCheck(L_4);
		L_4->set_time_2(L_5);
		return L_4;
	}
}
// System.Void GameController::ReadTxt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ReadTxt_m25E9FFD0EC8F50666519BE46E60204CFB7A623FD (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F683005E8FC2DE14D566414D191F58EA35ABEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_10 = NULL;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_11 = NULL;
	String_t* V_12 = NULL;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	{
		// Debug.Log("read_k_file");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F683005E8FC2DE14D566414D191F58EA35ABEBF, /*hidden argument*/NULL);
		// if (file_indices[file_name] != null) return;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get_file_indices_7();
		String_t* L_1 = __this->get_file_name_17();
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (file_indices[file_name] != null) return;
		return;
	}

IL_001e:
	{
		// path = Path.Combine(Application.streamingAssetsPath, filename);
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_4 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_3, L_4, /*hidden argument*/NULL);
		__this->set_path_4(L_5);
		// str = System.IO.File.ReadAllText(path);
		String_t* L_6 = __this->get_path_4();
		String_t* L_7;
		L_7 = File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC(L_6, /*hidden argument*/NULL);
		// string str_a = str.Split(new string[] { "*ELEMENT_SHELL" }, StringSplitOptions.None)[1]; //points and its location  new string[] { "125" }, StringSplitOptions.None)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6331E9D0CA9431608B79B29BFCA5FFA81918167D);
		NullCheck(L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10;
		L_10 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_7, L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		// string str_a1 = str_a.Split(new string[] { "*NODE" }, StringSplitOptions.None)[0]; // points
		String_t* L_13 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16;
		L_16 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_13, L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		// string str_a2 = str_a.Split(new string[] { "*NODE" }, StringSplitOptions.None)[1]; //location
		String_t* L_19 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBB660822CC9C8A6BD50FED024538DEF163C83115);
		NullCheck(L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22;
		L_22 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_19, L_21, 0, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_2 = L_24;
		// string[] str_a1_b1 = str_a1.Split(new string[] { "\n" }, StringSplitOptions.None);
		String_t* L_25 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28;
		L_28 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_25, L_27, 0, /*hidden argument*/NULL);
		V_3 = L_28;
		// if(filename == "0ms.k"){
		String_t* L_29 = ___filename0;
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0142;
		}
	}
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		V_5 = 0;
		goto IL_0138;
	}

IL_00af:
	{
		// string[] str_a1_b1_c = str_a1_b1[i].Trim().Replace(" ", "()").Replace(")(", "").Replace("()", " ").Split(new string[] { " " }, StringSplitOptions.None);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_36, _stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_37, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		NullCheck(L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41;
		L_41 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_38, L_40, 0, /*hidden argument*/NULL);
		V_6 = L_41;
		// List<string> m_mesh = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_42, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_7 = L_42;
		// if(str_a1_b1_c.Length == 6)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = V_6;
		NullCheck(L_43);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))) == ((uint32_t)6))))
		{
			goto IL_0132;
		}
	}
	{
		// for (int j = 0; j < 6; j++)
		V_8 = 0;
		goto IL_0120;
	}

IL_010e:
	{
		// m_mesh.Add(str_a1_b1_c[j]);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_6;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		String_t* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_44);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_44, L_48, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int j = 0; j < 6; j++)
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0120:
	{
		// for (int j = 0; j < 6; j++)
		int32_t L_50 = V_8;
		if ((((int32_t)L_50) < ((int32_t)6)))
		{
			goto IL_010e;
		}
	}
	{
		// meshes.Add(m_mesh);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_51 = __this->get_meshes_9();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_52 = V_7;
		NullCheck(L_51);
		List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2(L_51, L_52, /*hidden argument*/List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
	}

IL_0132:
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0138:
	{
		// for (int i = 0; i < str_a1_b1.Length; i++)
		int32_t L_54 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = V_3;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))
		{
			goto IL_00af;
		}
	}

IL_0142:
	{
		// string[] str_a2_b2 = str_a2.Trim().Split(new string[] { "*END" }, StringSplitOptions.None)[0].Split(new string[] { "\n" }, StringSplitOptions.None);
		String_t* L_56 = V_2;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_56, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7092D23D6F9B3B69D85F7DFAEF7441A2900047B3);
		NullCheck(L_57);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60;
		L_60 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_57, L_59, 0, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = 0;
		String_t* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65;
		L_65 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_62, L_64, 0, /*hidden argument*/NULL);
		V_4 = L_65;
		// points.Clear();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_66 = __this->get_points_5();
		NullCheck(L_66);
		VirtActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_66);
		// vertices.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_67 = __this->get_vertices_10();
		NullCheck(L_67);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_67, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for (int i = 0; i < str_a2_b2.Length; i++)
		V_9 = 0;
		goto IL_02bc;
	}

IL_0192:
	{
		// string[] str_a2_b2_c = str_a2_b2[i].Replace("\n", "").Trim().Replace(" ", "()").Replace(")(", "").Replace("()", " ").Split(new string[] { " " }, StringSplitOptions.None);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = V_4;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		String_t* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_71, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_72);
		String_t* L_73;
		L_73 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_73, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_74, _stringLiteralB4AE4C2409D83D9546BB6CA9E5ADD4B810242706, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_75);
		String_t* L_76;
		L_76 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_75, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_77;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		NullCheck(L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79;
		L_79 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_76, L_78, 0, /*hidden argument*/NULL);
		V_10 = L_79;
		// Point p = new Point();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_80 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_m7423A417FF831176F417E85141B0A56B11051913(L_80, /*hidden argument*/NULL);
		V_11 = L_80;
		// if(str_a2_b2_c.Length == 4)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = V_10;
		NullCheck(L_81);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))) == ((uint32_t)4))))
		{
			goto IL_02b6;
		}
	}
	{
		// string id = str_a2_b2_c[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = V_10;
		NullCheck(L_82);
		int32_t L_83 = 0;
		String_t* L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_12 = L_84;
		// p.id = id;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_85 = V_11;
		String_t* L_86 = V_12;
		NullCheck(L_85);
		L_85->set_id_0(L_86);
		// float x = float.Parse(str_a2_b2_c[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = V_10;
		NullCheck(L_87);
		int32_t L_88 = 1;
		String_t* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		float L_90;
		L_90 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_89, /*hidden argument*/NULL);
		V_13 = L_90;
		// float y = float.Parse(str_a2_b2_c[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = V_10;
		NullCheck(L_91);
		int32_t L_92 = 2;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		float L_94;
		L_94 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_93, /*hidden argument*/NULL);
		V_14 = L_94;
		// float z = float.Parse(str_a2_b2_c[3]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = V_10;
		NullCheck(L_95);
		int32_t L_96 = 3;
		String_t* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		float L_98;
		L_98 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_97, /*hidden argument*/NULL);
		V_15 = L_98;
		// if (filename == "0ms.k" && id == "1180355")
		String_t* L_99 = ___filename0;
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_025b;
		}
	}
	{
		String_t* L_101 = V_12;
		bool L_102;
		L_102 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_101, _stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_025b;
		}
	}
	{
		// originPos = new Vector3(x, y, z);
		float L_103 = V_13;
		float L_104 = V_14;
		float L_105 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_106), L_103, L_104, L_105, /*hidden argument*/NULL);
		__this->set_originPos_16(L_106);
	}

IL_025b:
	{
		// p.v = new Vector3(x, y, z);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_107 = V_11;
		float L_108 = V_13;
		float L_109 = V_14;
		float L_110 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_111), L_108, L_109, L_110, /*hidden argument*/NULL);
		NullCheck(L_107);
		L_107->set_v_1(L_111);
		// points.Add(str_a2_b2_c[0], i);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_112 = __this->get_points_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = V_10;
		NullCheck(L_113);
		int32_t L_114 = 0;
		String_t* L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116 = V_9;
		int32_t L_117 = L_116;
		RuntimeObject * L_118 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_117);
		NullCheck(L_112);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_112, L_115, L_118);
		// vertices.Add(new Vector3(x, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_119 = __this->get_vertices_10();
		float L_120 = V_13;
		float L_121 = V_14;
		float L_122 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_123), L_120, L_121, L_122, /*hidden argument*/NULL);
		NullCheck(L_119);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_119, L_123, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticesPointArr.Add(p);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_124 = __this->get_verticesPointArr_11();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_125 = V_11;
		NullCheck(L_124);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_124, L_125, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// colors.Add(Color.white);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_126 = __this->get_colors_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_127;
		L_127 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_126);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_126, L_127, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
	}

IL_02b6:
	{
		// for (int i = 0; i < str_a2_b2.Length; i++)
		int32_t L_128 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_02bc:
	{
		// for (int i = 0; i < str_a2_b2.Length; i++)
		int32_t L_129 = V_9;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = V_4;
		NullCheck(L_130);
		if ((((int32_t)L_129) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length))))))
		{
			goto IL_0192;
		}
	}
	{
		// if(filename != "0ms.k")
		String_t* L_131 = ___filename0;
		bool L_132;
		L_132 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_131, _stringLiteral74B471DB43B546A176210DBB65D56A77292C53E2, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_02da;
		}
	}
	{
		// ResetModelPosition();
		GameController_ResetModelPosition_mC615818AEBCD4FDFDC063EAC92FA500EA519255D(__this, /*hidden argument*/NULL);
	}

IL_02da:
	{
		// }
		return;
	}
}
// System.Void GameController::ResetModelPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ResetModelPosition_mC615818AEBCD4FDFDC063EAC92FA500EA519255D (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 diff = getDiffer();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = GameController_getDiffer_m3D566811B1EA17985E372D29B1D11A570C7D0BD6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < vertices.Count; i++)
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		// vertices[i] = new Vector3(diff.x + vertices[i].x , diff.y + vertices[i].y, diff.z + vertices[i].z);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_vertices_10();
		int32_t L_2 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = __this->get_vertices_10();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_y_3();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = __this->get_vertices_10();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_z_4();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_17 = __this->get_vertices_10();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_4, (float)L_8)), ((float)il2cpp_codegen_add((float)L_10, (float)L_14)), ((float)il2cpp_codegen_add((float)L_16, (float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406(L_1, L_2, L_21, /*hidden argument*/List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0068:
	{
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_23 = V_1;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_24 = __this->get_vertices_10();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_24, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GameController::getDiffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameController_getDiffer_m3D566811B1EA17985E372D29B1D11A570C7D0BD6 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 _pos = vertices[(int)points["1180355"]];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_vertices_10();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = __this->get_points_5();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteralF05A6982341F7B83DC76A8E3A3BBA78CB85EBA0A);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_0 = L_3;
		// float x = originPos.x - _pos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_originPos_16();
		float L_5 = L_4->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		// float y = originPos.y - _pos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_originPos_16();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		// float z = originPos.z - _pos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_originPos_16();
		float L_13 = L_12->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		// return new Vector3(x, y, z);
		float L_16 = V_1;
		float L_17 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Int32 GameController::getVerticeIndex(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameController_getVerticeIndex_m837CE5A142051B7F5D71FBE4209E2D9AF28604BD (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list0, String_t* ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// if(list[i] == id) return i;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___list0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_3 = ___id1;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// if(list[i] == id) return i;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0015:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_7 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = ___list0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_8, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Void GameController::geneMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_geneMesh_mBE2140334EDDAD1EF300D3D3FF3F2499D56E7053 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105C054424B01CA7570E9CCB66D35EA72B8AF382);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29DBB6DE944F1E24C747AE175B1F362898DC4710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral438517EF890BCB22429748935B1617C0BB05B4D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68FDD062FB2ABAE4AC3F10B120BDA042A9D35958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA94ABED0452AAEBFEDBA59C94E3234DA6F0BEB66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6A7F149A4A57942CA33DC715D5D8110E90D071F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3B473C6EA82E1FF65E4BB1AB9465E33AA86C21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF40D5BE650B2E93C7D364ACA9F45552013AFB0D6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_1 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_2 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_3 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_7 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_8 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_9 = NULL;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	String_t* V_13 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_16;
	memset((&V_16), 0, sizeof(V_16));
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_17 = NULL;
	String_t* V_18 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_19 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B28_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B22_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B23_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B24_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B25_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B26_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B27_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B29_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B39_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B30_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B37_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B31_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B32_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B33_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B34_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B35_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B36_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B38_0 = NULL;
	{
		// if (file_indices[file_name] == null)
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = __this->get_file_indices_7();
		String_t* L_1 = __this->get_file_name_17();
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0368;
		}
	}
	{
		// Hashtable subVertices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_3 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// Hashtable subPoints = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_4 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		// Hashtable subVerticesTemp = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_5 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_5, /*hidden argument*/NULL);
		V_3 = L_5;
		// for (int j = 0; j < meshes.Count; j++)
		V_5 = 0;
		goto IL_013a;
	}

IL_0030:
	{
		// string _groupId = meshes[j][1];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_6 = __this->get_meshes_9();
		int32_t L_7 = V_5;
		NullCheck(L_6);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_8, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_6 = L_9;
		// if (subVertices[_groupId] == null) {
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_10 = V_1;
		String_t* L_11 = V_6;
		NullCheck(L_10);
		RuntimeObject * L_12;
		L_12 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_11);
		if (L_12)
		{
			goto IL_0082;
		}
	}
	{
		// List<string> _points = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_13, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_7 = L_13;
		// List<Vector3> _vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_14 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_14, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		V_8 = L_14;
		// Hashtable subVerticesArrTemp = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_15 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_15, /*hidden argument*/NULL);
		V_9 = L_15;
		// subPoints.Add(_groupId, _points);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_16 = V_2;
		String_t* L_17 = V_6;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = V_7;
		NullCheck(L_16);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, L_17, L_18);
		// subVertices.Add(_groupId, _vertices);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_19 = V_1;
		String_t* L_20 = V_6;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_21 = V_8;
		NullCheck(L_19);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_19, L_20, L_21);
		// subVerticesTemp.Add(_groupId, subVerticesArrTemp);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_22 = V_3;
		String_t* L_23 = V_6;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_24 = V_9;
		NullCheck(L_22);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_22, L_23, L_24);
	}

IL_0082:
	{
		// for (int i = 2; i < 6; i++)
		V_10 = 2;
		goto IL_012c;
	}

IL_008a:
	{
		// string _pointId = meshes[j][i];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_25 = __this->get_meshes_9();
		int32_t L_26 = V_5;
		NullCheck(L_25);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_27;
		L_27 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		int32_t L_28 = V_10;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_11 = L_29;
		// if (((Hashtable)subVerticesTemp[_groupId])[_pointId] == null) {
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_30 = V_3;
		String_t* L_31 = V_6;
		NullCheck(L_30);
		RuntimeObject * L_32;
		L_32 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_30, L_31);
		String_t* L_33 = V_11;
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_32, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_34;
		L_34 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_32, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_33);
		if (L_34)
		{
			goto IL_0126;
		}
	}
	{
		// ((List<string>)subPoints[_groupId]).Add(_pointId);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_35 = V_2;
		String_t* L_36 = V_6;
		NullCheck(L_35);
		RuntimeObject * L_37;
		L_37 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_35, L_36);
		String_t* L_38 = V_11;
		NullCheck(((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)CastclassClass((RuntimeObject*)L_37, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var)));
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)CastclassClass((RuntimeObject*)L_37, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var)), L_38, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// ((List<Vector3>)subVertices[_groupId]).Add(vertices[(int)points[_pointId]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_39 = V_1;
		String_t* L_40 = V_6;
		NullCheck(L_39);
		RuntimeObject * L_41;
		L_41 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_39, L_40);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_42 = __this->get_vertices_10();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_43 = __this->get_points_5();
		String_t* L_44 = V_11;
		NullCheck(L_43);
		RuntimeObject * L_45;
		L_45 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_43, L_44);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_42, ((*(int32_t*)((int32_t*)UnBox(L_45, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)CastclassClass((RuntimeObject*)L_41, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var)));
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)CastclassClass((RuntimeObject*)L_41, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var)), L_46, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// ((Hashtable)subVerticesTemp[_groupId]).Add(_pointId, ((List<string>)subPoints[_groupId]).Count - 1);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_47 = V_3;
		String_t* L_48 = V_6;
		NullCheck(L_47);
		RuntimeObject * L_49;
		L_49 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, L_48);
		String_t* L_50 = V_11;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_51 = V_2;
		String_t* L_52 = V_6;
		NullCheck(L_51);
		RuntimeObject * L_53;
		L_53 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_51, L_52);
		NullCheck(((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)CastclassClass((RuntimeObject*)L_53, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var)));
		int32_t L_54;
		L_54 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)CastclassClass((RuntimeObject*)L_53, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
		RuntimeObject * L_56 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_55);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_49, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_49, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_50, L_56);
	}

IL_0126:
	{
		// for (int i = 2; i < 6; i++)
		int32_t L_57 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_012c:
	{
		// for (int i = 2; i < 6; i++)
		int32_t L_58 = V_10;
		if ((((int32_t)L_58) < ((int32_t)6)))
		{
			goto IL_008a;
		}
	}
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_013a:
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_60 = V_5;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_61 = __this->get_meshes_9();
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_61, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0030;
		}
	}
	{
		// Hashtable subIndices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_63 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_63, /*hidden argument*/NULL);
		V_4 = L_63;
		// for (int j = 0; j < meshes.Count; j++)
		V_12 = 0;
		goto IL_0331;
	}

IL_015b:
	{
		// string _groupId = meshes[j][1];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_64 = __this->get_meshes_9();
		int32_t L_65 = V_12;
		NullCheck(L_64);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_66;
		L_66 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_66, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_13 = L_67;
		// if (subIndices[_groupId] == null) {
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_68 = V_4;
		String_t* L_69 = V_13;
		NullCheck(L_68);
		RuntimeObject * L_70;
		L_70 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_68, L_69);
		if (L_70)
		{
			goto IL_018d;
		}
	}
	{
		// List<int> _indices = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_71 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_71, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_14 = L_71;
		// subIndices.Add(_groupId, _indices);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_72 = V_4;
		String_t* L_73 = V_13;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_74 = V_14;
		NullCheck(L_72);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_72, L_73, L_74);
	}

IL_018d:
	{
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][2]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_75 = V_4;
		String_t* L_76 = V_13;
		NullCheck(L_75);
		RuntimeObject * L_77;
		L_77 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_75, L_76);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_78 = V_3;
		String_t* L_79 = V_13;
		NullCheck(L_78);
		RuntimeObject * L_80;
		L_80 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_78, L_79);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_81 = __this->get_meshes_9();
		int32_t L_82 = V_12;
		NullCheck(L_81);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_83;
		L_83 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_81, L_82, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_83);
		String_t* L_84;
		L_84 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_83, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_80, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_85;
		L_85 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_80, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_84);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_77, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_77, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_85, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][4]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_86 = V_4;
		String_t* L_87 = V_13;
		NullCheck(L_86);
		RuntimeObject * L_88;
		L_88 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_86, L_87);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_89 = V_3;
		String_t* L_90 = V_13;
		NullCheck(L_89);
		RuntimeObject * L_91;
		L_91 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_89, L_90);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_92 = __this->get_meshes_9();
		int32_t L_93 = V_12;
		NullCheck(L_92);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_94;
		L_94 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_92, L_93, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_94);
		String_t* L_95;
		L_95 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_94, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_91, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_96;
		L_96 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_91, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_95);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_88, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_88, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_96, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][3]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_97 = V_4;
		String_t* L_98 = V_13;
		NullCheck(L_97);
		RuntimeObject * L_99;
		L_99 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_97, L_98);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_100 = V_3;
		String_t* L_101 = V_13;
		NullCheck(L_100);
		RuntimeObject * L_102;
		L_102 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_100, L_101);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_103 = __this->get_meshes_9();
		int32_t L_104 = V_12;
		NullCheck(L_103);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_105;
		L_105 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_103, L_104, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_105);
		String_t* L_106;
		L_106 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_105, 3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_102, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_107;
		L_107 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_102, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_106);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_99, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_99, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_107, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// if (meshes[j][4] != meshes[j][5]) {
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_108 = __this->get_meshes_9();
		int32_t L_109 = V_12;
		NullCheck(L_108);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_110;
		L_110 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_108, L_109, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_110);
		String_t* L_111;
		L_111 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_110, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_112 = __this->get_meshes_9();
		int32_t L_113 = V_12;
		NullCheck(L_112);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_114;
		L_114 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_112, L_113, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_114);
		String_t* L_115;
		L_115 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_114, 5, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		bool L_116;
		L_116 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_111, L_115, /*hidden argument*/NULL);
		if (!L_116)
		{
			goto IL_032b;
		}
	}
	{
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][2]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_117 = V_4;
		String_t* L_118 = V_13;
		NullCheck(L_117);
		RuntimeObject * L_119;
		L_119 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_117, L_118);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_120 = V_3;
		String_t* L_121 = V_13;
		NullCheck(L_120);
		RuntimeObject * L_122;
		L_122 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_120, L_121);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_123 = __this->get_meshes_9();
		int32_t L_124 = V_12;
		NullCheck(L_123);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_125;
		L_125 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_123, L_124, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_125);
		String_t* L_126;
		L_126 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_125, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_122, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_127;
		L_127 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_122, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_126);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_119, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_119, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_127, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][5]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_128 = V_4;
		String_t* L_129 = V_13;
		NullCheck(L_128);
		RuntimeObject * L_130;
		L_130 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_128, L_129);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_131 = V_3;
		String_t* L_132 = V_13;
		NullCheck(L_131);
		RuntimeObject * L_133;
		L_133 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_131, L_132);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_134 = __this->get_meshes_9();
		int32_t L_135 = V_12;
		NullCheck(L_134);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_136;
		L_136 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_134, L_135, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_136);
		String_t* L_137;
		L_137 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_136, 5, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_133, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_138;
		L_138 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_133, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_137);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_130, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_130, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_138, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// ((List<int>)subIndices[_groupId]).Add((int)((Hashtable)subVerticesTemp[_groupId])[meshes[j][4]]);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_139 = V_4;
		String_t* L_140 = V_13;
		NullCheck(L_139);
		RuntimeObject * L_141;
		L_141 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_139, L_140);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_142 = V_3;
		String_t* L_143 = V_13;
		NullCheck(L_142);
		RuntimeObject * L_144;
		L_144 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_142, L_143);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_145 = __this->get_meshes_9();
		int32_t L_146 = V_12;
		NullCheck(L_145);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_147;
		L_147 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_145, L_146, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_147);
		String_t* L_148;
		L_148 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_147, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_144, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
		RuntimeObject * L_149;
		L_149 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_144, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_148);
		NullCheck(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_141, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)));
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_141, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var)), ((*(int32_t*)((int32_t*)UnBox(L_149, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_032b:
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_150 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_0331:
	{
		// for (int j = 0; j < meshes.Count; j++)
		int32_t L_151 = V_12;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_152 = __this->get_meshes_9();
		NullCheck(L_152);
		int32_t L_153;
		L_153 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_152, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_151) < ((int32_t)L_153)))
		{
			goto IL_015b;
		}
	}
	{
		// file_vertices.Add(file_name, subVertices);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_154 = __this->get_file_vertices_6();
		String_t* L_155 = __this->get_file_name_17();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_156 = V_1;
		NullCheck(L_154);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_154, L_155, L_156);
		// file_indices.Add(file_name, subIndices);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_157 = __this->get_file_indices_7();
		String_t* L_158 = __this->get_file_name_17();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_159 = V_4;
		NullCheck(L_157);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_157, L_158, L_159);
	}

IL_0368:
	{
		// Hashtable subMeshes = (Hashtable)file_indices[file_name];
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_160 = __this->get_file_indices_7();
		String_t* L_161 = __this->get_file_name_17();
		NullCheck(L_160);
		RuntimeObject * L_162;
		L_162 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_160, L_161);
		// Debug.Log(subMeshes.Values.Count);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_163 = ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_162, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var));
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = VirtFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_163);
		NullCheck(L_164);
		int32_t L_165;
		L_165 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_164);
		int32_t L_166 = L_165;
		RuntimeObject * L_167 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_166);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_167, /*hidden argument*/NULL);
		// GameObject modelk = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_168 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_168, /*hidden argument*/NULL);
		V_0 = L_168;
		// modelk.transform.parent = this.gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_169 = V_0;
		NullCheck(L_169);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_169, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_171;
		L_171 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_171);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_171, /*hidden argument*/NULL);
		NullCheck(L_170);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_170, L_172, /*hidden argument*/NULL);
		// modelk.name = file_name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173 = V_0;
		String_t* L_174 = __this->get_file_name_17();
		NullCheck(L_173);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_173, L_174, /*hidden argument*/NULL);
		// objs.Add(file_name, modelk);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_175 = __this->get_objs_13();
		String_t* L_176 = __this->get_file_name_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_177 = V_0;
		NullCheck(L_175);
		Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78(L_175, L_176, L_177, /*hidden argument*/Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		// uIController.Models.Add(modelk);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_178 = __this->get_uIController_15();
		NullCheck(L_178);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_179 = L_178->get_Models_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_180 = V_0;
		NullCheck(L_179);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_179, L_180, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// foreach (DictionaryEntry de in subMeshes)
		NullCheck(L_163);
		RuntimeObject* L_181;
		L_181 = VirtFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_163);
		V_15 = L_181;
	}

IL_03e5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_06b5;
		}

IL_03ea:
		{
			// foreach (DictionaryEntry de in subMeshes)
			RuntimeObject* L_182 = V_15;
			NullCheck(L_182);
			RuntimeObject * L_183;
			L_183 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_182);
			V_16 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_183, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			// List<int> subMesh = (List<int>)de.Value;
			RuntimeObject * L_184;
			L_184 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_16), /*hidden argument*/NULL);
			V_17 = ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)CastclassClass((RuntimeObject*)L_184, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var));
			// string _groupId = (string)de.Key;
			RuntimeObject * L_185;
			L_185 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_16), /*hidden argument*/NULL);
			V_18 = ((String_t*)CastclassSealed((RuntimeObject*)L_185, String_t_il2cpp_TypeInfo_var));
			// GameObject go = new GameObject();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_186 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_186, /*hidden argument*/NULL);
			// Material mat = new Material(Shader.Find("Standard"));
			Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_187;
			L_187 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_188 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
			Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_188, L_187, /*hidden argument*/NULL);
			V_19 = L_188;
			// if (_groupId == "30106"|| _groupId == "40009" || _groupId == "71011" || _groupId == "70011" || _groupId == "61012" || _groupId == "60012" || _groupId == "10008")  {
			String_t* L_189 = V_18;
			bool L_190;
			L_190 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_189, _stringLiteralF40D5BE650B2E93C7D364ACA9F45552013AFB0D6, /*hidden argument*/NULL);
			G_B22_0 = L_186;
			if (L_190)
			{
				G_B28_0 = L_186;
				goto IL_048c;
			}
		}

IL_0438:
		{
			String_t* L_191 = V_18;
			bool L_192;
			L_192 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_191, _stringLiteral68FDD062FB2ABAE4AC3F10B120BDA042A9D35958, /*hidden argument*/NULL);
			G_B23_0 = G_B22_0;
			if (L_192)
			{
				G_B28_0 = G_B22_0;
				goto IL_048c;
			}
		}

IL_0446:
		{
			String_t* L_193 = V_18;
			bool L_194;
			L_194 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_193, _stringLiteralB6A7F149A4A57942CA33DC715D5D8110E90D071F, /*hidden argument*/NULL);
			G_B24_0 = G_B23_0;
			if (L_194)
			{
				G_B28_0 = G_B23_0;
				goto IL_048c;
			}
		}

IL_0454:
		{
			String_t* L_195 = V_18;
			bool L_196;
			L_196 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_195, _stringLiteral29DBB6DE944F1E24C747AE175B1F362898DC4710, /*hidden argument*/NULL);
			G_B25_0 = G_B24_0;
			if (L_196)
			{
				G_B28_0 = G_B24_0;
				goto IL_048c;
			}
		}

IL_0462:
		{
			String_t* L_197 = V_18;
			bool L_198;
			L_198 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_197, _stringLiteralBF3B473C6EA82E1FF65E4BB1AB9465E33AA86C21, /*hidden argument*/NULL);
			G_B26_0 = G_B25_0;
			if (L_198)
			{
				G_B28_0 = G_B25_0;
				goto IL_048c;
			}
		}

IL_0470:
		{
			String_t* L_199 = V_18;
			bool L_200;
			L_200 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_199, _stringLiteral438517EF890BCB22429748935B1617C0BB05B4D9, /*hidden argument*/NULL);
			G_B27_0 = G_B26_0;
			if (L_200)
			{
				G_B28_0 = G_B26_0;
				goto IL_048c;
			}
		}

IL_047e:
		{
			String_t* L_201 = V_18;
			bool L_202;
			L_202 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_201, _stringLiteralA94ABED0452AAEBFEDBA59C94E3234DA6F0BEB66, /*hidden argument*/NULL);
			G_B28_0 = G_B27_0;
			if (!L_202)
			{
				G_B29_0 = G_B27_0;
				goto IL_04f5;
			}
		}

IL_048c:
		{
			// mat.SetOverrideTag("RenderType", "Transparent");
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_203 = V_19;
			NullCheck(L_203);
			Material_SetOverrideTag_m5786C05270AD48B5B0756D5BC367017965B880C4(L_203, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, /*hidden argument*/NULL);
			// mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_204 = V_19;
			NullCheck(L_204);
			Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_204, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, /*hidden argument*/NULL);
			// mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_205 = V_19;
			NullCheck(L_205);
			Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_205, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), /*hidden argument*/NULL);
			// mat.SetInt("_ZWrite", 0);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_206 = V_19;
			NullCheck(L_206);
			Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_206, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
			// mat.DisableKeyword("_ALPHATEST_ON");
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_207 = V_19;
			NullCheck(L_207);
			Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_207, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
			// mat.EnableKeyword("_ALPHABLEND_ON");
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_208 = V_19;
			NullCheck(L_208);
			Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_208, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
			// mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_209 = V_19;
			NullCheck(L_209);
			Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_209, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
			// mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_210 = V_19;
			NullCheck(L_210);
			Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_210, ((int32_t)3000), /*hidden argument*/NULL);
			G_B29_0 = G_B28_0;
		}

IL_04f5:
		{
			// if(mesh_color[_groupId] == null)
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_211 = __this->get_mesh_color_8();
			String_t* L_212 = V_18;
			NullCheck(L_211);
			RuntimeObject * L_213;
			L_213 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_211, L_212);
			G_B30_0 = G_B29_0;
			if (L_213)
			{
				G_B39_0 = G_B29_0;
				goto IL_05fd;
			}
		}

IL_0507:
		{
			// if (_groupId == "30106" || _groupId == "40009" || _groupId == "71011" || _groupId == "70011" || _groupId == "61012" || _groupId == "60012" || _groupId == "10008")
			String_t* L_214 = V_18;
			bool L_215;
			L_215 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_214, _stringLiteralF40D5BE650B2E93C7D364ACA9F45552013AFB0D6, /*hidden argument*/NULL);
			G_B31_0 = G_B30_0;
			if (L_215)
			{
				G_B37_0 = G_B30_0;
				goto IL_0569;
			}
		}

IL_0515:
		{
			String_t* L_216 = V_18;
			bool L_217;
			L_217 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_216, _stringLiteral68FDD062FB2ABAE4AC3F10B120BDA042A9D35958, /*hidden argument*/NULL);
			G_B32_0 = G_B31_0;
			if (L_217)
			{
				G_B37_0 = G_B31_0;
				goto IL_0569;
			}
		}

IL_0523:
		{
			String_t* L_218 = V_18;
			bool L_219;
			L_219 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_218, _stringLiteralB6A7F149A4A57942CA33DC715D5D8110E90D071F, /*hidden argument*/NULL);
			G_B33_0 = G_B32_0;
			if (L_219)
			{
				G_B37_0 = G_B32_0;
				goto IL_0569;
			}
		}

IL_0531:
		{
			String_t* L_220 = V_18;
			bool L_221;
			L_221 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_220, _stringLiteral29DBB6DE944F1E24C747AE175B1F362898DC4710, /*hidden argument*/NULL);
			G_B34_0 = G_B33_0;
			if (L_221)
			{
				G_B37_0 = G_B33_0;
				goto IL_0569;
			}
		}

IL_053f:
		{
			String_t* L_222 = V_18;
			bool L_223;
			L_223 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_222, _stringLiteralBF3B473C6EA82E1FF65E4BB1AB9465E33AA86C21, /*hidden argument*/NULL);
			G_B35_0 = G_B34_0;
			if (L_223)
			{
				G_B37_0 = G_B34_0;
				goto IL_0569;
			}
		}

IL_054d:
		{
			String_t* L_224 = V_18;
			bool L_225;
			L_225 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_224, _stringLiteral438517EF890BCB22429748935B1617C0BB05B4D9, /*hidden argument*/NULL);
			G_B36_0 = G_B35_0;
			if (L_225)
			{
				G_B37_0 = G_B35_0;
				goto IL_0569;
			}
		}

IL_055b:
		{
			String_t* L_226 = V_18;
			bool L_227;
			L_227 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_226, _stringLiteralA94ABED0452AAEBFEDBA59C94E3234DA6F0BEB66, /*hidden argument*/NULL);
			G_B37_0 = G_B36_0;
			if (!L_227)
			{
				G_B38_0 = G_B36_0;
				goto IL_05b4;
			}
		}

IL_0569:
		{
			// mesh_color[_groupId] = new Color(UnityEngine.Random.Range(1.0f, 0f), UnityEngine.Random.Range(1.0f, 0f), UnityEngine.Random.Range(1.0f, 0f), 0.5f);
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_228 = __this->get_mesh_color_8();
			String_t* L_229 = V_18;
			float L_230;
			L_230 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			float L_231;
			L_231 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			float L_232;
			L_232 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_233;
			memset((&L_233), 0, sizeof(L_233));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_233), L_230, L_231, L_232, (0.5f), /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_234 = L_233;
			RuntimeObject * L_235 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_234);
			NullCheck(L_228);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_228, L_229, L_235);
			// } else
			G_B39_0 = G_B37_0;
			goto IL_05fd;
		}

IL_05b4:
		{
			// mesh_color[_groupId] = new Color(UnityEngine.Random.Range(1.0f, 0f), UnityEngine.Random.Range(1.0f, 0f), UnityEngine.Random.Range(1.0f, 0f), 1f);
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_236 = __this->get_mesh_color_8();
			String_t* L_237 = V_18;
			float L_238;
			L_238 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			float L_239;
			L_239 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			float L_240;
			L_240 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (0.0f), /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_241;
			memset((&L_241), 0, sizeof(L_241));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_241), L_238, L_239, L_240, (1.0f), /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_242 = L_241;
			RuntimeObject * L_243 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_242);
			NullCheck(L_236);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_236, L_237, L_243);
			G_B39_0 = G_B38_0;
		}

IL_05fd:
		{
			// mat.color = (Color)mesh_color[_groupId];
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_244 = V_19;
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_245 = __this->get_mesh_color_8();
			String_t* L_246 = V_18;
			NullCheck(L_245);
			RuntimeObject * L_247;
			L_247 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_245, L_246);
			NullCheck(L_244);
			Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_244, ((*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_247, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			// go.name = _groupId;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_248 = G_B39_0;
			String_t* L_249 = V_18;
			NullCheck(L_248);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_248, L_249, /*hidden argument*/NULL);
			// go.transform.parent = modelk.transform;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_250 = L_248;
			NullCheck(L_250);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_251;
			L_251 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_250, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_252 = V_0;
			NullCheck(L_252);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_253;
			L_253 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_252, /*hidden argument*/NULL);
			NullCheck(L_251);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_251, L_253, /*hidden argument*/NULL);
			// go.AddComponent<MeshFilter>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_254 = L_250;
			NullCheck(L_254);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_255;
			L_255 = GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2(L_254, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mA5802EF007058E65CCD414C3EB2518474D17A2F2_RuntimeMethod_var);
			// go.AddComponent<MeshRenderer>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_256 = L_254;
			NullCheck(L_256);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_257;
			L_257 = GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47(L_256, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_mD5BD4B507E470AFA16BAD4B418DC15AE59A9FC47_RuntimeMethod_var);
			// go.GetComponent<MeshRenderer>().material = mat;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_258 = L_256;
			NullCheck(L_258);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_259;
			L_259 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_258, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_260 = V_19;
			NullCheck(L_259);
			Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_259, L_260, /*hidden argument*/NULL);
			// Mesh mesh = new Mesh();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_261 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
			Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_261, /*hidden argument*/NULL);
			V_20 = L_261;
			// mesh.Clear();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_262 = V_20;
			NullCheck(L_262);
			Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_262, /*hidden argument*/NULL);
			// mesh.vertices = ((List<Vector3>)((Hashtable)file_vertices[file_name])[_groupId]).ToArray();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_263 = V_20;
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_264 = __this->get_file_vertices_6();
			String_t* L_265 = __this->get_file_name_17();
			NullCheck(L_264);
			RuntimeObject * L_266;
			L_266 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_264, L_265);
			String_t* L_267 = V_18;
			NullCheck(((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_266, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)));
			RuntimeObject * L_268;
			L_268 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, ((Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)CastclassClass((RuntimeObject*)L_266, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var)), L_267);
			NullCheck(((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)CastclassClass((RuntimeObject*)L_268, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var)));
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_269;
			L_269 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)CastclassClass((RuntimeObject*)L_268, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
			NullCheck(L_263);
			Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_263, L_269, /*hidden argument*/NULL);
			// mesh.triangles = subMesh.ToArray();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_270 = V_20;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_271 = V_17;
			NullCheck(L_271);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_272;
			L_272 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_271, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
			NullCheck(L_270);
			Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_270, L_272, /*hidden argument*/NULL);
			// mesh.RecalculateNormals();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_273 = V_20;
			NullCheck(L_273);
			Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_273, /*hidden argument*/NULL);
			// mesh.RecalculateBounds();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_274 = V_20;
			NullCheck(L_274);
			Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_274, /*hidden argument*/NULL);
			// mesh.RecalculateTangents();
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_275 = V_20;
			NullCheck(L_275);
			Mesh_RecalculateTangents_m7FFF420167166E54C34D57E4E121BD4775B275E6(L_275, /*hidden argument*/NULL);
			// MeshFilter meshfilter = go.GetComponent<MeshFilter>();
			NullCheck(L_258);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_276;
			L_276 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_258, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
			// meshfilter.mesh = mesh;
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_277 = V_20;
			NullCheck(L_276);
			MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_276, L_277, /*hidden argument*/NULL);
		}

IL_06b5:
		{
			// foreach (DictionaryEntry de in subMeshes)
			RuntimeObject* L_278 = V_15;
			NullCheck(L_278);
			bool L_279;
			L_279 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_278);
			if (L_279)
			{
				goto IL_03ea;
			}
		}

IL_06c1:
		{
			IL2CPP_LEAVE(0x6D8, FINALLY_06c3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_06c3;
	}

FINALLY_06c3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_280 = V_15;
			V_21 = ((RuntimeObject*)IsInst((RuntimeObject*)L_280, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_281 = V_21;
			if (!L_281)
			{
				goto IL_06d7;
			}
		}

IL_06d0:
		{
			RuntimeObject* L_282 = V_21;
			NullCheck(L_282);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_282);
		}

IL_06d7:
		{
			IL2CPP_END_FINALLY(1731)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1731)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D8, IL_06d8)
	}

IL_06d8:
	{
		// Debug.Log("geneMesh" + file_name);
		String_t* L_283 = __this->get_file_name_17();
		String_t* L_284;
		L_284 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral105C054424B01CA7570E9CCB66D35EA72B8AF382, L_283, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_284, /*hidden argument*/NULL);
		// modelk.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_285 = V_0;
		NullCheck(L_285);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_286;
		L_286 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_285, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_287;
		memset((&L_287), 0, sizeof(L_287));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_287), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_286);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_286, L_287, /*hidden argument*/NULL);
		// modelk.transform.localEulerAngles = new Vector3(0, 0, 90);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_288 = V_0;
		NullCheck(L_288);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_289;
		L_289 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_288, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_290;
		memset((&L_290), 0, sizeof(L_290));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_290), (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_289);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_289, L_290, /*hidden argument*/NULL);
		// modelk.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_291 = V_0;
		NullCheck(L_291);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_291, (bool)0, /*hidden argument*/NULL);
		// uIController.current = uIController.current + 1;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_292 = __this->get_uIController_15();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_293 = __this->get_uIController_15();
		NullCheck(L_293);
		int32_t L_294 = L_293->get_current_11();
		NullCheck(L_292);
		L_292->set_current_11(((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hashtable points = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_0, /*hidden argument*/NULL);
		__this->set_points_5(L_0);
		// Hashtable file_vertices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_1, /*hidden argument*/NULL);
		__this->set_file_vertices_6(L_1);
		// Hashtable file_indices = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_2 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_2, /*hidden argument*/NULL);
		__this->set_file_indices_7(L_2);
		// Hashtable mesh_color = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_3 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_3, /*hidden argument*/NULL);
		__this->set_mesh_color_8(L_3);
		// List<List<string>> meshes = new List<List<string>>();
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_4 = (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *)il2cpp_codegen_object_new(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618(L_4, /*hidden argument*/List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		__this->set_meshes_9(L_4);
		// List<Vector3> vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_5, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_vertices_10(L_5);
		// List<Point> verticesPointArr = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_6 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_6, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		__this->set_verticesPointArr_11(L_6);
		// List<Color> colors = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_7, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		__this->set_colors_12(L_7);
		// Dictionary<string, GameObject> objs = new Dictionary<string, GameObject>();
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_8 = (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *)il2cpp_codegen_object_new(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A(L_8, /*hidden argument*/Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		__this->set_objs_13(L_8);
		// string file_name = "";
		__this->set_file_name_17(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7423A417FF831176F417E85141B0A56B11051913 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 v = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Pointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_mDCEBE5B7BDEBB91C693AA47F87C9116B6A33DABB (Pointer_t1B9D3F65B0F1F094124F5B4ADABF110931C3D9E2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 v = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_m74C43E03145ECBC4566A9979DB7A1D342972A527 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m01A435E125093AE9631843DBDD904FEF5C82D282 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pointer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// tips.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_tips_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0027;
	}

IL_001b:
	{
		// tips.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_tips_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// slider.maxValue = Models.Count - 1;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_slider_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_Models_7();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_5, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_4);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_4, ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))), /*hidden argument*/NULL);
		// if(current == total)
		int32_t L_7 = __this->get_current_11();
		int32_t L_8 = __this->get_total_10();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_005b;
		}
	}
	{
		// LoadingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_LoadingPanel_12();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_005b:
	{
		// loadingTxt.text = current + "/" + total;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_loadingTxt_9();
		int32_t* L_11 = __this->get_address_of_current_11();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		int32_t* L_13 = __this->get_address_of_total_10();
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_12, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		// LoadingPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_LoadingPanel_12();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::PlayAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PlayAnimation_m375DFC72BA97ADF6B9AC668DE2492B36E77C21FE (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(pointer)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pointer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// pointer.GetComponent<GameController>().playAnimation();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_pointer_4();
		NullCheck(L_2);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_3;
		L_3 = GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479(L_2, /*hidden argument*/GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var);
		NullCheck(L_3);
		GameController_playAnimation_m35343FC338FAE00A20C00EBE15CE7181E38D8FEE(L_3, /*hidden argument*/NULL);
		// tips.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_tips_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }else
		return;
	}

IL_002a:
	{
		// tips.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_tips_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::NextModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_NextModel_mAC7C3830FC0658D9F719C775745DD00FEB28D1A3 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(CurrentFrame < Models.Count - 1 )
		int32_t L_0 = __this->get_CurrentFrame_6();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_Models_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_0025;
		}
	}
	{
		// CurrentFrame = CurrentFrame + 1;
		int32_t L_3 = __this->get_CurrentFrame_6();
		__this->set_CurrentFrame_6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// } else
		goto IL_002c;
	}

IL_0025:
	{
		// CurrentFrame = 0;
		__this->set_CurrentFrame_6(0);
	}

IL_002c:
	{
		// showModel(CurrentFrame);
		int32_t L_4 = __this->get_CurrentFrame_6();
		UIController_showModel_mBF2EE1CFE4D20D7E33DBF5351975743A183ADDA1(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::PreModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PreModel_m376C8D7E5A4DCBBB6CD67C16A7E610078C733182 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentFrame > 0)
		int32_t L_0 = __this->get_CurrentFrame_6();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// CurrentFrame = CurrentFrame - 1;
		int32_t L_1 = __this->get_CurrentFrame_6();
		__this->set_CurrentFrame_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// }
		goto IL_002c;
	}

IL_0019:
	{
		// CurrentFrame = Models.Count - 1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_Models_7();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_2, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		__this->set_CurrentFrame_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
	}

IL_002c:
	{
		// showModel(CurrentFrame);
		int32_t L_4 = __this->get_CurrentFrame_6();
		UIController_showModel_mBF2EE1CFE4D20D7E33DBF5351975743A183ADDA1(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::sliderShowModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_sliderShowModel_m427C46B17C57335760CEC24694F74D0C1B203BD6 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		// CurrentFrame = Mathf.FloorToInt(slider.value);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_8();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_1, /*hidden argument*/NULL);
		__this->set_CurrentFrame_6(L_2);
		// showModel(CurrentFrame);
		int32_t L_3 = __this->get_CurrentFrame_6();
		UIController_showModel_mBF2EE1CFE4D20D7E33DBF5351975743A183ADDA1(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::showModel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_showModel_mBF2EE1CFE4D20D7E33DBF5351975743A183ADDA1 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Models.Count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// if (i == n)
		int32_t L_0 = V_0;
		int32_t L_1 = ___n0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001c;
		}
	}
	{
		// Models[i].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_Models_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// } else
		goto IL_002e;
	}

IL_001c:
	{
		// Models[i].SetActive(false);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_Models_7();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// for (int i = 0; i < Models.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < Models.Count; i++)
		int32_t L_9 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_Models_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_10, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
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
// System.Void UIController::MoveXAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_MoveXAxis_m399D5C2C971DF4131589272D020B60526EBC2129 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Log(direction);
		String_t* L_0 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// float offsetVal = float.Parse(moveOffset.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_moveOffset_13();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Vector3 pos = pointer.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pointer_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (direction == "forward")
		String_t* L_7 = ___direction0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// pointer.transform.position = new Vector3(pos.x + offsetVal, pos.y, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_pointer_4();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		float L_12 = L_11.get_x_2();
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_18, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_005f:
	{
		// pointer.transform.position = new Vector3(pos.x - offsetVal, pos.y, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_pointer_4();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_1;
		float L_22 = L_21.get_x_2();
		float L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = L_24.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_1;
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)), L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::MoveYAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_MoveYAxis_m00A41C348C04C7C8C082C64BF704E0B22C617CCA (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float offsetVal = float.Parse(moveOffset.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_moveOffset_13();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		float L_2;
		L_2 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 pos = pointer.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_pointer_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (direction == "forward")
		String_t* L_6 = ___direction0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// pointer.transform.position = new Vector3(pos.x , pos.y + offsetVal, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_pointer_4();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13 = L_12.get_y_3();
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16 = L_15.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), L_11, ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// pointer.transform.position = new Vector3(pos.x , pos.y - offsetVal, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_pointer_4();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		float L_21 = L_20.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		float L_23 = L_22.get_y_3();
		float L_24 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		float L_26 = L_25.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_21, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::MoveZAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_MoveZAxis_m68E9B8F3144447B22F4D632BFB22C8C68E79F2E3 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float offsetVal = float.Parse(moveOffset.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_moveOffset_13();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		float L_2;
		L_2 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 pos = pointer.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_pointer_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (direction == "forward")
		String_t* L_6 = ___direction0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralC523255E90EB47A1EB569A0D1D9BE0675B746B65, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// pointer.transform.position = new Vector3(pos.x , pos.y, pos.z + offsetVal);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_pointer_4();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		float L_15 = L_14.get_z_4();
		float L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), L_11, L_13, ((float)il2cpp_codegen_add((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// pointer.transform.position = new Vector3(pos.x , pos.y, pos.z - offsetVal);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_pointer_4();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		float L_21 = L_20.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		float L_23 = L_22.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = L_24.get_z_4();
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_21, L_23, ((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::RotXAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_RotXAxis_mC347E67869830EABE05FF7E9176E3619F1EEF716 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float offsetVal = rotXSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_rotXSlider_14();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// Vector3 pos = pointer.transform.localEulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_pointer_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// pointer.transform.localEulerAngles = new Vector3(offsetVal, pos.y, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_pointer_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_6, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::RotYAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_RotYAxis_mB9254A0E02ECE6E115B73A54F2E6E5DB24F0ED2A (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float offsetVal = rotYSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_rotYSlider_15();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// Vector3 pos = pointer.transform.localEulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_pointer_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// pointer.transform.localEulerAngles = new Vector3(pos.x, offsetVal, pos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_pointer_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		float L_8 = L_7.get_x_2();
		float L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_8, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_6, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::RotZAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_RotZAxis_mD7E9985E2DD619E45DF36A9379BEE639719B1E70 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float offsetVal = rotZSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_rotZSlider_16();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// Vector3 pos = pointer.transform.localEulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_pointer_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// pointer.transform.localEulerAngles = new Vector3(pos.x, pos.y, offsetVal);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_pointer_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		float L_10 = L_9.get_y_3();
		float L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_8, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_6, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ObjScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ObjScale_m32F5B9333EE8718C67D96483DE509476DBEBFF75 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float offsetVal = scaleSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_scaleSlider_17();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// Vector3 scale = pointer.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_pointer_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		// pointer.transform.localScale = new Vector3(offsetVal, offsetVal, offsetVal);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_pointer_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m57DAF9FADDD58C79489BCF6474E55D3514E9BA21 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> Models = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_Models_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameControlleBackupr/<GenerateMeshModel>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__14__ctor_m199760DB293DB10A813FB2C4FCAA458806690E67 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameControlleBackupr/<GenerateMeshModel>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__14_System_IDisposable_Dispose_m117A46929BBAF182732CDE902DA636021A5F3361 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameControlleBackupr/<GenerateMeshModel>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateMeshModelU3Ed__14_MoveNext_mF858A1B60B787127CFE744278CE4C65D5A0F9042 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time* 10);
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, ((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// file_name = filename;
		GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * L_6 = V_1;
		String_t* L_7 = __this->get_filename_4();
		NullCheck(L_6);
		L_6->set_file_name_14(L_7);
		// ReadTxt(filename);
		GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * L_8 = V_1;
		String_t* L_9 = __this->get_filename_4();
		NullCheck(L_8);
		GameControlleBackupr_ReadTxt_m61D66DB897542104FC07629BC2CD0200065892FD(L_8, L_9, /*hidden argument*/NULL);
		// geneMesh();
		GameControlleBackupr_tF3DD3BB8BBF24FCAD5639CD286F5E30D8DA273AF * L_10 = V_1;
		NullCheck(L_10);
		GameControlleBackupr_geneMesh_mE2B4CBE112CF61D4236D5A1FAF47F5950C567ACA(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameControlleBackupr/<GenerateMeshModel>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateMeshModelU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m19CEE4FE6746709650A14545B6AF82064D78CC84 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameControlleBackupr/<GenerateMeshModel>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__14_System_Collections_IEnumerator_Reset_m4DFF987D200807BA326E8556A444FD8FC7E59C68 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateMeshModelU3Ed__14_System_Collections_IEnumerator_Reset_m4DFF987D200807BA326E8556A444FD8FC7E59C68_RuntimeMethod_var)));
	}
}
// System.Object GameControlleBackupr/<GenerateMeshModel>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateMeshModelU3Ed__14_System_Collections_IEnumerator_get_Current_mDBC2985F69215501EA485970EF3359D83A745162 (U3CGenerateMeshModelU3Ed__14_tAD863B427F8145315A5CE2AEC6E8B48B51D21F9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameController/<GenerateMeshModel>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__16__ctor_m7A42B99DB1DB5BC295F9F5180711FA0765702B95 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameController/<GenerateMeshModel>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__16_System_IDisposable_Dispose_m10FD82C1CC67052DD9514135B79EEE9123AC6B83 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameController/<GenerateMeshModel>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateMeshModelU3Ed__16_MoveNext_m803BFEBDAEBFE2E72A0558BCF97793A620108873 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m1489F3D80C3FAD738803B0BF60191CAC88FEAC70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDCB17862B496888E185379734D9A3349C683BE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m17B4535D501AF018ED1771884E8F8B8ECC8000FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m619E55CB88757D0C2CBB98297CB628762B7AC141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDBC0DE5AB9960055FFE6FDC70402968D2A333D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * V_1 = NULL;
	Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time* 10);
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, ((float)il2cpp_codegen_multiply((float)L_4, (float)(10.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// file_name = filename;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_6 = V_1;
		String_t* L_7 = __this->get_filename_4();
		NullCheck(L_6);
		L_6->set_file_name_17(L_7);
		// if(!objs.ContainsKey(file_name))
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_9 = L_8->get_objs_13();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_file_name_17();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C(L_9, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		// ReadTxt(filename);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_13 = V_1;
		String_t* L_14 = __this->get_filename_4();
		NullCheck(L_13);
		GameController_ReadTxt_m25E9FFD0EC8F50666519BE46E60204CFB7A623FD(L_13, L_14, /*hidden argument*/NULL);
		// geneMesh();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_15 = V_1;
		NullCheck(L_15);
		GameController_geneMesh_mBE2140334EDDAD1EF300D3D3FF3F2499D56E7053(L_15, /*hidden argument*/NULL);
		// } else
		goto IL_00cb;
	}

IL_0078:
	{
		// foreach (var item in objs)
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_16 = V_1;
		NullCheck(L_16);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_17 = L_16->get_objs_13();
		NullCheck(L_17);
		Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42  L_18;
		L_18 = Dictionary_2_GetEnumerator_m1489F3D80C3FAD738803B0BF60191CAC88FEAC70(L_17, /*hidden argument*/Dictionary_2_GetEnumerator_m1489F3D80C3FAD738803B0BF60191CAC88FEAC70_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009b;
		}

IL_0086:
		{
			// foreach (var item in objs)
			KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346  L_19;
			L_19 = Enumerator_get_Current_m619E55CB88757D0C2CBB98297CB628762B7AC141_inline((Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m619E55CB88757D0C2CBB98297CB628762B7AC141_RuntimeMethod_var);
			V_3 = L_19;
			// item.Value.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = KeyValuePair_2_get_Value_mDBC0DE5AB9960055FFE6FDC70402968D2A333D1D_inline((KeyValuePair_2_t97C9AE6F69742C55E170E88F53A90F261B816346 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mDBC0DE5AB9960055FFE6FDC70402968D2A333D1D_RuntimeMethod_var);
			NullCheck(L_20);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		}

IL_009b:
		{
			// foreach (var item in objs)
			bool L_21;
			L_21 = Enumerator_MoveNext_m17B4535D501AF018ED1771884E8F8B8ECC8000FA((Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m17B4535D501AF018ED1771884E8F8B8ECC8000FA_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0086;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB4, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDCB17862B496888E185379734D9A3349C683BE8D((Enumerator_t9DEB86B35C92495193FE6BC6227BDE0D6DFA4B42 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mDCB17862B496888E185379734D9A3349C683BE8D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(166)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
	}

IL_00b4:
	{
		// objs[file_name].SetActive(true);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_22 = V_1;
		NullCheck(L_22);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_23 = L_22->get_objs_13();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_file_name_17();
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A(L_23, L_25, /*hidden argument*/Dictionary_2_get_Item_mC4E467FB6129C74774CC33C4A8E3B1F00A73E15A_RuntimeMethod_var);
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameController/<GenerateMeshModel>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateMeshModelU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDF2E35AEDAFF66C5F10B125672D0D0421BFC5921 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameController/<GenerateMeshModel>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateMeshModelU3Ed__16_System_Collections_IEnumerator_Reset_m13A6224493A31BBCF0F33DED14B33CF9DB20BF98 (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateMeshModelU3Ed__16_System_Collections_IEnumerator_Reset_m13A6224493A31BBCF0F33DED14B33CF9DB20BF98_RuntimeMethod_var)));
	}
}
// System.Object GameController/<GenerateMeshModel>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateMeshModelU3Ed__16_System_Collections_IEnumerator_get_Current_m9937121FA3FCCA2FFD51F258EA64764BB7517BDF (U3CGenerateMeshModelU3Ed__16_t77616AFE275524D9399F143C1104852E4598565B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
