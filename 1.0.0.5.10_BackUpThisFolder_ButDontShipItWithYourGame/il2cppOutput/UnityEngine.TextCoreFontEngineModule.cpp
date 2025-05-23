﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,UnityEngine.TextCore.Glyph>
struct KeyCollection_t7DFB54EEE9F73B96A1C6B50FFA50248E330F8F23;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,UnityEngine.TextCore.Glyph>
struct ValueCollection_t9D8F6C6B5687314A4B0B69B729B1DF24C2AE9AED;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,UnityEngine.TextCore.Glyph>[]
struct EntryU5BU5D_t2B23F93FCF85B0BA4D4C152B1468476B33B470D1;
// UnityEngine.TextCore.Glyph[]
struct GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5;
// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[]
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E;
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[]
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
// UnityEngine.TextCore.GlyphRect[]
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Glyph
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_TextCoreFontEngineModule[];
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m30C3F5890A20AF5FA64A272E19CFC8750E0F9D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_GenericListToMarshallingArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9D73A631FE45ED043F5F452D50CE5C38802434D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_GetFaceInfo_mF371B75CDEEDA91FF910BED8DEE8FEB2A493BE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_GetGlyphPairAdjustmentRecords_m23D346BEC5BA63185A01DF33576E98650947ABA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_GetGlyphPairAdjustmentTable_m67DAC7C0029384FC814621F85F8B35D0D3327BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_InitializeFontEngine_mCA2F9C3294A61C0294B4B9849082C0344169F322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_LoadFontFace_m15ECA69542615468DB27EE5DCA11EE855BDAA356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_LoadFontFace_m63A9171030B36C960896CEF55E7ECF55AF990548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_LoadFontFace_m6DCF863A84AF3E2EEB6AC69C7C19D937909698C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_LoadFontFace_m793FE6557D378E25CDF12DDA5EFAA1F0F9A51C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_TryAddGlyphToTexture_m45A94FA06ADDCE2FA6B139B29E942496B760A090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_TryAddGlyphsToTexture_m18740AD9F7264F54C397916268C0AB0738879801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_TryGetGlyphWithIndexValue_mD922A7EB95949E95D96C222D2CA1ED56BA2E81C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_TryGetGlyphWithUnicodeValue_m58889809E3D65A0F1C5AEFF4DF6D319EBD139159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine_TryGetSystemFontReference_mA32D1513035E9B58417092500DDC3A7C939367A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FontEngine__cctor_mD8EC115E258FD225726CBC71B249C1F411447D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_op_Inequality_mE925301B5EAA3E6E3FBD08527AA9386CFF2B591D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect__cctor_m74BDAD5150F67B623F7D02238DD25D30C133BBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphRect_get_zero_m359121752EE1A46C51118D84F03204F3285FF3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_op_Addition_mF26165B4CE61A5409AEFF24B0D1727804E13602B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph__ctor_m71D55A8FBEA48ECCD78D65CAC9D008905E56FBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph__ctor_m9FB83C6B166AC59E03B585F76C09C5FC1720281F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_get_atlasIndex_m575332307F2C182655EE9AD352E92F1B5F4D26DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_get_glyphRect_m94E7C5FE682695CDC096248EF027079F33768EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_get_index_mCFBBCF85E7F3434B7A595EEE3411EFFB78E5675B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_get_metrics_mB6E9D3D1899E35BA257638F6F58B7D260170B6FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_get_scale_m3ED738CBB032247526DB38161E180759B2D06F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_set_atlasIndex_m622CB24F3110B65CADB0C9F0223133B0DA926ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_set_glyphRect_mC21EB362D6EC56E0D110B0A08505CAD2DF26A6A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_set_index_mD033C966D79B910424B985F9D81C01D4E056B72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_set_metrics_m3350984977FC50061481B1EC563DE59147428BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Glyph_set_scale_m44247C5948E32562931FA8C44799A3E1E4F0562A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;

struct GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5;
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3B74AF9E7E84B3C57D4687184E31363228069DF2 
{
};

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2B23F93FCF85B0BA4D4C152B1468476B33B470D1* ____entries_1;
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
	KeyCollection_t7DFB54EEE9F73B96A1C6B50FFA50248E330F8F23* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9D8F6C6B5687314A4B0B69B729B1DF24C2AE9AED* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.TextCore.LowLevel.FontEngine
struct FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A  : public RuntimeObject
{
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_UnitsPerEM
	int32_t ___m_UnitsPerEM_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_19;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_20;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};

// UnityEngine.TextCore.LowLevel.FontEngineUtilities
struct FontEngineUtilities_t08D8707F6F929B42407961E303FD339A793E5BBB 
{
	union
	{
		struct
		{
		};
		uint8_t FontEngineUtilities_t08D8707F6F929B42407961E303FD339A793E5BBB__padding[1];
	};
};

// UnityEngine.TextCore.LowLevel.FontReference
struct FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172 
{
	// System.String UnityEngine.TextCore.LowLevel.FontReference::familyName
	String_t* ___familyName_0;
	// System.String UnityEngine.TextCore.LowLevel.FontReference::styleName
	String_t* ___styleName_1;
	// System.Int32 UnityEngine.TextCore.LowLevel.FontReference::faceIndex
	int32_t ___faceIndex_2;
	// System.String UnityEngine.TextCore.LowLevel.FontReference::filePath
	String_t* ___filePath_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.LowLevel.FontReference
struct FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_pinvoke
{
	char* ___familyName_0;
	char* ___styleName_1;
	int32_t ___faceIndex_2;
	char* ___filePath_3;
};
// Native definition for COM marshalling of UnityEngine.TextCore.LowLevel.FontReference
struct FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_com
{
	Il2CppChar* ___familyName_0;
	Il2CppChar* ___styleName_1;
	int32_t ___faceIndex_2;
	Il2CppChar* ___filePath_3;
};

// UnityEngine.TextCore.GlyphMetrics
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_Width
	float ___m_Width_0;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_Height
	float ___m_Height_1;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalBearingX
	float ___m_HorizontalBearingX_2;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalBearingY
	float ___m_HorizontalBearingY_3;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalAdvance
	float ___m_HorizontalAdvance_4;
};

// UnityEngine.TextCore.GlyphRect
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XPlacement
	float ___m_XPlacement_0;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YPlacement
	float ___m_YPlacement_1;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XAdvance
	float ___m_XAdvance_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YAdvance
	float ___m_YAdvance_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.TextCore.Glyph
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	// System.UInt32 UnityEngine.TextCore.Glyph::m_Index
	uint32_t ___m_Index_0;
	// UnityEngine.TextCore.GlyphMetrics UnityEngine.TextCore.Glyph::m_Metrics
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.Glyph::m_GlyphRect
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	// System.Single UnityEngine.TextCore.Glyph::m_Scale
	float ___m_Scale_3;
	// System.Int32 UnityEngine.TextCore.Glyph::m_AtlasIndex
	int32_t ___m_AtlasIndex_4;
	// UnityEngine.TextCore.GlyphClassDefinitionType UnityEngine.TextCore.Glyph::m_ClassDefinitionType
	int32_t ___m_ClassDefinitionType_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.Glyph
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
// Native definition for COM marshalling of UnityEngine.TextCore.Glyph
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphIndex
	uint32_t ___m_GlyphIndex_0;
	// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphValueRecord
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};

// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::index
	uint32_t ___index_0;
	// UnityEngine.TextCore.GlyphMetrics UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::metrics
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics_1;
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::glyphRect
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::scale
	float ___scale_3;
	// System.Int32 UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::atlasIndex
	int32_t ___atlasIndex_4;
	// UnityEngine.TextCore.GlyphClassDefinitionType UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct::classDefinitionType
	int32_t ___classDefinitionType_5;
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

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FirstAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_SecondAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FeatureLookupFlags
	int32_t ___m_FeatureLookupFlags_2;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>

// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>

// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt32>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.TextCore.LowLevel.FontEngine
struct FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields
{
	// UnityEngine.TextCore.Glyph[] UnityEngine.TextCore.LowLevel.FontEngine::s_Glyphs
	GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* ___s_Glyphs_0;
	// System.UInt32[] UnityEngine.TextCore.LowLevel.FontEngine::s_GlyphIndexes_MarshallingArray_A
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_GlyphIndexes_MarshallingArray_A_1;
	// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] UnityEngine.TextCore.LowLevel.FontEngine::s_GlyphMarshallingStruct_IN
	GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___s_GlyphMarshallingStruct_IN_2;
	// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] UnityEngine.TextCore.LowLevel.FontEngine::s_GlyphMarshallingStruct_OUT
	GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___s_GlyphMarshallingStruct_OUT_3;
	// UnityEngine.TextCore.GlyphRect[] UnityEngine.TextCore.LowLevel.FontEngine::s_FreeGlyphRects
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___s_FreeGlyphRects_4;
	// UnityEngine.TextCore.GlyphRect[] UnityEngine.TextCore.LowLevel.FontEngine::s_UsedGlyphRects
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___s_UsedGlyphRects_5;
	// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] UnityEngine.TextCore.LowLevel.FontEngine::s_PairAdjustmentRecords_MarshallingArray
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___s_PairAdjustmentRecords_MarshallingArray_6;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> UnityEngine.TextCore.LowLevel.FontEngine::s_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___s_GlyphLookupDictionary_7;
};

// UnityEngine.TextCore.LowLevel.FontEngine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.TextCore.FaceInfo

// UnityEngine.TextCore.FaceInfo

// UnityEngine.TextCore.LowLevel.FontEngineUtilities

// UnityEngine.TextCore.LowLevel.FontEngineUtilities

// UnityEngine.TextCore.LowLevel.FontReference

// UnityEngine.TextCore.LowLevel.FontReference

// UnityEngine.TextCore.GlyphMetrics

// UnityEngine.TextCore.GlyphMetrics

// UnityEngine.TextCore.GlyphRect
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.GlyphRect::s_ZeroGlyphRect
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect_4;
};

// UnityEngine.TextCore.GlyphRect

// UnityEngine.TextCore.LowLevel.GlyphValueRecord

// UnityEngine.TextCore.LowLevel.GlyphValueRecord

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// UnityEngine.TextCore.Glyph

// UnityEngine.TextCore.Glyph

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord

// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct

// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord

// UnityEngine.Texture2D

// UnityEngine.Texture2D
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.TextCore.GlyphRect[]
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D m_Items[1];

	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TextCore.Glyph[]
struct GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5  : public RuntimeArray
{
	ALIGN_FIELD (8) Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* m_Items[1];

	inline Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[]
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C m_Items[1];

	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[]
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::SetMarshallingArraySize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontEngine_SetMarshallingArraySize_TisIl2CppFullySharedGenericAny_m709179C42C5D880CD0F66B2D47840D4CCD52D816_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_marshallingArray, int32_t ___1_recordCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::GenericListToMarshallingArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>&,T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontEngine_GenericListToMarshallingArray_TisIl2CppFullySharedGenericAny_mC8265A55C3641B79D32DAC3686E5C1F1B46EFAD8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** ___0_srcList, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___1_dstArray, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.TextCore.FaceInfo::get_faceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.TextCore.FaceInfo::get_familyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_familyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.TextCore.FaceInfo::get_styleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_styleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.FaceInfo::get_pointSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_pointSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_lineHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_ascentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_ascentLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_capLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_capLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_meanLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_meanLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_baseline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_baseline(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_descentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_descentLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_superscriptOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_superscriptOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_superscriptSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_superscriptSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_subscriptOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_subscriptOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_subscriptSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_subscriptSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_underlineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_underlineOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_underlineThickness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_underlineThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_strikethroughOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_strikethroughOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_strikethroughThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.FaceInfo::get_tabWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.FaceInfo::set_tabWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphRect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphRect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphRect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphRect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.GlyphRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Int32 System.ValueType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphRect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.GlyphRect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.GlyphRect::Equals(UnityEngine.TextCore.GlyphRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_other, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.GlyphMetrics::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.GlyphMetrics::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.GlyphMetrics::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, float ___0_width, float ___1_height, float ___2_bearingX, float ___3_bearingY, float ___4_advance, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.GlyphMetrics::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.GlyphMetrics::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.GlyphMetrics::Equals(UnityEngine.TextCore.GlyphMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___0_other, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::InitializeFontEngine_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4 (String_t* ___0_filePath, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine.Font,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine.Font,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30 (String_t* ___0_familyName, String_t* ___1_styleName, int32_t ___2_pointSize, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference_Internal(System.String,System.String,UnityEngine.TextCore.LowLevel.FontReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F (String_t* ___0_familyName, String_t* ___1_styleName, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172* ___2_fontRef, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_Internal(UnityEngine.TextCore.FaceInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* ___0_faceInfo, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8 (uint32_t ___0_unicode, int32_t ___1_loadFlags, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___2_glyphStruct, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.Glyph::.ctor(UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_glyphStruct, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D (uint32_t ___0_glyphIndex, int32_t ___1_loadFlags, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___2_glyphStruct, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>::get_Count()
inline int32_t List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>::get_Item(System.Int32)
inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5 (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_Internal(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708 (uint32_t ___0_glyphIndex, int32_t ___1_padding, int32_t ___2_packingMode, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___3_freeGlyphRects, int32_t* ___4_freeGlyphRectCount, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___5_usedGlyphRects, int32_t* ___6_usedGlyphRectCount, int32_t ___7_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___8_texture, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___9_glyph, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>::Clear()
inline void List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>::Add(T)
inline void List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline (List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
inline int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngineUtilities::MaxValue(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83 (int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	uint32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_Internal(System.UInt32[],System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_glyphIndex, int32_t ___1_padding, int32_t ___2_packingMode, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___3_freeGlyphRects, int32_t* ___4_freeGlyphRectCount, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___5_usedGlyphRects, int32_t* ___6_usedGlyphRectCount, int32_t ___7_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___8_texture, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___9_glyphs, int32_t* ___10_glyphCount, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(System.UInt32[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_glyphIndexes, int32_t* ___1_recordCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::SetMarshallingArraySize<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>(T[]&,System.Int32)
inline void FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7** ___0_marshallingArray, int32_t ___1_recordCount, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))FontEngine_SetMarshallingArraySize_TisIl2CppFullySharedGenericAny_m709179C42C5D880CD0F66B2D47840D4CCD52D816_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)___0_marshallingArray, ___1_recordCount, method);
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_glyphPairAdjustmentRecords, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::GenericListToMarshallingArray<System.UInt32>(System.Collections.Generic.List`1<T>&,T[]&)
inline void FontEngine_GenericListToMarshallingArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9D73A631FE45ED043F5F452D50CE5C38802434D3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A** ___0_srcList, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___1_dstArray, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, const RuntimeMethod*))FontEngine_GenericListToMarshallingArray_TisIl2CppFullySharedGenericAny_mC8265A55C3641B79D32DAC3686E5C1F1B46EFAD8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)___0_srcList, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)___1_dstArray, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>::.ctor()
inline void Dictionary_2__ctor_m30C3F5890A20AF5FA64A272E19CFC8750E0F9D16 (Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_xPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_yPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_xAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_yAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphValueRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphValueRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_other, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::get_glyphIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) ;
// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::get_glyphValueRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphValueRecord,UnityEngine.TextCore.LowLevel.GlyphValueRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_lhs, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_firstAdjustmentRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_firstAdjustmentRecord(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_secondAdjustmentRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_secondAdjustmentRecord(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_featureLookupFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_featureLookupFlags(UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::.ctor(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_firstAdjustmentRecord, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___1_secondAdjustmentRecord, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_lhs, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_lhs, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.TextCore.FaceInfo
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke(const FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756& unmarshaled, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FaceIndex_0 = unmarshaled.___m_FaceIndex_0;
	marshaled.___m_FamilyName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_FamilyName_1);
	marshaled.___m_StyleName_2 = il2cpp_codegen_marshal_string(unmarshaled.___m_StyleName_2);
	marshaled.___m_PointSize_3 = unmarshaled.___m_PointSize_3;
	marshaled.___m_Scale_4 = unmarshaled.___m_Scale_4;
	marshaled.___m_UnitsPerEM_5 = unmarshaled.___m_UnitsPerEM_5;
	marshaled.___m_LineHeight_6 = unmarshaled.___m_LineHeight_6;
	marshaled.___m_AscentLine_7 = unmarshaled.___m_AscentLine_7;
	marshaled.___m_CapLine_8 = unmarshaled.___m_CapLine_8;
	marshaled.___m_MeanLine_9 = unmarshaled.___m_MeanLine_9;
	marshaled.___m_Baseline_10 = unmarshaled.___m_Baseline_10;
	marshaled.___m_DescentLine_11 = unmarshaled.___m_DescentLine_11;
	marshaled.___m_SuperscriptOffset_12 = unmarshaled.___m_SuperscriptOffset_12;
	marshaled.___m_SuperscriptSize_13 = unmarshaled.___m_SuperscriptSize_13;
	marshaled.___m_SubscriptOffset_14 = unmarshaled.___m_SubscriptOffset_14;
	marshaled.___m_SubscriptSize_15 = unmarshaled.___m_SubscriptSize_15;
	marshaled.___m_UnderlineOffset_16 = unmarshaled.___m_UnderlineOffset_16;
	marshaled.___m_UnderlineThickness_17 = unmarshaled.___m_UnderlineThickness_17;
	marshaled.___m_StrikethroughOffset_18 = unmarshaled.___m_StrikethroughOffset_18;
	marshaled.___m_StrikethroughThickness_19 = unmarshaled.___m_StrikethroughThickness_19;
	marshaled.___m_TabWidth_20 = unmarshaled.___m_TabWidth_20;
}
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back(const FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke& marshaled, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756& unmarshaled)
{
	int32_t unmarshaledm_FaceIndex_temp_0 = 0;
	unmarshaledm_FaceIndex_temp_0 = marshaled.___m_FaceIndex_0;
	unmarshaled.___m_FaceIndex_0 = unmarshaledm_FaceIndex_temp_0;
	unmarshaled.___m_FamilyName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_FamilyName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FamilyName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_FamilyName_1));
	unmarshaled.___m_StyleName_2 = il2cpp_codegen_marshal_string_result(marshaled.___m_StyleName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_StyleName_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_StyleName_2));
	int32_t unmarshaledm_PointSize_temp_3 = 0;
	unmarshaledm_PointSize_temp_3 = marshaled.___m_PointSize_3;
	unmarshaled.___m_PointSize_3 = unmarshaledm_PointSize_temp_3;
	float unmarshaledm_Scale_temp_4 = 0.0f;
	unmarshaledm_Scale_temp_4 = marshaled.___m_Scale_4;
	unmarshaled.___m_Scale_4 = unmarshaledm_Scale_temp_4;
	int32_t unmarshaledm_UnitsPerEM_temp_5 = 0;
	unmarshaledm_UnitsPerEM_temp_5 = marshaled.___m_UnitsPerEM_5;
	unmarshaled.___m_UnitsPerEM_5 = unmarshaledm_UnitsPerEM_temp_5;
	float unmarshaledm_LineHeight_temp_6 = 0.0f;
	unmarshaledm_LineHeight_temp_6 = marshaled.___m_LineHeight_6;
	unmarshaled.___m_LineHeight_6 = unmarshaledm_LineHeight_temp_6;
	float unmarshaledm_AscentLine_temp_7 = 0.0f;
	unmarshaledm_AscentLine_temp_7 = marshaled.___m_AscentLine_7;
	unmarshaled.___m_AscentLine_7 = unmarshaledm_AscentLine_temp_7;
	float unmarshaledm_CapLine_temp_8 = 0.0f;
	unmarshaledm_CapLine_temp_8 = marshaled.___m_CapLine_8;
	unmarshaled.___m_CapLine_8 = unmarshaledm_CapLine_temp_8;
	float unmarshaledm_MeanLine_temp_9 = 0.0f;
	unmarshaledm_MeanLine_temp_9 = marshaled.___m_MeanLine_9;
	unmarshaled.___m_MeanLine_9 = unmarshaledm_MeanLine_temp_9;
	float unmarshaledm_Baseline_temp_10 = 0.0f;
	unmarshaledm_Baseline_temp_10 = marshaled.___m_Baseline_10;
	unmarshaled.___m_Baseline_10 = unmarshaledm_Baseline_temp_10;
	float unmarshaledm_DescentLine_temp_11 = 0.0f;
	unmarshaledm_DescentLine_temp_11 = marshaled.___m_DescentLine_11;
	unmarshaled.___m_DescentLine_11 = unmarshaledm_DescentLine_temp_11;
	float unmarshaledm_SuperscriptOffset_temp_12 = 0.0f;
	unmarshaledm_SuperscriptOffset_temp_12 = marshaled.___m_SuperscriptOffset_12;
	unmarshaled.___m_SuperscriptOffset_12 = unmarshaledm_SuperscriptOffset_temp_12;
	float unmarshaledm_SuperscriptSize_temp_13 = 0.0f;
	unmarshaledm_SuperscriptSize_temp_13 = marshaled.___m_SuperscriptSize_13;
	unmarshaled.___m_SuperscriptSize_13 = unmarshaledm_SuperscriptSize_temp_13;
	float unmarshaledm_SubscriptOffset_temp_14 = 0.0f;
	unmarshaledm_SubscriptOffset_temp_14 = marshaled.___m_SubscriptOffset_14;
	unmarshaled.___m_SubscriptOffset_14 = unmarshaledm_SubscriptOffset_temp_14;
	float unmarshaledm_SubscriptSize_temp_15 = 0.0f;
	unmarshaledm_SubscriptSize_temp_15 = marshaled.___m_SubscriptSize_15;
	unmarshaled.___m_SubscriptSize_15 = unmarshaledm_SubscriptSize_temp_15;
	float unmarshaledm_UnderlineOffset_temp_16 = 0.0f;
	unmarshaledm_UnderlineOffset_temp_16 = marshaled.___m_UnderlineOffset_16;
	unmarshaled.___m_UnderlineOffset_16 = unmarshaledm_UnderlineOffset_temp_16;
	float unmarshaledm_UnderlineThickness_temp_17 = 0.0f;
	unmarshaledm_UnderlineThickness_temp_17 = marshaled.___m_UnderlineThickness_17;
	unmarshaled.___m_UnderlineThickness_17 = unmarshaledm_UnderlineThickness_temp_17;
	float unmarshaledm_StrikethroughOffset_temp_18 = 0.0f;
	unmarshaledm_StrikethroughOffset_temp_18 = marshaled.___m_StrikethroughOffset_18;
	unmarshaled.___m_StrikethroughOffset_18 = unmarshaledm_StrikethroughOffset_temp_18;
	float unmarshaledm_StrikethroughThickness_temp_19 = 0.0f;
	unmarshaledm_StrikethroughThickness_temp_19 = marshaled.___m_StrikethroughThickness_19;
	unmarshaled.___m_StrikethroughThickness_19 = unmarshaledm_StrikethroughThickness_temp_19;
	float unmarshaledm_TabWidth_temp_20 = 0.0f;
	unmarshaledm_TabWidth_temp_20 = marshaled.___m_TabWidth_20;
	unmarshaled.___m_TabWidth_20 = unmarshaledm_TabWidth_temp_20;
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.FaceInfo
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup(FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_FamilyName_1);
	marshaled.___m_FamilyName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_StyleName_2);
	marshaled.___m_StyleName_2 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.TextCore.FaceInfo
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_com(const FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756& unmarshaled, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com& marshaled)
{
	marshaled.___m_FaceIndex_0 = unmarshaled.___m_FaceIndex_0;
	marshaled.___m_FamilyName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_FamilyName_1);
	marshaled.___m_StyleName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_StyleName_2);
	marshaled.___m_PointSize_3 = unmarshaled.___m_PointSize_3;
	marshaled.___m_Scale_4 = unmarshaled.___m_Scale_4;
	marshaled.___m_UnitsPerEM_5 = unmarshaled.___m_UnitsPerEM_5;
	marshaled.___m_LineHeight_6 = unmarshaled.___m_LineHeight_6;
	marshaled.___m_AscentLine_7 = unmarshaled.___m_AscentLine_7;
	marshaled.___m_CapLine_8 = unmarshaled.___m_CapLine_8;
	marshaled.___m_MeanLine_9 = unmarshaled.___m_MeanLine_9;
	marshaled.___m_Baseline_10 = unmarshaled.___m_Baseline_10;
	marshaled.___m_DescentLine_11 = unmarshaled.___m_DescentLine_11;
	marshaled.___m_SuperscriptOffset_12 = unmarshaled.___m_SuperscriptOffset_12;
	marshaled.___m_SuperscriptSize_13 = unmarshaled.___m_SuperscriptSize_13;
	marshaled.___m_SubscriptOffset_14 = unmarshaled.___m_SubscriptOffset_14;
	marshaled.___m_SubscriptSize_15 = unmarshaled.___m_SubscriptSize_15;
	marshaled.___m_UnderlineOffset_16 = unmarshaled.___m_UnderlineOffset_16;
	marshaled.___m_UnderlineThickness_17 = unmarshaled.___m_UnderlineThickness_17;
	marshaled.___m_StrikethroughOffset_18 = unmarshaled.___m_StrikethroughOffset_18;
	marshaled.___m_StrikethroughThickness_19 = unmarshaled.___m_StrikethroughThickness_19;
	marshaled.___m_TabWidth_20 = unmarshaled.___m_TabWidth_20;
}
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_com_back(const FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com& marshaled, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756& unmarshaled)
{
	int32_t unmarshaledm_FaceIndex_temp_0 = 0;
	unmarshaledm_FaceIndex_temp_0 = marshaled.___m_FaceIndex_0;
	unmarshaled.___m_FaceIndex_0 = unmarshaledm_FaceIndex_temp_0;
	unmarshaled.___m_FamilyName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_FamilyName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FamilyName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_FamilyName_1));
	unmarshaled.___m_StyleName_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_StyleName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_StyleName_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_StyleName_2));
	int32_t unmarshaledm_PointSize_temp_3 = 0;
	unmarshaledm_PointSize_temp_3 = marshaled.___m_PointSize_3;
	unmarshaled.___m_PointSize_3 = unmarshaledm_PointSize_temp_3;
	float unmarshaledm_Scale_temp_4 = 0.0f;
	unmarshaledm_Scale_temp_4 = marshaled.___m_Scale_4;
	unmarshaled.___m_Scale_4 = unmarshaledm_Scale_temp_4;
	int32_t unmarshaledm_UnitsPerEM_temp_5 = 0;
	unmarshaledm_UnitsPerEM_temp_5 = marshaled.___m_UnitsPerEM_5;
	unmarshaled.___m_UnitsPerEM_5 = unmarshaledm_UnitsPerEM_temp_5;
	float unmarshaledm_LineHeight_temp_6 = 0.0f;
	unmarshaledm_LineHeight_temp_6 = marshaled.___m_LineHeight_6;
	unmarshaled.___m_LineHeight_6 = unmarshaledm_LineHeight_temp_6;
	float unmarshaledm_AscentLine_temp_7 = 0.0f;
	unmarshaledm_AscentLine_temp_7 = marshaled.___m_AscentLine_7;
	unmarshaled.___m_AscentLine_7 = unmarshaledm_AscentLine_temp_7;
	float unmarshaledm_CapLine_temp_8 = 0.0f;
	unmarshaledm_CapLine_temp_8 = marshaled.___m_CapLine_8;
	unmarshaled.___m_CapLine_8 = unmarshaledm_CapLine_temp_8;
	float unmarshaledm_MeanLine_temp_9 = 0.0f;
	unmarshaledm_MeanLine_temp_9 = marshaled.___m_MeanLine_9;
	unmarshaled.___m_MeanLine_9 = unmarshaledm_MeanLine_temp_9;
	float unmarshaledm_Baseline_temp_10 = 0.0f;
	unmarshaledm_Baseline_temp_10 = marshaled.___m_Baseline_10;
	unmarshaled.___m_Baseline_10 = unmarshaledm_Baseline_temp_10;
	float unmarshaledm_DescentLine_temp_11 = 0.0f;
	unmarshaledm_DescentLine_temp_11 = marshaled.___m_DescentLine_11;
	unmarshaled.___m_DescentLine_11 = unmarshaledm_DescentLine_temp_11;
	float unmarshaledm_SuperscriptOffset_temp_12 = 0.0f;
	unmarshaledm_SuperscriptOffset_temp_12 = marshaled.___m_SuperscriptOffset_12;
	unmarshaled.___m_SuperscriptOffset_12 = unmarshaledm_SuperscriptOffset_temp_12;
	float unmarshaledm_SuperscriptSize_temp_13 = 0.0f;
	unmarshaledm_SuperscriptSize_temp_13 = marshaled.___m_SuperscriptSize_13;
	unmarshaled.___m_SuperscriptSize_13 = unmarshaledm_SuperscriptSize_temp_13;
	float unmarshaledm_SubscriptOffset_temp_14 = 0.0f;
	unmarshaledm_SubscriptOffset_temp_14 = marshaled.___m_SubscriptOffset_14;
	unmarshaled.___m_SubscriptOffset_14 = unmarshaledm_SubscriptOffset_temp_14;
	float unmarshaledm_SubscriptSize_temp_15 = 0.0f;
	unmarshaledm_SubscriptSize_temp_15 = marshaled.___m_SubscriptSize_15;
	unmarshaled.___m_SubscriptSize_15 = unmarshaledm_SubscriptSize_temp_15;
	float unmarshaledm_UnderlineOffset_temp_16 = 0.0f;
	unmarshaledm_UnderlineOffset_temp_16 = marshaled.___m_UnderlineOffset_16;
	unmarshaled.___m_UnderlineOffset_16 = unmarshaledm_UnderlineOffset_temp_16;
	float unmarshaledm_UnderlineThickness_temp_17 = 0.0f;
	unmarshaledm_UnderlineThickness_temp_17 = marshaled.___m_UnderlineThickness_17;
	unmarshaled.___m_UnderlineThickness_17 = unmarshaledm_UnderlineThickness_temp_17;
	float unmarshaledm_StrikethroughOffset_temp_18 = 0.0f;
	unmarshaledm_StrikethroughOffset_temp_18 = marshaled.___m_StrikethroughOffset_18;
	unmarshaled.___m_StrikethroughOffset_18 = unmarshaledm_StrikethroughOffset_temp_18;
	float unmarshaledm_StrikethroughThickness_temp_19 = 0.0f;
	unmarshaledm_StrikethroughThickness_temp_19 = marshaled.___m_StrikethroughThickness_19;
	unmarshaled.___m_StrikethroughThickness_19 = unmarshaledm_StrikethroughThickness_temp_19;
	float unmarshaledm_TabWidth_temp_20 = 0.0f;
	unmarshaledm_TabWidth_temp_20 = marshaled.___m_TabWidth_20;
	unmarshaled.___m_TabWidth_20 = unmarshaledm_TabWidth_temp_20;
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.FaceInfo
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_com_cleanup(FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FamilyName_1);
	marshaled.___m_FamilyName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_StyleName_2);
	marshaled.___m_StyleName_2 = NULL;
}
// System.Int32 UnityEngine.TextCore.FaceInfo::get_faceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 3));
		int32_t L_0 = __this->___m_FaceIndex_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 4));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FaceInfo_get_faceIndex_m3C9FB6429035CD34ACD201FB5951AF06E9C2A641(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.TextCore.FaceInfo::get_familyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 5));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 6));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 8));
		String_t* L_0 = __this->___m_FamilyName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 9));
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FaceInfo_get_familyName_m62DAF5DE45EA9F3B300B927603D101D350D27241(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_familyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 10));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 11));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 13));
		String_t* L_0 = ___0_value;
		__this->___m_FamilyName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FamilyName_1), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 14));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_familyName_m49CB07A51AC9008B4F399A3064EC4FF6EA8E839D(_thisAdjusted, ___0_value, method);
}
// System.String UnityEngine.TextCore.FaceInfo::get_styleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 16));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 18));
		String_t* L_0 = __this->___m_StyleName_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 19));
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FaceInfo_get_styleName_mACBAA6529BCE3BC14987645691350A4FB1CB0FC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_styleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 20));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 21));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 23));
		String_t* L_0 = ___0_value;
		__this->___m_StyleName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StyleName_2), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 24));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_styleName_m3BEBF7E576032A668BCC83D88D2F6902F561B5E6(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.TextCore.FaceInfo::get_pointSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 25));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 26));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 28));
		int32_t L_0 = __this->___m_PointSize_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 29));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FaceInfo_get_pointSize_m7EF7429A4725AB715931A220F6BB498C3D6BF7CB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_pointSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 30));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 31));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 33));
		int32_t L_0 = ___0_value;
		__this->___m_PointSize_3 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 34));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_pointSize_m17D0B03C4A762F657A4ABD15327B08D6B55EF492(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 35));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 36));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 38));
		float L_0 = __this->___m_Scale_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 39));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_scale_mC475A572AD4956B47D8B9F8D90DC69BBBB102FCD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 40));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 41));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 43));
		float L_0 = ___0_value;
		__this->___m_Scale_4 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 44));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_scale_m379253929403DA08480CAD127C908A0E8329A5D4(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 45));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 46));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 48));
		float L_0 = __this->___m_LineHeight_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 49));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_lineHeight_m528B4A822181FCECF3D4FF1045DF288E5872AB9D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_lineHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 50));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 51));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 52));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 53));
		float L_0 = ___0_value;
		__this->___m_LineHeight_6 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 54));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_lineHeight_m5952A394C6055DD86700448D9E33EBBE852E05AE(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_ascentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 55));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 56));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 58));
		float L_0 = __this->___m_AscentLine_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 59));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_ascentLine_m193755D649428EC24A7E433A1728F11DA7547ABD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_ascentLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 60));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 61));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 62));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 63));
		float L_0 = ___0_value;
		__this->___m_AscentLine_7 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 64));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_ascentLine_mDFB32635374875A695D3BB686D2A16C648A20D78(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_capLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 65));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 66));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 68));
		float L_0 = __this->___m_CapLine_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 69));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_capLine_m0D95B5D5CEC5CFB12091F5EB5965DE6E38588C88(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_capLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 70));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 71));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 72));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 73));
		float L_0 = ___0_value;
		__this->___m_CapLine_8 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 74));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_capLine_m4716D75CE87EC018E5EA3DE87DA703DBE7A9FEEF(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_meanLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 75));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 76));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 77));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 78));
		float L_0 = __this->___m_MeanLine_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 79));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_meanLine_m5FF396E0E32A046C1D3CBD3AC1FA279984394D96(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_meanLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 80));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 81));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 82));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 83));
		float L_0 = ___0_value;
		__this->___m_MeanLine_9 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 84));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_meanLine_mE957CD43CB778B093331CC4B10A5330E8FF1CB99(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_baseline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 85));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 86));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 87));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 88));
		float L_0 = __this->___m_Baseline_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 89));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_baseline_m934B597D3E0080FEF98CBDD091C457B497179C3A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_baseline(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 90));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 91));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 92));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 93));
		float L_0 = ___0_value;
		__this->___m_Baseline_10 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 94));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_baseline_m528F6ADAF4F45A31E9D2BA362FB3C02B03DDD741(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_descentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 95));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 96));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 97));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 98));
		float L_0 = __this->___m_DescentLine_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 99));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_descentLine_m811A243C9B328B0C546BF9927A010A05DF172BD3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_descentLine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 100));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 101));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 103));
		float L_0 = ___0_value;
		__this->___m_DescentLine_11 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 104));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_descentLine_m62423E864258229A85FD3684D8385A44C01AF97C(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_superscriptOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 105));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 106));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 107));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 108));
		float L_0 = __this->___m_SuperscriptOffset_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 109));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_superscriptOffset_m8D462DB86414D8507C7D1CC6881DA9EC896FB80A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_superscriptOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 110));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 111));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 112));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 113));
		float L_0 = ___0_value;
		__this->___m_SuperscriptOffset_12 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 114));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_superscriptOffset_mC81144590FA80858D489AFC46AAA383E11D3D2B5(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_superscriptSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 116));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 117));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 118));
		float L_0 = __this->___m_SuperscriptSize_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 119));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_superscriptSize_mC3ABE7C70559A8214294CDA598B17FD62BDC2EE0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_superscriptSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 120));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 121));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 122));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 123));
		float L_0 = ___0_value;
		__this->___m_SuperscriptSize_13 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 124));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_superscriptSize_m89F17C1502C07A3846402A5A43369BFB66723515(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_subscriptOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 125));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 126));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 127));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 128));
		float L_0 = __this->___m_SubscriptOffset_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 129));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_subscriptOffset_mF1D3E68AC3D449CBC73AA0CBF5B8A187C6C5285A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_subscriptOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 131));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 132));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 133));
		float L_0 = ___0_value;
		__this->___m_SubscriptOffset_14 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 134));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_subscriptOffset_m796EF61DE0677BFB134F6B8C4B6C1869BCF8782A(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_subscriptSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 135));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 136));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 137));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 138));
		float L_0 = __this->___m_SubscriptSize_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 139));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_subscriptSize_mF6264BFB215FDE6C94A45D2F8FC946ADFCDD2E31(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_subscriptSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 140));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 141));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 142));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 143));
		float L_0 = ___0_value;
		__this->___m_SubscriptSize_15 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 144));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_subscriptSize_m5759439F9D100591A6FFF1D7377495CEBDCD6B5D(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_underlineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 145));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 146));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 147));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 148));
		float L_0 = __this->___m_UnderlineOffset_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 149));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_underlineOffset_mB1CBB29ECFFE69047F35E654E7F90755F95DD251(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_underlineOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 152));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 153));
		float L_0 = ___0_value;
		__this->___m_UnderlineOffset_16 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 154));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_underlineOffset_m1C0E755772FE8C47D565E6CC7DC4E953B71794AA(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_underlineThickness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 155));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 156));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 157));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 158));
		float L_0 = __this->___m_UnderlineThickness_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 159));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_underlineThickness_mC032F8C026994AF3FD49E6AB12E113F61EFA98E2(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_underlineThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 160));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 161));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 162));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 163));
		float L_0 = ___0_value;
		__this->___m_UnderlineThickness_17 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 164));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_underlineThickness_mDD002D08CE97E0C7DA6FA6FFBDD15295D24B303A(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_strikethroughOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 165));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 166));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 167));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 168));
		float L_0 = __this->___m_StrikethroughOffset_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 169));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_strikethroughOffset_m7997E4A1512FE358331B3A6543C62C92A0AA5CA5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_strikethroughOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 170));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 171));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 172));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 173));
		float L_0 = ___0_value;
		__this->___m_StrikethroughOffset_18 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 174));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_strikethroughOffset_m57B05848BDA21F7AF6563394D29C8AE7107FEFF0(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.TextCore.FaceInfo::set_strikethroughThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 175));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 176));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 177));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 178));
		float L_0 = ___0_value;
		__this->___m_StrikethroughThickness_19 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 179));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_strikethroughThickness_m8CA3C9897FF3D5D0F653539CCBF5E16E01CACF52(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.TextCore.FaceInfo::get_tabWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 180));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 181));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 182));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 183));
		float L_0 = __this->___m_TabWidth_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 184));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceInfo_get_tabWidth_mC6D9F42C40EDD767DE22050E4FBE3878AC96B161(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.FaceInfo::set_tabWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 185));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 186));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 187));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 188));
		float L_0 = ___0_value;
		__this->___m_TabWidth_20 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 189));
		return;
	}
}
IL2CPP_EXTERN_C  void FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*>(__this + _offset);
	FaceInfo_set_tabWidth_m44234ED657FAB54320C48C34D48532F8232F6E1D(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.TextCore.GlyphRect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 190));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 191));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 192));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 193));
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 194));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphRect_get_x_m453EECC6C6F08602B1F74C5E1D8EE1163236A898(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.TextCore.GlyphRect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 195));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 196));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 197));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 198));
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 199));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphRect_get_y_mE31390BB3185EEA82DD16EA41E208F6A0397E3EA(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.TextCore.GlyphRect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 200));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 201));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 202));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 203));
		int32_t L_0 = __this->___m_Width_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 204));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphRect_get_width_mD291C7644BBF18D6A213427F6C9C28840F233F12(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.TextCore.GlyphRect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 205));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 206));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 207));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 208));
		int32_t L_0 = __this->___m_Height_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 209));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphRect_get_height_m7F4D04452994E0D18762BB44352608E484DAAC1A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.GlyphRect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GlyphRect_get_zero_m359121752EE1A46C51118D84F03204F3285FF3FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_get_zero_m359121752EE1A46C51118D84F03204F3285FF3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_get_zero_m359121752EE1A46C51118D84F03204F3285FF3FA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 211));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 212));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 213));
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = ((GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields*)il2cpp_codegen_static_fields_for(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var))->___s_ZeroGlyphRect_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 214));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.GlyphRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_width), (&___3_height));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 216));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 218));
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 219));
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 220));
		int32_t L_2 = ___2_width;
		__this->___m_Width_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 221));
		int32_t L_3 = ___3_height;
		__this->___m_Height_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 222));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95(_thisAdjusted, ___0_x, ___1_y, ___2_width, ___3_height, method);
}
// System.Int32 UnityEngine.TextCore.GlyphRect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 223));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 224));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 225));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 226));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = (*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)__this);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 227));
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 227));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 228));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.GlyphRect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 230));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 231));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 232));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = (*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)__this);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 233));
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 233));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 234));
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.GlyphRect::Equals(UnityEngine.TextCore.GlyphRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 235));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 236));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 237));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 238));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = (*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)__this);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var, &L_1);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_3 = ___0_other;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_4 = L_3;
		RuntimeObject* L_5 = Box(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 239));
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 239));
		V_0 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 240));
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87_AdjustorThunk (RuntimeObject* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_other, const RuntimeMethod* method)
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.GlyphRect::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphRect__cctor_m74BDAD5150F67B623F7D02238DD25D30C133BBDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect__cctor_m74BDAD5150F67B623F7D02238DD25D30C133BBDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphRect__cctor_m74BDAD5150F67B623F7D02238DD25D30C133BBDA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 241));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 242));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 243));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 244));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0;
		memset((&L_0), 0, sizeof(L_0));
		GlyphRect__ctor_m2B11A6C6C70735CB77FE2176E3D55D922D772A95((&L_0), 0, 0, 0, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 244));
		((GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields*)il2cpp_codegen_static_fields_for(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var))->___s_ZeroGlyphRect_4 = L_0;
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
// System.Single UnityEngine.TextCore.GlyphMetrics::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 245));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 246));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 247));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 248));
		float L_0 = __this->___m_Width_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 249));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphMetrics_get_width_m0F9F391E3A98984167E8001D4101BE1CE9354D13(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.GlyphMetrics::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 250));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 251));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 252));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 253));
		float L_0 = __this->___m_Height_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 254));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphMetrics_get_height_mE0872B23CE1A20BF78DEACDBD53BAF789D84AD5C(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 255));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 256));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 257));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 258));
		float L_0 = __this->___m_HorizontalBearingX_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 259));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphMetrics_get_horizontalBearingX_m9C39B5E6D27FF34B706649AE47EE9390B5D76D6F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 260));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 261));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 262));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 263));
		float L_0 = __this->___m_HorizontalBearingY_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 264));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphMetrics_get_horizontalBearingY_mD316BDD38A32258256994D6A2BCF0FC051D9B223(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 265));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 266));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 267));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 268));
		float L_0 = __this->___m_HorizontalAdvance_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 269));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphMetrics_get_horizontalAdvance_m110E66C340A19E672FB1C26DFB875AB6900AFFF1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.GlyphMetrics::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, float ___0_width, float ___1_height, float ___2_bearingX, float ___3_bearingY, float ___4_advance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_width), (&___1_height), (&___2_bearingX), (&___3_bearingY), (&___4_advance));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 270));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 271));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 272));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 273));
		float L_0 = ___0_width;
		__this->___m_Width_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 274));
		float L_1 = ___1_height;
		__this->___m_Height_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 275));
		float L_2 = ___2_bearingX;
		__this->___m_HorizontalBearingX_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 276));
		float L_3 = ___3_bearingY;
		__this->___m_HorizontalBearingY_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 277));
		float L_4 = ___4_advance;
		__this->___m_HorizontalAdvance_4 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 278));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D_AdjustorThunk (RuntimeObject* __this, float ___0_width, float ___1_height, float ___2_bearingX, float ___3_bearingY, float ___4_advance, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	GlyphMetrics__ctor_m9CD09465685783A596A7F9112EF7D6A7E1A2792D(_thisAdjusted, ___0_width, ___1_height, ___2_bearingX, ___3_bearingY, ___4_advance, method);
}
// System.Int32 UnityEngine.TextCore.GlyphMetrics::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 279));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 280));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 281));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 282));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_0 = (*(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*)__this);
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 283));
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 283));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 284));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphMetrics_GetHashCode_mB1988F3C7DA77518D4DE0F116995F63C99A073E6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.GlyphMetrics::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970 (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 285));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 286));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 287));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 288));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_0 = (*(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*)__this);
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 289));
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 289));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 290));
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphMetrics_Equals_mB8EE2CF8E9D9D51AF2C7B4F13209AFC66456C970(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.GlyphMetrics::Equals(UnityEngine.TextCore.GlyphMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB (GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* __this, GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 291));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 292));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 293));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 294));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_0 = (*(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*)__this);
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var, &L_1);
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_3 = ___0_other;
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_4 = L_3;
		RuntimeObject* L_5 = Box(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 295));
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 295));
		V_0 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 296));
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB_AdjustorThunk (RuntimeObject* __this, GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___0_other, const RuntimeMethod* method)
{
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphMetrics_Equals_mA8F8587C1725FA86DD6E87CFDFF0DDB9996112CB(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.TextCore.Glyph
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke(const Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F& unmarshaled, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Index_0 = unmarshaled.___m_Index_0;
	marshaled.___m_Metrics_1 = unmarshaled.___m_Metrics_1;
	marshaled.___m_GlyphRect_2 = unmarshaled.___m_GlyphRect_2;
	marshaled.___m_Scale_3 = unmarshaled.___m_Scale_3;
	marshaled.___m_AtlasIndex_4 = unmarshaled.___m_AtlasIndex_4;
	marshaled.___m_ClassDefinitionType_5 = unmarshaled.___m_ClassDefinitionType_5;
}
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back(const Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke& marshaled, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F& unmarshaled)
{
	uint32_t unmarshaledm_Index_temp_0 = 0;
	unmarshaledm_Index_temp_0 = marshaled.___m_Index_0;
	unmarshaled.___m_Index_0 = unmarshaledm_Index_temp_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A unmarshaledm_Metrics_temp_1;
	memset((&unmarshaledm_Metrics_temp_1), 0, sizeof(unmarshaledm_Metrics_temp_1));
	unmarshaledm_Metrics_temp_1 = marshaled.___m_Metrics_1;
	unmarshaled.___m_Metrics_1 = unmarshaledm_Metrics_temp_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D unmarshaledm_GlyphRect_temp_2;
	memset((&unmarshaledm_GlyphRect_temp_2), 0, sizeof(unmarshaledm_GlyphRect_temp_2));
	unmarshaledm_GlyphRect_temp_2 = marshaled.___m_GlyphRect_2;
	unmarshaled.___m_GlyphRect_2 = unmarshaledm_GlyphRect_temp_2;
	float unmarshaledm_Scale_temp_3 = 0.0f;
	unmarshaledm_Scale_temp_3 = marshaled.___m_Scale_3;
	unmarshaled.___m_Scale_3 = unmarshaledm_Scale_temp_3;
	int32_t unmarshaledm_AtlasIndex_temp_4 = 0;
	unmarshaledm_AtlasIndex_temp_4 = marshaled.___m_AtlasIndex_4;
	unmarshaled.___m_AtlasIndex_4 = unmarshaledm_AtlasIndex_temp_4;
	int32_t unmarshaledm_ClassDefinitionType_temp_5 = 0;
	unmarshaledm_ClassDefinitionType_temp_5 = marshaled.___m_ClassDefinitionType_5;
	unmarshaled.___m_ClassDefinitionType_5 = unmarshaledm_ClassDefinitionType_temp_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.Glyph
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TextCore.Glyph
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_com(const Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F& unmarshaled, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com& marshaled)
{
	marshaled.___m_Index_0 = unmarshaled.___m_Index_0;
	marshaled.___m_Metrics_1 = unmarshaled.___m_Metrics_1;
	marshaled.___m_GlyphRect_2 = unmarshaled.___m_GlyphRect_2;
	marshaled.___m_Scale_3 = unmarshaled.___m_Scale_3;
	marshaled.___m_AtlasIndex_4 = unmarshaled.___m_AtlasIndex_4;
	marshaled.___m_ClassDefinitionType_5 = unmarshaled.___m_ClassDefinitionType_5;
}
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_com_back(const Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com& marshaled, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F& unmarshaled)
{
	uint32_t unmarshaledm_Index_temp_0 = 0;
	unmarshaledm_Index_temp_0 = marshaled.___m_Index_0;
	unmarshaled.___m_Index_0 = unmarshaledm_Index_temp_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A unmarshaledm_Metrics_temp_1;
	memset((&unmarshaledm_Metrics_temp_1), 0, sizeof(unmarshaledm_Metrics_temp_1));
	unmarshaledm_Metrics_temp_1 = marshaled.___m_Metrics_1;
	unmarshaled.___m_Metrics_1 = unmarshaledm_Metrics_temp_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D unmarshaledm_GlyphRect_temp_2;
	memset((&unmarshaledm_GlyphRect_temp_2), 0, sizeof(unmarshaledm_GlyphRect_temp_2));
	unmarshaledm_GlyphRect_temp_2 = marshaled.___m_GlyphRect_2;
	unmarshaled.___m_GlyphRect_2 = unmarshaledm_GlyphRect_temp_2;
	float unmarshaledm_Scale_temp_3 = 0.0f;
	unmarshaledm_Scale_temp_3 = marshaled.___m_Scale_3;
	unmarshaled.___m_Scale_3 = unmarshaledm_Scale_temp_3;
	int32_t unmarshaledm_AtlasIndex_temp_4 = 0;
	unmarshaledm_AtlasIndex_temp_4 = marshaled.___m_AtlasIndex_4;
	unmarshaled.___m_AtlasIndex_4 = unmarshaledm_AtlasIndex_temp_4;
	int32_t unmarshaledm_ClassDefinitionType_temp_5 = 0;
	unmarshaledm_ClassDefinitionType_temp_5 = marshaled.___m_ClassDefinitionType_5;
	unmarshaled.___m_ClassDefinitionType_5 = unmarshaledm_ClassDefinitionType_temp_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.Glyph
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_com_cleanup(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com& marshaled)
{
}
// System.UInt32 UnityEngine.TextCore.Glyph::get_index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Glyph_get_index_mCFBBCF85E7F3434B7A595EEE3411EFFB78E5675B (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_get_index_mCFBBCF85E7F3434B7A595EEE3411EFFB78E5675B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_get_index_mCFBBCF85E7F3434B7A595EEE3411EFFB78E5675B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 297));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 298));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 299));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 300));
		uint32_t L_0 = __this->___m_Index_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 301));
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.Glyph::set_index(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph_set_index_mD033C966D79B910424B985F9D81C01D4E056B72C (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_set_index_mD033C966D79B910424B985F9D81C01D4E056B72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_set_index_mD033C966D79B910424B985F9D81C01D4E056B72C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 302));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 303));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 304));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 305));
		uint32_t L_0 = ___0_value;
		__this->___m_Index_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 306));
		return;
	}
}
// UnityEngine.TextCore.GlyphMetrics UnityEngine.TextCore.Glyph::get_metrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A Glyph_get_metrics_mB6E9D3D1899E35BA257638F6F58B7D260170B6FA (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_get_metrics_mB6E9D3D1899E35BA257638F6F58B7D260170B6FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_get_metrics_mB6E9D3D1899E35BA257638F6F58B7D260170B6FA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 309));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 310));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_0 = __this->___m_Metrics_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 311));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.Glyph::set_metrics(UnityEngine.TextCore.GlyphMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph_set_metrics_m3350984977FC50061481B1EC563DE59147428BC2 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_set_metrics_m3350984977FC50061481B1EC563DE59147428BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_set_metrics_m3350984977FC50061481B1EC563DE59147428BC2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 312));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 313));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 314));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 315));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_0 = ___0_value;
		__this->___m_Metrics_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 316));
		return;
	}
}
// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.Glyph::get_glyphRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D Glyph_get_glyphRect_m94E7C5FE682695CDC096248EF027079F33768EE5 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_get_glyphRect_m94E7C5FE682695CDC096248EF027079F33768EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_get_glyphRect_m94E7C5FE682695CDC096248EF027079F33768EE5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 317));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 318));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 319));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 320));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = __this->___m_GlyphRect_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 321));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.Glyph::set_glyphRect(UnityEngine.TextCore.GlyphRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph_set_glyphRect_mC21EB362D6EC56E0D110B0A08505CAD2DF26A6A8 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_set_glyphRect_mC21EB362D6EC56E0D110B0A08505CAD2DF26A6A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_set_glyphRect_mC21EB362D6EC56E0D110B0A08505CAD2DF26A6A8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 323));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 324));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 325));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_0 = ___0_value;
		__this->___m_GlyphRect_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 326));
		return;
	}
}
// System.Single UnityEngine.TextCore.Glyph::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Glyph_get_scale_m3ED738CBB032247526DB38161E180759B2D06F29 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_get_scale_m3ED738CBB032247526DB38161E180759B2D06F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_get_scale_m3ED738CBB032247526DB38161E180759B2D06F29_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 327));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 328));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 329));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 330));
		float L_0 = __this->___m_Scale_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 331));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.Glyph::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph_set_scale_m44247C5948E32562931FA8C44799A3E1E4F0562A (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_set_scale_m44247C5948E32562931FA8C44799A3E1E4F0562A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_set_scale_m44247C5948E32562931FA8C44799A3E1E4F0562A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 333));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 334));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 335));
		float L_0 = ___0_value;
		__this->___m_Scale_3 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 336));
		return;
	}
}
// System.Int32 UnityEngine.TextCore.Glyph::get_atlasIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Glyph_get_atlasIndex_m575332307F2C182655EE9AD352E92F1B5F4D26DF (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_get_atlasIndex_m575332307F2C182655EE9AD352E92F1B5F4D26DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_get_atlasIndex_m575332307F2C182655EE9AD352E92F1B5F4D26DF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 337));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 338));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 339));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 340));
		int32_t L_0 = __this->___m_AtlasIndex_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 341));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TextCore.Glyph::set_atlasIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph_set_atlasIndex_m622CB24F3110B65CADB0C9F0223133B0DA926ABE (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_set_atlasIndex_m622CB24F3110B65CADB0C9F0223133B0DA926ABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph_set_atlasIndex_m622CB24F3110B65CADB0C9F0223133B0DA926ABE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 342));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 343));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 344));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 345));
		int32_t L_0 = ___0_value;
		__this->___m_AtlasIndex_4 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 346));
		return;
	}
}
// System.Void UnityEngine.TextCore.Glyph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph__ctor_m9FB83C6B166AC59E03B585F76C09C5FC1720281F (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph__ctor_m9FB83C6B166AC59E03B585F76C09C5FC1720281F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph__ctor_m9FB83C6B166AC59E03B585F76C09C5FC1720281F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 347));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 348));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 349));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 350));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 350));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 351));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 352));
		__this->___m_Index_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 353));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A* L_0 = (&__this->___m_Metrics_1);
		il2cpp_codegen_initobj(L_0, sizeof(GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 354));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_1 = (&__this->___m_GlyphRect_2);
		il2cpp_codegen_initobj(L_1, sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 355));
		__this->___m_Scale_3 = (1.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 356));
		__this->___m_AtlasIndex_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 357));
		return;
	}
}
// System.Void UnityEngine.TextCore.Glyph::.ctor(UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_glyphStruct, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphStruct));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 358));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 359));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 360));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 361));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 361));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 362));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 363));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_0 = ___0_glyphStruct;
		uint32_t L_1 = L_0.___index_0;
		__this->___m_Index_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 364));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_2 = ___0_glyphStruct;
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_3 = L_2.___metrics_1;
		__this->___m_Metrics_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 365));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_4 = ___0_glyphStruct;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = L_4.___glyphRect_2;
		__this->___m_GlyphRect_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 366));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_6 = ___0_glyphStruct;
		float L_7 = L_6.___scale_3;
		__this->___m_Scale_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 367));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_8 = ___0_glyphStruct;
		int32_t L_9 = L_8.___atlasIndex_4;
		__this->___m_AtlasIndex_4 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 368));
		return;
	}
}
// System.Void UnityEngine.TextCore.Glyph::.ctor(System.UInt32,UnityEngine.TextCore.GlyphMetrics,UnityEngine.TextCore.GlyphRect,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glyph__ctor_m71D55A8FBEA48ECCD78D65CAC9D008905E56FBF1 (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* __this, uint32_t ___0_index, GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___1_metrics, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___2_glyphRect, float ___3_scale, int32_t ___4_atlasIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph__ctor_m71D55A8FBEA48ECCD78D65CAC9D008905E56FBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (&___1_metrics), (&___2_glyphRect), (&___3_scale), (&___4_atlasIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Glyph__ctor_m71D55A8FBEA48ECCD78D65CAC9D008905E56FBF1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 369));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 370));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 371));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 372));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 372));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 373));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 374));
		uint32_t L_0 = ___0_index;
		__this->___m_Index_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 375));
		GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A L_1 = ___1_metrics;
		__this->___m_Metrics_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 376));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_2 = ___2_glyphRect;
		__this->___m_GlyphRect_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 377));
		float L_3 = ___3_scale;
		__this->___m_Scale_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 378));
		int32_t L_4 = ___4_atlasIndex;
		__this->___m_AtlasIndex_4 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 379));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.TextCore.LowLevel.FontReference
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke(const FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172& unmarshaled, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_pinvoke& marshaled)
{
	marshaled.___familyName_0 = il2cpp_codegen_marshal_string(unmarshaled.___familyName_0);
	marshaled.___styleName_1 = il2cpp_codegen_marshal_string(unmarshaled.___styleName_1);
	marshaled.___faceIndex_2 = unmarshaled.___faceIndex_2;
	marshaled.___filePath_3 = il2cpp_codegen_marshal_string(unmarshaled.___filePath_3);
}
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back(const FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_pinvoke& marshaled, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172& unmarshaled)
{
	unmarshaled.___familyName_0 = il2cpp_codegen_marshal_string_result(marshaled.___familyName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___familyName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___familyName_0));
	unmarshaled.___styleName_1 = il2cpp_codegen_marshal_string_result(marshaled.___styleName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___styleName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___styleName_1));
	int32_t unmarshaledfaceIndex_temp_2 = 0;
	unmarshaledfaceIndex_temp_2 = marshaled.___faceIndex_2;
	unmarshaled.___faceIndex_2 = unmarshaledfaceIndex_temp_2;
	unmarshaled.___filePath_3 = il2cpp_codegen_marshal_string_result(marshaled.___filePath_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___filePath_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___filePath_3));
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.LowLevel.FontReference
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup(FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___familyName_0);
	marshaled.___familyName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___styleName_1);
	marshaled.___styleName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___filePath_3);
	marshaled.___filePath_3 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.TextCore.LowLevel.FontReference
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_com(const FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172& unmarshaled, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_com& marshaled)
{
	marshaled.___familyName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___familyName_0);
	marshaled.___styleName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___styleName_1);
	marshaled.___faceIndex_2 = unmarshaled.___faceIndex_2;
	marshaled.___filePath_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___filePath_3);
}
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_com_back(const FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_com& marshaled, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172& unmarshaled)
{
	unmarshaled.___familyName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___familyName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___familyName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___familyName_0));
	unmarshaled.___styleName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___styleName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___styleName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___styleName_1));
	int32_t unmarshaledfaceIndex_temp_2 = 0;
	unmarshaledfaceIndex_temp_2 = marshaled.___faceIndex_2;
	unmarshaled.___faceIndex_2 = unmarshaledfaceIndex_temp_2;
	unmarshaled.___filePath_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___filePath_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___filePath_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___filePath_3));
}
// Conversion method for clean up from marshalling of: UnityEngine.TextCore.LowLevel.FontReference
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_com_cleanup(FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___familyName_0);
	marshaled.___familyName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___styleName_1);
	marshaled.___styleName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___filePath_3);
	marshaled.___filePath_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.TextCore.LowLevel.FontEngineError UnityEngine.TextCore.LowLevel.FontEngine::InitializeFontEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_InitializeFontEngine_mCA2F9C3294A61C0294B4B9849082C0344169F322 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_InitializeFontEngine_mCA2F9C3294A61C0294B4B9849082C0344169F322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_InitializeFontEngine_mCA2F9C3294A61C0294B4B9849082C0344169F322_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 380));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 381));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 382));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 383));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 384));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 384));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 385));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::InitializeFontEngine_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06 (const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06_ftn) ();
	static FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_InitializeFontEngine_Internal_m64ABDC3A5AF9D87C995FF6B98979933E7074AB06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::InitializeFontEngine_Internal()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.TextCore.LowLevel.FontEngineError UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_m6DCF863A84AF3E2EEB6AC69C7C19D937909698C1 (String_t* ___0_filePath, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_LoadFontFace_m6DCF863A84AF3E2EEB6AC69C7C19D937909698C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_filePath), (&___1_pointSize), (&___2_faceIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_LoadFontFace_m6DCF863A84AF3E2EEB6AC69C7C19D937909698C1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 386));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 387));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 388));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 389));
		String_t* L_0 = ___0_filePath;
		int32_t L_1 = ___1_pointSize;
		int32_t L_2 = ___2_faceIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 390));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 390));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 391));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4 (String_t* ___0_filePath, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4_ftn) (String_t*, int32_t, int32_t);
	static FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_LoadFontFace_With_Size_And_FaceIndex_Internal_mD89D8C9D6A2B8E7D29BAE669C15781DBCC63B8E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(System.String,System.Int32,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_filePath, ___1_pointSize, ___2_faceIndex);
	return icallRetVal;
}
// UnityEngine.TextCore.LowLevel.FontEngineError UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace(UnityEngine.Font,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_m63A9171030B36C960896CEF55E7ECF55AF990548 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_LoadFontFace_m63A9171030B36C960896CEF55E7ECF55AF990548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_font), (&___1_pointSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_LoadFontFace_m63A9171030B36C960896CEF55E7ECF55AF990548_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 393));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 394));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 395));
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___0_font;
		int32_t L_1 = ___1_pointSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 396));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 396));
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 397));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine.Font,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*, int32_t);
	static FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_LoadFontFace_With_Size_FromFont_Internal_m13A7F3EB357E2D2C67B14D10B96F3C490BF6AC11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine.Font,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_font, ___1_pointSize);
	return icallRetVal;
}
// UnityEngine.TextCore.LowLevel.FontEngineError UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace(UnityEngine.Font,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_m15ECA69542615468DB27EE5DCA11EE855BDAA356 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_LoadFontFace_m15ECA69542615468DB27EE5DCA11EE855BDAA356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_font), (&___1_pointSize), (&___2_faceIndex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_LoadFontFace_m15ECA69542615468DB27EE5DCA11EE855BDAA356_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 398));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 399));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 400));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 401));
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___0_font;
		int32_t L_1 = ___1_pointSize;
		int32_t L_2 = ___2_faceIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 402));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 402));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 403));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine.Font,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, int32_t ___1_pointSize, int32_t ___2_faceIndex, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*, int32_t, int32_t);
	static FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_m7C4E8F4F88CDDE6B838D890FDC1E0722EBD40497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine.Font,System.Int32,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_font, ___1_pointSize, ___2_faceIndex);
	return icallRetVal;
}
// UnityEngine.TextCore.LowLevel.FontEngineError UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_m793FE6557D378E25CDF12DDA5EFAA1F0F9A51C26 (String_t* ___0_familyName, String_t* ___1_styleName, int32_t ___2_pointSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineError_t10530F16DD874A1E0682E44AACD4A3BD05AA05CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_LoadFontFace_m793FE6557D378E25CDF12DDA5EFAA1F0F9A51C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_familyName), (&___1_styleName), (&___2_pointSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_LoadFontFace_m793FE6557D378E25CDF12DDA5EFAA1F0F9A51C26_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 404));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 405));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 406));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 407));
		String_t* L_0 = ___0_familyName;
		String_t* L_1 = ___1_styleName;
		int32_t L_2 = ___2_pointSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 408));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 408));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 409));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30 (String_t* ___0_familyName, String_t* ___1_styleName, int32_t ___2_pointSize, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30_ftn) (String_t*, String_t*, int32_t);
	static FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_m0856180C0F5FFA09E964986A78153D021F810F30_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(System.String,System.String,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_familyName, ___1_styleName, ___2_pointSize);
	return icallRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference(System.String,System.String,UnityEngine.TextCore.LowLevel.FontReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetSystemFontReference_mA32D1513035E9B58417092500DDC3A7C939367A1 (String_t* ___0_familyName, String_t* ___1_styleName, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172* ___2_fontRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_TryGetSystemFontReference_mA32D1513035E9B58417092500DDC3A7C939367A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_familyName), (&___1_styleName), (&___2_fontRef));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_TryGetSystemFontReference_mA32D1513035E9B58417092500DDC3A7C939367A1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 410));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 411));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 412));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 413));
		String_t* L_0 = ___0_familyName;
		String_t* L_1 = ___1_styleName;
		FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172* L_2 = ___2_fontRef;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 414));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 414));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 415));
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference_Internal(System.String,System.String,UnityEngine.TextCore.LowLevel.FontReference&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F (String_t* ___0_familyName, String_t* ___1_styleName, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172* ___2_fontRef, const RuntimeMethod* method) 
{
	typedef bool (*FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F_ftn) (String_t*, String_t*, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172*);
	static FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_TryGetSystemFontReference_Internal_m61AAB78124D19B1BC88C22D520287893E7280E1F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::TryGetSystemFontReference_Internal(System.String,System.String,UnityEngine.TextCore.LowLevel.FontReference&)");
	bool icallRetVal = _il2cpp_icall_func(___0_familyName, ___1_styleName, ___2_fontRef);
	return icallRetVal;
}
// UnityEngine.TextCore.FaceInfo UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 FontEngine_GetFaceInfo_mF371B75CDEEDA91FF910BED8DEE8FEB2A493BE37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_GetFaceInfo_mF371B75CDEEDA91FF910BED8DEE8FEB2A493BE37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_GetFaceInfo_mF371B75CDEEDA91FF910BED8DEE8FEB2A493BE37_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 416));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 417));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 418));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 419));
		il2cpp_codegen_initobj((&V_0), sizeof(FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 420));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 421));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 421));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 422));
		FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 423));
		FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 L_2 = V_1;
		return L_2;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_Internal(UnityEngine.TextCore.FaceInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90 (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756* ___0_faceInfo, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90_ftn) (FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756*);
	static FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_GetFaceInfo_Internal_m34E21653DF4724C3FCE289DA20AD5AB1B2F24B90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_Internal(UnityEngine.TextCore.FaceInfo&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_faceInfo);
	return icallRetVal;
}
// System.UInt32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphIndex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FontEngine_GetGlyphIndex_mEAE36421D92783413286344213D6EFD52E90CC00 (uint32_t ___0_unicode, const RuntimeMethod* method) 
{
	typedef uint32_t (*FontEngine_GetGlyphIndex_mEAE36421D92783413286344213D6EFD52E90CC00_ftn) (uint32_t);
	static FontEngine_GetGlyphIndex_mEAE36421D92783413286344213D6EFD52E90CC00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_GetGlyphIndex_mEAE36421D92783413286344213D6EFD52E90CC00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphIndex(System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_unicode);
	return icallRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.Glyph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithUnicodeValue_m58889809E3D65A0F1C5AEFF4DF6D319EBD139159 (uint32_t ___0_unicode, int32_t ___1_flags, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** ___2_glyph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_TryGetGlyphWithUnicodeValue_m58889809E3D65A0F1C5AEFF4DF6D319EBD139159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_unicode), (&___1_flags), (&___2_glyph));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_TryGetGlyphWithUnicodeValue_m58889809E3D65A0F1C5AEFF4DF6D319EBD139159_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 425));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 426));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 427));
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 428));
		uint32_t L_0 = ___0_unicode;
		int32_t L_1 = ___1_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 429));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8(L_0, L_1, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 429));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 430));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 431));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 432));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_4 = ___2_glyph;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 433));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* L_6 = (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)il2cpp_codegen_object_new(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94(L_6, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 433));
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 434));
		V_2 = (bool)1;
		goto IL_002a;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 435));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_7 = ___2_glyph;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 436));
		V_2 = (bool)0;
		goto IL_002a;
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 437));
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8 (uint32_t ___0_unicode, int32_t ___1_loadFlags, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___2_glyphStruct, const RuntimeMethod* method) 
{
	typedef bool (*FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8_ftn) (uint32_t, int32_t, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*);
	static FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_TryGetGlyphWithUnicodeValue_Internal_mD799CD2B5CEA61ED5ABA16EDAA428385FD906BD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)");
	bool icallRetVal = _il2cpp_icall_func(___0_unicode, ___1_loadFlags, ___2_glyphStruct);
	return icallRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.Glyph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithIndexValue_mD922A7EB95949E95D96C222D2CA1ED56BA2E81C3 (uint32_t ___0_glyphIndex, int32_t ___1_flags, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** ___2_glyph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_TryGetGlyphWithIndexValue_mD922A7EB95949E95D96C222D2CA1ED56BA2E81C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphIndex), (&___1_flags), (&___2_glyph));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_TryGetGlyphWithIndexValue_mD922A7EB95949E95D96C222D2CA1ED56BA2E81C3_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 438));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 439));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 440));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 441));
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 442));
		uint32_t L_0 = ___0_glyphIndex;
		int32_t L_1 = ___1_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 443));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D(L_0, L_1, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 443));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 444));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 445));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 446));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_4 = ___2_glyph;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 447));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* L_6 = (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)il2cpp_codegen_object_new(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94(L_6, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 447));
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 448));
		V_2 = (bool)1;
		goto IL_002a;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 449));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_7 = ___2_glyph;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 450));
		V_2 = (bool)0;
		goto IL_002a;
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 451));
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D (uint32_t ___0_glyphIndex, int32_t ___1_loadFlags, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___2_glyphStruct, const RuntimeMethod* method) 
{
	typedef bool (*FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D_ftn) (uint32_t, int32_t, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*);
	static FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_TryGetGlyphWithIndexValue_Internal_m2C5359B3C62139D20F52C1D232938CFAC9C3459D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)");
	bool icallRetVal = _il2cpp_icall_func(___0_glyphIndex, ___1_loadFlags, ___2_glyphStruct);
	return icallRetVal;
}
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::SetTextureUploadMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontEngine_SetTextureUploadMode_m04D13DFE627B79D5EB574EC74556E31DF42A83F3 (bool ___0_shouldUploadImmediately, const RuntimeMethod* method) 
{
	typedef void (*FontEngine_SetTextureUploadMode_m04D13DFE627B79D5EB574EC74556E31DF42A83F3_ftn) (bool);
	static FontEngine_SetTextureUploadMode_m04D13DFE627B79D5EB574EC74556E31DF42A83F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_SetTextureUploadMode_m04D13DFE627B79D5EB574EC74556E31DF42A83F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::SetTextureUploadMode(System.Boolean)");
	_il2cpp_icall_func(___0_shouldUploadImmediately);
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>,System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.Glyph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphToTexture_m45A94FA06ADDCE2FA6B139B29E942496B760A090 (uint32_t ___0_glyphIndex, int32_t ___1_padding, int32_t ___2_packingMode, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___3_freeGlyphRects, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___4_usedGlyphRects, int32_t ___5_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___6_texture, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** ___7_glyph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_TryAddGlyphToTexture_m45A94FA06ADDCE2FA6B139B29E942496B760A090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphIndex), (&___1_padding), (&___2_packingMode), (&___3_freeGlyphRects), (&___4_usedGlyphRects), (&___5_renderMode), (&___6_texture), (&___7_glyph));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_6), (&V_7), (&V_12));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_TryAddGlyphToTexture_m45A94FA06ADDCE2FA6B139B29E942496B760A090_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 453));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 454));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 455));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_0 = ___3_freeGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 456));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(L_0, List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 456));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 457));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_2 = ___4_usedGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 458));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(L_2, List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 458));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 459));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 460));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		NullCheck(L_6);
		int32_t L_7 = V_2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)L_7)))
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		NullCheck(L_8);
		int32_t L_9 = V_2;
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)L_9))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_5 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 461));
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 462));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 463));
		int32_t L_11 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 464));
		int32_t L_12;
		L_12 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 464));
		V_6 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 465));
		int32_t L_13 = V_6;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_14 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)L_13);
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4), (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 466));
		int32_t L_15 = V_6;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_16 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)L_15);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5), (void*)L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 467));
	}

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 468));
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 469));
		int32_t L_19;
		L_19 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_17, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 469));
		V_3 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 470));
		V_7 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 471));
		goto IL_00a9;
	}

IL_0062:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 472));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 473));
		int32_t L_20 = V_7;
		int32_t L_21 = V_0;
		V_8 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 474));
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 475));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_23 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		int32_t L_24 = V_7;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_25 = ___3_freeGlyphRects;
		int32_t L_26 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 476));
		NullCheck(L_25);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_27;
		L_27 = List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5(L_25, L_26, List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 476));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_27);
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 477));
		int32_t L_28 = V_7;
		int32_t L_29 = V_1;
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 478));
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00a2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 479));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_31 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_32 = V_7;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_33 = ___4_usedGlyphRects;
		int32_t L_34 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 480));
		NullCheck(L_33);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_35;
		L_35 = List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5(L_33, L_34, List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 480));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_35);
	}

IL_00a2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 481));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 482));
		int32_t L_36 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 483));
		int32_t L_37 = V_7;
		int32_t L_38 = V_3;
		V_10 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 484));
		bool L_39 = V_10;
		if (L_39)
		{
			goto IL_0062;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 485));
		uint32_t L_40 = ___0_glyphIndex;
		int32_t L_41 = ___1_padding;
		int32_t L_42 = ___2_packingMode;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_43 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_44 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_45 = ___5_renderMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = ___6_texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 486));
		bool L_47;
		L_47 = FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708(L_40, L_41, L_42, L_43, (&V_0), L_44, (&V_1), L_45, L_46, (&V_4), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 486));
		V_11 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 487));
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0152;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 488));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 489));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_49 = ___7_glyph;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_50 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 490));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* L_51 = (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)il2cpp_codegen_object_new(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94(L_51, L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 490));
		*((RuntimeObject**)L_49) = (RuntimeObject*)L_51;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_49, (void*)(RuntimeObject*)L_51);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 491));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_52 = ___3_freeGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 492));
		NullCheck(L_52);
		List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_inline(L_52, List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 492));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 493));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_53 = ___4_usedGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 494));
		NullCheck(L_53);
		List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_inline(L_53, List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 494));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 495));
		int32_t L_54 = V_0;
		int32_t L_55 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 496));
		int32_t L_56;
		L_56 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_54, L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 496));
		V_3 = L_56;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 497));
		V_12 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 498));
		goto IL_0142;
	}

IL_00fd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 499));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 500));
		int32_t L_57 = V_12;
		int32_t L_58 = V_0;
		V_13 = (bool)((((int32_t)L_57) < ((int32_t)L_58))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 501));
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_011c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 502));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_60 = ___3_freeGlyphRects;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_61 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		int32_t L_62 = V_12;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 503));
		NullCheck(L_60);
		List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline(L_60, L_64, List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 503));
	}

IL_011c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 504));
		int32_t L_65 = V_12;
		int32_t L_66 = V_1;
		V_14 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 505));
		bool L_67 = V_14;
		if (!L_67)
		{
			goto IL_013b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 506));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_68 = ___4_usedGlyphRects;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_69 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 507));
		NullCheck(L_68);
		List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline(L_68, L_72, List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 507));
	}

IL_013b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 508));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 509));
		int32_t L_73 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0142:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 510));
		int32_t L_74 = V_12;
		int32_t L_75 = V_3;
		V_15 = (bool)((((int32_t)L_74) < ((int32_t)L_75))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 511));
		bool L_76 = V_15;
		if (L_76)
		{
			goto IL_00fd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 512));
		V_16 = (bool)1;
		goto IL_015b;
	}

IL_0152:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 513));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F** L_77 = ___7_glyph;
		*((RuntimeObject**)L_77) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_77, (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 514));
		V_16 = (bool)0;
		goto IL_015b;
	}

IL_015b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 515));
		bool L_78 = V_16;
		return L_78;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_Internal(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708 (uint32_t ___0_glyphIndex, int32_t ___1_padding, int32_t ___2_packingMode, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___3_freeGlyphRects, int32_t* ___4_freeGlyphRectCount, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___5_usedGlyphRects, int32_t* ___6_usedGlyphRectCount, int32_t ___7_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___8_texture, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___9_glyph, const RuntimeMethod* method) 
{
	typedef bool (*FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708_ftn) (uint32_t, int32_t, int32_t, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t*, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t*, int32_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*);
	static FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_TryAddGlyphToTexture_Internal_mD6ED15BDDDC4F874C98D514D8DCE699EADB8C708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_Internal(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)");
	bool icallRetVal = _il2cpp_icall_func(___0_glyphIndex, ___1_padding, ___2_packingMode, ___3_freeGlyphRects, ___4_freeGlyphRectCount, ___5_usedGlyphRects, ___6_usedGlyphRectCount, ___7_renderMode, ___8_texture, ___9_glyph);
	return icallRetVal;
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture(System.Collections.Generic.List`1<System.UInt32>,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>,System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.Glyph[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphsToTexture_m18740AD9F7264F54C397916268C0AB0738879801 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_glyphIndexes, int32_t ___1_padding, int32_t ___2_packingMode, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___3_freeGlyphRects, List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___4_usedGlyphRects, int32_t ___5_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___6_texture, GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5** ___7_glyphs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_TryAddGlyphsToTexture_m18740AD9F7264F54C397916268C0AB0738879801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphIndexes), (&___1_padding), (&___2_packingMode), (&___3_freeGlyphRects), (&___4_usedGlyphRects), (&___5_renderMode), (&___6_texture), (&___7_glyphs));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_10), (&V_12), (&V_13), (&V_19));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_TryAddGlyphsToTexture_m18740AD9F7264F54C397916268C0AB0738879801_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 516));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 517));
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B29_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 518));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 519));
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5** L_0 = ___7_glyphs;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 520));
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_1 = ___0_glyphIndexes;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_2 = ___0_glyphIndexes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 521));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(L_2, List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 521));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_6 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 522));
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 523));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 524));
		V_7 = (bool)0;
		goto IL_0250;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 525));
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_5 = ___0_glyphIndexes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 526));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(L_5, List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 526));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 527));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1;
		NullCheck(L_8);
		int32_t L_9 = V_0;
		G_B8_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)L_9))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
	}

IL_003e:
	{
		V_8 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 528));
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 529));
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 530));
		int32_t L_12;
		L_12 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 530));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_12);
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1), (void*)L_13);
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 531));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_14 = ___3_freeGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 532));
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(L_14, List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 532));
		V_1 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 533));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_16 = ___4_usedGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 534));
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_inline(L_16, List_1_get_Count_mCED84CDDB1FA053F00F335965060C2D9A7BF2164_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 534));
		V_2 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 535));
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 536));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_21 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		NullCheck(L_21);
		int32_t L_22 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) < ((int32_t)L_22)))
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_23 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		NullCheck(L_23);
		int32_t L_24 = V_3;
		G_B13_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))) < ((int32_t)L_24))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B13_0 = 1;
	}

IL_0082:
	{
		V_9 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 537));
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00ac;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 538));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 539));
		int32_t L_26 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 540));
		int32_t L_27;
		L_27 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 540));
		V_10 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 541));
		int32_t L_28 = V_10;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_29 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)L_28);
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4), (void*)L_29);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 542));
		int32_t L_30 = V_10;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_31 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)L_30);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5), (void*)L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 543));
	}

IL_00ac:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 544));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_32 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3;
		NullCheck(L_32);
		int32_t L_33 = V_0;
		V_11 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))) < ((int32_t)L_33))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 545));
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_00d4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 546));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 547));
		int32_t L_35 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 548));
		int32_t L_36;
		L_36 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 548));
		V_12 = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 549));
		int32_t L_37 = V_12;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_38 = (GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)SZArrayNew(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var, (uint32_t)L_37);
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3), (void*)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 550));
	}

IL_00d4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 551));
		int32_t L_39 = V_1;
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 552));
		int32_t L_42;
		L_42 = FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83(L_39, L_40, L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 552));
		V_4 = L_42;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 553));
		V_13 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 554));
		goto IL_0145;
	}

IL_00e3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 555));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 556));
		int32_t L_43 = V_13;
		int32_t L_44 = V_0;
		V_14 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 557));
		bool L_45 = V_14;
		if (!L_45)
		{
			goto IL_00ff;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 558));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1;
		int32_t L_47 = V_13;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_48 = ___0_glyphIndexes;
		int32_t L_49 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 559));
		NullCheck(L_48);
		uint32_t L_50;
		L_50 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_48, L_49, List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 559));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (uint32_t)L_50);
	}

IL_00ff:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 560));
		int32_t L_51 = V_13;
		int32_t L_52 = V_1;
		V_15 = (bool)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 561));
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_011e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 562));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_54 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		int32_t L_55 = V_13;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_56 = ___3_freeGlyphRects;
		int32_t L_57 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 563));
		NullCheck(L_56);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_58;
		L_58 = List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5(L_56, L_57, List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 563));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_58);
	}

IL_011e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 564));
		int32_t L_59 = V_13;
		int32_t L_60 = V_2;
		V_16 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 565));
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_013e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 566));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_62 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_63 = V_13;
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_64 = ___4_usedGlyphRects;
		int32_t L_65 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 567));
		NullCheck(L_64);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_66;
		L_66 = List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5(L_64, L_65, List_1_get_Item_m8FDBE76BF6126F73C0BAF2E071538F40CA9D37E5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 567));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D)L_66);
	}

IL_013e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 568));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 569));
		int32_t L_67 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0145:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 570));
		int32_t L_68 = V_13;
		int32_t L_69 = V_4;
		V_17 = (bool)((((int32_t)L_68) < ((int32_t)L_69))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 571));
		bool L_70 = V_17;
		if (L_70)
		{
			goto IL_00e3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 572));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1;
		int32_t L_72 = ___1_padding;
		int32_t L_73 = ___2_packingMode;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_74 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_75 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_76 = ___5_renderMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_77 = ___6_texture;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_78 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 573));
		bool L_79;
		L_79 = FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8(L_71, L_72, L_73, L_74, (&V_1), L_75, (&V_2), L_76, L_77, L_78, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 573));
		V_5 = L_79;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 574));
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_80 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0;
		if (!L_80)
		{
			goto IL_018e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_81 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0;
		NullCheck(L_81);
		int32_t L_82 = V_0;
		G_B29_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))) > ((int32_t)L_82))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_018f;
	}

IL_018e:
	{
		G_B29_0 = 1;
	}

IL_018f:
	{
		V_18 = (bool)G_B29_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 575));
		bool L_83 = V_18;
		if (!L_83)
		{
			goto IL_01a7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 576));
		int32_t L_84 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 577));
		int32_t L_85;
		L_85 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_84, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 577));
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_86 = (GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5*)(GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5*)SZArrayNew(GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5_il2cpp_TypeInfo_var, (uint32_t)L_85);
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0), (void*)L_86);
	}

IL_01a7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 578));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_87 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, NULL);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 579));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_89 = ___3_freeGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 580));
		NullCheck(L_89);
		List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_inline(L_89, List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 580));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 581));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_90 = ___4_usedGlyphRects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 582));
		NullCheck(L_90);
		List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_inline(L_90, List_1_Clear_m2ADF12F1CF73175B87ACAB2DA7EB056BDEE4DABB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 582));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 583));
		int32_t L_91 = V_1;
		int32_t L_92 = V_2;
		int32_t L_93 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 584));
		int32_t L_94;
		L_94 = FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83(L_91, L_92, L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 584));
		V_4 = L_94;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 585));
		V_19 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 586));
		goto IL_0236;
	}

IL_01cd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 587));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 588));
		int32_t L_95 = V_19;
		int32_t L_96 = V_0;
		V_20 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 589));
		bool L_97 = V_20;
		if (!L_97)
		{
			goto IL_01f2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 590));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_98 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0;
		int32_t L_99 = V_19;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_100 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3;
		int32_t L_101 = V_19;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 591));
		Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* L_104 = (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)il2cpp_codegen_object_new(Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		Glyph__ctor_m2E3C296A46BE48B869634BBE3F97B30F3442CC94(L_104, L_103, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 591));
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_104);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F*)L_104);
	}

IL_01f2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 592));
		int32_t L_105 = V_19;
		int32_t L_106 = V_1;
		V_21 = (bool)((((int32_t)L_105) < ((int32_t)L_106))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 593));
		bool L_107 = V_21;
		if (!L_107)
		{
			goto IL_0210;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 594));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_108 = ___3_freeGlyphRects;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_109 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4;
		int32_t L_110 = V_19;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 595));
		NullCheck(L_108);
		List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline(L_108, L_112, List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 595));
	}

IL_0210:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 596));
		int32_t L_113 = V_19;
		int32_t L_114 = V_2;
		V_22 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 597));
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_022f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 598));
		List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* L_116 = ___4_usedGlyphRects;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_117 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5;
		int32_t L_118 = V_19;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 599));
		NullCheck(L_116);
		List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_inline(L_116, L_120, List_1_Add_mE5DEA053A93785502893EB2CD4357AB70E2B1A77_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 599));
	}

IL_022f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 600));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 601));
		int32_t L_121 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0236:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 602));
		int32_t L_122 = V_19;
		int32_t L_123 = V_4;
		V_23 = (bool)((((int32_t)L_122) < ((int32_t)L_123))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 603));
		bool L_124 = V_23;
		if (L_124)
		{
			goto IL_01cd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 604));
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5** L_125 = ___7_glyphs;
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_126 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0;
		*((RuntimeObject**)L_125) = (RuntimeObject*)L_126;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_125, (void*)(RuntimeObject*)L_126);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 605));
		bool L_127 = V_5;
		V_7 = L_127;
		goto IL_0250;
	}

IL_0250:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 606));
		bool L_128 = V_7;
		return L_128;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_Internal(System.UInt32[],System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_glyphIndex, int32_t ___1_padding, int32_t ___2_packingMode, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___3_freeGlyphRects, int32_t* ___4_freeGlyphRectCount, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___5_usedGlyphRects, int32_t* ___6_usedGlyphRectCount, int32_t ___7_renderMode, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___8_texture, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___9_glyphs, int32_t* ___10_glyphCount, const RuntimeMethod* method) 
{
	typedef bool (*FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8_ftn) (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t, int32_t, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t*, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, int32_t*, int32_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*, int32_t*);
	static FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_TryAddGlyphsToTexture_Internal_m43D4D242873C647DF5A20F7579FD90E373999EA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_Internal(System.UInt32[],System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[],System.Int32&)");
	bool icallRetVal = _il2cpp_icall_func(___0_glyphIndex, ___1_padding, ___2_packingMode, ___3_freeGlyphRects, ___4_freeGlyphRectCount, ___5_usedGlyphRects, ___6_usedGlyphRectCount, ___7_renderMode, ___8_texture, ___9_glyphs, ___10_glyphCount);
	return icallRetVal;
}
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphPairAdjustmentTable(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* FontEngine_GetGlyphPairAdjustmentTable_m67DAC7C0029384FC814621F85F8B35D0D3327BC5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_glyphIndexes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_GetGlyphPairAdjustmentTable_m67DAC7C0029384FC814621F85F8B35D0D3327BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphIndexes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_GetGlyphPairAdjustmentTable_m67DAC7C0029384FC814621F85F8B35D0D3327BC5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 607));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 608));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 609));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 610));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_glyphIndexes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 611));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7(L_0, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 611));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 612));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 613));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 614));
		V_2 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)NULL;
		goto IL_0046;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 615));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 616));
		FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123((&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6), L_4, FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 617));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 618));
		int32_t L_6;
		L_6 = FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 618));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 619));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_initobj(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 620));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_9 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		V_2 = L_9;
		goto IL_0046;
	}

IL_0046:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 621));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphPairAdjustmentRecords(System.Collections.Generic.List`1<System.UInt32>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* FontEngine_GetGlyphPairAdjustmentRecords_m23D346BEC5BA63185A01DF33576E98650947ABA8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_glyphIndexes, int32_t* ___1_recordCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_GenericListToMarshallingArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9D73A631FE45ED043F5F452D50CE5C38802434D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_GetGlyphPairAdjustmentRecords_m23D346BEC5BA63185A01DF33576E98650947ABA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_glyphIndexes), (&___1_recordCount));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine_GetGlyphPairAdjustmentRecords_m23D346BEC5BA63185A01DF33576E98650947ABA8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 622));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 623));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 625));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 626));
		FontEngine_GenericListToMarshallingArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9D73A631FE45ED043F5F452D50CE5C38802434D3((&___0_glyphIndexes), (&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1), FontEngine_GenericListToMarshallingArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9D73A631FE45ED043F5F452D50CE5C38802434D3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 626));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 627));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphIndexes_MarshallingArray_A_1;
		int32_t* L_1 = ___1_recordCount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 628));
		int32_t L_2;
		L_2 = FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 628));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 629));
		int32_t* L_3 = ___1_recordCount;
		int32_t L_4 = *((int32_t*)L_3);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 630));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 631));
		V_1 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)NULL;
		goto IL_0059;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 632));
		il2cpp_codegen_runtime_class_init_inline(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		int32_t* L_6 = ___1_recordCount;
		int32_t L_7 = *((int32_t*)L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 633));
		FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123((&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6), L_7, FontEngine_SetMarshallingArraySize_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m4F12F106E68B6115D47C936ADDBB1A843B670123_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 634));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 635));
		int32_t L_9;
		L_9 = FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 635));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 636));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		int32_t* L_11 = ___1_recordCount;
		int32_t L_12 = *((int32_t*)L_11);
		NullCheck(L_10);
		il2cpp_codegen_initobj(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 637));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_13 = ((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_PairAdjustmentRecords_MarshallingArray_6;
		V_1 = L_13;
		goto IL_0059;
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 638));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(System.UInt32[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_glyphIndexes, int32_t* ___1_recordCount, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7_ftn) (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t*);
	static FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_mE3B5D21C5D72CEADB2BEA5AA8022E466356386E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(System.UInt32[],System.Int32&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_glyphIndexes, ___1_recordCount);
	return icallRetVal;
}
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6 (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_glyphPairAdjustmentRecords, const RuntimeMethod* method) 
{
	typedef int32_t (*FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6_ftn) (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*);
	static FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_GetPairAdjustmentRecordsFromMarshallingArray_m81121A95D2196747D3597C8BEFF53842577599F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0_glyphPairAdjustmentRecords);
	return icallRetVal;
}
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::ResetAtlasTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontEngine_ResetAtlasTexture_m15BBE67DFDD8A1E740BC0C4B29612A8C866860DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	typedef void (*FontEngine_ResetAtlasTexture_m15BBE67DFDD8A1E740BC0C4B29612A8C866860DC_ftn) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*);
	static FontEngine_ResetAtlasTexture_m15BBE67DFDD8A1E740BC0C4B29612A8C866860DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FontEngine_ResetAtlasTexture_m15BBE67DFDD8A1E740BC0C4B29612A8C866860DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextCore.LowLevel.FontEngine::ResetAtlasTexture(UnityEngine.Texture2D)");
	_il2cpp_icall_func(___0_texture);
}
// System.Void UnityEngine.TextCore.LowLevel.FontEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontEngine__cctor_mD8EC115E258FD225726CBC71B249C1F411447D79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m30C3F5890A20AF5FA64A272E19CFC8750E0F9D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine__cctor_mD8EC115E258FD225726CBC71B249C1F411447D79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngine__cctor_mD8EC115E258FD225726CBC71B249C1F411447D79_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 681));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 682));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 683));
		GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5* L_0 = (GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5*)(GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5*)SZArrayNew(GlyphU5BU5D_t345CEC8703A6C650639C40DB7D35269A2D467FC5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_Glyphs_0), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 684));
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_1 = (GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)SZArrayNew(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_IN_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_IN_2), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 685));
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_2 = (GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)SZArrayNew(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphMarshallingStruct_OUT_3), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 686));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_FreeGlyphRects_4), (void*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 687));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_UsedGlyphRects_5), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 688));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 689));
		Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* L_5 = (Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7*)il2cpp_codegen_object_new(Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m30C3F5890A20AF5FA64A272E19CFC8750E0F9D16(L_5, Dictionary_2__ctor_m30C3F5890A20AF5FA64A272E19CFC8750E0F9D16_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 689));
		((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphLookupDictionary_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_StaticFields*)il2cpp_codegen_static_fields_for(FontEngine_t4B8F87CAA77860B55B0C7FDF85FBBE178E2D5B7A_il2cpp_TypeInfo_var))->___s_GlyphLookupDictionary_7), (void*)L_5);
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
// System.Int32 UnityEngine.TextCore.LowLevel.FontEngineUtilities::MaxValue(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83 (int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_c));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FontEngineUtilities_MaxValue_m7E0FBF90FE07F65C9895ACD56FD032A53E417F83_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 690));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 691));
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 692));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 693));
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___0_a;
		int32_t L_3 = ___2_c;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_4 = ___0_a;
		G_B4_0 = L_4;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_5 = ___2_c;
		G_B4_0 = L_5;
	}

IL_000d:
	{
		G_B8_0 = G_B4_0;
		goto IL_0017;
	}

IL_000f:
	{
		int32_t L_6 = ___1_b;
		int32_t L_7 = ___2_c;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_8 = ___1_b;
		G_B8_0 = L_8;
		goto IL_0017;
	}

IL_0016:
	{
		int32_t L_9 = ___2_c;
		G_B8_0 = L_9;
	}

IL_0017:
	{
		V_0 = G_B8_0;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 694));
		int32_t L_10 = V_0;
		return L_10;
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
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_xPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 695));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 696));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 697));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 698));
		float L_0 = __this->___m_XPlacement_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 699));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_yPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 701));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 702));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 703));
		float L_0 = __this->___m_YPlacement_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 704));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_xAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 705));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 706));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 707));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 708));
		float L_0 = __this->___m_XAdvance_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 709));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::get_yAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 710));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 711));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 712));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 713));
		float L_0 = __this->___m_YAdvance_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 714));
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	float _returnValue;
	_returnValue = GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphValueRecord::op_Addition(UnityEngine.TextCore.LowLevel.GlyphValueRecord,UnityEngine.TextCore.LowLevel.GlyphValueRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E GlyphValueRecord_op_Addition_mF26165B4CE61A5409AEFF24B0D1727804E13602B (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_a, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_op_Addition_mF26165B4CE61A5409AEFF24B0D1727804E13602B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_op_Addition_mF26165B4CE61A5409AEFF24B0D1727804E13602B_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 715));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 716));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 717));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 718));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 719));
		float L_0;
		L_0 = GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8((&___0_a), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 719));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 720));
		float L_1;
		L_1 = GlyphValueRecord_get_xPlacement_m5E2B8B05A5DF57B2DC4B3795E71330CDDE1761C8((&___1_b), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 720));
		(&V_0)->___m_XPlacement_0 = ((float)il2cpp_codegen_add(L_0, L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 721));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 722));
		float L_2;
		L_2 = GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA((&___0_a), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 722));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 723));
		float L_3;
		L_3 = GlyphValueRecord_get_yPlacement_mB6303F8800305F6F96ECCD0CD9AA70A1A30A15DA((&___1_b), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 723));
		(&V_0)->___m_YPlacement_1 = ((float)il2cpp_codegen_add(L_2, L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 724));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 725));
		float L_4;
		L_4 = GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E((&___0_a), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 725));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 726));
		float L_5;
		L_5 = GlyphValueRecord_get_xAdvance_m6C392027FA91E0705C1585C5EF40D984AAA0013E((&___1_b), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 726));
		(&V_0)->___m_XAdvance_2 = ((float)il2cpp_codegen_add(L_4, L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 727));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 728));
		float L_6;
		L_6 = GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6((&___0_a), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 728));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 729));
		float L_7;
		L_7 = GlyphValueRecord_get_yAdvance_m1379AA10FCCFFABEAF43E767F8BFBF32CA76B5B6((&___1_b), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 729));
		(&V_0)->___m_YAdvance_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 730));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_8 = V_0;
		V_1 = L_8;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 731));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphValueRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 732));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 733));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 734));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 735));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_0 = (*(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*)__this);
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 736));
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 736));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 737));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphValueRecord_GetHashCode_m9A2BFC7780FBD61A4B7E0091F8FE87DA15081B60(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 738));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 739));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 740));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 741));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_0 = (*(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*)__this);
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 742));
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 742));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 743));
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphValueRecord_Equals_m5DC74E9C597D8F27754444C057F819ECB24CB8B6(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphValueRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* __this, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 746));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 747));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_0 = (*(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*)__this);
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var, &L_1);
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_3 = ___0_other;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_4 = L_3;
		RuntimeObject* L_5 = Box(GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 748));
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 748));
		V_0 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 749));
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972_AdjustorThunk (RuntimeObject* __this, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_other, const RuntimeMethod* method)
{
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphValueRecord_Equals_mB5F45CBE745D1C5BAF7944989DF4239FDC78D972(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphValueRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphValueRecord,UnityEngine.TextCore.LowLevel.GlyphValueRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59 (GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___0_lhs, GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_lhs), (&___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 750));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 751));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 752));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 753));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_0 = ___0_lhs;
		float L_1 = L_0.___m_XPlacement_0;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_2 = ___1_rhs;
		float L_3 = L_2.___m_XPlacement_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_003b;
		}
	}
	{
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_4 = ___0_lhs;
		float L_5 = L_4.___m_YPlacement_1;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_6 = ___1_rhs;
		float L_7 = L_6.___m_YPlacement_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_003b;
		}
	}
	{
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_8 = ___0_lhs;
		float L_9 = L_8.___m_XAdvance_2;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_10 = ___1_rhs;
		float L_11 = L_10.___m_XAdvance_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_003b;
		}
	}
	{
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_12 = ___0_lhs;
		float L_13 = L_12.___m_YAdvance_3;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_14 = ___1_rhs;
		float L_15 = L_14.___m_YAdvance_3;
		G_B5_0 = ((((float)L_13) == ((float)L_15))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 754));
		bool L_16 = V_0;
		return L_16;
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
// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::get_glyphIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 755));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 756));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 757));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 758));
		uint32_t L_0 = __this->___m_GlyphIndex_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 759));
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = GlyphAdjustmentRecord_get_glyphIndex_mB1C51945CA4FF019A74BC98C01C8883A396CBFA9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::get_glyphValueRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 762));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 763));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_0 = __this->___m_GlyphValueRecord_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 764));
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*>(__this + _offset);
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E _returnValue;
	_returnValue = GlyphAdjustmentRecord_get_glyphValueRecord_m83866DCE07A22F903D4BA417476E64114625BDD7(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 765));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 766));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 768));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = (*(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*)__this);
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 769));
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 769));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 770));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphAdjustmentRecord_GetHashCode_m8E0D84D4458A732085FCCA04AAE0A0B16CB3226C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 771));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 772));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 773));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 774));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = (*(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*)__this);
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 775));
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 775));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 776));
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphAdjustmentRecord_Equals_mEF9EBAA5A7ED2B136EA25A2AD26353406884F47D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 777));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 778));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 779));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 780));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = (*(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*)__this);
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var, &L_1);
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_3 = ___0_other;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_4 = L_3;
		RuntimeObject* L_5 = Box(GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 781));
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 781));
		V_0 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 782));
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535_AdjustorThunk (RuntimeObject* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_other, const RuntimeMethod* method)
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphAdjustmentRecord_Equals_m2F5908F3B2BB2F6596E40E6A74E5F2120BCDA535(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61 (GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_lhs, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_lhs), (&___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 783));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 784));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 785));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 786));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = ___0_lhs;
		uint32_t L_1 = L_0.___m_GlyphIndex_0;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_2 = ___1_rhs;
		uint32_t L_3 = L_2.___m_GlyphIndex_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_4 = ___0_lhs;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_5 = L_4.___m_GlyphValueRecord_1;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_6 = ___1_rhs;
		GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E L_7 = L_6.___m_GlyphValueRecord_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 787));
		bool L_8;
		L_8 = GlyphValueRecord_op_Equality_m2AFC5B719C0208115B6990D2808776B3A1C90A59(L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 787));
		G_B3_0 = ((int32_t)(L_8));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 788));
		bool L_9 = V_0;
		return L_9;
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
// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_firstAdjustmentRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 789));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 790));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 791));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 792));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = __this->___m_FirstAdjustmentRecord_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 793));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_get_firstAdjustmentRecord_m867469548F17B298F893B78EE2F93D34E4A6C39C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_firstAdjustmentRecord(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 794));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 795));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 796));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 797));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = ___0_value;
		__this->___m_FirstAdjustmentRecord_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 798));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296_AdjustorThunk (RuntimeObject* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphPairAdjustmentRecord_set_firstAdjustmentRecord_mA19E5BFDFB5B5EF6B82BE195BC407390E3754296(_thisAdjusted, ___0_value, method);
}
// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_secondAdjustmentRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 799));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 800));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 802));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = __this->___m_SecondAdjustmentRecord_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 803));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_get_secondAdjustmentRecord_mFDFECB1F7A38E22BD2388FFE9C71E732F6B44D91(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_secondAdjustmentRecord(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 804));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 805));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 806));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 807));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = ___0_value;
		__this->___m_SecondAdjustmentRecord_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 808));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF_AdjustorThunk (RuntimeObject* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_value, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphPairAdjustmentRecord_set_secondAdjustmentRecord_m5C90F3C44ADD213E181BDB955AB214B6F56B2FBF(_thisAdjusted, ___0_value, method);
}
// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::get_featureLookupFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 809));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 810));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 811));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 812));
		int32_t L_0 = __this->___m_FeatureLookupFlags_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 813));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_get_featureLookupFlags_m08DA76766FDE949068B881DBEA29955C9C43E8A9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::set_featureLookupFlags(UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 814));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 815));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 816));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 817));
		int32_t L_0 = ___0_value;
		__this->___m_FeatureLookupFlags_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 818));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphPairAdjustmentRecord_set_featureLookupFlags_m4900CDB13F697D5CD7012383E71910AEAD170359(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::.ctor(UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_firstAdjustmentRecord, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___1_secondAdjustmentRecord, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_firstAdjustmentRecord), (&___1_secondAdjustmentRecord));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 819));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 820));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 821));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 822));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_0 = ___0_firstAdjustmentRecord;
		__this->___m_FirstAdjustmentRecord_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 823));
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = ___1_secondAdjustmentRecord;
		__this->___m_SecondAdjustmentRecord_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 824));
		__this->___m_FeatureLookupFlags_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 825));
		return;
	}
}
IL2CPP_EXTERN_C  void GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A_AdjustorThunk (RuntimeObject* __this, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___0_firstAdjustmentRecord, GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___1_secondAdjustmentRecord, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	GlyphPairAdjustmentRecord__ctor_m2B1BCCA950399944824CFB79D74C39A7A4F87A6A(_thisAdjusted, ___0_firstAdjustmentRecord, ___1_secondAdjustmentRecord, method);
}
// System.Int32 UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 827));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 828));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 829));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = (*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)__this);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var, &L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 830));
		int32_t L_3;
		L_3 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 830));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 831));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 832));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 833));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 834));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 835));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = (*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)__this);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 836));
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 836));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 837));
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::Equals(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 838));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 839));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 840));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 841));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = (*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)__this);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var, &L_1);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_3 = ___0_other;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_4 = L_3;
		RuntimeObject* L_5 = Box(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 842));
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 842));
		V_0 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 843));
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689_AdjustorThunk (RuntimeObject* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_other, const RuntimeMethod* method)
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*>(__this + _offset);
	bool _returnValue;
	_returnValue = GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::op_Equality(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_lhs, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_lhs), (&___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 844));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 845));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 846));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 847));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = ___0_lhs;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_1 = L_0.___m_FirstAdjustmentRecord_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_2 = ___1_rhs;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_3 = L_2.___m_FirstAdjustmentRecord_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 848));
		bool L_4;
		L_4 = GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61(L_1, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 848));
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = ___0_lhs;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_6 = L_5.___m_SecondAdjustmentRecord_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = ___1_rhs;
		GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 L_8 = L_7.___m_SecondAdjustmentRecord_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 849));
		bool L_9;
		L_9 = GlyphAdjustmentRecord_op_Equality_mA86E910E24C5AD36005A9694FC635DA4A19BCB61(L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 849));
		G_B3_0 = ((int32_t)(L_9));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 850));
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::op_Inequality(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_op_Inequality_mE925301B5EAA3E6E3FBD08527AA9386CFF2B591D (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_lhs, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphPairAdjustmentRecord_op_Inequality_mE925301B5EAA3E6E3FBD08527AA9386CFF2B591D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_lhs), (&___1_rhs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GlyphPairAdjustmentRecord_op_Inequality_mE925301B5EAA3E6E3FBD08527AA9386CFF2B591D_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 851));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 852));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 853));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 854));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = ___0_lhs;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = ___1_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 855));
		bool L_2;
		L_2 = GlyphPairAdjustmentRecord_op_Equality_m0F93964041166C7D04A88FEA17D6E52102AC14AF(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 855));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TextCoreFontEngineModule + 856));
		bool L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10234));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10235));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10236));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10237));
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10238));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
