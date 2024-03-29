#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean Unity.Barracuda.BurstBLAS::IsNative()
extern void BurstBLAS_IsNative_m3287EC2915EE4B0A5A26B778413EBED790C2EEA9 (void);
// 0x00000002 System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported()
extern void BurstBLAS_IsCurrentPlatformSupported_m9EB46353878145AEE68463B84441CC5BB81949A5 (void);
// 0x00000003 System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_SGEMM_m8C7AE0D5E0B47AEB8A5BFDF47B2DDB34940A2BDE (void);
// 0x00000004 Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void BurstBLAS_ScheduleSGEMM_m3AE958567CBCE4EB983163893F28E01E966892DF (void);
// 0x00000005 System.Void Unity.Barracuda.BurstBLAS::.ctor()
extern void BurstBLAS__ctor_m0819B7915681A03944BB49E7B6B04EFC2F876151 (void);
// 0x00000006 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::Execute(System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_mCC6B8EE874E9AE0E56A300F3AA3977270D1996D3 (void);
// 0x00000007 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverColB(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mE0D1D289374527A719C54FA5D6968A16EE3FD12C (void);
// 0x00000008 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverRowA(System.Single*,System.Single*,System.Single*,System.Int32)
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m5903C975ADE0CDC645602B8FC4718D82D7B3944C (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	BurstBLAS_IsNative_m3287EC2915EE4B0A5A26B778413EBED790C2EEA9,
	BurstBLAS_IsCurrentPlatformSupported_m9EB46353878145AEE68463B84441CC5BB81949A5,
	BurstBLAS_SGEMM_m8C7AE0D5E0B47AEB8A5BFDF47B2DDB34940A2BDE,
	BurstBLAS_ScheduleSGEMM_m3AE958567CBCE4EB983163893F28E01E966892DF,
	BurstBLAS__ctor_m0819B7915681A03944BB49E7B6B04EFC2F876151,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_mCC6B8EE874E9AE0E56A300F3AA3977270D1996D3,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mE0D1D289374527A719C54FA5D6968A16EE3FD12C,
	UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m5903C975ADE0CDC645602B8FC4718D82D7B3944C,
};
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_mCC6B8EE874E9AE0E56A300F3AA3977270D1996D3_AdjustorThunk (void);
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mE0D1D289374527A719C54FA5D6968A16EE3FD12C_AdjustorThunk (void);
extern void UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m5903C975ADE0CDC645602B8FC4718D82D7B3944C_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x06000006, UnsafeMatrixBlockMultiplyUnrolled8xhJob_Execute_mCC6B8EE874E9AE0E56A300F3AA3977270D1996D3_AdjustorThunk },
	{ 0x06000007, UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverColB_mE0D1D289374527A719C54FA5D6968A16EE3FD12C_AdjustorThunk },
	{ 0x06000008, UnsafeMatrixBlockMultiplyUnrolled8xhJob_ExecutOverRowA_m5903C975ADE0CDC645602B8FC4718D82D7B3944C_AdjustorThunk },
};
static const int32_t s_InvokerIndices[8] = 
{
	3038,
	3038,
	18,
	17,
	3178,
	2727,
	719,
	719,
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Barracuda_BurstBLAS;
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLAS_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_BurstBLAS_CodeGenModule = 
{
	"Unity.Barracuda.BurstBLAS.dll",
	8,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	&g_DebuggerMetadataRegistrationUnity_Barracuda_BurstBLAS,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
