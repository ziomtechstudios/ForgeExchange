#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
// 0x00000002 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
// 0x00000003 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
// 0x00000004 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000005 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000006 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000007 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000008 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000009 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x0000000A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x0000000B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x0000000C Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
// 0x0000000D Unity.Barracuda.Tensor Unity.Barracuda.IOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000000E Unity.Barracuda.Tensor Unity.Barracuda.IOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000F Unity.Barracuda.Tensor Unity.Barracuda.IOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x00000010 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
// 0x00000011 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
// 0x00000012 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
// 0x00000013 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000014 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000015 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000016 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000017 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000018 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000019 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
// 0x0000001A Unity.Barracuda.Tensor Unity.Barracuda.IOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
// 0x0000001B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dropout(Unity.Barracuda.Tensor,System.Single)
// 0x0000001C Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x0000001D Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x0000001E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x0000001F Unity.Barracuda.Tensor Unity.Barracuda.IOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
// 0x00000020 Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x00000021 Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
// 0x00000022 Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonZero(Unity.Barracuda.Tensor)
// 0x00000023 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu(Unity.Barracuda.Tensor)
// 0x00000024 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000025 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogSoftmax(Unity.Barracuda.Tensor)
// 0x00000026 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tanh(Unity.Barracuda.Tensor)
// 0x00000027 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softplus(Unity.Barracuda.Tensor)
// 0x00000028 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sigmoid(Unity.Barracuda.Tensor)
// 0x00000029 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Elu(Unity.Barracuda.Tensor,System.Single)
// 0x0000002A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu6(Unity.Barracuda.Tensor)
// 0x0000002B Unity.Barracuda.Tensor Unity.Barracuda.IOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
// 0x0000002C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x0000002D Unity.Barracuda.Tensor Unity.Barracuda.IOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000002E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Swish(Unity.Barracuda.Tensor)
// 0x0000002F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Abs(Unity.Barracuda.Tensor)
// 0x00000030 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Neg(Unity.Barracuda.Tensor)
// 0x00000031 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Ceil(Unity.Barracuda.Tensor)
// 0x00000032 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x00000033 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Floor(Unity.Barracuda.Tensor)
// 0x00000034 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Round(Unity.Barracuda.Tensor)
// 0x00000035 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reciprocal(Unity.Barracuda.Tensor)
// 0x00000036 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor,System.Single)
// 0x00000037 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Exp(Unity.Barracuda.Tensor)
// 0x00000038 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Log(Unity.Barracuda.Tensor)
// 0x00000039 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sqrt(Unity.Barracuda.Tensor)
// 0x0000003A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acos(Unity.Barracuda.Tensor)
// 0x0000003B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acosh(Unity.Barracuda.Tensor)
// 0x0000003C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asin(Unity.Barracuda.Tensor)
// 0x0000003D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asinh(Unity.Barracuda.Tensor)
// 0x0000003E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atan(Unity.Barracuda.Tensor)
// 0x0000003F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atanh(Unity.Barracuda.Tensor)
// 0x00000040 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cos(Unity.Barracuda.Tensor)
// 0x00000041 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cosh(Unity.Barracuda.Tensor)
// 0x00000042 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sin(Unity.Barracuda.Tensor)
// 0x00000043 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sinh(Unity.Barracuda.Tensor)
// 0x00000044 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tan(Unity.Barracuda.Tensor)
// 0x00000045 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Add(Unity.Barracuda.Tensor[])
// 0x00000046 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sub(Unity.Barracuda.Tensor[])
// 0x00000047 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mul(Unity.Barracuda.Tensor[])
// 0x00000048 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Div(Unity.Barracuda.Tensor[])
// 0x00000049 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor[])
// 0x0000004A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Min(Unity.Barracuda.Tensor[])
// 0x0000004B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Max(Unity.Barracuda.Tensor[])
// 0x0000004C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mean(Unity.Barracuda.Tensor[])
// 0x0000004D Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004E Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004F Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
// 0x00000050 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
// 0x00000051 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
// 0x00000052 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000053 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
// 0x00000054 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000055 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000056 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000057 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000058 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000059 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005A Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005B Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005C Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalNot(Unity.Barracuda.Tensor)
// 0x0000005D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sign(Unity.Barracuda.Tensor)
// 0x0000005F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Flatten(Unity.Barracuda.Tensor)
// 0x00000060 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000061 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000062 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor)
// 0x00000063 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000064 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
// 0x00000065 Unity.Barracuda.Tensor Unity.Barracuda.IOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x00000066 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000067 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
// 0x00000068 Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
// 0x00000069 Unity.Barracuda.Tensor[] Unity.Barracuda.IOps::LSTM(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000006A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Shape(Unity.Barracuda.Tensor,System.Int32)
// 0x0000006B Unity.Barracuda.Tensor Unity.Barracuda.IOps::ConstantOfShape(Unity.Barracuda.TensorShape,System.Single)
// 0x0000006C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Copy(Unity.Barracuda.Tensor)
// 0x0000006D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Prepare(Unity.Barracuda.Tensor)
// 0x0000006E System.Void Unity.Barracuda.IOps::ResetAllocator(System.Boolean)
// 0x0000006F System.Void Unity.Barracuda.IModelCompiler::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000070 System.Void Unity.Barracuda.IModelCompiler::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
// 0x00000071 System.Void Unity.Barracuda.IVars::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000072 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000073 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::GatherInputs(Unity.Barracuda.Layer)
// 0x00000074 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Layer)
// 0x00000075 System.Void Unity.Barracuda.IVars::DisposeAfterLayer(Unity.Barracuda.Layer)
// 0x00000076 System.Void Unity.Barracuda.IVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
// 0x00000077 Unity.Barracuda.Tensor Unity.Barracuda.IVars::PeekOutput(System.String)
// 0x00000078 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::PeekConstants(System.String)
// 0x00000079 Unity.Barracuda.ITensorAllocator Unity.Barracuda.IVars::GetAllocator()
// 0x0000007A Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape)
// 0x0000007B Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
// 0x0000007C System.Void Unity.Barracuda.ITensorAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
// 0x0000007D System.Void Unity.Barracuda.ITensorAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
// 0x0000007E System.Void Unity.Barracuda.ITensorAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
// 0x0000007F System.Void Unity.Barracuda.ITensorAllocator::Reset(System.Boolean)
// 0x00000080 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ResolveAutoType_mB99085007A2797DBD42FE7E96A3D608B5B51D406 (void);
// 0x00000081 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void BarracudaBackendsFactory_GetBestTypeForDevice_m4BDE8B2C9F4D32079C6B8A1A054E6E048970193E (void);
// 0x00000082 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ValidateType_mF959E27AD5627FD4BA527349265CC12039709C13 (void);
// 0x00000083 Unity.Barracuda.IOps Unity.Barracuda.BarracudaBackendsFactory::CreateOps(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void BarracudaBackendsFactory_CreateOps_mEADBD8110B839E39B7F6ABE002FAA513953A1228 (void);
// 0x00000084 Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void BarracudaBackendsFactory_CreateWorker_mCC655DF168FB47B651C3C7BC1E9451600FB8658C (void);
// 0x00000085 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::PatchModel(Unity.Barracuda.Model,System.String[],System.String[])
extern void BarracudaBackendsFactory_PatchModel_m3E2C1A4B98C14577A1B7F40F94C562CE5A9F5947 (void);
// 0x00000086 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::ValidateModel(Unity.Barracuda.Model)
extern void BarracudaBackendsFactory_ValidateModel_m4A5C06B4DEC5E6318B68517AEDBDCAC9BD4E072C (void);
// 0x00000087 System.Void Unity.Barracuda.BarracudaBackendsFactory::.ctor()
extern void BarracudaBackendsFactory__ctor_m71518906F1A8155062E1E40F807CAF6062081BA0 (void);
// 0x00000088 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.cctor()
extern void U3CU3Ec__cctor_mCBA5328D2756A2722E91B86C0ED1E8CDB79B84E8 (void);
// 0x00000089 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.ctor()
extern void U3CU3Ec__ctor_mFCE029B744E57833DCB5B95153CBCD4715F0DD96 (void);
// 0x0000008A System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_1_mCB58218B62F387BE941C984D838982855B39EB7B (void);
// 0x0000008B System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_0_m42C6E6EE51836DEA79511C0831A3AED0DCE66007 (void);
// 0x0000008C System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_0(System.String)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_0_mDE2AD9C87F3BFF5AFE4094C4B7045C5FFAAE4414 (void);
// 0x0000008D System.Boolean Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_1_mA951A6618F6A7806753BAD2FB74DB7F58D672132 (void);
// 0x0000008E System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_2_m190B5CE3A6AD1F822173A06BA7C3232D2D4CB0A8 (void);
// 0x0000008F Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_fence()
extern void BurstTensorData_get_fence_mC3D9E63AA4AFFF179AFF6A2C4B41F37407D21A61 (void);
// 0x00000090 System.Void Unity.Barracuda.BurstTensorData::set_fence(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_fence_mC3659EABA95361A88BBE3F1BD3F37B756123A2C1 (void);
// 0x00000091 Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_reuse()
extern void BurstTensorData_get_reuse_m57FACC88A8C0DA6A1310EC8BE6EFB89CC094DD79 (void);
// 0x00000092 System.Void Unity.Barracuda.BurstTensorData::set_reuse(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_reuse_mBA1AF6D094F0D10F94F3426F7075750DA000FBC5 (void);
// 0x00000093 System.Void Unity.Barracuda.BurstTensorData::.ctor(System.Int32)
extern void BurstTensorData__ctor_m987AEAC777C3B636CF92DB9E03A9E01D827C8A00 (void);
// 0x00000094 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void BurstTensorData__ctor_m1DA7DDF23D19E627D81147B42CAB19E704B038A0 (void);
// 0x00000095 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void BurstTensorData__ctor_mCF8747FA82C8F83B5DBCFE897AC819E47B9BC429 (void);
// 0x00000096 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void BurstTensorData__ctor_mBE7403D3F254812945395D44252B4E9B8341FFCE (void);
// 0x00000097 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.UnsafeArrayTensorData)
extern void BurstTensorData__ctor_m4D279F67B93AE91297866DEB8A27C643B1D7C723 (void);
// 0x00000098 System.Void Unity.Barracuda.BurstTensorData::Finalize()
extern void BurstTensorData_Finalize_m9F5FA0B97BBBDE03783F651AB14EF498DDED0985 (void);
// 0x00000099 System.Void Unity.Barracuda.BurstTensorData::Dispose()
extern void BurstTensorData_Dispose_m2FED6F50CF4FD1CA58EE51DAAA5877E0B975FCDE (void);
// 0x0000009A System.Void Unity.Barracuda.BurstTensorData::CompleteAllPendingOperations()
extern void BurstTensorData_CompleteAllPendingOperations_m0B5F070376FA3C9B4917B73FAB09E96C459EED37 (void);
// 0x0000009B System.Void Unity.Barracuda.BurstTensorData::Reserve(System.Int32)
extern void BurstTensorData_Reserve_m3CDD7850C46054EBC6569963A2F7222C39E1A969 (void);
// 0x0000009C System.Void Unity.Barracuda.BurstTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void BurstTensorData_Upload_m6D6C4BDA7F6E50C73C5164324752DB0B41B03081 (void);
// 0x0000009D System.Single[] Unity.Barracuda.BurstTensorData::Download(Unity.Barracuda.TensorShape)
extern void BurstTensorData_Download_m6722B17CE47D50CDD37E0DAF0FE55FB3D5757FDF (void);
// 0x0000009E System.Single[] Unity.Barracuda.BurstTensorData::SharedAccess(System.Int32&)
extern void BurstTensorData_SharedAccess_m125A4D2AE973D675D7E247D8C4BE7F85061A0B98 (void);
// 0x0000009F System.Boolean Unity.Barracuda.BurstTensorData::ScheduleAsyncDownload(System.Int32)
extern void BurstTensorData_ScheduleAsyncDownload_mBF682E4E86221F9E602F3EDA10CB76F1C5288559 (void);
// 0x000000A0 System.String Unity.Barracuda.BurstTensorData::ToString()
extern void BurstTensorData_ToString_mE2652ACC848A0A4F89073DEE36C8D4167582BDB2 (void);
// 0x000000A1 System.Void Unity.Barracuda.BurstCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void BurstCPUOps__ctor_m4D04ECFA465AF35D86469C3B31F2707F2437BE3A (void);
// 0x000000A2 Unity.Barracuda.BurstTensorData Unity.Barracuda.BurstCPUOps::Pin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Pin_mBE5673A2D37E3DDD4F559F97329EA33144A2B875 (void);
// 0x000000A3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Prepare_m569787773C7E194046DB3CF84C719A3164461B94 (void);
// 0x000000A4 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m1B514B461A8797B3D5B990E1FC0CBADBE71F63EF (void);
// 0x000000A5 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m7289BD9C37E8271F8C49AE39B474CE7FE08B7FA5 (void);
// 0x000000A6 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_mC6D6937738A1696F5FFEE1A95D2DED7114277445 (void);
// 0x000000A7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void BurstCPUOps_MatMul_mB2B6FC95CF2C43EFE0377A5FC2A5ABEAC085B97A (void);
// 0x000000A8 System.Void Unity.Barracuda.BurstCPUOps::ScheduleSGEMM(Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32)
extern void BurstCPUOps_ScheduleSGEMM_m6641F7818648BCEDF3C74586185B0BCEACC0D348 (void);
// 0x000000A9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_MatMul_mFFE22F8F6106A4CF7E001931190A00458A84FB03 (void);
// 0x000000AA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul3x2(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_MatMul3x2_mE765A16E553B8361835B566AB06875B4D18A5A27 (void);
// 0x000000AB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul4x4(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_MatMul4x4_mA20F721BECDA21CDAA9C97A5CA8A19CF821F69E0 (void);
// 0x000000AC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_Dense3_mAC9EFC2CCE4739957CE71816F0EEB402D1626F9F (void);
// 0x000000AD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Dense_m875624184931776692BAA55BB8D7BA48E4578350 (void);
// 0x000000AE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Conv2D_m375EBCE2E41EEF65A78AE28F69EEBA7BCCEBE00F (void);
// 0x000000AF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void BurstCPUOps_Conv2DUsingIm2ColSliced_m46BDBBB094CE79351FB20F9557D07EF5E192F8D2 (void);
// 0x000000B0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_MaxPool2D_mCD62FD3D1DF404108222BFD6F0B65798990DE8B5 (void);
// 0x000000B1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_AvgPool2D_mD0F771699B7A9CF464ED1764D2895D10DD998426 (void);
// 0x000000B2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalMaxPool2D_m551872951329EEA5A8B450233E839A0BD1C1AFAA (void);
// 0x000000B3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalAvgPool2D_mDF439ECAD6688682FBDB121DB1BF78F0D1853E93 (void);
// 0x000000B4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_DepthwiseConv2D_mF20A05AB7BAADA61BD27900E6829EEA804A48F48 (void);
// 0x000000B5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_ScaleBias_mBC80692691688C7BC4E5EB94B563D094E55B04C9 (void);
// 0x000000B6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu_m90AC2BCED635E1D444A25B68E7A8ED415C90171F (void);
// 0x000000B7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu6_m82AD9BAED11E8072DCEF9DC6EDB0F9E9BA873549 (void);
// 0x000000B8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_LeakyRelu_m1A4BC41C08E0338252BF2E4AB0FF3D93D4697CF0 (void);
// 0x000000B9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tanh_m172B6651F9DCABD178E14D991AD41B30EE145D89 (void);
// 0x000000BA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Softplus_m2B5E2C86B6DE27536D4655883DDD1AF4EDC9D758 (void);
// 0x000000BB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sigmoid_m4DF3294747F7A84D6C5AABED85EDB5F5825DE00C (void);
// 0x000000BC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Elu_m502B79612CCFC0C3567C950CBDC1AC9B24785910 (void);
// 0x000000BD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Selu_mEB3684D67F06E3ACAAD7D3CE2E2F449AF0A60221 (void);
// 0x000000BE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Swish(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Swish_mE3AC0A3AB6DB9A784C0490FA5CF09590207F684E (void);
// 0x000000BF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_PRelu_mC060D728CB68BD89386326E42B04B5881A5E8C3A (void);
// 0x000000C0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_Softmax_m6F87789D3DF81D069BE1D9ACF377C304F9398008 (void);
// 0x000000C1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_LogSoftmax_m888BA8F808F9C6F93F3EA174A0B559D26FC525D5 (void);
// 0x000000C2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Abs(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Abs_mEE2EE8C333B81956FB289EE474F2BB12FCAB5219 (void);
// 0x000000C3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Neg(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Neg_mA4594CF0DD9BA7091CB33790BCFD34A8301002D9 (void);
// 0x000000C4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Ceil_m32E5264B14ACAC765B58B999E9FCAB09BBDE1BD2 (void);
// 0x000000C5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Clip_m624B3E2C2D2FFC9252903C8AB8DF9FF8AB71AA32 (void);
// 0x000000C6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Floor(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Floor_m28021F5C10F89A3620A22F22FA38D404AE6FCB58 (void);
// 0x000000C7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Round(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Round_m4E86D7680357A0760D6E8B3F5680CDCE21FA4D65 (void);
// 0x000000C8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Reciprocal_m39CDB1E680DF4BC1530FAD7415F035E7BF494DA6 (void);
// 0x000000C9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Pow_m21B8D70CFEA39AD1690AD872169D1A96209F0C33 (void);
// 0x000000CA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Exp(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Exp_mF7111D38B7A80479291FF0DADBF1E3CAFF3F1049 (void);
// 0x000000CB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Log(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Log_m2BF8BE21FBCF743EDBAB719AC7446BD3396CD8CE (void);
// 0x000000CC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sqrt_m31CE648E4A28CA0FD44951FBDD680288726A1A37 (void);
// 0x000000CD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acos_m70A84FCAE43DA6D33C366174FE9B9B7CF81BFE01 (void);
// 0x000000CE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acosh_mC02C4A1C68DBF670048E427D8913460DC862ABED (void);
// 0x000000CF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asin_m624DB57BF0D4C47C2C4150A693AA014D6939F2DD (void);
// 0x000000D0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asinh_m05CD65D6CF0841FCDC3990C342D545FCA68FE23B (void);
// 0x000000D1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atan_m1B2967686ECE8EFFAF9B12956B55856055BF14C7 (void);
// 0x000000D2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atanh_m20DB593C732564EF6B2ADE6F5CA43D77445DB263 (void);
// 0x000000D3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cos_mE9EF5C3E12C53E6A224C4C24B0245A0AA234C690 (void);
// 0x000000D4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cosh_m2243BC794B8F95E0FD72CEE431C3F959A69F1E6E (void);
// 0x000000D5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sin_m030E7E2F4BC18A077B45E9AF4DFE38AF704BC8F9 (void);
// 0x000000D6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sinh_m5787A48261C326B8E69DF6FAA82452E8D8965B4F (void);
// 0x000000D7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tan_mF2E50225A05D276E67F154894C1C1451980814DD (void);
// 0x000000D8 System.Void Unity.Barracuda.BurstCPUOps::AssignTensorStrides8D(Unity.Barracuda.Tensor,System.Int32*)
extern void BurstCPUOps_AssignTensorStrides8D_m957DFF3EC1DE8DAF048D7792C70A55AC2F862A87 (void);
// 0x000000D9 System.Void Unity.Barracuda.BurstCPUOps::BroadcastAdd(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_BroadcastAdd_mFA215A55518C832F4F5ADDA790E2945F685860CF (void);
// 0x000000DA System.Void Unity.Barracuda.BurstCPUOps::BroadcastSub(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastSub_m54CA82BBC714DFFEB81F682E0EA3CF65FC90C3FA (void);
// 0x000000DB System.Void Unity.Barracuda.BurstCPUOps::BroadcastMul(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMul_m53AD399DFB84668B4960EE666CE1FA104E7B2530 (void);
// 0x000000DC System.Void Unity.Barracuda.BurstCPUOps::BroadcastDiv(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastDiv_m20C59A97D9BE2075F3FB4680BE15972593006B04 (void);
// 0x000000DD System.Void Unity.Barracuda.BurstCPUOps::BroadcastPow(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastPow_m3EC0EE63C463830F77C53B878A193B3E102ABD70 (void);
// 0x000000DE System.Void Unity.Barracuda.BurstCPUOps::BroadcastMin(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMin_m2FFE8EE13A6F6CF0041CFC8CDA42C002F3399C74 (void);
// 0x000000DF System.Void Unity.Barracuda.BurstCPUOps::BroadcastMax(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMax_m8ADCC7BF5FC43448F01B2A56558EB170E22C5A48 (void);
// 0x000000E0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Add(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Add_m41418BCC36359359BFD4CA7EB297E7759B7845B8 (void);
// 0x000000E1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Sub_m11F284D0C992BE98EBBD2036D3E052F57DCB59BD (void);
// 0x000000E2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Mul_mF453D60FE34C29104A41727DAED0C750B54EE8C3 (void);
// 0x000000E3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Div(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Div_m9BB34ACD68B3D3156E82A9AC68AC163BB44B12C0 (void);
// 0x000000E4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Pow_mD0D037414371F4148D08905248DB5E8680693588 (void);
// 0x000000E5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Min(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Min_m37583D352316B91B9A793D2ACFB196C8D5188F68 (void);
// 0x000000E6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Max(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Max_m1E99EC40D299A55BFD5E9175B1F177D5445D93D7 (void);
// 0x000000E7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_CopyAndReshape_m7F0860E2FB2B0F6954F60980AE4C73DE6851B4EB (void);
// 0x000000E8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void BurstCPUOps_Concat_m18125E86A737F5772D8D057006FDEFD307D6CFDD (void);
// 0x000000E9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_StridedSlice_m69C26E17C22F0B50513EE7CF992EA932198672B5 (void);
// 0x000000EA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ApplyBorderPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void BurstCPUOps_ApplyBorderPadding_m149C660BBD073F39A79054027648A16DB5F54022 (void);
// 0x000000EB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void BurstCPUOps_Border2D_m91FC76823AD16B3B722384B86580EA9EA8FFA8C4 (void);
// 0x000000EC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void BurstCPUOps_Transpose_m81E59DE8F1441E5E8A221487E1DB4425FFAF53B4 (void);
// 0x000000ED Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_ReduceMean_m649E6313B74CCC82AD087727A445BC85894E2E95 (void);
// 0x000000EE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_ReduceSum_m17CE7EFA22A58D2E96A47A476D32B3629ED05000 (void);
// 0x000000EF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void BurstCPUOps_Tile_m415810882379AC433D33CED3486E8FF89AFA0DE4 (void);
// 0x000000F0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void BurstCPUOps_Gather_mC1A2CC20CAE43A8B566BC4EDCB03C8CF576E9FC6 (void);
// 0x000000F1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void BurstCPUOps_OneHot_m49BB9344AC329FF4FC7AA50520CE29954B45C46E (void);
// 0x000000F2 System.Void Unity.Barracuda.BurstCPUOps::.cctor()
extern void BurstCPUOps__cctor_m2C7D8BA413E758B72B26E779840DDE99F6A5C6D8 (void);
// 0x000000F3 System.Void Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource::.ctor(System.Single*)
extern void ReadOnlyMemResource__ctor_mC48374D2B97C6CCE5FCE6A4D94CA8E399564F518 (void);
// 0x000000F4 System.Void Unity.Barracuda.BurstCPUOps/ReadWriteMemResource::.ctor(System.Single*)
extern void ReadWriteMemResource__ctor_m0FB7EF4C938F6A8B0DE628FEFB01EDBD4E105178 (void);
// 0x000000F5 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationO::get_O()
// 0x000000F6 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationO::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
// 0x000000F7 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXO::get_X()
// 0x000000F8 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXO::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x000000F9 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXO::get_O()
// 0x000000FA System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXO::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
// 0x000000FB Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::get_X()
// 0x000000FC System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x000000FD Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::get_B()
// 0x000000FE System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x000000FF Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::get_O()
// 0x00000100 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXBO::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
// 0x00000101 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::get_X()
// 0x00000102 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x00000103 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::get_S()
// 0x00000104 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::set_S(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x00000105 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::get_B()
// 0x00000106 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
// 0x00000107 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::get_O()
// 0x00000108 System.Void Unity.Barracuda.BurstCPUOps/IJobResourceDeclarationXSBO::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
// 0x00000109 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_mDF462F5A4B0F8F30ABD8568AC9308ECA61B7828B (void);
// 0x0000010A Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_m271B6960533177BDECB107061756B18091240364 (void);
// 0x0000010B System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Execute(System.Int32)
extern void MatrixMultiplyJob_Execute_mE9A39BD2F3DBB268ACE7B47FC07960C997C6E8F5 (void);
// 0x0000010C System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::AllocBlock()
extern void MatrixMultiplyJob_AllocBlock_m306BFE4C04487C3CE9565B1B6AF067FB4AEA47D1 (void);
// 0x0000010D System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::FreeBlock(System.Single*)
extern void MatrixMultiplyJob_FreeBlock_m09B00454A3F1E339B91EF2006EED34E005F5B993 (void);
// 0x0000010E System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiplyJob_MultiplyBlockUnroll16xh_m6718AB74B15A760459C3C2B0DB51C781ED51B0DA (void);
// 0x0000010F Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiply3x2Job_Schedule_m1E7D0AC0E4CB5FEE06FD639F6C002F44F164B2A4 (void);
// 0x00000110 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiply3x2Job_Schedule_mE2748076029917FCDE7F1BA873A7D7B79F6EF527 (void);
// 0x00000111 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Execute(System.Int32)
extern void MatrixMultiply3x2Job_Execute_mCF658002C9D1791520A6A0EBE9C70D5E43C0AC45 (void);
// 0x00000112 System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::AllocBlock()
extern void MatrixMultiply3x2Job_AllocBlock_mEAA6DDA8040E7A8866E7CFB0A960BE90B0C181E8 (void);
// 0x00000113 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::FreeBlock(System.Single*)
extern void MatrixMultiply3x2Job_FreeBlock_mD8F69BCDD9096126B02F10D6A6A3861578294167 (void);
// 0x00000114 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiply3x2Job_MultiplyBlockUnroll16xh_m251D689C841084795CC4167792422F5C0E55A343 (void);
// 0x00000115 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiply4x4Job_Schedule_m0F182AE984F7BEEEE26D8C007CF61E11BB7A4752 (void);
// 0x00000116 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiply4x4Job_Schedule_mFB52A63FB168E200B0C4EF21A94E14FD4E02C585 (void);
// 0x00000117 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Execute(System.Int32)
extern void MatrixMultiply4x4Job_Execute_mAC6E0433C00BF5D232458ED6D03CFCEC77231BAD (void);
// 0x00000118 System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::AllocBlock()
extern void MatrixMultiply4x4Job_AllocBlock_m8492DBA53281A4F07D0FF53BAFB9235670BCD1F5 (void);
// 0x00000119 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::FreeBlock(System.Single*)
extern void MatrixMultiply4x4Job_FreeBlock_m6C38BC9740EC16695F3491B271036CBFAE1B1225 (void);
// 0x0000011A System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32)
extern void MatrixMultiply4x4Job_MultiplyBlockUnroll16xh_mAFB73CDE5EAB3F564B620FDA37E40ACED2A41F46 (void);
// 0x0000011B Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/Dense3Job::Schedule(Unity.Jobs.JobHandle)
extern void Dense3Job_Schedule_mE676A954E4DB439543C98CADF4E1F48CFFB8C9A2 (void);
// 0x0000011C Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/Dense3Job::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void Dense3Job_Schedule_m89B0278B2678764E5013BE4E19DA3B7ABB89BA86 (void);
// 0x0000011D System.Void Unity.Barracuda.BurstCPUOps/Dense3Job::Execute(System.Int32)
extern void Dense3Job_Execute_mE96E18CF546A186411103892E208FE283ABF4316 (void);
// 0x0000011E System.Single* Unity.Barracuda.BurstCPUOps/Dense3Job::AllocBlock()
extern void Dense3Job_AllocBlock_m07E37AC31AB1047656D08E9F6DA2307C37814223 (void);
// 0x0000011F System.Void Unity.Barracuda.BurstCPUOps/Dense3Job::FreeBlock(System.Single*)
extern void Dense3Job_FreeBlock_m47755BA423E17B49E6D611650295A49ACFA05235 (void);
// 0x00000120 System.Void Unity.Barracuda.BurstCPUOps/Dense3Job::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void Dense3Job_MultiplyBlockUnroll16xh_mA3D5BA105811B70203DA3B20BE72B886BA531A9B (void);
// 0x00000121 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::get_X()
extern void Im2ColSliceJob_get_X_m0DA0DE6B74CF53C156203158BF7186655E024A57 (void);
// 0x00000122 System.Void Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void Im2ColSliceJob_set_X_mAC7FBC47B3ADA3D969D7F2C97A63B99A7C35AA31 (void);
// 0x00000123 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::get_O()
extern void Im2ColSliceJob_get_O_mF1F69C610396ACD0CBC19EE2C78DC293C96F068D (void);
// 0x00000124 System.Void Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void Im2ColSliceJob_set_O_mCB4D5FED83F8FDA0ED4E647BE0BCF4EC165B8D1C (void);
// 0x00000125 System.Void Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::Execute(System.Int32)
extern void Im2ColSliceJob_Execute_m04B26169EB6668195927B2B1C69140FDD29D0D62 (void);
// 0x00000126 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/MaxPool2DJob::get_X()
extern void MaxPool2DJob_get_X_m13BFCC0E1448D3E5CE1C5076BB2D267CEFB4D0B8 (void);
// 0x00000127 System.Void Unity.Barracuda.BurstCPUOps/MaxPool2DJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void MaxPool2DJob_set_X_mD04E1B51CF7A4CF25F817FFBB710DA93F1C25BBC (void);
// 0x00000128 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/MaxPool2DJob::get_O()
extern void MaxPool2DJob_get_O_m51DA9B5C004742B6A7940D365E7707800C4CF220 (void);
// 0x00000129 System.Void Unity.Barracuda.BurstCPUOps/MaxPool2DJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void MaxPool2DJob_set_O_m81448FAC6E03CAB22C2ECEC5F4B9E14F46AF1EFB (void);
// 0x0000012A System.Void Unity.Barracuda.BurstCPUOps/MaxPool2DJob::Execute(System.Int32)
extern void MaxPool2DJob_Execute_m580DD6093ED112BFF9BC46F8EB283D55DFC67AEC (void);
// 0x0000012B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AvgPool2DJob::get_X()
extern void AvgPool2DJob_get_X_m7D5D4BAE24832FD25CC6C377C0FD7255468E5234 (void);
// 0x0000012C System.Void Unity.Barracuda.BurstCPUOps/AvgPool2DJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AvgPool2DJob_set_X_m7FF63B501D5A464C01297BD715FB7AE0C0D6C2A7 (void);
// 0x0000012D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AvgPool2DJob::get_O()
extern void AvgPool2DJob_get_O_m75EEF8C136FDF2EDDAC46A6EB9C267AB078676D4 (void);
// 0x0000012E System.Void Unity.Barracuda.BurstCPUOps/AvgPool2DJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AvgPool2DJob_set_O_m32F02174FBC96B340688B64B03CE4656AF635F0B (void);
// 0x0000012F System.Void Unity.Barracuda.BurstCPUOps/AvgPool2DJob::Execute(System.Int32)
extern void AvgPool2DJob_Execute_mEC6AE2C040C7AAC14229E32B31359982DD70B93F (void);
// 0x00000130 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::get_X()
extern void DepthwiseConv2DJob_get_X_mBF4239B770D064168073249FD9112039B1F1D6BE (void);
// 0x00000131 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void DepthwiseConv2DJob_set_X_m6E851B6CFC9370731A9E93CEBF2BF6799EA7968D (void);
// 0x00000132 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::get_S()
extern void DepthwiseConv2DJob_get_S_m2D7EC74801FAB774197D8EC3EEFF49B7A32F5743 (void);
// 0x00000133 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::set_S(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void DepthwiseConv2DJob_set_S_m321C9D5E2C150A3F719B5F999B62A3B3893866DE (void);
// 0x00000134 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::get_B()
extern void DepthwiseConv2DJob_get_B_mB87620DE1FA161DEAB645B51F44E05D9CA5656FB (void);
// 0x00000135 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void DepthwiseConv2DJob_set_B_m2E0091E0192610606B082F7E706F0A504A3CAA3E (void);
// 0x00000136 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::get_O()
extern void DepthwiseConv2DJob_get_O_mB26F34762E2F9736A2527E33E44317E94155CBDE (void);
// 0x00000137 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void DepthwiseConv2DJob_set_O_mC465D79D457E289C98F1C577DE42B62670346A02 (void);
// 0x00000138 System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::Execute(System.Int32)
extern void DepthwiseConv2DJob_Execute_m9328EE2AAAD43988BF3BA856D3DE63DA04C40389 (void);
// 0x00000139 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/PReluJob::get_X()
extern void PReluJob_get_X_m34F01B3DB521A581A342FAEA875A36B2EBADA4EF (void);
// 0x0000013A System.Void Unity.Barracuda.BurstCPUOps/PReluJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void PReluJob_set_X_m1B9F64B6352A265767276B7A50038D8D85DCCBAB (void);
// 0x0000013B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/PReluJob::get_B()
extern void PReluJob_get_B_m04428B6DC1C5112076B89B1F463786677AE614B8 (void);
// 0x0000013C System.Void Unity.Barracuda.BurstCPUOps/PReluJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void PReluJob_set_B_m9F8356B4C478CB59B08A1D12CD6C13D86F376C81 (void);
// 0x0000013D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/PReluJob::get_O()
extern void PReluJob_get_O_mF018055161B7AFB0AA4ABACDBD392EE8BBA81E5B (void);
// 0x0000013E System.Void Unity.Barracuda.BurstCPUOps/PReluJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void PReluJob_set_O_m57853415DFAFCA2534C1116D394618560CB217EC (void);
// 0x0000013F System.Void Unity.Barracuda.BurstCPUOps/PReluJob::Execute(System.Int32)
extern void PReluJob_Execute_mA3B6D7DF53C9016910BCF82DB949362842210B8C (void);
// 0x00000140 System.Single Unity.Barracuda.BurstCPUOps/PReluJob::PRelu(System.Single,System.Single)
extern void PReluJob_PRelu_m49CE44DB4A936AEAF28BD445835AA75BBCBAC5E0 (void);
// 0x00000141 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ReluJob::get_X()
extern void ReluJob_get_X_m341ADC6743E8C686684CD3CE43B4F46947A38D3D (void);
// 0x00000142 System.Void Unity.Barracuda.BurstCPUOps/ReluJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ReluJob_set_X_m1CAF8DC890E936672F00287C42791956BB45A489 (void);
// 0x00000143 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ReluJob::get_O()
extern void ReluJob_get_O_m16186E4D006DA6908A08C5221DC4B5DCC6CF20D5 (void);
// 0x00000144 System.Void Unity.Barracuda.BurstCPUOps/ReluJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ReluJob_set_O_mF4248072A1969FA7AE5B5EE49EA7F5C5FBF26501 (void);
// 0x00000145 System.Void Unity.Barracuda.BurstCPUOps/ReluJob::Execute(System.Int32)
extern void ReluJob_Execute_mE54A0858EAB957EECA3C81A2BF48F141D2E9D73E (void);
// 0x00000146 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/Relu6Job::get_X()
extern void Relu6Job_get_X_m4094D938E1026E3690AF645F63ED07DAEEA288B6 (void);
// 0x00000147 System.Void Unity.Barracuda.BurstCPUOps/Relu6Job::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void Relu6Job_set_X_m5396292DF59E6F6A3F74669BAFCABE9F3D1515FD (void);
// 0x00000148 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/Relu6Job::get_O()
extern void Relu6Job_get_O_mF5F052BCEA690E896CF9E440AC1192E12EBFB8F2 (void);
// 0x00000149 System.Void Unity.Barracuda.BurstCPUOps/Relu6Job::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void Relu6Job_set_O_m6A2BC96CA09F1FE5C1D02FAE5446C22ACFE0D95D (void);
// 0x0000014A System.Void Unity.Barracuda.BurstCPUOps/Relu6Job::Execute(System.Int32)
extern void Relu6Job_Execute_m3FD3AD1BF129901194BA5D1748F5BDD462FE4129 (void);
// 0x0000014B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/LeakyReluJob::get_X()
extern void LeakyReluJob_get_X_mF11C5DA07744B1721A11AC5E16D5FA208FB8CC84 (void);
// 0x0000014C System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void LeakyReluJob_set_X_mBF95CFF1222750DF720A0EC742743F0FC527EE5F (void);
// 0x0000014D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/LeakyReluJob::get_O()
extern void LeakyReluJob_get_O_m3438499EF5527F24DBFA386602BD3C8954AB57ED (void);
// 0x0000014E System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void LeakyReluJob_set_O_m06851D2102CC6F974D00F5819EF0F3CFEBCAA5A0 (void);
// 0x0000014F System.Single Unity.Barracuda.BurstCPUOps/LeakyReluJob::get_alpha()
extern void LeakyReluJob_get_alpha_mD1806EEEF6B6E608E69A975C0594C12784B685CA (void);
// 0x00000150 System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::set_alpha(System.Single)
extern void LeakyReluJob_set_alpha_m50775D0539A9D4DE60D14DCF0040D424929EDC3D (void);
// 0x00000151 System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::Execute(System.Int32)
extern void LeakyReluJob_Execute_m1DD708C8C0282DD65E30665A7B003CD9D9D25CB0 (void);
// 0x00000152 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/TanhJob::get_X()
extern void TanhJob_get_X_mA538835782EE99ACE911216219A64333CEB0354D (void);
// 0x00000153 System.Void Unity.Barracuda.BurstCPUOps/TanhJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void TanhJob_set_X_m9D5B8744250E776D498D4BFFA751048A23497D6E (void);
// 0x00000154 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/TanhJob::get_O()
extern void TanhJob_get_O_m893076F87428F8E917BD25DD78B903A89B503E49 (void);
// 0x00000155 System.Void Unity.Barracuda.BurstCPUOps/TanhJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void TanhJob_set_O_mE658A12C2EAD4534BCCCF3E82F84A3D1C73F3AD1 (void);
// 0x00000156 System.Void Unity.Barracuda.BurstCPUOps/TanhJob::Execute(System.Int32)
extern void TanhJob_Execute_mC148942BA69193BBAB1FD364D9DB4D3FA552DFF7 (void);
// 0x00000157 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SoftplusJob::get_X()
extern void SoftplusJob_get_X_m715A941DD9DEABA6C5F8C94AD047C98E4DAA7C83 (void);
// 0x00000158 System.Void Unity.Barracuda.BurstCPUOps/SoftplusJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SoftplusJob_set_X_m75FED1F7BC6D28913A5E614AFB57E60466E3879C (void);
// 0x00000159 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SoftplusJob::get_O()
extern void SoftplusJob_get_O_m4B5446F98ADD7AAC88541D21C9B71DCC5E493283 (void);
// 0x0000015A System.Void Unity.Barracuda.BurstCPUOps/SoftplusJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SoftplusJob_set_O_m88EF87B9BD848B99EE9B528EFEDCED790C4FBE1E (void);
// 0x0000015B System.Void Unity.Barracuda.BurstCPUOps/SoftplusJob::Execute(System.Int32)
extern void SoftplusJob_Execute_m20162B8B288264D6531E07C8289CE3641EFA97B3 (void);
// 0x0000015C Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SigmoidJob::get_X()
extern void SigmoidJob_get_X_mD23EF0BD310E794FA1B3674C9C6DAB92F850A0F1 (void);
// 0x0000015D System.Void Unity.Barracuda.BurstCPUOps/SigmoidJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SigmoidJob_set_X_m6B330B1903A4B1C98DD8C5DD73B5311ADD0B7EB5 (void);
// 0x0000015E Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SigmoidJob::get_O()
extern void SigmoidJob_get_O_mDF22771B505E47B3AD956FC75AD03C49BE0485D9 (void);
// 0x0000015F System.Void Unity.Barracuda.BurstCPUOps/SigmoidJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SigmoidJob_set_O_mE0D4D945ACC6A1E4A334F2ADB70D3CB983F457C4 (void);
// 0x00000160 System.Void Unity.Barracuda.BurstCPUOps/SigmoidJob::Execute(System.Int32)
extern void SigmoidJob_Execute_m3181646D37A37C23036A748398091EE987752D26 (void);
// 0x00000161 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/EluJob::get_X()
extern void EluJob_get_X_mE8F14D40E42272F3B605EBF8672D448C5760C41D (void);
// 0x00000162 System.Void Unity.Barracuda.BurstCPUOps/EluJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void EluJob_set_X_m1E37FA3AFF1CAFC8A27D56676EA67D3B3AE477F9 (void);
// 0x00000163 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/EluJob::get_O()
extern void EluJob_get_O_m34B77E09C7F3C65D71DA150B46CC6CF58AF96BA6 (void);
// 0x00000164 System.Void Unity.Barracuda.BurstCPUOps/EluJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void EluJob_set_O_m7A2453DED1B316C83191E58A299AC877AA710877 (void);
// 0x00000165 System.Void Unity.Barracuda.BurstCPUOps/EluJob::Execute(System.Int32)
extern void EluJob_Execute_m542D1F8E0526448F088A239690D716358208AA08 (void);
// 0x00000166 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SeluJob::get_X()
extern void SeluJob_get_X_mEA3AFADD1A7347A964580746D809A30E1EF95A6B (void);
// 0x00000167 System.Void Unity.Barracuda.BurstCPUOps/SeluJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SeluJob_set_X_m327E3F13CC5CAAFB2B45108592C888F999F941E6 (void);
// 0x00000168 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SeluJob::get_O()
extern void SeluJob_get_O_m53FF8241EB27D3738757245D069DF2C8318FE662 (void);
// 0x00000169 System.Void Unity.Barracuda.BurstCPUOps/SeluJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SeluJob_set_O_m85F0B048568564755C051E8E20A11DBF84B83D8A (void);
// 0x0000016A System.Void Unity.Barracuda.BurstCPUOps/SeluJob::Execute(System.Int32)
extern void SeluJob_Execute_m059F68D5649F08D16CCBB3D15E5D3B850BB38EE5 (void);
// 0x0000016B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SwishJob::get_X()
extern void SwishJob_get_X_m983C75EE5CA53EF53F7DDA648DB793E5CB732335 (void);
// 0x0000016C System.Void Unity.Barracuda.BurstCPUOps/SwishJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SwishJob_set_X_m8952CCCA3B37B206463073C97D2E30FA91D59967 (void);
// 0x0000016D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SwishJob::get_O()
extern void SwishJob_get_O_m365876877089126183CB9321FE113E19B109A82D (void);
// 0x0000016E System.Void Unity.Barracuda.BurstCPUOps/SwishJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SwishJob_set_O_m2DC6C9614FE1DE635618E980A342E494E45B0969 (void);
// 0x0000016F System.Void Unity.Barracuda.BurstCPUOps/SwishJob::Execute(System.Int32)
extern void SwishJob_Execute_m249E8553A89A15C55A9DCC2734224990340AFB86 (void);
// 0x00000170 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::get_X()
extern void ExpBiasReduceJob_get_X_m35C5FB8911BB8FC51EB464ABC2C3BEA82C4DA694 (void);
// 0x00000171 System.Void Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ExpBiasReduceJob_set_X_m7D8E4223E1FDF14DC86F8D5A4FFCD5CCBE55918D (void);
// 0x00000172 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::get_B()
extern void ExpBiasReduceJob_get_B_m78499E47C15E6A59EB01A9878239A31DF122742B (void);
// 0x00000173 System.Void Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ExpBiasReduceJob_set_B_m0CA84CEAE7F5BB17D28F9CD837B4BE7BE44B00E8 (void);
// 0x00000174 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::get_O()
extern void ExpBiasReduceJob_get_O_mA7F7688ABEA6C97CA5D6DFF6C07ED5FDB5E3A848 (void);
// 0x00000175 System.Void Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ExpBiasReduceJob_set_O_m111B670F154B61572BC7DE4E3002341E617EFB9F (void);
// 0x00000176 System.Void Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::Execute(System.Int32)
extern void ExpBiasReduceJob_Execute_m9AF1674E3CE059153AF2A668BB27E407300C2686 (void);
// 0x00000177 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::get_X()
extern void SoftmaxEndJob_get_X_m7E57BE1757F9FC8C7AA3B7E74EE29BAC41AE898B (void);
// 0x00000178 System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SoftmaxEndJob_set_X_m15352FF2E769078F02EC5960D8D931ECAD97B855 (void);
// 0x00000179 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::get_S()
extern void SoftmaxEndJob_get_S_mD2CA8ACD6AAAC756C294D992083A9750EF341A03 (void);
// 0x0000017A System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::set_S(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SoftmaxEndJob_set_S_m6042D67E59D30CF1FA9E47CA31F6E1D58C74C4C6 (void);
// 0x0000017B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::get_B()
extern void SoftmaxEndJob_get_B_mD5FA9405F2D50B8E231BB79DBAE28F46A21FDCF6 (void);
// 0x0000017C System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SoftmaxEndJob_set_B_mB5F03CB2B8BC08A53D6D4E8CCF72309D97819B10 (void);
// 0x0000017D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::get_O()
extern void SoftmaxEndJob_get_O_mB11056F8DE55CBF2B13A3BB4C8352116A95CF3A5 (void);
// 0x0000017E System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SoftmaxEndJob_set_O_m7E3583C5D9F7A3F27E062102241A32760434FBB5 (void);
// 0x0000017F System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::Execute(System.Int32)
extern void SoftmaxEndJob_Execute_mD3F031975B5F57B584C417CEBAE2DF1DDDB7A73E (void);
// 0x00000180 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::get_X()
extern void LogSoftmaxEndJob_get_X_m27E5182DCDAE61C1FDD7A3D14AB0951529198514 (void);
// 0x00000181 System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void LogSoftmaxEndJob_set_X_mEB4B2745DD328ADDC025B9E49ABEA2DB7C1BB63E (void);
// 0x00000182 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::get_S()
extern void LogSoftmaxEndJob_get_S_m6EAACC3847C2CD0C754E4B2B4360A78FA9B05F20 (void);
// 0x00000183 System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::set_S(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void LogSoftmaxEndJob_set_S_m70EDC74A9810EEDE2F6D1EF0CF927A51ABD4568A (void);
// 0x00000184 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::get_B()
extern void LogSoftmaxEndJob_get_B_m8EA13B276C5C014F7E9A5CAF27B7BE035A3AFA7F (void);
// 0x00000185 System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void LogSoftmaxEndJob_set_B_m12505EBB14D292216929E61604F69EBA1912B643 (void);
// 0x00000186 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::get_O()
extern void LogSoftmaxEndJob_get_O_m6A418FE1EBBB9B4A453BAF6D866A65E9AF95C12D (void);
// 0x00000187 System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void LogSoftmaxEndJob_set_O_m5808D1A55B242CE8D5BCE16A9BFAC98FF370D0FC (void);
// 0x00000188 System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::Execute(System.Int32)
extern void LogSoftmaxEndJob_Execute_m0C8E325A86ECF16B27434846FFF68812148AE319 (void);
// 0x00000189 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AbsJob::get_X()
extern void AbsJob_get_X_m334D68A2C8EAECA9D965710F5AC97BA6D5CAE454 (void);
// 0x0000018A System.Void Unity.Barracuda.BurstCPUOps/AbsJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AbsJob_set_X_m93EA90E9B760015D9AA7AD89D879DAFD5DE0FB2B (void);
// 0x0000018B Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AbsJob::get_O()
extern void AbsJob_get_O_mEACA538B8D68DD0BEB8665BF6CB40339F07171DA (void);
// 0x0000018C System.Void Unity.Barracuda.BurstCPUOps/AbsJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AbsJob_set_O_m392E2DB760B23F0956905F5AB3861B4118D7F421 (void);
// 0x0000018D System.Void Unity.Barracuda.BurstCPUOps/AbsJob::Execute(System.Int32)
extern void AbsJob_Execute_mC9E702070CFB124AB2BA751C50D81D93C22C4938 (void);
// 0x0000018E Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/NegJob::get_X()
extern void NegJob_get_X_mD2FD8626D4C7AFCE4E8E1C3D4B24283CD93F34F1 (void);
// 0x0000018F System.Void Unity.Barracuda.BurstCPUOps/NegJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void NegJob_set_X_m17391FA0EF7389709FF7882A8179E5F37DA028B2 (void);
// 0x00000190 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/NegJob::get_O()
extern void NegJob_get_O_mFF0BD0C196D2D39438780677AF102852E55F1F2C (void);
// 0x00000191 System.Void Unity.Barracuda.BurstCPUOps/NegJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void NegJob_set_O_m3C04B46A229B15F83F05F9B2BC1CFBEAB277BC0C (void);
// 0x00000192 System.Void Unity.Barracuda.BurstCPUOps/NegJob::Execute(System.Int32)
extern void NegJob_Execute_mBCF6937BAE0E450FB75C536CD6C2387D4F4B11A8 (void);
// 0x00000193 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/CeilJob::get_X()
extern void CeilJob_get_X_m3DA595A266405F102D6DA9711673352C74B17326 (void);
// 0x00000194 System.Void Unity.Barracuda.BurstCPUOps/CeilJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void CeilJob_set_X_mFEAF467CE49BD29853E6A6614196880B5531D391 (void);
// 0x00000195 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/CeilJob::get_O()
extern void CeilJob_get_O_mE069A8E97E1F9C01F8F33B9DE61593868E689B27 (void);
// 0x00000196 System.Void Unity.Barracuda.BurstCPUOps/CeilJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void CeilJob_set_O_mE0C76AEB46A1789E6BE5FC82771DCEA76280DD88 (void);
// 0x00000197 System.Void Unity.Barracuda.BurstCPUOps/CeilJob::Execute(System.Int32)
extern void CeilJob_Execute_mA9B7C6396A148E2199719E8C2F575FD163D473D9 (void);
// 0x00000198 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ClipJob::get_X()
extern void ClipJob_get_X_mDBF96CE5EABC07C3C4631D23DE79D7A3F6DFDAE4 (void);
// 0x00000199 System.Void Unity.Barracuda.BurstCPUOps/ClipJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ClipJob_set_X_m0E918558BCA0C60AD427A2C990C3CB7B6F896593 (void);
// 0x0000019A Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ClipJob::get_O()
extern void ClipJob_get_O_m8FF52A8C8218874E8A2E129465EB37CE2FE39897 (void);
// 0x0000019B System.Void Unity.Barracuda.BurstCPUOps/ClipJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ClipJob_set_O_m95CCA1ADB860945E6E3E7EF46F5850F8F1EA2AC2 (void);
// 0x0000019C System.Void Unity.Barracuda.BurstCPUOps/ClipJob::Execute(System.Int32)
extern void ClipJob_Execute_m9D2B7772DEB5B8209BCE795F0FD0C02BF8C02A24 (void);
// 0x0000019D Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/FloorJob::get_X()
extern void FloorJob_get_X_mA9D58F1AA5BDEE15DE265D82B2AAA089CA5EC67D (void);
// 0x0000019E System.Void Unity.Barracuda.BurstCPUOps/FloorJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void FloorJob_set_X_m9120E16DB2EFC2CD0DDF4E0676688F5E8137AEE8 (void);
// 0x0000019F Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/FloorJob::get_O()
extern void FloorJob_get_O_m1D01FA2D48FFB7E235297080D4C26CD5273C063F (void);
// 0x000001A0 System.Void Unity.Barracuda.BurstCPUOps/FloorJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void FloorJob_set_O_m362AEA5EAD1C05CE7E25382B1DE70905C42EEBF5 (void);
// 0x000001A1 System.Void Unity.Barracuda.BurstCPUOps/FloorJob::Execute(System.Int32)
extern void FloorJob_Execute_m386E9A00BF9424C50FFBD0B3F7FFF462E6CB8729 (void);
// 0x000001A2 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/RoundJob::get_X()
extern void RoundJob_get_X_m0B61ACEA49F7A711DFD3453E4BB5FBFCB954A1AB (void);
// 0x000001A3 System.Void Unity.Barracuda.BurstCPUOps/RoundJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void RoundJob_set_X_mDCE59C717F4004CB6DF8B8533E63035A6436FF2B (void);
// 0x000001A4 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/RoundJob::get_O()
extern void RoundJob_get_O_m9761A243013B4EF4C4ACC2C574E8DCFE52EF2075 (void);
// 0x000001A5 System.Void Unity.Barracuda.BurstCPUOps/RoundJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void RoundJob_set_O_mD2CD308CB6C731C4FBB683C19549E301986DCCB1 (void);
// 0x000001A6 System.Void Unity.Barracuda.BurstCPUOps/RoundJob::Execute(System.Int32)
extern void RoundJob_Execute_m7CA8A8C7A9BF695F1F57364609A0F3DB94BB5F69 (void);
// 0x000001A7 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ReciprocalJob::get_X()
extern void ReciprocalJob_get_X_m96304AFBDB5C258D3C5815382D7FC6C92CF5E0A7 (void);
// 0x000001A8 System.Void Unity.Barracuda.BurstCPUOps/ReciprocalJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ReciprocalJob_set_X_mFA3062C9E49F3100AE9525C9BB95AAFBE9EFB2F9 (void);
// 0x000001A9 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ReciprocalJob::get_O()
extern void ReciprocalJob_get_O_m4358C4FB0ECC572CDE77C3FA0F21C0E868FDF094 (void);
// 0x000001AA System.Void Unity.Barracuda.BurstCPUOps/ReciprocalJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ReciprocalJob_set_O_mABDF756762465842DEBC7FE984B066D7A0AA8FD5 (void);
// 0x000001AB System.Void Unity.Barracuda.BurstCPUOps/ReciprocalJob::Execute(System.Int32)
extern void ReciprocalJob_Execute_mE52D2BB420CB95D632F0B6C44CD09544903FEAA0 (void);
// 0x000001AC Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/PowJob::get_X()
extern void PowJob_get_X_mBE33CA79F448DEF71CCE2020E12D7DA69DBABBB6 (void);
// 0x000001AD System.Void Unity.Barracuda.BurstCPUOps/PowJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void PowJob_set_X_m4152D1652AD55EE839C4D125B59F025D0A7F8FE8 (void);
// 0x000001AE Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/PowJob::get_O()
extern void PowJob_get_O_m7FD64F414F03A51E1F40B85656A7806D7D6178EC (void);
// 0x000001AF System.Void Unity.Barracuda.BurstCPUOps/PowJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void PowJob_set_O_mA67A0A36783EEDA1C6E5943E85F8DDD768D6C148 (void);
// 0x000001B0 System.Void Unity.Barracuda.BurstCPUOps/PowJob::Execute(System.Int32)
extern void PowJob_Execute_m94044E5A8F0B024BA6B81895549F4EE3D0EFD7E2 (void);
// 0x000001B1 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ExpJob::get_X()
extern void ExpJob_get_X_mE0C1184C832C24AF291F18DF7FA19A216A5F0E83 (void);
// 0x000001B2 System.Void Unity.Barracuda.BurstCPUOps/ExpJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ExpJob_set_X_m3248EEEBC03C9C4B08666EAE30F68997FE71A579 (void);
// 0x000001B3 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ExpJob::get_O()
extern void ExpJob_get_O_m9D050460BF8A5F5601D79F3EDD9533C1B743C0AF (void);
// 0x000001B4 System.Void Unity.Barracuda.BurstCPUOps/ExpJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ExpJob_set_O_mD703D98B4D46F116EE5D6865F6E3BD9EA5CFD30D (void);
// 0x000001B5 System.Void Unity.Barracuda.BurstCPUOps/ExpJob::Execute(System.Int32)
extern void ExpJob_Execute_mF0D94BDC093DEA6364F44569702A47D2A98FFE15 (void);
// 0x000001B6 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/LogJob::get_X()
extern void LogJob_get_X_mDDC56BA2692F31E26238020B2E89BD2A5499A479 (void);
// 0x000001B7 System.Void Unity.Barracuda.BurstCPUOps/LogJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void LogJob_set_X_m9DFCA8400C37264E0C0BE84014B183EBE02FAD4D (void);
// 0x000001B8 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/LogJob::get_O()
extern void LogJob_get_O_m364859EAD02E6D688AD275E6A576AF46D736B40D (void);
// 0x000001B9 System.Void Unity.Barracuda.BurstCPUOps/LogJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void LogJob_set_O_m4D7E3509573C657E8C4B99858F9BD50A7DB43A0F (void);
// 0x000001BA System.Void Unity.Barracuda.BurstCPUOps/LogJob::Execute(System.Int32)
extern void LogJob_Execute_mD97D7DF75DF44CF7E8D15E60C3A4F2CAD96EA9E6 (void);
// 0x000001BB Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SqrtJob::get_X()
extern void SqrtJob_get_X_mC65AE9821E066F6695702E79C76AE8506E19479E (void);
// 0x000001BC System.Void Unity.Barracuda.BurstCPUOps/SqrtJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SqrtJob_set_X_mE126B9ADEC0F0FA9AA1FA14D0D52666408A8B120 (void);
// 0x000001BD Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SqrtJob::get_O()
extern void SqrtJob_get_O_m0D28FD4C89B2D017B251A119BA20704977492A2A (void);
// 0x000001BE System.Void Unity.Barracuda.BurstCPUOps/SqrtJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SqrtJob_set_O_m3F5898EDEC2E67E9A7F68FB3A3A785A465DAB1A9 (void);
// 0x000001BF System.Void Unity.Barracuda.BurstCPUOps/SqrtJob::Execute(System.Int32)
extern void SqrtJob_Execute_m2B47F9B88C83FF8254BE076C403DA830DB4C5090 (void);
// 0x000001C0 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AcosJob::get_X()
extern void AcosJob_get_X_m66DCFFC34AF0CE681F1BF9CE2A56DE10161EB933 (void);
// 0x000001C1 System.Void Unity.Barracuda.BurstCPUOps/AcosJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AcosJob_set_X_mCB21343095AE32C501CB596DD8EE0355832B45AC (void);
// 0x000001C2 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AcosJob::get_O()
extern void AcosJob_get_O_mEFF967B98705C7FCBEB08B29D1CD442B2A17559E (void);
// 0x000001C3 System.Void Unity.Barracuda.BurstCPUOps/AcosJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AcosJob_set_O_m9CCB412F00913862FF72171209633F78689FD567 (void);
// 0x000001C4 System.Void Unity.Barracuda.BurstCPUOps/AcosJob::Execute(System.Int32)
extern void AcosJob_Execute_mDA4C175B7716073508AC1722C1CC9213CAEC8D94 (void);
// 0x000001C5 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AcoshJob::get_X()
extern void AcoshJob_get_X_mDCA4D84B84743BA6BCF5CE6911104AA32F8AF775 (void);
// 0x000001C6 System.Void Unity.Barracuda.BurstCPUOps/AcoshJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AcoshJob_set_X_m352949D3F8040241039B5D0EDCD18914745AE429 (void);
// 0x000001C7 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AcoshJob::get_O()
extern void AcoshJob_get_O_mAF2C45A4E0DDE4D96AEBCD42BB75230109C81DDB (void);
// 0x000001C8 System.Void Unity.Barracuda.BurstCPUOps/AcoshJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AcoshJob_set_O_m7AD55CFD0A48B9711B28CD1059B42067E4281FF9 (void);
// 0x000001C9 System.Void Unity.Barracuda.BurstCPUOps/AcoshJob::Execute(System.Int32)
extern void AcoshJob_Execute_mFAC3096AE97DDBA238B3F599F7E0D33CB581F520 (void);
// 0x000001CA Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AsinJob::get_X()
extern void AsinJob_get_X_mCF04557A9A5F880F639E66878CCF34FC1CF3CB32 (void);
// 0x000001CB System.Void Unity.Barracuda.BurstCPUOps/AsinJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AsinJob_set_X_m1D45DB3FE9378D209AA6B5ED5B6FAF8491C96C69 (void);
// 0x000001CC Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AsinJob::get_O()
extern void AsinJob_get_O_mA8A321C2823891C64B8B9D911CD33E057178DB74 (void);
// 0x000001CD System.Void Unity.Barracuda.BurstCPUOps/AsinJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AsinJob_set_O_m60CCEDBEE3724A17F75A59A7B352299EA92ECBC4 (void);
// 0x000001CE System.Void Unity.Barracuda.BurstCPUOps/AsinJob::Execute(System.Int32)
extern void AsinJob_Execute_m31CD035468B0BBA44E0D47B0D79A227BAF0B2195 (void);
// 0x000001CF Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AsinhJob::get_X()
extern void AsinhJob_get_X_m446F0300152A709722053F9406AE0648F4D8181E (void);
// 0x000001D0 System.Void Unity.Barracuda.BurstCPUOps/AsinhJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AsinhJob_set_X_mFACC3A9063BC15B6FD46F6287819AF7960246E59 (void);
// 0x000001D1 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AsinhJob::get_O()
extern void AsinhJob_get_O_m78B6DF783426B9345D2FE740C83C4F484334B3E1 (void);
// 0x000001D2 System.Void Unity.Barracuda.BurstCPUOps/AsinhJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AsinhJob_set_O_mEF7AF6B218E9D0AAAF53153D85027281A5470CF0 (void);
// 0x000001D3 System.Void Unity.Barracuda.BurstCPUOps/AsinhJob::Execute(System.Int32)
extern void AsinhJob_Execute_mE09A2A08C82704B6D6E30876E672219F1EAFB5E9 (void);
// 0x000001D4 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AtanJob::get_X()
extern void AtanJob_get_X_m569E122902DAB31F47EE0E71EFE79DB2C43A103B (void);
// 0x000001D5 System.Void Unity.Barracuda.BurstCPUOps/AtanJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AtanJob_set_X_mC19DFFA02AC14D40AD631179CE8E67CD185FFF42 (void);
// 0x000001D6 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AtanJob::get_O()
extern void AtanJob_get_O_m34E06A558A26C2678048821448F85B1D857FAC60 (void);
// 0x000001D7 System.Void Unity.Barracuda.BurstCPUOps/AtanJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AtanJob_set_O_m8387D0F47DC26B0479B222F99B2E47F9EF23319D (void);
// 0x000001D8 System.Void Unity.Barracuda.BurstCPUOps/AtanJob::Execute(System.Int32)
extern void AtanJob_Execute_mA8A5B0E790174C428C987DB2819E5D4D00350136 (void);
// 0x000001D9 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/AtanhJob::get_X()
extern void AtanhJob_get_X_mCEDBDDB5EA369A65C1E5AC0E8DC3F6711962CDDD (void);
// 0x000001DA System.Void Unity.Barracuda.BurstCPUOps/AtanhJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void AtanhJob_set_X_m8A990E803D95DF351B0EBA31873EBA260E717313 (void);
// 0x000001DB Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/AtanhJob::get_O()
extern void AtanhJob_get_O_mD7E5A6C0D8D80EAAC77F7617CDAD4891F61BCE64 (void);
// 0x000001DC System.Void Unity.Barracuda.BurstCPUOps/AtanhJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void AtanhJob_set_O_m90CD06BA94D9AB200BBB532332439FF44A2545F2 (void);
// 0x000001DD System.Void Unity.Barracuda.BurstCPUOps/AtanhJob::Execute(System.Int32)
extern void AtanhJob_Execute_m3AF220A4BBF3D22E88444F1E8E9B1D6171965534 (void);
// 0x000001DE Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/CosJob::get_X()
extern void CosJob_get_X_mBFC90A36BDE341151B629D5152B4CF225C3855A0 (void);
// 0x000001DF System.Void Unity.Barracuda.BurstCPUOps/CosJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void CosJob_set_X_mF469CD1C84E5C0AA20D2DA154DE614596C3F1EEF (void);
// 0x000001E0 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/CosJob::get_O()
extern void CosJob_get_O_m916F32E35CF0271638569291DBDFA9D1D45C8B17 (void);
// 0x000001E1 System.Void Unity.Barracuda.BurstCPUOps/CosJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void CosJob_set_O_mA098E7C682CEA97FD2BEFC10CD99DC9679709294 (void);
// 0x000001E2 System.Void Unity.Barracuda.BurstCPUOps/CosJob::Execute(System.Int32)
extern void CosJob_Execute_m2F08411327FE7724D3BE5199B31DE47AF1C7F0DA (void);
// 0x000001E3 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/CoshJob::get_X()
extern void CoshJob_get_X_mF12DB1A1B16922AA3B3F062B18B922DCC93517C2 (void);
// 0x000001E4 System.Void Unity.Barracuda.BurstCPUOps/CoshJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void CoshJob_set_X_m4F3F31B1601412397557F04081EC37714E0034DB (void);
// 0x000001E5 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/CoshJob::get_O()
extern void CoshJob_get_O_m36D90B0DF04A6325BB2554863FF0659A46F009B5 (void);
// 0x000001E6 System.Void Unity.Barracuda.BurstCPUOps/CoshJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void CoshJob_set_O_m060A830FF6B7EAE86F0AA8F71996C380A308574A (void);
// 0x000001E7 System.Void Unity.Barracuda.BurstCPUOps/CoshJob::Execute(System.Int32)
extern void CoshJob_Execute_m02E60B2C5493C00CEBB37296D09D122F90CD8EAB (void);
// 0x000001E8 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SinJob::get_X()
extern void SinJob_get_X_mB7893AAC3A1A0134D7E496408377346B4D78D17B (void);
// 0x000001E9 System.Void Unity.Barracuda.BurstCPUOps/SinJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SinJob_set_X_mA9FD9F54D72F90D8FA2AB5824CBF04A57D6A8983 (void);
// 0x000001EA Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SinJob::get_O()
extern void SinJob_get_O_m8F23A4DA3473322D82A71E4AE941FEFDB7C3E412 (void);
// 0x000001EB System.Void Unity.Barracuda.BurstCPUOps/SinJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SinJob_set_O_mCDDD97F88466357636FEF925B354D2C0D88BCB77 (void);
// 0x000001EC System.Void Unity.Barracuda.BurstCPUOps/SinJob::Execute(System.Int32)
extern void SinJob_Execute_m71964BC65C5920C5FA97EC0108558DC528B6C744 (void);
// 0x000001ED Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/SinhJob::get_X()
extern void SinhJob_get_X_mF75DC100E0A0F57DCE4A8FB4E8BFB95767B7D251 (void);
// 0x000001EE System.Void Unity.Barracuda.BurstCPUOps/SinhJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void SinhJob_set_X_m65E3EE42078289D65833ADDC705582ECE43A254F (void);
// 0x000001EF Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SinhJob::get_O()
extern void SinhJob_get_O_mADEE98AF883D70C72ABA10BA1F08E450D314A953 (void);
// 0x000001F0 System.Void Unity.Barracuda.BurstCPUOps/SinhJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SinhJob_set_O_mD5F969DA6086CF5B483AF05F99BC2CEC9450E2BF (void);
// 0x000001F1 System.Void Unity.Barracuda.BurstCPUOps/SinhJob::Execute(System.Int32)
extern void SinhJob_Execute_m2CECED4DC6D99D70E65730093F407CD2710C7F50 (void);
// 0x000001F2 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/TanJob::get_X()
extern void TanJob_get_X_m08EAB669B71BF45E36F36D6F3AA495B2FDA5928C (void);
// 0x000001F3 System.Void Unity.Barracuda.BurstCPUOps/TanJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void TanJob_set_X_mE792C3DC72801925F297475E09E42DA864DCAAD3 (void);
// 0x000001F4 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/TanJob::get_O()
extern void TanJob_get_O_m9834484B10830585CF5F44A3289D7FE39F3C94F3 (void);
// 0x000001F5 System.Void Unity.Barracuda.BurstCPUOps/TanJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void TanJob_set_O_m276CE9DFAAC2CB7E967F47AA4FA21F71545CE2AE (void);
// 0x000001F6 System.Void Unity.Barracuda.BurstCPUOps/TanJob::Execute(System.Int32)
extern void TanJob_Execute_mBDA81B0D2C0F6ECF9C6A1A1C8B00CBD7C019C018 (void);
// 0x000001F7 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::get_X()
extern void ElementwiseAddJob_get_X_mA3ED14F38734359A8014F8058C951FBE6B4B15D1 (void);
// 0x000001F8 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseAddJob_set_X_m25F7F20743523F8EFD968BA649A53BD43813DBDA (void);
// 0x000001F9 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::get_B()
extern void ElementwiseAddJob_get_B_mAAAED3F2E340683A24E4AB7377BA20423C5C509B (void);
// 0x000001FA System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseAddJob_set_B_mD43C6A86C90E394B8C835520C84840DC4FCACE1E (void);
// 0x000001FB Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::get_O()
extern void ElementwiseAddJob_get_O_mBD67B0E5EAAEE85C8592961668EDBC7DCE0A248C (void);
// 0x000001FC System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwiseAddJob_set_O_mD99F855B00311908474D5754D184C10B0A67E02F (void);
// 0x000001FD System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::Execute(System.Int32)
extern void ElementwiseAddJob_Execute_m39D1A15119B46A924F0AEE95E53525365D0128DC (void);
// 0x000001FE Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::get_X()
extern void ElementwiseMulJob_get_X_m38EB29960584BD596AC4E45F862113FAB4E90655 (void);
// 0x000001FF System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMulJob_set_X_m93715CF41E1E74BF4B4F76CA0D984856733553D0 (void);
// 0x00000200 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::get_B()
extern void ElementwiseMulJob_get_B_m5A53FE0C65B23D9567466B04BF3674F1B0109804 (void);
// 0x00000201 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMulJob_set_B_m18116CEC2FC8E19A4D8D164020D81C8753C608A9 (void);
// 0x00000202 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::get_O()
extern void ElementwiseMulJob_get_O_m170D33EC5893BFB584D37982B03DFDDA8DBA9D32 (void);
// 0x00000203 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwiseMulJob_set_O_mFF6F6B70C0F54D8DABC151C745C3D8B181E12624 (void);
// 0x00000204 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::Execute(System.Int32)
extern void ElementwiseMulJob_Execute_mE878B9908E76DCEF78F2F4B12B8D378EA7CD5E84 (void);
// 0x00000205 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::get_X()
extern void ElementwiseDivJob_get_X_mD1A5351B0C68B0D522D35A84B17C1893F14B80C6 (void);
// 0x00000206 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseDivJob_set_X_mC3853D87F76D9F0F0A2B1ED46170CDCB5DC4FE0C (void);
// 0x00000207 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::get_B()
extern void ElementwiseDivJob_get_B_m73740B6B35D1A44C90DE3EA407BC7A75CF78A3BA (void);
// 0x00000208 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseDivJob_set_B_mF51F080B0BCE1BD0AB6BDE2F88CBFBA0B4100EAC (void);
// 0x00000209 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::get_O()
extern void ElementwiseDivJob_get_O_m47BDA0819BBADE1890A2CD034F340F0DE4B71A55 (void);
// 0x0000020A System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwiseDivJob_set_O_mF83FA23A95CA00CBC56F56605285FD39978F4E65 (void);
// 0x0000020B System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::Execute(System.Int32)
extern void ElementwiseDivJob_Execute_mE84A527765E4E129DB9914B9155968FD755625A5 (void);
// 0x0000020C Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwisePowJob::get_X()
extern void ElementwisePowJob_get_X_m07FE079B4926C4F271D4408E88AB519819AC516A (void);
// 0x0000020D System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwisePowJob_set_X_m87E634406CB8AC2A3476216FA726C063B82203F8 (void);
// 0x0000020E Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwisePowJob::get_B()
extern void ElementwisePowJob_get_B_m644F0686960DDAEC772ADFDBD66218E466CC0206 (void);
// 0x0000020F System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwisePowJob_set_B_mEAAD5540D4827F4B1AD14F527D24BBC9DB0C361B (void);
// 0x00000210 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwisePowJob::get_O()
extern void ElementwisePowJob_get_O_mAC08853A9B5D87EEE51CC55758ED940016940065 (void);
// 0x00000211 System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwisePowJob_set_O_mB258341F8190FD68345D6ADE974BAC6660E48913 (void);
// 0x00000212 System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::Execute(System.Int32)
extern void ElementwisePowJob_Execute_mF1CC6859CE7AA501A1F809BCC0100BB6B71DB2EA (void);
// 0x00000213 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::get_X()
extern void ElementwiseMaxJob_get_X_mF57E05C251E90F97E40A3AE9871698D92708CC91 (void);
// 0x00000214 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMaxJob_set_X_mF3AC913E2F1158D0D59521353680D5C712103FC5 (void);
// 0x00000215 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::get_B()
extern void ElementwiseMaxJob_get_B_m763E07BD9C15090160808A0FB6BDBF9F296DE3F4 (void);
// 0x00000216 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMaxJob_set_B_m58E7268BF82B4F65467312FAAF49F99C5A53C511 (void);
// 0x00000217 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::get_O()
extern void ElementwiseMaxJob_get_O_m2DF9A02058483619E5A0C7C289FF18FC275EFD4B (void);
// 0x00000218 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwiseMaxJob_set_O_mC7B8496B4F23BDF5CE6DF34C4BFB138F7CE4483D (void);
// 0x00000219 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::Execute(System.Int32)
extern void ElementwiseMaxJob_Execute_m74F7F0E6ECFAC9AB44E6C52174D4D3045F579457 (void);
// 0x0000021A Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::get_X()
extern void ElementwiseMinJob_get_X_m131A79A6F386A12D3BE4C6202C1533843263FE75 (void);
// 0x0000021B System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMinJob_set_X_mADAB55E0E82AB17872DFB86EE4D7B481512600FB (void);
// 0x0000021C Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::get_B()
extern void ElementwiseMinJob_get_B_mDF4881B23237B3276F21DC7D02313504EEBE3FDA (void);
// 0x0000021D System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ElementwiseMinJob_set_B_mDCC01207483AC5C42F83EDF6A5041BC21DB98863 (void);
// 0x0000021E Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::get_O()
extern void ElementwiseMinJob_get_O_m51926A897B31A72E0545120BD9F65531D62E3E28 (void);
// 0x0000021F System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ElementwiseMinJob_set_O_mD09F35ABFB5E1152104B5CC0B77846CCB2E668D4 (void);
// 0x00000220 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::Execute(System.Int32)
extern void ElementwiseMinJob_Execute_m8F1AD69702EBDBBA2DBBC40F763AD6EB6F26D40E (void);
// 0x00000221 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SetConstantPaddingJob::get_O()
extern void SetConstantPaddingJob_get_O_m429F04D1565369DC8A92C56A8A3F7BDF8E160793 (void);
// 0x00000222 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SetConstantPaddingJob_set_O_mB2728CACA980C9317197F59C8F7D583C4F94AB60 (void);
// 0x00000223 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingJob::Execute(System.Int32)
extern void SetConstantPaddingJob_Execute_m33D4842DB0ECD839739915A70277EBB7D479B67D (void);
// 0x00000224 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/SetConstantPaddingWithStrideJob::get_O()
extern void SetConstantPaddingWithStrideJob_get_O_m9D04B58FB922492F5CFA0F081466DA4C11FB67A8 (void);
// 0x00000225 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingWithStrideJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void SetConstantPaddingWithStrideJob_set_O_m73C46E89A0A7C9E15D20A941855C84CA67572A1F (void);
// 0x00000226 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingWithStrideJob::Execute(System.Int32)
extern void SetConstantPaddingWithStrideJob_Execute_mF8FF2F177682E73208A18B28DD9359D11197E3FF (void);
// 0x00000227 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ZeroBroadcastJob::get_O()
extern void ZeroBroadcastJob_get_O_m80EBF053EEF3510467D32A981FBD5B6A1FBDAF02 (void);
// 0x00000228 System.Void Unity.Barracuda.BurstCPUOps/ZeroBroadcastJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ZeroBroadcastJob_set_O_m9F254990E077C41C7E69C411E9F721CFA9054C4F (void);
// 0x00000229 System.Void Unity.Barracuda.BurstCPUOps/ZeroBroadcastJob::Execute()
extern void ZeroBroadcastJob_Execute_m2DC38B85112A1BB8B313C1AF7239284EC6CCF990 (void);
// 0x0000022A Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/CopyJob::get_X()
extern void CopyJob_get_X_mAF0CF362316C875D50B6BECF1274D628A179CC7C (void);
// 0x0000022B System.Void Unity.Barracuda.BurstCPUOps/CopyJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void CopyJob_set_X_m53604813C91ECEC681DBACFC67D026C7A51C5A58 (void);
// 0x0000022C Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/CopyJob::get_O()
extern void CopyJob_get_O_m3A5FE4E7678815BB9489726FD2C4201B547BFA04 (void);
// 0x0000022D System.Void Unity.Barracuda.BurstCPUOps/CopyJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void CopyJob_set_O_m2260259E5BAF0F04604C4B5271BE47CF793B1E49 (void);
// 0x0000022E System.Void Unity.Barracuda.BurstCPUOps/CopyJob::Execute()
extern void CopyJob_Execute_mE5D45E422768502C8AE6B8EF2ECFD01B1DEEDE41 (void);
// 0x0000022F Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/CopyStrideJob::get_X()
extern void CopyStrideJob_get_X_m91FFE7411E433397342D1B48B198D64C11A8DEF1 (void);
// 0x00000230 System.Void Unity.Barracuda.BurstCPUOps/CopyStrideJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void CopyStrideJob_set_X_m64A7A3CADB3D27324C8BF86FBDE2E029112A9B00 (void);
// 0x00000231 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/CopyStrideJob::get_O()
extern void CopyStrideJob_get_O_mEA69CDEB88293AFEFA7427EACAD5CB8AC72EC2D9 (void);
// 0x00000232 System.Void Unity.Barracuda.BurstCPUOps/CopyStrideJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void CopyStrideJob_set_O_m25EAEE33D79111B55485D8621E320CF95CC5A9CD (void);
// 0x00000233 System.Void Unity.Barracuda.BurstCPUOps/CopyStrideJob::Execute()
extern void CopyStrideJob_Execute_m7C1642B0EA7FD5D1BDE18ABDD14E51C210A91C16 (void);
// 0x00000234 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::get_X()
extern void VectorBroadcastJob_get_X_mF9DC27A72B485BA01A3424EEE12625BC6E182876 (void);
// 0x00000235 System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void VectorBroadcastJob_set_X_mF1445A332850A939C8B09B0C22ECEFABFA7490F0 (void);
// 0x00000236 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::get_O()
extern void VectorBroadcastJob_get_O_m6D2793416B631B08FD69725B1C79353CE3CFDC84 (void);
// 0x00000237 System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void VectorBroadcastJob_set_O_m9C59763E7A1A9BA294F16DC6C49158A8B8F9608B (void);
// 0x00000238 System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::Execute()
extern void VectorBroadcastJob_Execute_mBEA427E04083C3455BE3BA1C30A74A37156F09F7 (void);
// 0x00000239 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/GenericSliceJob::get_X()
extern void GenericSliceJob_get_X_m5B6357955D9464D6F9E410A3406EAD15A1984842 (void);
// 0x0000023A System.Void Unity.Barracuda.BurstCPUOps/GenericSliceJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void GenericSliceJob_set_X_mF540A2162A178735356F1290EFDF6735C7C8B1F3 (void);
// 0x0000023B Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/GenericSliceJob::get_O()
extern void GenericSliceJob_get_O_m2405E6CB4FAE2FA6FBA34B54C4523E9915B7631F (void);
// 0x0000023C System.Void Unity.Barracuda.BurstCPUOps/GenericSliceJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void GenericSliceJob_set_O_mAAC9631DDB4E95D7804960F152B6CC6C7E87F427 (void);
// 0x0000023D System.Void Unity.Barracuda.BurstCPUOps/GenericSliceJob::Execute(System.Int32)
extern void GenericSliceJob_Execute_mFF288119AA381D66E3090E247FB624FD64F73695 (void);
// 0x0000023E Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::get_X()
extern void GenericStridedSliceJob_get_X_m5B90A58F10A3B7C0299B529518FFE9025F7420F7 (void);
// 0x0000023F System.Void Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void GenericStridedSliceJob_set_X_mF47DEF41B16E85C7014B31C12D620945E6EFCA11 (void);
// 0x00000240 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::get_O()
extern void GenericStridedSliceJob_get_O_m9C4F012528B5162983A95C7E91F1FE433F5E1EE4 (void);
// 0x00000241 System.Void Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void GenericStridedSliceJob_set_O_mA45196365935D13F7A8247F17C449A8A412EAB74 (void);
// 0x00000242 System.Void Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::Execute(System.Int32)
extern void GenericStridedSliceJob_Execute_m6A9B66FA12AFD524DEE71F4D6EA4B33E674CCFF2 (void);
// 0x00000243 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::get_X()
extern void ScalarBroadcastAddJob_get_X_mD58E9E286DF48B6454B6D613FB340DE492CD4CCB (void);
// 0x00000244 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastAddJob_set_X_m076617C3853DBAA189342E34A1FD521CD5E356CC (void);
// 0x00000245 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::get_B()
extern void ScalarBroadcastAddJob_get_B_m1117AC67E085E2449D7CF0AD2E50149605F3594D (void);
// 0x00000246 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastAddJob_set_B_m43157B3EE4D33AC766D9AAC4614B738DC6DD96CA (void);
// 0x00000247 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::get_O()
extern void ScalarBroadcastAddJob_get_O_mEF38A4F067FCF4112A062CF9032396C2992644B1 (void);
// 0x00000248 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastAddJob_set_O_m8CEBBB7FA55802CB79C7EAAE8C3C6A677FDBC5BA (void);
// 0x00000249 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::Execute(System.Int32)
extern void ScalarBroadcastAddJob_Execute_mEFF1D419F09B956F01013F8D09C4676EFE2C63D5 (void);
// 0x0000024A Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastAddJob::get_X()
extern void BroadcastAddJob_get_X_mBD62E8AD2B85859D5B0EB29175E56297861C15E2 (void);
// 0x0000024B System.Void Unity.Barracuda.BurstCPUOps/BroadcastAddJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastAddJob_set_X_m3ED27D8C6F31C4743CD43C2F83471F36762BF264 (void);
// 0x0000024C Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastAddJob::get_B()
extern void BroadcastAddJob_get_B_m61EB097DBF53E606DC3289016864803CF6670F6D (void);
// 0x0000024D System.Void Unity.Barracuda.BurstCPUOps/BroadcastAddJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastAddJob_set_B_m69F9770C14E20E62929715FF274528D97F596ABF (void);
// 0x0000024E Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastAddJob::get_O()
extern void BroadcastAddJob_get_O_m3352D0A992F5BA575A6E5A8673C9944864D51B4D (void);
// 0x0000024F System.Void Unity.Barracuda.BurstCPUOps/BroadcastAddJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastAddJob_set_O_m765A60D1F512088319C9A7F550987D3BC792AC54 (void);
// 0x00000250 System.Void Unity.Barracuda.BurstCPUOps/BroadcastAddJob::Execute(System.Int32)
extern void BroadcastAddJob_Execute_m79A6322A7FCC5F1487F933FC9F34CF152D66D576 (void);
// 0x00000251 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::get_X()
extern void ScalarBroadcastMulJob_get_X_m18C0B739A174A142390499A01E5D94D12F4639D0 (void);
// 0x00000252 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMulJob_set_X_m08FA50A843FDD9938BB4AB3DB16F0C505DA025A2 (void);
// 0x00000253 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::get_B()
extern void ScalarBroadcastMulJob_get_B_m973C3DE7E731BB5CC18637BD56B2FCE9DC72441B (void);
// 0x00000254 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMulJob_set_B_m2C713932F9647D16E8D34F744F1D3F5C3030BAF2 (void);
// 0x00000255 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::get_O()
extern void ScalarBroadcastMulJob_get_O_mF770FCF169D1C43BA2C97A349BFBD7588384A1F6 (void);
// 0x00000256 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastMulJob_set_O_m022B0A7FD1E26B6B83F2A4EBFE3E7791C1135203 (void);
// 0x00000257 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::Execute(System.Int32)
extern void ScalarBroadcastMulJob_Execute_mF6BF0CF0E8814EEEB6347E3E013FE03AA68D185C (void);
// 0x00000258 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMulJob::get_X()
extern void BroadcastMulJob_get_X_m998CB30985610131DD486928CF468C97AEDFAF74 (void);
// 0x00000259 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMulJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMulJob_set_X_mFF8163331F04D07CC4EA7D2A5257380FF69DEF70 (void);
// 0x0000025A Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMulJob::get_B()
extern void BroadcastMulJob_get_B_m4AA74760888C99069C9E2EBAFCE26C3603F3E94A (void);
// 0x0000025B System.Void Unity.Barracuda.BurstCPUOps/BroadcastMulJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMulJob_set_B_mCA1A3DE666AEFB76540FDC848B26BB17353630A1 (void);
// 0x0000025C Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastMulJob::get_O()
extern void BroadcastMulJob_get_O_mEE4F75350BC325A236D25F8EF4EABC08C8AF1BD2 (void);
// 0x0000025D System.Void Unity.Barracuda.BurstCPUOps/BroadcastMulJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastMulJob_set_O_mBA34D31B8083CEF02CA9C120908AEB15FC3C15DA (void);
// 0x0000025E System.Void Unity.Barracuda.BurstCPUOps/BroadcastMulJob::Execute(System.Int32)
extern void BroadcastMulJob_Execute_mA396102B2E230E228B9C8363BD5B4C4D1684B7CF (void);
// 0x0000025F Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::get_X()
extern void ScalarBroadcastDivJob_get_X_m7A172C4BE7E7D85D911E8733E43485AB938C29D3 (void);
// 0x00000260 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastDivJob_set_X_mA9EEADA68FB442D2F6CB8FA5AB9EA5252B9706B5 (void);
// 0x00000261 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::get_B()
extern void ScalarBroadcastDivJob_get_B_mEB3F293C6FF054633854E7B2D77BA9688F75C7B3 (void);
// 0x00000262 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastDivJob_set_B_mF04E312761DDC01FEF04C57505EF4D194AD4F7A1 (void);
// 0x00000263 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::get_O()
extern void ScalarBroadcastDivJob_get_O_mDCFE76686C3014D753AC025F205C037131B5577D (void);
// 0x00000264 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastDivJob_set_O_mFC6E02E6D134E79157AF525D8B4EA5D8738C56DF (void);
// 0x00000265 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::Execute(System.Int32)
extern void ScalarBroadcastDivJob_Execute_m9A81C0E882C04BBE211BD77B01982B90887359B8 (void);
// 0x00000266 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastDivJob::get_X()
extern void BroadcastDivJob_get_X_m0526B8C0790EA82FB9AD603824B9AA39BD1F8729 (void);
// 0x00000267 System.Void Unity.Barracuda.BurstCPUOps/BroadcastDivJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastDivJob_set_X_mB288A0C09C0B871CE0A4BC6A21BB2677A4ADA69C (void);
// 0x00000268 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastDivJob::get_B()
extern void BroadcastDivJob_get_B_m4D8E810B8C10E0440B176FD1F673E4131B814D2C (void);
// 0x00000269 System.Void Unity.Barracuda.BurstCPUOps/BroadcastDivJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastDivJob_set_B_m6F8C8A08608CCF5120797B8B829AA5525CEECE6B (void);
// 0x0000026A Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastDivJob::get_O()
extern void BroadcastDivJob_get_O_m6D86E3FBF5515C14B41B0A0FA200877CDC4481C3 (void);
// 0x0000026B System.Void Unity.Barracuda.BurstCPUOps/BroadcastDivJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastDivJob_set_O_m7A36DD3A4E14F2DEF4D538397DCA6440B474CD5C (void);
// 0x0000026C System.Void Unity.Barracuda.BurstCPUOps/BroadcastDivJob::Execute(System.Int32)
extern void BroadcastDivJob_Execute_m3120C9A5CAFA7A30C9E0F196DE4D8C189CB9C71E (void);
// 0x0000026D Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::get_X()
extern void ScalarBroadcastMinJob_get_X_mB19B1E24DC55758DD93EA97E03CB9C375969ADCF (void);
// 0x0000026E System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMinJob_set_X_m5F319B3C5371B9E58BB2781AC8CE0C5FD3AE64E3 (void);
// 0x0000026F Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::get_B()
extern void ScalarBroadcastMinJob_get_B_mB2B5B5F57F269AF688549089E4D8E65F4D0F7FAB (void);
// 0x00000270 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMinJob_set_B_m9DA46F4F3420FCA502759917FF1AD06E1348D2FF (void);
// 0x00000271 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::get_O()
extern void ScalarBroadcastMinJob_get_O_mBC7145899540B3B59B3F92E71B686E92533E5256 (void);
// 0x00000272 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastMinJob_set_O_m41CDC3253296D228EF4D9E70B4551485E95EC0B6 (void);
// 0x00000273 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::Execute(System.Int32)
extern void ScalarBroadcastMinJob_Execute_m75C7D352E453A5956BE221BFE6E61D9E2E3D1AB6 (void);
// 0x00000274 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMinJob::get_X()
extern void BroadcastMinJob_get_X_m8F14C267F098E7B057F8F2242C82BE3E7F075CB8 (void);
// 0x00000275 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMinJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMinJob_set_X_m2DD1C9518BA11ECD26BB7E8137B89A9258A9EEA3 (void);
// 0x00000276 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMinJob::get_B()
extern void BroadcastMinJob_get_B_m1C7414699137AF2757DE983B800529F11A206A66 (void);
// 0x00000277 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMinJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMinJob_set_B_m0165B16FBA886FF6963E86943E4CAC3630B88D57 (void);
// 0x00000278 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastMinJob::get_O()
extern void BroadcastMinJob_get_O_mB0F477D451AD7ED15F5C3598EBEB01349A562672 (void);
// 0x00000279 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMinJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastMinJob_set_O_mA87C3E074FA16B1027B19E3C004400F947849A14 (void);
// 0x0000027A System.Void Unity.Barracuda.BurstCPUOps/BroadcastMinJob::Execute(System.Int32)
extern void BroadcastMinJob_Execute_mFD53E52D3E85FB18C40529781A2A42F5D9D25259 (void);
// 0x0000027B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::get_X()
extern void ScalarBroadcastMaxJob_get_X_mB03897C83EE83CE9DAB0D6FBC546DFBD5A55FFD1 (void);
// 0x0000027C System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMaxJob_set_X_m4F573C2879E534F213DA462244C77DD3D6D3C216 (void);
// 0x0000027D Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::get_B()
extern void ScalarBroadcastMaxJob_get_B_mA55376A561C77FB7BB134642E11D62C1CACA375F (void);
// 0x0000027E System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastMaxJob_set_B_m5706991ADF7747F44E2CE05DD15433034BCEC726 (void);
// 0x0000027F Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::get_O()
extern void ScalarBroadcastMaxJob_get_O_m96CDE9415299DEA5527CFC6C7D3936504EFCB02C (void);
// 0x00000280 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastMaxJob_set_O_m99E542829357E2F576250B96B388958212E7A9C9 (void);
// 0x00000281 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::Execute(System.Int32)
extern void ScalarBroadcastMaxJob_Execute_mE2DD3C89473DF9151039A3FA00E7309F5881EF59 (void);
// 0x00000282 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::get_X()
extern void BroadcastMaxJob_get_X_mE112390CF4F39FC1F291210B6E3923153392AC07 (void);
// 0x00000283 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMaxJob_set_X_m30D3D86AE41BC6349675C0D2C5AE481B849B4202 (void);
// 0x00000284 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::get_B()
extern void BroadcastMaxJob_get_B_m19D290038F6E4C118C458071DA21FD922AF4906A (void);
// 0x00000285 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastMaxJob_set_B_m709F67C37BBF63E70F8FF9A469B0F54534482474 (void);
// 0x00000286 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::get_O()
extern void BroadcastMaxJob_get_O_m9DCE652D097AB49A43E3AB10641B40A383DA2151 (void);
// 0x00000287 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastMaxJob_set_O_m79EEBFF2F5E042E52B723AC02445060F6A513B8C (void);
// 0x00000288 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::Execute(System.Int32)
extern void BroadcastMaxJob_Execute_m8DC8118BD0928AFBF4EBF3681D140CDC4CCB1C49 (void);
// 0x00000289 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::get_X()
extern void ScalarBroadcastPowJob_get_X_mCF84D203329D36D2CBD681904B231DBFCB7E40B7 (void);
// 0x0000028A System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastPowJob_set_X_mB9687FA1B2DC82470D7FB3E761D3A9E0BA6229A5 (void);
// 0x0000028B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::get_B()
extern void ScalarBroadcastPowJob_get_B_m516FC85F7C33C3023A0673890785EFECFB580D58 (void);
// 0x0000028C System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ScalarBroadcastPowJob_set_B_m5592061D2944D7E9F6927654DE3651B678673DAD (void);
// 0x0000028D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::get_O()
extern void ScalarBroadcastPowJob_get_O_mA3301C69058A236A87E70BDF974386205296FDF6 (void);
// 0x0000028E System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ScalarBroadcastPowJob_set_O_m1A3EC363436323D838E4E8541E4DA5D89DC32FCC (void);
// 0x0000028F System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::Execute(System.Int32)
extern void ScalarBroadcastPowJob_Execute_m1425FE1C8EACEFAF29381D5954E0A6289F42806B (void);
// 0x00000290 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastPowJob::get_X()
extern void BroadcastPowJob_get_X_m4299B3817FC52B1771B13D4ED98535BCD0645FFD (void);
// 0x00000291 System.Void Unity.Barracuda.BurstCPUOps/BroadcastPowJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastPowJob_set_X_mC458A32F1F53DB21C706DDA994B704A4320ED929 (void);
// 0x00000292 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/BroadcastPowJob::get_B()
extern void BroadcastPowJob_get_B_m616860938F9BEC9B98D00C2B103F6798A13472F8 (void);
// 0x00000293 System.Void Unity.Barracuda.BurstCPUOps/BroadcastPowJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void BroadcastPowJob_set_B_m25E7CBF030B6E4BE9C25EDF94CFEC151FD237876 (void);
// 0x00000294 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/BroadcastPowJob::get_O()
extern void BroadcastPowJob_get_O_m44945A0C427DD8A33A2F4381757E2A297F8E91CB (void);
// 0x00000295 System.Void Unity.Barracuda.BurstCPUOps/BroadcastPowJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void BroadcastPowJob_set_O_mB5A149B4786E4E63092739AF7C09039B523160FA (void);
// 0x00000296 System.Void Unity.Barracuda.BurstCPUOps/BroadcastPowJob::Execute(System.Int32)
extern void BroadcastPowJob_Execute_m82DCAE15AB3ADABA699A15AC877C1874E537C6C1 (void);
// 0x00000297 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::get_X()
extern void VectorBroadcastScaleBiasJob_get_X_mA829BD7C72C706E4F956DA0AFDA112C7CC0D6FC7 (void);
// 0x00000298 System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void VectorBroadcastScaleBiasJob_set_X_m7A907D8DFFB30E84C9C685A17C168E7EFA3352EE (void);
// 0x00000299 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::get_S()
extern void VectorBroadcastScaleBiasJob_get_S_m5339A676E60DBA6C0DD221DFD43D8D0096CD8CB5 (void);
// 0x0000029A System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::set_S(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void VectorBroadcastScaleBiasJob_set_S_mEE2C7334652DCCD68C6882FD6233C130CEF130EC (void);
// 0x0000029B Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::get_B()
extern void VectorBroadcastScaleBiasJob_get_B_m72A956A5340C3DAA0DA3CA4A764B700244E65728 (void);
// 0x0000029C System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void VectorBroadcastScaleBiasJob_set_B_mC2CBA3703B8152885BA18779C880930DB0AAE959 (void);
// 0x0000029D Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::get_O()
extern void VectorBroadcastScaleBiasJob_get_O_m13514A94D5D7321746181E6B4EE21F0B09160D87 (void);
// 0x0000029E System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void VectorBroadcastScaleBiasJob_set_O_mB2BD6437DE1DFF4E25769F61056D517289D81877 (void);
// 0x0000029F System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::Execute(System.Int32)
extern void VectorBroadcastScaleBiasJob_Execute_m2FDD7613AAC8474DB673DA91D48441A16F0BE06E (void);
// 0x000002A0 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ReduceMeanJob::get_X()
extern void ReduceMeanJob_get_X_m51D97E42085FB008C04585967FD927013CFACEC0 (void);
// 0x000002A1 System.Void Unity.Barracuda.BurstCPUOps/ReduceMeanJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ReduceMeanJob_set_X_m8AC52D68FF0174342E5D56F68EC5115E62CF2D85 (void);
// 0x000002A2 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ReduceMeanJob::get_O()
extern void ReduceMeanJob_get_O_m6D63FA6E2B745C864BFD3441BD826E32B8CF593E (void);
// 0x000002A3 System.Void Unity.Barracuda.BurstCPUOps/ReduceMeanJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ReduceMeanJob_set_O_m1A40D330D18A9C54AA60B4E95B1169D5CD047340 (void);
// 0x000002A4 System.Void Unity.Barracuda.BurstCPUOps/ReduceMeanJob::Execute(System.Int32)
extern void ReduceMeanJob_Execute_m06FAE7BCA810265000C05F3A3169F6AABDA03235 (void);
// 0x000002A5 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ReduceSumJob::get_X()
extern void ReduceSumJob_get_X_m6A08B6988CE91BE87E95ABF4F5F121808D97B07A (void);
// 0x000002A6 System.Void Unity.Barracuda.BurstCPUOps/ReduceSumJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ReduceSumJob_set_X_mB0CD3EF7A8914F3D940765BB1F9037B403246CF5 (void);
// 0x000002A7 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ReduceSumJob::get_O()
extern void ReduceSumJob_get_O_mDB45B9BD51EAD5298C8963A75151B4CA53CB6272 (void);
// 0x000002A8 System.Void Unity.Barracuda.BurstCPUOps/ReduceSumJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ReduceSumJob_set_O_mE625F47397481E39519673AAC56F36E7CE9194F2 (void);
// 0x000002A9 System.Void Unity.Barracuda.BurstCPUOps/ReduceSumJob::Execute(System.Int32)
extern void ReduceSumJob_Execute_m74E8E0C0483D92C6F4D87DA862DB46A1A2E4E1AC (void);
// 0x000002AA Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/ReduceMaxJob::get_X()
extern void ReduceMaxJob_get_X_m3DE1CC24E37367C21E5929E4F410BE37DC0B2401 (void);
// 0x000002AB System.Void Unity.Barracuda.BurstCPUOps/ReduceMaxJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void ReduceMaxJob_set_X_mE141E7120DC547BE4004308652DC2E835E2BD6AA (void);
// 0x000002AC Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/ReduceMaxJob::get_O()
extern void ReduceMaxJob_get_O_m5FD264AD858D8C836BEEB4EF5A584B731614E5A9 (void);
// 0x000002AD System.Void Unity.Barracuda.BurstCPUOps/ReduceMaxJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void ReduceMaxJob_set_O_m390B17D26859FBCEAA87DD3B5D120967D0E547B8 (void);
// 0x000002AE System.Void Unity.Barracuda.BurstCPUOps/ReduceMaxJob::Execute(System.Int32)
extern void ReduceMaxJob_Execute_mE1CF797A3BE95745E8227A81CE87B6E491C0B47A (void);
// 0x000002AF Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/TransposeJob::get_X()
extern void TransposeJob_get_X_mDAD8E2AEA70EC0CB63D40296C74EA173E958CA92 (void);
// 0x000002B0 System.Void Unity.Barracuda.BurstCPUOps/TransposeJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void TransposeJob_set_X_mD4B5CB5FF6CD043B6C6DBEDE8E412E5B434DCC27 (void);
// 0x000002B1 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/TransposeJob::get_O()
extern void TransposeJob_get_O_m98BC8A0626FF1F4892718F80D49C33CE97DA7898 (void);
// 0x000002B2 System.Void Unity.Barracuda.BurstCPUOps/TransposeJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void TransposeJob_set_O_m23E3E64AD214B621127A76BDA7A33349BD5B6F51 (void);
// 0x000002B3 System.Void Unity.Barracuda.BurstCPUOps/TransposeJob::Execute(System.Int32)
extern void TransposeJob_Execute_m866E5BF20FE7805ECA170773B98F0E749A0751A5 (void);
// 0x000002B4 System.Void Unity.Barracuda.BurstCPUOps/MemFreeJob::Execute()
extern void MemFreeJob_Execute_mADCEFF2DB4C24909980D969765390987CD1A98E9 (void);
// 0x000002B5 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/TileJob::get_X()
extern void TileJob_get_X_m8607B859F66CB277330C9813562856569DCE755E (void);
// 0x000002B6 System.Void Unity.Barracuda.BurstCPUOps/TileJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void TileJob_set_X_mA5A69AE5895F84099E825453BBEAB4140F3E0066 (void);
// 0x000002B7 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/TileJob::get_O()
extern void TileJob_get_O_mBCB776311E84A2CE15E2CD2B9D8A0CFF67DFC18C (void);
// 0x000002B8 System.Void Unity.Barracuda.BurstCPUOps/TileJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void TileJob_set_O_m53BEC9C6A869FBB46DBE51F0F418497B2FA5FD56 (void);
// 0x000002B9 System.Void Unity.Barracuda.BurstCPUOps/TileJob::Execute(System.Int32)
extern void TileJob_Execute_m732B7A21E1562ED328FD532087DEAB6CC27A97C1 (void);
// 0x000002BA Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/GatherJob::get_X()
extern void GatherJob_get_X_m47E1B8F9D24248326C5187CA8C58DAA254075203 (void);
// 0x000002BB System.Void Unity.Barracuda.BurstCPUOps/GatherJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void GatherJob_set_X_m60B84789434A6E9A4E7C7EC9E90DE7356ED71CE9 (void);
// 0x000002BC Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/GatherJob::get_B()
extern void GatherJob_get_B_m30C768057FA0E66D117771ADBEF60CFE3F7FE799 (void);
// 0x000002BD System.Void Unity.Barracuda.BurstCPUOps/GatherJob::set_B(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void GatherJob_set_B_mC362DADDF299C2E8DA4704375DDB3C8BF6F37FD6 (void);
// 0x000002BE Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/GatherJob::get_O()
extern void GatherJob_get_O_m09FC304CC961BD1538655ECB1756DC274A91D9A4 (void);
// 0x000002BF System.Void Unity.Barracuda.BurstCPUOps/GatherJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void GatherJob_set_O_m31E6F0701BB4EFEA5372F3F29837F954E14D9850 (void);
// 0x000002C0 System.Void Unity.Barracuda.BurstCPUOps/GatherJob::Execute(System.Int32)
extern void GatherJob_Execute_m026DEF192E3ECAA07F39FD90AFAAD4E4AB460196 (void);
// 0x000002C1 Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource Unity.Barracuda.BurstCPUOps/OneHotJob::get_X()
extern void OneHotJob_get_X_m4EC184952989CBA6BD12E3FAF978272D1888281B (void);
// 0x000002C2 System.Void Unity.Barracuda.BurstCPUOps/OneHotJob::set_X(Unity.Barracuda.BurstCPUOps/ReadOnlyMemResource)
extern void OneHotJob_set_X_m31A0DFCFC2A1B2FC5D8B105C44F6BFA69A2D2879 (void);
// 0x000002C3 Unity.Barracuda.BurstCPUOps/ReadWriteMemResource Unity.Barracuda.BurstCPUOps/OneHotJob::get_O()
extern void OneHotJob_get_O_mF19094B05828B84E86952138DE97FFFABF02CCD7 (void);
// 0x000002C4 System.Void Unity.Barracuda.BurstCPUOps/OneHotJob::set_O(Unity.Barracuda.BurstCPUOps/ReadWriteMemResource)
extern void OneHotJob_set_O_m7A725AD6304F5D7F3D0D33974BF4403596171306 (void);
// 0x000002C5 System.Void Unity.Barracuda.BurstCPUOps/OneHotJob::Execute(System.Int32)
extern void OneHotJob_Execute_m0C9803DD526147F9EAB2DBD9A2AAFAC3A1D37B29 (void);
// 0x000002C6 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXSBOInternal(T,Unity.Jobs.JobHandle,System.Single*,System.Single*,System.Single*,System.Single*,System.Int32,System.Int32)
// 0x000002C7 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXBOInternal(T,Unity.Jobs.JobHandle,System.Single*,System.Single*,System.Single*,System.Int32,System.Int32)
// 0x000002C8 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXOInternal(T,Unity.Jobs.JobHandle,System.Single*,System.Single*,System.Int32,System.Int32)
// 0x000002C9 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXOInternal(T,Unity.Jobs.JobHandle,System.Single*,System.Single*)
// 0x000002CA Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleOInternal(T,Unity.Jobs.JobHandle,System.Single*)
// 0x000002CB Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleOInternal(T,Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32)
// 0x000002CC Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::GetFenceBeforeJobStartXSBO(Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_GetFenceBeforeJobStartXSBO_m228C1C32F3C6E1F84CA68F49747065A2F32F66C0 (void);
// 0x000002CD Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::GetFenceBeforeJobStartXBO(Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_GetFenceBeforeJobStartXBO_m137E99EC1E84E4F7DDD7307811E3E3D97ECCDE78 (void);
// 0x000002CE Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::GetFenceBeforeJobStartXO(Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_GetFenceBeforeJobStartXO_m624A770902D01307C2479B30F6E409C70C15155A (void);
// 0x000002CF System.Void Unity.Barracuda.BurstSchedulingHelper::SetXSBOFences(Unity.Jobs.JobHandle,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_SetXSBOFences_m2210B439F4117CAA9D7A0E3B4E705D12080D5C59 (void);
// 0x000002D0 System.Void Unity.Barracuda.BurstSchedulingHelper::SetXBOFences(Unity.Jobs.JobHandle,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_SetXBOFences_mFBC5B9E1BD908DEA188C742D905443BFF310830E (void);
// 0x000002D1 System.Void Unity.Barracuda.BurstSchedulingHelper::SetXOFences(Unity.Jobs.JobHandle,Unity.Barracuda.IDependableMemoryResource,Unity.Barracuda.IDependableMemoryResource)
extern void BurstSchedulingHelper_SetXOFences_m74AF4DFB20FCE0B9D9F8BE411489F70B14E786D3 (void);
// 0x000002D2 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXSBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D3 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXSBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D4 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D5 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.FencedMemoryAlloc,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D6 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXBO(T,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.FencedMemoryAlloc,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D7 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D8 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleO(T,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002D9 Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.BurstTensorData,System.Int32,Unity.Barracuda.BurstTensorData,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002DA Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002DB Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.FencedMemoryAlloc,Unity.Barracuda.FencedMemoryAlloc,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002DC Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002DD Unity.Jobs.JobHandle Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.FencedMemoryAlloc,System.Int32,System.Int32,Unity.Barracuda.BurstSchedulingHelper/FencingHelperMode)
// 0x000002DE System.Void Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x000002DF System.Void Unity.Barracuda.BurstSchedulingHelper::ScheduleXO(T,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x000002E0 System.Void Unity.Barracuda.BurstSchedulingHelper::ScheduleXBO(T,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x000002E1 System.Void Unity.Barracuda.BurstSchedulingHelper::ScheduleXSBO(T,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x000002E2 System.Void Unity.Barracuda.ParallelJobsContext::.ctor(Unity.Barracuda.IDependableMemoryResource)
extern void ParallelJobsContext__ctor_mEA527D17947603C9746F367A556E9985E25F588A (void);
// 0x000002E3 System.Void Unity.Barracuda.ParallelJobsContext::ScheduleO(T,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32,System.Int32)
// 0x000002E4 System.Void Unity.Barracuda.ParallelJobsContext::ScheduleXO(T,Unity.Barracuda.BurstTensorData,System.Int32,Unity.Barracuda.BurstTensorData,System.Int32)
// 0x000002E5 Unity.Jobs.JobHandle Unity.Barracuda.ParallelJobsContext::ScheduleXO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32)
// 0x000002E6 Unity.Jobs.JobHandle Unity.Barracuda.ParallelJobsContext::ScheduleXBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32)
// 0x000002E7 Unity.Jobs.JobHandle Unity.Barracuda.ParallelJobsContext::ScheduleXSBO(T,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,Unity.Barracuda.BurstTensorData,System.Int32,System.Int32)
// 0x000002E8 System.Void Unity.Barracuda.ParallelJobsContext::AddJobDependencyToOutputFence(Unity.Jobs.JobHandle)
extern void ParallelJobsContext_AddJobDependencyToOutputFence_mE5EA0F4A4303246CDAD44F69F58037DE1F8777D7 (void);
// 0x000002E9 System.Void Unity.Barracuda.ParallelJobsContext::TrackJobReadDependencies(Unity.Barracuda.IDependableMemoryResource,Unity.Jobs.JobHandle)
extern void ParallelJobsContext_TrackJobReadDependencies_m219583685F53BED9D1839003E5C30603B6116431 (void);
// 0x000002EA System.Void Unity.Barracuda.ParallelJobsContext::Dispose()
extern void ParallelJobsContext_Dispose_mBA9DB35702E5A5ADA5711469FCA3454D044FBA7E (void);
// 0x000002EB System.Void Unity.Barracuda.ParallelJobsContext::.cctor()
extern void ParallelJobsContext__cctor_m6BAD8A79A81D8F2F4F210F13E54C7DA761A88095 (void);
// 0x000002EC Unity.Jobs.JobHandle Unity.Barracuda.FencedMemoryAlloc::get_fence()
extern void FencedMemoryAlloc_get_fence_mB5F7DEA9F2C2DAD9B91D890BBF45A0EF76966AC7 (void);
// 0x000002ED System.Void Unity.Barracuda.FencedMemoryAlloc::set_fence(Unity.Jobs.JobHandle)
extern void FencedMemoryAlloc_set_fence_mB492C5B6161E5A5A89DF980E8DE9ED678C769C7A (void);
// 0x000002EE Unity.Jobs.JobHandle Unity.Barracuda.FencedMemoryAlloc::get_reuse()
extern void FencedMemoryAlloc_get_reuse_mAE7906B256F586392E08B363AEBEC88C6E104202 (void);
// 0x000002EF System.Void Unity.Barracuda.FencedMemoryAlloc::set_reuse(Unity.Jobs.JobHandle)
extern void FencedMemoryAlloc_set_reuse_m18EF2CE26AEDC159CC433EAF47570D657E8C923C (void);
// 0x000002F0 System.Void Unity.Barracuda.FencedMemoryAlloc::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
extern void FencedMemoryAlloc_Malloc_m4D73683DD0A788B85258ADDB1AE9A583B227C83D (void);
// 0x000002F1 System.Void Unity.Barracuda.FencedMemoryAlloc::ClearState()
extern void FencedMemoryAlloc_ClearState_m2305C33DE7D993DD31C9EDE63EEB5959B20546D3 (void);
// 0x000002F2 System.Void Unity.Barracuda.FencedMemoryAlloc::.ctor()
extern void FencedMemoryAlloc__ctor_m4FC153A1B98AB3741EA6D8D0FC7AB7028428874A (void);
// 0x000002F3 System.Void Unity.Barracuda.FencedMemoryAlloc::.ctor(System.Int64,System.Int32,Unity.Collections.Allocator)
extern void FencedMemoryAlloc__ctor_mCF6646205ED1CB4F3EAE1566196E4F305A4C01EC (void);
// 0x000002F4 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Dense(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeKernelLibrary_Dense_m285F2A250225EFC111C70E6A1ABE1D13DB78BABB (void);
// 0x000002F5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::MultidimMatMul(Unity.Barracuda.TensorShape,System.Int32,Unity.Barracuda.TensorShape,System.Int32,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_MultidimMatMul_m2EC635F794539AF77E1E5111A99471043536BFA3 (void);
// 0x000002F6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Dense3(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Dense3_mCA8D371D4328024701663CE0BD00E85CF25FC8A5 (void);
// 0x000002F7 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT8x8_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m45EDDBDB4D851E85E6B64A981734CE0A1432F05C (void);
// 0x000002F8 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT2x32_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mAF34251D5B6658328B3C71BA8E73D3AE5E61AA08 (void);
// 0x000002F9 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsWinograd16x16_R4x4KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m5679D0D6C003CF45BD81C7EBCC31BD60C05E23F3 (void);
// 0x000002FA System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv3D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv3D_m2B3D9286AAE8A5BF1DEEAE937D53B4C28538C276 (void);
// 0x000002FB System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv2D_mA95FB5CD08F5AA8B59E880BAB0A6798D46D98EF1 (void);
// 0x000002FC System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::DepthwiseConv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_DepthwiseConv2D_m0FA34628FC924A59BFCCEA97180410AA3AA31C04 (void);
// 0x000002FD System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2DTrans(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Conv2DTrans_mCA42FEC13825FB7C8F5225745E888C78FE543F47 (void);
// 0x000002FE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Activation(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Activation_mED1912B62E40242C05658C821462C1D83C3163C7 (void);
// 0x000002FF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PRelu(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_PRelu_m970F75DE1B936A37342B9FD15728005AAD3202E6 (void);
// 0x00000300 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Softmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Softmax_m3874A70E332D45D858FD2D678D0C4533203794E0 (void);
// 0x00000301 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::LogSoftmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_LogSoftmax_mA0667EB7E4CFDF2345F08830F8F6259E6A0FF2C3 (void);
// 0x00000302 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ScaleBias(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ScaleBias_m239DD800B263C5154AFBAEA1C3B87C6A7E5638E6 (void);
// 0x00000303 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Upsample2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Boolean)
extern void ComputeKernelLibrary_Upsample2D_m6903E67D5EC083F98AEE1AEE35EDDB523DD8D44B (void);
// 0x00000304 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2DReduce(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2DReduce_m971F12E38E23C3B78B235E2271D5B4935B9EAD04 (void);
// 0x00000305 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2D_m0E276C4E7031E3C33824744EC13E98DE42E3EF5F (void);
// 0x00000306 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PoolAvgVar2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_PoolAvgVar2D_mA788B9BD0BA8EB693003B88CF5A41015C3F079A1 (void);
// 0x00000307 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalPool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_GlobalPool2D_m34561F01AE4A02FD65468758415F0410DAADE0CF (void);
// 0x00000308 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PartialReduce(Unity.Barracuda.Layer/Type,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_PartialReduce_m3ADF03E78085670122A747E3D7640B76E94D039E (void);
// 0x00000309 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalReduce(Unity.Barracuda.Layer/Type,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_GlobalReduce_m5D10414E6B2ED0A0127EF2FCB6B5B145B8AC4845 (void);
// 0x0000030A System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::NormalizationTail(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_NormalizationTail_mBD852A9CEFEEAC16BE3CE3F846E0E65F15DA1312 (void);
// 0x0000030B System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Copy(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Copy_mC58BCEFAA5EF96148A3C45EFE5A488DAFEAD9109 (void);
// 0x0000030C System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::TransposeToChannelFirst(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_TransposeToChannelFirst_m9E33058A84D72E51189513BB317747DCF7E6B846 (void);
// 0x0000030D System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Transpose(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Transpose_mCF4C49AC28BDA7D611CC1EB04A2EF21E4DA6A5D0 (void);
// 0x0000030E System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Transpose8D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void ComputeKernelLibrary_Transpose8D_mEA7911B571CF8CB6AD908F1F3D21ECFB02E3AF70 (void);
// 0x0000030F System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Transpose2D(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Transpose2D_mA0A6A97160267502F9A6C4A2ACBF327F7AC2A533 (void);
// 0x00000310 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ReshapeFromNHWCModel(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ReshapeFromNHWCModel_m220CC1418233EF8DA653D95D1D2E987F4F27101B (void);
// 0x00000311 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Padding(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Padding_mFE7B6D2EA4BD8D738231CE8AFEB970033429C0EC (void);
// 0x00000312 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Broadcast(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Broadcast_mB36F0B3D765838B16932A6F51FA5E289CC820637 (void);
// 0x00000313 System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernelLibrary::Int3(System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_Int3_m7CE10529DA6A1FCA40D4EE06A4E3EFBA83F0B80C (void);
// 0x00000314 System.Single Unity.Barracuda.ComputeKernelLibrary::BigO(System.Int32)
extern void ComputeKernelLibrary_BigO_m0A0F78C58A903CE77460BA17BB2BEF69209BF3A6 (void);
// 0x00000315 Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::StrictAnd(System.Boolean)
extern void ComputeKernelLibrary_StrictAnd_mA55820840E492FE3884F84F19D85658784E88CAC (void);
// 0x00000316 Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::Strict()
extern void ComputeKernelLibrary_Strict_m1B69FE36CE898CB1F6C0CB00346A2820CB5258DB (void);
// 0x00000317 System.Void Unity.Barracuda.ComputeKernelLibrary::.ctor()
extern void ComputeKernelLibrary__ctor_mBE52A7506053A9945980170293C89779DF72896D (void);
// 0x00000318 System.Void Unity.Barracuda.ComputeKernelLibrary::.cctor()
extern void ComputeKernelLibrary__cctor_m44D05893DB8EAD56FBAC7FA73F3E0E91B06F27AF (void);
// 0x00000319 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.Boolean,System.Boolean)
extern void Entry__ctor_m62B7545FB61CD780AF3F02D85797BEE5DEDC4502 (void);
// 0x0000031A System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.UInt32)
extern void Entry__ctor_m49A1371632874C2899989C9A17CEB2DCDF027962 (void);
// 0x0000031B System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions)
extern void Entry__ctor_m99C084E6E8D6005F9458BC70AE082358B894FB10 (void);
// 0x0000031C System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions,System.Boolean)
extern void Entry__ctor_m3298497CCE5943296FC81FA2FB92F2E6C913D657 (void);
// 0x0000031D UnityEngine.ComputeShader Unity.Barracuda.ComputeKernel::get_shader()
extern void ComputeKernel_get_shader_m4F6DA0414CBF03894C8C58310A4CF1989E3A9EDC (void);
// 0x0000031E System.Void Unity.Barracuda.ComputeKernel::.ctor(Unity.Barracuda.ComputeFunc,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeKernel__ctor_m5A375BA00D1E51ED9C45212012758212653F353E (void);
// 0x0000031F System.Void Unity.Barracuda.ComputeKernel::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_mCA21BACFD13D5ADCC9B98753237A8B8A9B1F1122 (void);
// 0x00000320 System.Void Unity.Barracuda.ComputeKernel::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m901E8388023E712D9AD800554656EF77C8F5C10D (void);
// 0x00000321 System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_mCFEB0E982CAD745E23F7290BB22A826CF8B0075B (void);
// 0x00000322 System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m4F85E8C759DAB1E48108A29900F3FA26CD326ED9 (void);
// 0x00000323 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m27EE4FC4C17D38B95BBA1418BD71DF83AC9112EB (void);
// 0x00000324 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m445651305CBCA0E484D2E5420FB984ABCE897F7B (void);
// 0x00000325 System.Void Unity.Barracuda.ComputeKernel::Dispatch()
extern void ComputeKernel_Dispatch_m0D1A205E955511500B5A6AA581EAE917511553BE (void);
// 0x00000326 System.Int64 Unity.Barracuda.ComputeKernel::CalculateEntryScore(Unity.Barracuda.ComputeShaderContext,Unity.Barracuda.ComputeKernelLibrary/Entry,System.Boolean)
extern void ComputeKernel_CalculateEntryScore_m7CF018F9D16ED2F7658F27E6F5553C3E5A84E7FE (void);
// 0x00000327 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeKernel::BestKernel(Unity.Barracuda.ComputeShaderContext,System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>,System.Boolean)
extern void ComputeKernel_BestKernel_m663F14E029177854FAB7AF5B1709F533E676CE54 (void);
// 0x00000328 System.Void Unity.Barracuda.ComputeOps::.ctor(Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void ComputeOps__ctor_mFF740E1BB62FCF0434618D146D5154AB29C110CA (void);
// 0x00000329 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::BestKernel(System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>)
extern void ComputeOps_BestKernel_m3702144A8DE965CF914C05DD279DD41913E3EB63 (void);
// 0x0000032A Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::CompileKernel(Unity.Barracuda.ComputeKernelLibrary/Entry)
extern void ComputeOps_CompileKernel_m1127ADB0847E0C5517EFC2171148D92EBF8B66C6 (void);
// 0x0000032B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_MatMul_m00D03CF52997183DE44BC332193C0A13496AC19B (void);
// 0x0000032C Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_MatMul_m4C75A5581582836DCB538E058B4812916B79E098 (void);
// 0x0000032D Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_Dense3_mF26B40263E6D3CEFF319ED647B0B2CF1C5706A92 (void);
// 0x0000032E Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Dense_mFF2861D454DDA25570B82CAEFBD08B9217BBB852 (void);
// 0x0000032F Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.ComputeKernel)
extern void ComputeOps_Conv2DWinograd_mC5B048799C604EFEEAEB8C0AF0A4C27043B642E1 (void);
// 0x00000330 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv3D_m508B6CC8F34FEB76ED05593CF9553DA81EDDFD23 (void);
// 0x00000331 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2D_mEEDB8DC32DE7B2C401CBB742602DDA1BF84F9CEB (void);
// 0x00000332 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_DepthwiseConv2D_mDB8785938B92100E4F313F53B2E5502B3B779E55 (void);
// 0x00000333 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2DTrans_m2A12BC80BC91ED6E01F9758C4F2B9188F345C5F4 (void);
// 0x00000334 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ComputeOps_Upsample2D_m1AB629094D553D0B02A3A1B823290E86AE480379 (void);
// 0x00000335 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ComputeOps_Pool2D_m02A81A18B723DD537B801863673AA1378F2647B1 (void);
// 0x00000336 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalMaxPool2D_m8EA10EBCB66CF19C727B6FAD3C65CAF5E4051B78 (void);
// 0x00000337 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgPool2D_m7A9563ECF86C2C27C525CF26CDCF889A9E661FB4 (void);
// 0x00000338 System.Tuple`2<Unity.Barracuda.Tensor,Unity.Barracuda.Tensor> Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2DReduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_GlobalAvgVariancePool2DReduce_mF0025B829FC13451334C6AF4DAECD5A10C72CDD1 (void);
// 0x00000339 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgVariancePool2D_m4D6027DE636CAD122340245660A264857B354CA4 (void);
// 0x0000033A Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2DReduce(System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2DReduce_m9ECFEF7EB88576A890135B9D0CB886E8749C8315 (void);
// 0x0000033B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2D(System.String,System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2D_m985E8363D5C2421360BADB73D1B5A76D693E6DF9 (void);
// 0x0000033C Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_ScaleBias_mBCE24CC7D9F549492FB22D09C324A8AA8B0A5543 (void);
// 0x0000033D Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Normalization_mCB01921D108C1AAC750ECDE19A5EBB2E7A792E3C (void);
// 0x0000033E System.Void Unity.Barracuda.ComputeOps::ComputeReduceDispatchDim(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32,System.Int32&,System.Int32&,System.Int32&)
extern void ComputeOps_ComputeReduceDispatchDim_mB0D8C5F5398D7BC7DC098D0F529CC911512EA7F3 (void);
// 0x0000033F Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ReducePartial(Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_ReducePartial_m5E3080FB81A40D744EABAA0F214615AFFD67A1D3 (void);
// 0x00000340 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Reduce(Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_Reduce_m872CEA6A0BC660463362522441AEDF7151CCD075 (void);
// 0x00000341 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ReduceSlow(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_ReduceSlow_m48A8233A954641CFAD70CA4623987686DAC10F2C (void);
// 0x00000342 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_ArgMax_m4F3D3EAD02C50C89B095CE50F8F5C0B6E10A949E (void);
// 0x00000343 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_ArgMin_m84EF84EC984621DD3AD309A3A6B6A721A08BB028 (void);
// 0x00000344 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ComputeOps_Activation_mB48879B9C48F38DBF74C365CADAF3E4639C2C8BB (void);
// 0x00000345 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_PRelu_m16D75F6D7CB9C5DFA9BC281F356CDFAA946451AF (void);
// 0x00000346 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_Softmax_mBEC8F7EB9AD268DF056413808441FF0EDD7B9E79 (void);
// 0x00000347 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ComputeOps_LogSoftmax_mCF4975458C7EAB71FF83AECCE5FA9BFB351256A4 (void);
// 0x00000348 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::TransposeToChannelFirst(Unity.Barracuda.Tensor)
extern void ComputeOps_TransposeToChannelFirst_mE688EFBECE65AFE3ED8B62F81555E9B36AEAD070 (void);
// 0x00000349 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ComputeOps_Transpose_m957FB971832823FB62168DD11837ED5A016E3AB0 (void);
// 0x0000034A Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ComputeOps_Transpose_m1AA619649E88DD09BD0C00425C134C7691E49556 (void);
// 0x0000034B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Transpose8D(Unity.Barracuda.Tensor,System.Int32[])
extern void ComputeOps_Transpose8D_mA534DA2007715AC63480D049209A4A1732D9B1DD (void);
// 0x0000034C Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ComputeOps_Concat_mB8F0F1B87A531CB9DFE3035667C7F831E5F59ABE (void);
// 0x0000034D System.Int32[] Unity.Barracuda.ComputeOps::GetInputTensorStridesOnDevice(Unity.Barracuda.TensorShape,Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Int32[])
extern void ComputeOps_GetInputTensorStridesOnDevice_m4D4778A9B1BED0A0B8763B2B716D5DC12CAD378E (void);
// 0x0000034E Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ComputeOps_ElementwiseWithBroadcast_mCD01E743C1A69D8F00108118C301F53942CA89D4 (void);
// 0x0000034F Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ComputeOps_ApplyPadding_mED4EC5A4EEF1686B0872EB1282304172F25B97C3 (void);
// 0x00000350 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ComputeOps_LogicalNot_m4CBA8B30A607ACFF9017F651DA49DA3D0E2D527F (void);
// 0x00000351 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Sign(Unity.Barracuda.Tensor)
extern void ComputeOps_Sign_mACC9733FBF14815F8307DB6AB51D8593771C5CBF (void);
// 0x00000352 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_Where_m3E97D5A63AFF1DF42107A0E7BFC6D28FFEA7359C (void);
// 0x00000353 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_NCHW_mC2085E9B9E2DBF9B1056CAB058076F7978003FA0 (void);
// 0x00000354 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_m208915CE3D3CB16A3AA6D18CEA046C8B5C22A9EC (void);
// 0x00000355 System.Void Unity.Barracuda.ComputeOps::.cctor()
extern void ComputeOps__cctor_m9B5E6EA75C58615C944B5EC230D845AA5C49D375 (void);
// 0x00000356 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::Dispose()
extern void ComputeVarsWithSharedModel_Dispose_mACC2A093F0C233B2B869AC275CDD8167B62771DD (void);
// 0x00000357 Unity.Barracuda.Tensor[] Unity.Barracuda.ComputeVarsWithSharedModel::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void ComputeVarsWithSharedModel_PrepareLayerInputTensors_m03ACB4AA1E7FF1C3EBB11F56B8CB2DA6282EED07 (void);
// 0x00000358 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeVarsWithSharedModel::CreateComputeBufferForModelTensors(Unity.Barracuda.Layer,System.Int64&)
extern void ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mC882EC526F71137B891A6195D62CF0E41B3CB5DC (void);
// 0x00000359 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::.ctor()
extern void ComputeVarsWithSharedModel__ctor_m9B720B288B6617FFEC3D014AAEDA4CA186373BD6 (void);
// 0x0000035A System.Void Unity.Barracuda.ComputeDebugUtils::.cctor()
extern void ComputeDebugUtils__cctor_mB641911DE7F9A4B76975087800B1FC969713E2CA (void);
// 0x0000035B System.Void Unity.Barracuda.ComputeDebugUtils::LogAssertion(Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo,System.String)
extern void ComputeDebugUtils_LogAssertion_mF4E4B31AA4D6BB690DCDE6DB1C4F362640D0B044 (void);
// 0x0000035C System.Void Unity.Barracuda.ComputeDebugUtils::PrepareDispatch()
extern void ComputeDebugUtils_PrepareDispatch_mD926F5397D52EC24FAB278FF0DE8FCD6ABE1717C (void);
// 0x0000035D System.Void Unity.Barracuda.ComputeDebugUtils::VerifyDispatch(System.String)
extern void ComputeDebugUtils_VerifyDispatch_mC5D3B98C3A288404B1604AB2E67D32D89D044F0D (void);
// 0x0000035E System.Void Unity.Barracuda.ComputeDebugUtils::.ctor()
extern void ComputeDebugUtils__ctor_m5A590DE573BCC85FA0A8DCD96E9AECBC4003244A (void);
// 0x0000035F System.Void Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo::.ctor(System.UInt32[])
extern void KernelAssertInfo__ctor_mBE1CF4C9892759F5644A1BA692DE4D6FEB3131F7 (void);
// 0x00000360 System.Void Unity.Barracuda.PrecompiledComputeOps::.ctor(Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void PrecompiledComputeOps__ctor_m33327666E6F9AF4B4F0E5C351727242B50872ABA (void);
// 0x00000361 UnityEngine.ComputeBuffer Unity.Barracuda.PrecompiledComputeOps::NewComputeBuffer(System.String,System.Int32,System.Int32)
extern void PrecompiledComputeOps_NewComputeBuffer_mB5341C6BCADB5A4C9A470DB879C958288404C1FD (void);
// 0x00000362 System.Void Unity.Barracuda.PrecompiledComputeOps::ResetAllocator(System.Boolean)
extern void PrecompiledComputeOps_ResetAllocator_m6DFC6A7977C2F84040A8168156A2350912243584 (void);
// 0x00000363 System.Int32 Unity.Barracuda.PrecompiledComputeOps::CalcModelWithInputsHashCode(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_CalcModelWithInputsHashCode_m667040F875A8B4A80E237D2A9983DF0CF72AFD33 (void);
// 0x00000364 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2dWinograd(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2dWinograd_m15416751274A42992F23E80D639EA193215161F1 (void);
// 0x00000365 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2DTrans(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2DTrans_m3E5F601ACCEE7AA2263405E0D2D8A18FFF3456F4 (void);
// 0x00000366 System.Void Unity.Barracuda.PrecompiledComputeOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_PrepareModel_m17EE86F2034824D27609E71B266D352637F2BE56 (void);
// 0x00000367 System.Void Unity.Barracuda.PrecompiledComputeOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_PreExecuteLayer_mACCE1BBC3973830F50FC192A5007C881FD5D78AE (void);
// 0x00000368 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ApplyUnsupportedFusedActivationIfNeeded(Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m2E073C5606AFDF5080AB0DDE222234006A8AF7C4 (void);
// 0x00000369 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Dense_m23E29239C2B3031691CEB427C92F6B2D41A144BC (void);
// 0x0000036A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_Dense3_mB531B75C63B8D2F220CB2DAB3BED31001E0AE8EF (void);
// 0x0000036B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2D_m90C74A5A1AE92E10F2D0231B3E8F785F636FA1DB (void);
// 0x0000036C Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_DepthwiseConv2D_mBC735B8F4FD299903B2D5E4E2E7973BC3158851B (void);
// 0x0000036D Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2DTrans_m947EB0A26AE27177ABB1B178AA9350CAEAD24445 (void);
// 0x0000036E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void PrecompiledComputeOps_Upsample2D_mA2A6B29115933F3E83D7CB966129F961989F3E1D (void);
// 0x0000036F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void PrecompiledComputeOps_Pool2D_m82A6FF22D2A0CDB00F3C09306EA0260FFD03E3F1 (void);
// 0x00000370 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ScaleBias_m3A9A21E372B630F3687E0441AAFEA613E4721C48 (void);
// 0x00000371 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalPool2D_mD4F1ED25BA720810CAF24908B2B49A0DC65C7013 (void);
// 0x00000372 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalMaxPool2D_m2991940F1D5FACA73F0359DD03B5C5F4D40338FC (void);
// 0x00000373 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalAvgPool2D_m133CBFDDAD62D83E04D11654349558F68745441D (void);
// 0x00000374 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Normalization_mF87573A005A4D63060A300D0ADA2DA88A8E9B1D4 (void);
// 0x00000375 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Reduce(Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor,System.Int32)
extern void PrecompiledComputeOps_Reduce_m2B52BE1E10BAB1DFF8B87C0450FEA46105C9EB86 (void);
// 0x00000376 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void PrecompiledComputeOps_Activation_m628C6BE477390BF85DAE65F81B56C1BDB8BBC36D (void);
// 0x00000377 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_PRelu_m97C393E822D40A2B0335324B9B3F2633BB942CB4 (void);
// 0x00000378 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void PrecompiledComputeOps_Softmax_m513DE43F75EF59FBA4C41F3D3B29EF46524EF088 (void);
// 0x00000379 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_LogSoftmax_m045827F16708ED658F882F541BAF967FF5636171 (void);
// 0x0000037A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_ElementwiseWithBroadcast_m92C5FD8A2919FA869425DC8C4B1E3C3114F80AC3 (void);
// 0x0000037B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void PrecompiledComputeOps_Concat_m1474E88EBFB836E6CFE2E3BB2893BEDAD0C5FAAC (void);
// 0x0000037C System.Void Unity.Barracuda.PrecompiledComputeOps::.cctor()
extern void PrecompiledComputeOps__cctor_mC254CF7B7DF6D5FC5385276B7BFAFBDBF8693169 (void);
// 0x0000037D Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::get_kernel()
extern void CompiledLayer_get_kernel_m315FD8120BA417A507C66CABABF320476B26B317 (void);
// 0x0000037E System.Single[] Unity.Barracuda.ArrayTensorData::get_array()
extern void ArrayTensorData_get_array_m1CF65586DD00BEA1E64D4A3A4DD9D5EB9B7C8CD0 (void);
// 0x0000037F System.Void Unity.Barracuda.ArrayTensorData::.ctor(System.Int32)
extern void ArrayTensorData__ctor_m42441B3246773B20CB8933A11648939C6958B272 (void);
// 0x00000380 System.Void Unity.Barracuda.ArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void ArrayTensorData__ctor_m48A393DC81649CB718BFEEF2B57AD2888A3B9E23 (void);
// 0x00000381 System.Void Unity.Barracuda.ArrayTensorData::Finalize()
extern void ArrayTensorData_Finalize_m6DF616D67A259B66622EBA751F85C4EB810D1BE6 (void);
// 0x00000382 System.Void Unity.Barracuda.ArrayTensorData::Dispose()
extern void ArrayTensorData_Dispose_m623EEE367C4F26696FD5CB33CA98F54841E5C4A3 (void);
// 0x00000383 System.Void Unity.Barracuda.ArrayTensorData::Reserve(System.Int32)
extern void ArrayTensorData_Reserve_m93FD701D4147CBBD447A84DDF95E1167A8DBEB2B (void);
// 0x00000384 System.Void Unity.Barracuda.ArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ArrayTensorData_Upload_mAA7F96E57C56DAD5F587874F8BD91D7FA3C268B3 (void);
// 0x00000385 System.Boolean Unity.Barracuda.ArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void ArrayTensorData_ScheduleAsyncDownload_m3D078783F94748BF70D734C7422B25836AC505A3 (void);
// 0x00000386 System.Single[] Unity.Barracuda.ArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void ArrayTensorData_Download_m6D0629053FC83476B9E231586202FA910B79DEEA (void);
// 0x00000387 System.Single[] Unity.Barracuda.ArrayTensorData::SharedAccess(System.Int32&)
extern void ArrayTensorData_SharedAccess_m9DD57EAC85F381FF059A6DF31214A96BCAD21DF7 (void);
// 0x00000388 System.Int32 Unity.Barracuda.ArrayTensorData::get_maxCapacity()
extern void ArrayTensorData_get_maxCapacity_m28218106617182489E2FE0D021F60DB57B61E2C8 (void);
// 0x00000389 System.String Unity.Barracuda.ArrayTensorData::ToString()
extern void ArrayTensorData_ToString_m8DBB8159517E3949E0F4ACD77B2F8486CC7F0318 (void);
// 0x0000038A System.Single[] Unity.Barracuda.SharedArrayTensorData::get_array()
extern void SharedArrayTensorData_get_array_m8B7F7C4A4251519B765D52645164075BFC6390B7 (void);
// 0x0000038B System.Int32 Unity.Barracuda.SharedArrayTensorData::get_offset()
extern void SharedArrayTensorData_get_offset_m8652093F7AF2A7ABE0EF73256D69F48471E3F310 (void);
// 0x0000038C System.Int32 Unity.Barracuda.SharedArrayTensorData::get_count()
extern void SharedArrayTensorData_get_count_mB4D874AD158DE1E96054EB3FB692340A11DD592E (void);
// 0x0000038D System.Void Unity.Barracuda.SharedArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32)
extern void SharedArrayTensorData__ctor_mB7252973F94169C840C9CC74D3DCFD611B3BDBD6 (void);
// 0x0000038E System.Void Unity.Barracuda.SharedArrayTensorData::Finalize()
extern void SharedArrayTensorData_Finalize_m39E1C86E110073A445CD7D4171B9E49400C78DA4 (void);
// 0x0000038F System.Void Unity.Barracuda.SharedArrayTensorData::Dispose()
extern void SharedArrayTensorData_Dispose_m6145069527D666238EBCE0EF64D922F5BFA3B1F0 (void);
// 0x00000390 System.Void Unity.Barracuda.SharedArrayTensorData::Reserve(System.Int32)
extern void SharedArrayTensorData_Reserve_m95AFE76EE2AE9DDC469C1D3D0C003B1EB375D859 (void);
// 0x00000391 System.Void Unity.Barracuda.SharedArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void SharedArrayTensorData_Upload_m846C9CEDB8AD2FBC07E4609F9645EF221309AF4E (void);
// 0x00000392 System.Boolean Unity.Barracuda.SharedArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void SharedArrayTensorData_ScheduleAsyncDownload_m5E2447FCDD97D5560069E490E42C5F4AB972900C (void);
// 0x00000393 System.Single[] Unity.Barracuda.SharedArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void SharedArrayTensorData_Download_mBEAA363A8FE81FE1D5A80D36E1A90B289BCBFB39 (void);
// 0x00000394 System.Single[] Unity.Barracuda.SharedArrayTensorData::SharedAccess(System.Int32&)
extern void SharedArrayTensorData_SharedAccess_m41EEB41DFCC41920406349738B1C386CE4F10196 (void);
// 0x00000395 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_maxCapacity()
extern void SharedArrayTensorData_get_maxCapacity_m06465B0FDB78A5D12F13ABB91BD41A3551F16F5D (void);
// 0x00000396 System.String Unity.Barracuda.SharedArrayTensorData::ToString()
extern void SharedArrayTensorData_ToString_m30B355448360D2C122D591576C2979B2BC07CB1A (void);
// 0x00000397 System.Void Unity.Barracuda.ReferenceCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceCPUOps__ctor_m13597D3914B0A23CFE8E64D1C42D1D340EE6E343 (void);
// 0x00000398 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(Unity.Barracuda.TensorShape,System.String)
extern void ReferenceCPUOps_NewTensor_m25BE9D95850535BA33120B922EC247B3CA8ECE56 (void);
// 0x00000399 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NewTensorLike_mE3067F6087FA22E7A01E136887210735B6DAE00D (void);
// 0x0000039A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_NewTensorLike_mDC503EFAFB5BE73310EFD78825FB4460D9E0940B (void);
// 0x0000039B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m53F9E9E4B63D0CDC4E3FFCDB9FEA85A8D6061C32 (void);
// 0x0000039C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m05E63B9AE6E91B4FDBBD2BCAEF27241840A3EEC2 (void);
// 0x0000039D System.Void Unity.Barracuda.ReferenceCPUOps::ResetAllocator(System.Boolean)
extern void ReferenceCPUOps_ResetAllocator_mB621F302929233F8F37AAAB69998D0F10FB987C2 (void);
// 0x0000039E System.Single Unity.Barracuda.ReferenceCPUOps::ApplyFusedActivation(System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_ApplyFusedActivation_m3FD39FDE56BAEDC8AAE8C3FD36ED451648419621 (void);
// 0x0000039F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Dense3_m585F2596E37186291F2CA7EBA04D4D7CF874421A (void);
// 0x000003A0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_MatMul_mAC91310A9B5666FBC61E88A367ABA73CD084E96E (void);
// 0x000003A1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul_m719F9854263BA82BE0921EDC31AE777277E71C2A (void);
// 0x000003A2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Dense_mD5C687C286F68F124F9F182282D6B29A0E4C1729 (void);
// 0x000003A3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2D_m0E1492FCC7B8A1B89E3C64F0D3FA0D6F85BA5B4B (void);
// 0x000003A4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv3D_mA7019FDC30E49E853562F98F2030475D2A7E389F (void);
// 0x000003A5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_DepthwiseConv2D_m269D0974A20B97FEFBC3144169FDB7F7BE7542E7 (void);
// 0x000003A6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2DTrans_m189698C33407582BD45D63A2AF634E02FA0DD8FF (void);
// 0x000003A7 System.Single Unity.Barracuda.ReferenceCPUOps::BilinearInterpolation(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern void ReferenceCPUOps_BilinearInterpolation_m97D4EC60D8E977855B34E62AF8CDD1752D9DC193 (void);
// 0x000003A8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample3D_m0C88A49BAD26E31B2F30E502D41EAF0B4D7972BA (void);
// 0x000003A9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample2D_mEF861CC7080635D67E86D3CFAE8403E02ED51A50 (void);
// 0x000003AA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Resample2D_m6B9D82B49E3D86D63CF5FC92B172BA8FDA0551D6 (void);
// 0x000003AB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceCPUOps_DepthToSpace_m1DB560938D30B79AC219F1CEA59CC48801930B97 (void);
// 0x000003AC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_SpaceToDepth_mAA0FBCACEF5FA5ECFF0099D7A55DAC034248DF28 (void);
// 0x000003AD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_MaxPool2D_mAD55807B2F5440D592924C3CAE0782403267DF92 (void);
// 0x000003AE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_AvgPool2D_mCA5C24141AC04D43CAA8E16264BF6ADC544420FB (void);
// 0x000003AF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalMaxPool2D_m3650ACFADCDDDE9492F0CFE4E99C0950CD46319C (void);
// 0x000003B0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgPool2D_m1482525A95FF13FF03989651499BA3E0E95F2931 (void);
// 0x000003B1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgVariancePool2D_m34447A037F37712855F22CBF55B31F33796C1889 (void);
// 0x000003B2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Func`7<Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single>)
extern void ReferenceCPUOps_ApplyPadding_m525EE4A58B6DA3FCEF352C51BAB3DDF47ABEA64C (void);
// 0x000003B3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border2D_m51D74B8557618EC6291FBCBE81AF7A79E5547AFD (void);
// 0x000003B4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border3D_m6B232ED9FA9B293D886A64C6F88542E33D9FB243 (void);
// 0x000003B5 System.Void Unity.Barracuda.ReferenceCPUOps::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ReferenceCPUOps_ClampHWToTensorShape_mAA51F50FE22B098A3918185001CDAD32AD5706CD (void);
// 0x000003B6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DReflect_m6AC84F261342D4B153B7D5CC6B7A003121E9081B (void);
// 0x000003B7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DSymmetric_mC5DD920A5F53645B39CBD32E0BACC4B659E770AB (void);
// 0x000003B8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DEdge_m1C58897DA5D03A3E735DB496E8911A7643FCA6AC (void);
// 0x000003B9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_ScaleBias_m2E0211C7CE819D728150AC4C8978C57CCDCB24CF (void);
// 0x000003BA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_LRN_m4C4B6F33A1AE8FE2CFDD40FB3AB6C503B9487EFC (void);
// 0x000003BB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Normalization_m4E07EA578ACD1808C19330488EAD0F0B9F25E567 (void);
// 0x000003BC System.Single Unity.Barracuda.ReferenceCPUOps::Bernoulli(System.Single)
extern void ReferenceCPUOps_Bernoulli_m07BF2EF3475E0023F7C88725E69E974FBBB1F9BC (void);
// 0x000003BD System.Single Unity.Barracuda.ReferenceCPUOps::Gaussian(System.Single,System.Single)
extern void ReferenceCPUOps_Gaussian_m9B0078341A66CF8EE9E4D239E44B6EC00C4D525D (void);
// 0x000003BE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Dropout_mA98DBD70B560C7FAF51E6383F65093EA1C215261 (void);
// 0x000003BF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomNormal_m9BD27EDFBF6FBE9EBD8649C856633446F237A01B (void);
// 0x000003C0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomUniform_mDC4A32F76EE83D116956B20F17C39384B04ABD49 (void);
// 0x000003C1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_Multinomial_m22633BF7C23989C6E84290D1841BF58255E63FF4 (void);
// 0x000003C2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceCPUOps_OneHot_mB2F31AE83E85A93113A47E8E42DC370F211273DD (void);
// 0x000003C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void ReferenceCPUOps_TopKIndices_m56C2E731868D216FD87B5AB7E8E6996E62ACDEA6 (void);
// 0x000003C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonZero(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NonZero_mEDA250C1C790914D94CCF738688D679C90C2268A (void);
// 0x000003C5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_TopKValues_m13BF79A919F3446B55691F9794CE5FEA76F29386 (void);
// 0x000003C6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu_m9F16A4BCF3F669C0212E1B1A9A37B05C5C6ED281 (void);
// 0x000003C7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_PRelu_mD66A33739F40728092AD8785B9CBBE1361C6E5F5 (void);
// 0x000003C8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Softmax_mB7AAE486546649CC2DE3180A6B528936145B0009 (void);
// 0x000003C9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogSoftmax_m2AE5DEF7FAC8161D88003BA6CC995AA7362C0515 (void);
// 0x000003CA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tanh_mD03873E686348879CED3A1C1353163E96902A498 (void);
// 0x000003CB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Softplus_mA40C1354AA7D856DFC786849206AB063E50925B5 (void);
// 0x000003CC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sigmoid_mF4F9DF029D6C5A955CAA34828EDA05CF4AB76524 (void);
// 0x000003CD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu6_m7E9C001DBCECE473CEB7DD4E11AE4ACC8118E59E (void);
// 0x000003CE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Elu_m78390E2FB4A096B5B8E0EEF60AFCDFF8129BDA12 (void);
// 0x000003CF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_LeakyRelu_mB2CF2E89A5FA4945E69F714852EF3B9685EABCB0 (void);
// 0x000003D0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Selu_m2EA87D9FF861C9D83F871BDAD1F4DD236236DB26 (void);
// 0x000003D1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Swish_m9CB9C463C72B67D3652F1EE19763028B21BF8AD9 (void);
// 0x000003D2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Abs_m6040C63A1B0982F2D4969C04E9AE98AD1548B408 (void);
// 0x000003D3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Neg_m71B20F96A3761A424754E43F246026E26304B386 (void);
// 0x000003D4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Ceil_m89B535BBC1B751DBF8AE264DAB18095E8BDF8292 (void);
// 0x000003D5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Clip_m70F2BF95312DC80359B1C01A336ECFF03354B66B (void);
// 0x000003D6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Floor_m643432B1B7DB877B354F1537281872D6D9300BA1 (void);
// 0x000003D7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Round(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Round_m9195EE82C2B02539D5F8FD178FBAF3F4FF416A33 (void);
// 0x000003D8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Reciprocal_mD0D819E231BBCC121D98C0C5A7EFF0EDFEA2458D (void);
// 0x000003D9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Pow_mA198056A26762880727FDE3D38E9070E9CDF3A1E (void);
// 0x000003DA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Exp_m03A6B0CB8B636F5A301968683195E04ABAD74C2A (void);
// 0x000003DB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Log_mC8E947FCE61355F03646286CEC3A75E060597C47 (void);
// 0x000003DC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sqrt_m9FE461D2700CF2B498587926627CF89A709BC8A9 (void);
// 0x000003DD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acos_mB9938A250EB504ED35D293A37A42130DC9144060 (void);
// 0x000003DE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acosh_m9B03BDF09AA939DA3B7C65E4A81FF6A1BA14C826 (void);
// 0x000003DF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asin_mCC86505AA3550D7693C322329ED6535EB0336749 (void);
// 0x000003E0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asinh_m03F3368DBE67DD1CB46F6989E03C72FB91BCE9E7 (void);
// 0x000003E1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atan_m69A60172462260656DA2E2DCF590E086F1690D0F (void);
// 0x000003E2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atanh_mED920167218BD4D71FEFBF4C62673366FC3F7A44 (void);
// 0x000003E3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cos_mFD16261C9F4ED5875C0C37992C28FFCF09952C43 (void);
// 0x000003E4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cosh_m4FD826E1D2379F09563F4218366C560F91BBA825 (void);
// 0x000003E5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sin_m9A04FE2D7A3CD79E8ED864D9266A45D85A7C8127 (void);
// 0x000003E6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sinh_m5113C4C0B7EF376A0B1152925712EE01B35C5305 (void);
// 0x000003E7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tan_m04D12768E5FF3F0EC4FF0CD42AADBC34FD634902 (void);
// 0x000003E8 System.Int64 Unity.Barracuda.ReferenceCPUOps::GetAggregatedDimLength(Unity.Barracuda.TensorShape,System.Int32,System.Int32)
extern void ReferenceCPUOps_GetAggregatedDimLength_mFC6A2CF70A4D19E8E3ED72B7CE6A5AD20F325BD8 (void);
// 0x000003E9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Concat_mF5E102F6C04B89D9F47075978AB44D212F85FC11 (void);
// 0x000003EA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_StridedSlice_m36E2A848556CFA62A8444DCD1979468A34BD8874 (void);
// 0x000003EB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Tile_m3042A060A796DEEBC610ECD2657F59701EDC87CD (void);
// 0x000003EC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ConstantOfShape(Unity.Barracuda.TensorShape,System.Single)
extern void ReferenceCPUOps_ConstantOfShape_m9FF3EE4606E010D9684A88F5A7966F907A586C0E (void);
// 0x000003ED Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Shape(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Shape_mA0B2C93A9B0D7250A395DD38438346239240BB07 (void);
// 0x000003EE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyElementwiseWithBroadcast_mDE4B2864B1CCDAF5C25F38D03EDD3B2F2EB6A0B0 (void);
// 0x000003EF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Add_m7E20D8BFCA5269B881CD8C677E6389F3C71E8044 (void);
// 0x000003F0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Sub_m9CA89DCB43FA325A28A344E39DD3C0B482EE56BD (void);
// 0x000003F1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mul_mCBEF13680A4DB2BDF37E76F7D4A4AD82881D0A29 (void);
// 0x000003F2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Div_mBC6C9C293BA89993C528D4FF748317D6492801EB (void);
// 0x000003F3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Pow_m8D6EBA259F5E4CDDC711E4E54B0E35306A973ECC (void);
// 0x000003F4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Min_mA10514622D59DA380E252C5FC0BCD3B3591AE17D (void);
// 0x000003F5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Max_mFF458489F145E41FB903BE4C798EB77F09619320 (void);
// 0x000003F6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mean_mAF0FB7BBA8A048FA5BC9AAFC4023067277E72BF2 (void);
// 0x000003F7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMin_mE4A2FDF71425AC3BC1D5A8B7C717B5D36E06FC97 (void);
// 0x000003F8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMax_m41945722DDACCDB9293AD5B3EBB3CA0AC5F4FB7B (void);
// 0x000003F9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMax_m07D0E7E6593FE7252B6F907D7AAAC83549B4E6BE (void);
// 0x000003FA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMin_m2FD54FFF4BBB8216C2B7E13CDAA290EE7D0D734B (void);
// 0x000003FB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceSum_mC3C26EE2935ACE5CBA6C6F501FB29CCB62FA52A7 (void);
// 0x000003FC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMean_m522E9355B441283ACCE5924C5C1E3DFF03C37291 (void);
// 0x000003FD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceProd_mBCAD632C99EFF393D1640930EC72AE4E9C28E9E9 (void);
// 0x000003FE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyLogicalOperator_mEAD34540E2E1E45B67B8E7CA1EF132C62D2DD4DC (void);
// 0x000003FF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Greater_m1FDCE19F53ED4D8AFFF08CE61806289242011E05 (void);
// 0x00000400 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GreaterEqual_mBF5842368F5780649D120856EA396D3938C0017A (void);
// 0x00000401 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Less_mB91B406F1377F6F39C4F30C14E37D3926FE82528 (void);
// 0x00000402 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LessEqual_m93BDA253150A27CC933A00082FFECEE953DAFAF7 (void);
// 0x00000403 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Equal_m2D16728B3A7AC24209E111DAB1C63FB86861E69D (void);
// 0x00000404 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalOr_m913F5D7A49AAA2D4755319EF617FC626E3E87D92 (void);
// 0x00000405 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalAnd_m1B221CFDA7DB934561CDEDE9B3D0C58FEDAC6C9C (void);
// 0x00000406 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalXor_m8C82A444020054F5A445109C1B0D9D640435C4F4 (void);
// 0x00000407 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalNot_mFAA75A49EBE730F81A4B862D47F076D0AD87E546 (void);
// 0x00000408 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sign(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sign_mB482588A184E4E44EC5C74036A81D9C6F7F0C463 (void);
// 0x00000409 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Where_m8248201EE4728ADB559F4BBAA27B6A6836B75BB2 (void);
// 0x0000040A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_CopyAndReshape_mB3BC9D1C8C85F13291CE0D557836920310AE835C (void);
// 0x0000040B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Copy_mB909BF48C5BB1A0B6DC45EFED08188183D0266F8 (void);
// 0x0000040C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Flatten_m9CB3A8A10306D254AFE2A0BD3D6E233D7A65FD71 (void);
// 0x0000040D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Reshape_mE52E1BEBE4D5A008CF2D76D4ADE38ABA72696F98 (void);
// 0x0000040E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Expand_m00577D390D4CDD4ADAC5657C04B05C8075DA8CAA (void);
// 0x0000040F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Gather_m8514EE1410EEA405CC97D716BDBE5F7BC624ED66 (void);
// 0x00000410 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_NonMaxSuppression_mE9E39D3F80D2FEBD4934550BDBB61D99940FFE0D (void);
// 0x00000411 Unity.Barracuda.Tensor[] Unity.Barracuda.ReferenceCPUOps::LSTM(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LSTM_m3DFFBD495AA5E73FB061164BC667B3BBEDE1E462 (void);
// 0x00000412 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Transpose_m984AEE6B18B22C7CCFC631F425C363E4264719FA (void);
// 0x00000413 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Transpose_m6AE5DEED3A3CC4A8DCBA49E4EBEBCD3368C5B015 (void);
// 0x00000414 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Prepare_m5EC4B6A0CF7E4FEDA2960E9809D8DD987450DA4E (void);
// 0x00000415 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DReflect>g__GetReflectPadding|33_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DReflectU3Eg__GetReflectPaddingU7C33_0_m9CB7D37118FB71AF3236BC0732350AD21109AFFF (void);
// 0x00000416 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DSymmetric>g__GetSymmetricPadding|34_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C34_0_m6AD912B55E378DD38E225001574C566CE79261CF (void);
// 0x00000417 System.Single Unity.Barracuda.ReferenceCPUOps::<Pad2DEdge>g__GetEdgePadding|35_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C35_0_m5D272D2F63E7221B188C8F95C8B4160EB1BDC689 (void);
// 0x00000418 System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionOverUnionArea|128_0(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C128_0_m2E1ADE6AA2438B79C2FBDE2824B7AF2E26885B27 (void);
// 0x00000419 System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionArea|128_1(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C128_1_m968C7F67F89296B3511A8CD9FB1AB5C89706B61B (void);
// 0x0000041A UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRect|128_2(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C128_2_m89F9D7F193913012B8CCE5D03350DDBA12BCFD44 (void);
// 0x0000041B UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRectFromCenter|128_3(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C128_3_mBD5A1211AD73BD3AEEA92724AC86A00A6CBF918D (void);
// 0x0000041C System.Void Unity.Barracuda.ReferenceCPUOps/Seed::.ctor(UnityEngine.Random/State[]&,System.Int32)
extern void Seed__ctor_m5074B5C4B837D374E1EE716B55027B3C5008BAC2 (void);
// 0x0000041D System.Void Unity.Barracuda.ReferenceCPUOps/Seed::Dispose()
extern void Seed_Dispose_m4762924B33317D7C967DF253D5BD61E946062D5F (void);
// 0x0000041E System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_mFC242E2FA565763F4A038D743871D685E42347CA (void);
// 0x0000041F System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass30_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass30_0_U3CBorder2DU3Eb__0_m63AB2651EADB8A1A4DEF6F0F5D944AB71BF6E7B6 (void);
// 0x00000420 System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_m30F1033E90763F55BC1DF0DA397BFAEBEA19C5B6 (void);
// 0x00000421 System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass31_0::<Border3D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass31_0_U3CBorder3DU3Eb__0_mDC67CF47D71C760CADF157DB4A07504F3F0B2C16 (void);
// 0x00000422 System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.cctor()
extern void U3CU3Ec__cctor_m90C79CD90FD98ABBBA5FAFFF01356EBE621013CC (void);
// 0x00000423 System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.ctor()
extern void U3CU3Ec__ctor_mB660F9829CA32758F455779D54BC414EC3E45734 (void);
// 0x00000424 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Add>b__95_0(System.Single,System.Single)
extern void U3CU3Ec_U3CAddU3Eb__95_0_mF6241D8EF00E9E67874C0ECC058D6B62E2F6FFFB (void);
// 0x00000425 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Sub>b__96_0(System.Single,System.Single)
extern void U3CU3Ec_U3CSubU3Eb__96_0_mB405B029E39F49B71C4EFE71CDA04E7E6603C2A1 (void);
// 0x00000426 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mul>b__97_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMulU3Eb__97_0_mFFCB0FD31A22BBF341CBC174382E4F752D684856 (void);
// 0x00000427 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Div>b__98_0(System.Single,System.Single)
extern void U3CU3Ec_U3CDivU3Eb__98_0_m8A527ECA0C82147DAF92A8201EA60D24EB44CBAF (void);
// 0x00000428 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pow>b__99_0(System.Single,System.Single)
extern void U3CU3Ec_U3CPowU3Eb__99_0_m78E7CFD11448BE1722FF200585A616BDC59FF33C (void);
// 0x00000429 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Min>b__100_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMinU3Eb__100_0_m30621CE45E1460581D0965C52CC802C7C5AD0C54 (void);
// 0x0000042A System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Max>b__101_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMaxU3Eb__101_0_m2F8FDB3B9ECBD8526AA01DC787D9A3BC9D7F4EFF (void);
// 0x0000042B System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mean>b__102_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMeanU3Eb__102_0_m4B0B3BA76C0686F7CB647F9F08566817D34CD0F9 (void);
// 0x0000042C System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Greater>b__111_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterU3Eb__111_0_mB546C8CFA9FE152B9EE88A8157B52B60965BB43E (void);
// 0x0000042D System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<GreaterEqual>b__112_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterEqualU3Eb__112_0_m82ABEADFABA799785EA1C3FA98FB5E41F095D312 (void);
// 0x0000042E System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Less>b__113_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessU3Eb__113_0_m3385338A85B6B0FBCE999D2133E78BC25F535098 (void);
// 0x0000042F System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LessEqual>b__114_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessEqualU3Eb__114_0_m42C55CB471C0DE4225B2FA5ABE2B810C621BEB75 (void);
// 0x00000430 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Equal>b__115_0(System.Single,System.Single)
extern void U3CU3Ec_U3CEqualU3Eb__115_0_m30671C3FA9F1E55118A1511E4BE1D0D20CAE7170 (void);
// 0x00000431 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalOr>b__116_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalOrU3Eb__116_0_m120ED7D367A0ABA0C7F64E46A739189BC6586349 (void);
// 0x00000432 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalAnd>b__117_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalAndU3Eb__117_0_mD0519FE0740B2CCC0EE109586A9918BA6754CF86 (void);
// 0x00000433 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalXor>b__118_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalXorU3Eb__118_0_mCE28F56E333A67EE92D47CFA31B5D3DE33EF6AA3 (void);
// 0x00000434 System.Single Unity.Barracuda.MathfEx::Tanh(System.Single)
extern void MathfEx_Tanh_mD886F38E2C989739750E15250B733E3D72A0F3E9 (void);
// 0x00000435 System.Void Unity.Barracuda.MathfEx::.ctor()
extern void MathfEx__ctor_mB9E6381F67ECD7438F611CA3065738ABBE32CC74 (void);
// 0x00000436 System.Int32 Unity.Barracuda.ComputeHelper::IDivC(System.Int32,System.Int32)
extern void ComputeHelper_IDivC_m68B82F5E6E277DE57A010E9EF30459C02309CEF9 (void);
// 0x00000437 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeTensorData::get_buffer()
extern void ComputeTensorData_get_buffer_m871D4B1FCDF042BCC6F15CA88CFD61FEF5D2AEE5 (void);
// 0x00000438 System.Int32 Unity.Barracuda.ComputeTensorData::get_offset()
extern void ComputeTensorData_get_offset_m97FE30EACCBC9D157348956B3151775B4D9745B1 (void);
// 0x00000439 Unity.Barracuda.ComputeInfo/ChannelsOrder Unity.Barracuda.ComputeTensorData::get_channelsOrder()
extern void ComputeTensorData_get_channelsOrder_m0EB81830CF353AD02ECF1B766BD7E3643954137D (void);
// 0x0000043A System.Void Unity.Barracuda.ComputeTensorData::.ctor(Unity.Barracuda.TensorShape,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ComputeTensorData__ctor_mA4E49ADFA38BB811ACA331E6C82400B948A944E1 (void);
// 0x0000043B System.Void Unity.Barracuda.ComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void ComputeTensorData__ctor_m136DAC864CD5F4DB4E9C62DEFD8CA8C962336DF7 (void);
// 0x0000043C System.Void Unity.Barracuda.ComputeTensorData::Finalize()
extern void ComputeTensorData_Finalize_m177D03DD9E85D4CDCAC625D93E613084983DDC59 (void);
// 0x0000043D System.Void Unity.Barracuda.ComputeTensorData::Dispose()
extern void ComputeTensorData_Dispose_mAC6FB78501C3EC067EE35BC57FD4A595A4843AB2 (void);
// 0x0000043E System.Void Unity.Barracuda.ComputeTensorData::Reserve(System.Int32)
extern void ComputeTensorData_Reserve_mB1D0AD8397FD623F3BEC403C5B011AA8D24435AB (void);
// 0x0000043F System.Void Unity.Barracuda.ComputeTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeTensorData_Upload_m76DA3E80B151FC0C7BE0AFBD8D4A75E770071D65 (void);
// 0x00000440 System.Boolean Unity.Barracuda.ComputeTensorData::ScheduleAsyncDownload(System.Int32)
extern void ComputeTensorData_ScheduleAsyncDownload_m0273C40ACF1B7863DB538C284FC46996E9556B5E (void);
// 0x00000441 System.Boolean Unity.Barracuda.ComputeTensorData::WaitFor3Frames(System.Int32)
extern void ComputeTensorData_WaitFor3Frames_mCA7A7C79B341FB288A427664FF467679E2237C7E (void);
// 0x00000442 System.Boolean Unity.Barracuda.ComputeTensorData::WaitForAsyncReadback(System.Int32)
extern void ComputeTensorData_WaitForAsyncReadback_m0D2332108C99212DC2AA6C61224A0B72E6B3C500 (void);
// 0x00000443 System.Single[] Unity.Barracuda.ComputeTensorData::ConvertFromOnDeviceFormat(Unity.Barracuda.TensorShape,System.Single[])
extern void ComputeTensorData_ConvertFromOnDeviceFormat_mDB89A6D0EEBB45BD082E1B515916834D7023318D (void);
// 0x00000444 System.Single[] Unity.Barracuda.ComputeTensorData::Download(Unity.Barracuda.TensorShape)
extern void ComputeTensorData_Download_m12AD5F68D1C6303823E2498215EBB9545E96CF28 (void);
// 0x00000445 System.Single[] Unity.Barracuda.ComputeTensorData::SharedAccess(System.Int32&)
extern void ComputeTensorData_SharedAccess_m86911C933F1F15B9C6123CC57C886FDD918AE1BC (void);
// 0x00000446 System.Int32 Unity.Barracuda.ComputeTensorData::get_maxCapacity()
extern void ComputeTensorData_get_maxCapacity_mED9B6E52F7297717E3FE3E7D085A94C25F5D8E6A (void);
// 0x00000447 System.String Unity.Barracuda.ComputeTensorData::ToString()
extern void ComputeTensorData_ToString_mCD85CD059EAE8FFE51423AE869EC7F29CD976117 (void);
// 0x00000448 System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::.ctor()
extern void ConvertFromOnDeviceFormatHelper__ctor_mF1E18421E5A5FFF50DD9790BC585DF497DCD3D92 (void);
// 0x00000449 System.Single[] Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::GetNHWCData(Unity.Barracuda.TensorShape,System.Single[],Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ConvertFromOnDeviceFormatHelper_GetNHWCData_mE166A18B568EB3AE627B9AEE80D9D948051F3491 (void);
// 0x0000044A System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::ApplyConversion()
extern void ConvertFromOnDeviceFormatHelper_ApplyConversion_m92DEE2B697791C03E7AFD04EA20412B33126CBDA (void);
// 0x0000044B System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::UnrolledInnerLoop(System.Int64)
extern void ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_m91BCBB27D8CC06D50512F0E1525920244F8412D1 (void);
// 0x0000044C System.Void Unity.Barracuda.SharedComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void SharedComputeTensorData__ctor_m58DB646DB237AC2F0EFE352B9F5906CA433B787A (void);
// 0x0000044D System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedOnly_m0755E0FD3A8457EAE0A81E1AA4F7F78BA1E98D8D (void);
// 0x0000044E System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedOnly_m61431F2BCE86BA6F954DFF073FAC30870951F54D (void);
// 0x0000044F System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreen_m39341BE6E10E0166CFFF1B43AFE8CAF476892BFC (void);
// 0x00000450 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreen_m69D7403951A01E1C4ED4F14074795A0EEECF4B28 (void);
// 0x00000451 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m4E3CE78E194C28F56CEFFBF002641D93D7C59766 (void);
// 0x00000452 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m9E4C5DE62E98DCC6107F76945CC7DB5313D2055E (void);
// 0x00000453 System.Boolean Unity.Barracuda.TextureFormatUtils::IsAlphaOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsAlphaOnly_m5C0F6DD14ED7D874044A4218C5866D24DC33F77E (void);
// 0x00000454 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedOnly_m6E00B22CB7C221CBE65344F35D71144E1FE9EE23 (void);
// 0x00000455 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreen_mA13CD2F4B368FDBB5247D5FBE1090E439EDA1CBA (void);
// 0x00000456 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreenBlue_m33B973CB8D76A988B32F3EBD45CAC5EF3DCD4680 (void);
// 0x00000457 System.Int32 Unity.Barracuda.TextureFormatUtils::FormatToChannelCount(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelCount_mA92B545E17C09479B2A73239989A93BBA3333BC2 (void);
// 0x00000458 System.Int32[] Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelMask_m2E4DB85A60D8222406D00E11B944680051E17F5B (void);
// 0x00000459 System.Int32[] Unity.Barracuda.TextureFormatUtils::FormatToChannelReadMap(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelReadMap_m22BB248DD5B78F5964724A54D20965A7C9FB0494 (void);
// 0x0000045A System.Void Unity.Barracuda.TextureFormatUtils::.ctor()
extern void TextureFormatUtils__ctor_mD2522F8F2FB792701D5BDF32644371CADDF5BC25 (void);
// 0x0000045B Unity.Barracuda.TensorShape Unity.Barracuda.TextureAsTensorData::get_shape()
extern void TextureAsTensorData_get_shape_m22A73B556E4C5BC1DB117B235F487D1F6309F58F (void);
// 0x0000045C UnityEngine.Texture[] Unity.Barracuda.TextureAsTensorData::get_textures()
extern void TextureAsTensorData_get_textures_m96995EA6DCBE3C28C6E277BBD35ECA1D64BC3154 (void);
// 0x0000045D System.Int32 Unity.Barracuda.TextureAsTensorData::get_interpretPixelAsChannels()
extern void TextureAsTensorData_get_interpretPixelAsChannels_mC1C6EB79A2F80320369200EDF44A44FC771DCD35 (void);
// 0x0000045E Unity.Barracuda.TextureAsTensorData/InterpretDepthAs Unity.Barracuda.TextureAsTensorData::get_interpretDepthAs()
extern void TextureAsTensorData_get_interpretDepthAs_m25137D7B5FA41230E6AF4A43D1BF0CCC39FD7226 (void);
// 0x0000045F Unity.Barracuda.TextureAsTensorData/InterpretColorAs Unity.Barracuda.TextureAsTensorData::get_interpretColorAs()
extern void TextureAsTensorData_get_interpretColorAs_m02AD2AEA6851CB03098C480070528D0F4FB60679 (void);
// 0x00000460 Unity.Barracuda.TextureAsTensorData/Flip Unity.Barracuda.TextureAsTensorData::get_flip()
extern void TextureAsTensorData_get_flip_m03F3BF9A9D1FA0433BA0A9576B0E5A92450EFF5F (void);
// 0x00000461 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture[],System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_m65BE35D1DE6599C677C877EC66031E1D3CB811A7 (void);
// 0x00000462 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture,System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_mA0A0FCCF598E205DE5EC0109E17FB6834DCD516F (void);
// 0x00000463 System.Void Unity.Barracuda.TextureAsTensorData::Reserve(System.Int32)
extern void TextureAsTensorData_Reserve_mE0575F51FE11E0BB8509B411F561161C73345F97 (void);
// 0x00000464 System.Void Unity.Barracuda.TextureAsTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void TextureAsTensorData_Upload_m26B8684C866E9C84FBC7DC5B91B5CDA39AF7CED7 (void);
// 0x00000465 System.Boolean Unity.Barracuda.TextureAsTensorData::ScheduleAsyncDownload(System.Int32)
extern void TextureAsTensorData_ScheduleAsyncDownload_m768DB3A2B4FB6DABA25EDFB196BC4E8C21125576 (void);
// 0x00000466 System.Single[] Unity.Barracuda.TextureAsTensorData::Download(Unity.Barracuda.TensorShape)
extern void TextureAsTensorData_Download_m396D05BFBBBA7B66CF94565391491122A1A0AB78 (void);
// 0x00000467 System.Single[] Unity.Barracuda.TextureAsTensorData::SharedAccess(System.Int32&)
extern void TextureAsTensorData_SharedAccess_m7E8C172E7B091C538275B861C9BAADEAE6A3168C (void);
// 0x00000468 System.Int32 Unity.Barracuda.TextureAsTensorData::get_maxCapacity()
extern void TextureAsTensorData_get_maxCapacity_m8D60A425300B7E1BA88217951B20EA1E17F67C66 (void);
// 0x00000469 System.Void Unity.Barracuda.TextureAsTensorData::Dispose()
extern void TextureAsTensorData_Dispose_m1D21E36E0EDA7DDFB9798A2569EA69A1306A9232 (void);
// 0x0000046A System.Void Unity.Barracuda.ReferenceComputeOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceComputeOps__ctor_m7015EB8D61F337EBEC35CABE416DC3FD53177265 (void);
// 0x0000046B Unity.Barracuda.ComputeTensorData Unity.Barracuda.ReferenceComputeOps::Pin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Pin_m0761F8645DF407639DD554652C4582AAE7FF28D3 (void);
// 0x0000046C System.Void Unity.Barracuda.ReferenceComputeOps::SetTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_SetTensor_m7B3AC10D8F993FDACB658D8CEC947809E5876254 (void);
// 0x0000046D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::NewTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_NewTensor_m978193634554359F463A71266CBE434D6E20301A (void);
// 0x0000046E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dispatch(Unity.Barracuda.ComputeFunc,Unity.Barracuda.TensorShape,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceComputeOps_Dispatch_m993BB64FFF3C27BC5C3F42665128427B1D16488D (void);
// 0x0000046F Unity.Barracuda.ITensorData Unity.Barracuda.ReferenceComputeOps::TextureToTensorData(Unity.Barracuda.TextureAsTensorData,System.String)
extern void ReferenceComputeOps_TextureToTensorData_m0CD7274F1A0DDA45EC7E67396AA0E7433FFBB90F (void);
// 0x00000470 System.Void Unity.Barracuda.ReferenceComputeOps::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void ReferenceComputeOps_TensorToRenderTexture_m484756EBAB9E23D8EB386A330A4BD05CBCFA1EFB (void);
// 0x00000471 System.Boolean Unity.Barracuda.ReferenceComputeOps::ShouldFlattenInputForDenseLayer(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m4EDF683FE3C75191361208F4431C5757B58477B0 (void);
// 0x00000472 System.Boolean Unity.Barracuda.ReferenceComputeOps::IsFusedActivationSupported(Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_IsFusedActivationSupported_m2753689069A769A4ED07AF670743E7C272003923 (void);
// 0x00000473 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_MatMul_m72D42E7B617541203028189C745EAE329B20B202 (void);
// 0x00000474 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul_m5BF289412CADB8954257DF895033D382D3BE29D6 (void);
// 0x00000475 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Dense_m855B7D0BC03A8DF5FFAC334753DE368253DE3564 (void);
// 0x00000476 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Dense3_m5088E29C8D7CB43F208E8F25239CB5E0BC8137DA (void);
// 0x00000477 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DWinograd_m19FBF00F9189DCF6F885A0BFC5FBFAA009606CFF (void);
// 0x00000478 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv3D_m0EEDD1FB8B5196198AFCA60D3C616B6E70C11CAB (void);
// 0x00000479 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2D_m8C395F718A39D198CE9D5F49F15BB683D56737BA (void);
// 0x0000047A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_DepthwiseConv2D_m7055927965C9822D1F9101499CCAC36F4FCEE23B (void);
// 0x0000047B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DTrans_mDAFCFDA35A921B380CF62BC36D1682A4899D5D94 (void);
// 0x0000047C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample2D_m2B52DDABC617A684DE01BFB6804ACA1A082B8DB4 (void);
// 0x0000047D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample3D_mC3C0124EBF6720F3019A5819F7A954D295FF4DB3 (void);
// 0x0000047E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Resample2D_mAE51608B8FD0B9CDFEF311792A0568C8FA790E4D (void);
// 0x0000047F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceComputeOps_DepthToSpace_m2E7132C0E924DF4107B62C6C2D1B82C19795211D (void);
// 0x00000480 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_SpaceToDepth_m49AD31C10C175D75DEDD157B834C04D4CC6E251C (void);
// 0x00000481 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Pool2D_mF9EFF757A80B0BF58ACA039520759C2090612C5D (void);
// 0x00000482 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_MaxPool2D_m57635074B58E5BEFF315ABAA8476B8D6A8AA18B3 (void);
// 0x00000483 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_AvgPool2D_m3B8F45528B5A3E4405A87A9703AD982278E738CD (void);
// 0x00000484 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalPool2D(System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalPool2D_mC9CE5D474C72C3720DE8E7AD8FA0392B52F4F126 (void);
// 0x00000485 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalMaxPool2D_m7D668FF9C15C1A628DDB87F473D0F5717CF8A11A (void);
// 0x00000486 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgPool2D_m37E0491FFDEE78F5B073B3DDBFB1E69244BEADC5 (void);
// 0x00000487 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgVariancePool2D_m96F51F5D263DA49FE8C6C5E6AA5EF42739123ACF (void);
// 0x00000488 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding_m208B39A8B5E298C1256AC7076F52CEF138113EFD (void);
// 0x00000489 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding3D(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding3D_m108F1CE7CFF3C05EB6C5A202995102B970AFC889 (void);
// 0x0000048A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border2D_m4B827531007267E3928CD6063BE31C2F42D2208E (void);
// 0x0000048B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border3D_m714B7B913885093905CC138DCBDB084EDFF4B0A9 (void);
// 0x0000048C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DReflect_m2ECFED62550A6E4C9B708213F2184773A940CD94 (void);
// 0x0000048D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DSymmetric_mFE0EB011F598CA1D57FE8A1B2D19676BB771C4AB (void);
// 0x0000048E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DEdge_m604B942D8CCA04565FD12D0C5544F5CD5878B93F (void);
// 0x0000048F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_ScaleBias_mBBD7DC87CA0C1B792E73178DF4C2039FCC407EE0 (void);
// 0x00000490 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Normalization_m1684FEAB081AF5ED2DA9674E23D13E4B6859F551 (void);
// 0x00000491 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceComputeOps_LRN_m01F5B129B1313A546709486B553BF705D37B5C3A (void);
// 0x00000492 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Dropout_m4DF43285D85F7C36673BF9D4BADFCB4B9C3E239B (void);
// 0x00000493 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Activation_m072F67AA142BBE0AB38ABAA43DA8F086BE45622B (void);
// 0x00000494 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu_m58AD0876DBA6DD05F3BF8A291F8B1A7230D20587 (void);
// 0x00000495 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_PRelu_mF4C5381A27FCDB91E4C36966DF870E788CD0BA12 (void);
// 0x00000496 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Softmax_m6D53888D61D3FAB09932F5F4889D309AF04C6F1A (void);
// 0x00000497 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogSoftmax_m13C4261EDB14C62A960B04D7027CB6D3536D885B (void);
// 0x00000498 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tanh_m834623EA5F3FA8F3F3DF71F90230AFFDA56607E5 (void);
// 0x00000499 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softplus(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Softplus_m2259E5A43ABB5698DED9C4103D791E459C0EC709 (void);
// 0x0000049A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sigmoid_m7E83A158030433AB695E780C1A76DC3F12054887 (void);
// 0x0000049B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu6_m627AEAD673B09EE8B379D125C3C0EFA96D7DB6AC (void);
// 0x0000049C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Elu_mACD372AAF9FE14080972F5867BCD4B0B7938CC13 (void);
// 0x0000049D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_LeakyRelu_m43C0A24CACFD56AFF8A5D856C1007089313FFE30 (void);
// 0x0000049E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Selu_mD1BCE72FC90AE9B6E8797672899FF2B774A7A49B (void);
// 0x0000049F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Swish_mC505B9F4429EEA6A404D46077AA053D466CFEE39 (void);
// 0x000004A0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Abs_mFDBAD3275867FCDB19E6B78C5ED21FED63A693B8 (void);
// 0x000004A1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Neg_m7283CB2E6375BEDC545E45C83D1EAA4B197A777B (void);
// 0x000004A2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Ceil_mB3A6E4E85CFAAE110F003B2AA3A19F250DE15446 (void);
// 0x000004A3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Clip_m3EE29DCDB4DD62D50FBC65425C19E8BD0CCED361 (void);
// 0x000004A4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Floor_mD6A2C28B84B28EE6F0A823D8164C0F69052359BC (void);
// 0x000004A5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Round(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Round_m9143BFBE3B899B94CF0BE4AB5E73D0A94FC4161C (void);
// 0x000004A6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Reciprocal_m686A123FA15748B9022446B4652CBE9259554934 (void);
// 0x000004A7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Pow_m229351D3968ED09F3BA4827DE9CC9CDC9A7D8676 (void);
// 0x000004A8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Exp_mDEC04E5CE8BD51EE6F7A5E9E4A2F10FE757FE974 (void);
// 0x000004A9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Log_m6FB98230F78F6487327C166D3EE4ED5A29007C12 (void);
// 0x000004AA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sqrt_m846DE0C2FE7F4DDF2EE7B8E93A0ECDCAF34F5679 (void);
// 0x000004AB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acos_m4C87C0EC0737F50923B3D1266422FD81E8B65DAB (void);
// 0x000004AC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acosh_m1E280D79A32D641EFCFCE573B6B0B5B38F079D32 (void);
// 0x000004AD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asin_m7957F375356127782A28F1EB399E8C2CAB97504D (void);
// 0x000004AE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asinh_m79760FBA90B7E5B0455AA9CC08F03304E8AE5D1B (void);
// 0x000004AF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atan_m92D87BE083D9C8BBCD0FBECF91C668A69F3F98ED (void);
// 0x000004B0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atanh_m3515ED5E2F49262FCDB9936B774C4CFDA4F30C90 (void);
// 0x000004B1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cos_m2BBEE5D7364F038C175F50147DB5C38818800735 (void);
// 0x000004B2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cosh_m7D844C8462DAE6D0A58E773EBE68060509A24738 (void);
// 0x000004B3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sin_mE2173E8B087346DB0C4E7260C1AC1B51E5D4D272 (void);
// 0x000004B4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sinh_m2FF71210D8F20EDC7369972C23C2087F4E110259 (void);
// 0x000004B5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tan_mE745FFC785E54FBEC089ADD7B0508AC53825593F (void);
// 0x000004B6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Expand_mA073F6F9C3B75865FE16FC6CD532BAD8333A49F5 (void);
// 0x000004B7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_ElementwiseWithBroadcast_m21C92CF1EB027B927975315E0D955FB2A66BAB2B (void);
// 0x000004B8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Add_m89103D015ADA20B87CC1498A4DE9FE5B2BE459DB (void);
// 0x000004B9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Sub_m8E439F89C1698E2C7B6EE0CC4DDC8D0E8E09E778 (void);
// 0x000004BA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mul_mCF27AF6011F95B5DEC76E45D26D8A474B1EF6192 (void);
// 0x000004BB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Div_m12654E5CE8ACD0EC04F229C8838E4312262426B4 (void);
// 0x000004BC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Pow_m404C8E200A50CC31E40DBBE6161859302FB75E2F (void);
// 0x000004BD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Min_m7D5CB28E5506DC42B7C2ABE56F0E7FFC25D3F727 (void);
// 0x000004BE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Max_m7B435B1EDE01A15D7F8AC467BE1D6C7A424DF492 (void);
// 0x000004BF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mean_mE0623E979ED4F4B82FB1512EC586C2DA5CD062CA (void);
// 0x000004C0 System.Void Unity.Barracuda.ReferenceComputeOps::FillReducePermute(System.Int32)
extern void ReferenceComputeOps_FillReducePermute_mD8ED2661B19366FA903221EF6B73EAAFFE9A0387 (void);
// 0x000004C1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reduce(Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Reduce_mF78EA7C2E36826F145ECF41670C74334A6BD558E (void);
// 0x000004C2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMax_m162A9E292C0098F3A90BD855CD1FD20CC8A32A2A (void);
// 0x000004C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMin_m3BAAC2ED2F9BB2D396B9330601AC1D9770442BA6 (void);
// 0x000004C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMin_m9B28CFE4396661EFC463EF7ED6B3235CC292B878 (void);
// 0x000004C5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMax_m7D7511D33D7276539678F6B3D990774AB7B4ABEE (void);
// 0x000004C6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceSum_m3EF0B5221FAF15E68EC2C49DDFD949AAAE548CA8 (void);
// 0x000004C7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMean_m57A374630D6C5FFC73F8B33A8A001618F7CFD9E5 (void);
// 0x000004C8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceProd_m6436A6291861EBA286787DCB40410FAFEA4AFD2B (void);
// 0x000004C9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Greater_m47A06B2EA88A3DC28FE0320931ECE793A2A7E9F8 (void);
// 0x000004CA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GreaterEqual_mB73659554E2E7FF6A9E2DC804507074925CBF399 (void);
// 0x000004CB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Less_mAD45BFFF656158E4052BC0E2F95A6D8FDBF338CE (void);
// 0x000004CC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LessEqual_m00A9B1E66BB2B99B6E26A3B0D23AC92B8B4A995C (void);
// 0x000004CD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Equal_mC266A2909A7C15BBB3264B0DBF51451E911FC738 (void);
// 0x000004CE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalOr_mB91503CFCBD5C8209E1717A3BDB4EAF73B5CE8BC (void);
// 0x000004CF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalAnd_m52E7D7D7599565FDD24F3F9C079359632AC361E8 (void);
// 0x000004D0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalXor_m0F7D08FED2C01BEA69BE622DBC62A3B4329DEB92 (void);
// 0x000004D1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalNot_m98AB6EADD8C2F5D2EC2774802AFC719044B25F2B (void);
// 0x000004D2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sign(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sign_mA98804879A4F14F00AF70B43ED4A4ED7FE38238A (void);
// 0x000004D3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Where_mB4E292A051673B571C13940A2AE0113A4515B3A7 (void);
// 0x000004D4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceComputeOps_OneHot_m73A829E5811A7BA8EE3CE62917D5F8FEA3450530 (void);
// 0x000004D5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_NCHW_m92BE0B60520B356F17F52885CA77E7F3055D0279 (void);
// 0x000004D6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_mF6EB780C38B1938BCA139A33097141886997A8D7 (void);
// 0x000004D7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Flatten_m1889DD3B9D7EF058FBAE736E6C030E24B5D2C318 (void);
// 0x000004D8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Reshape_mF4EFC3B7D99526AA111ED8060D4B1CCEC447254C (void);
// 0x000004D9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Transpose_m2D3640F935205FD218FC1D02593355C94467D927 (void);
// 0x000004DA System.Int32[] Unity.Barracuda.ReferenceComputeOps::GetOnDeviceShape(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_GetOnDeviceShape_mEA02DAD8515B92AE92CD4CD6F61532A53281145E (void);
// 0x000004DB System.Int32[] Unity.Barracuda.ReferenceComputeOps::ConvertPermutationToDeviceLayout(System.Int32[])
extern void ReferenceComputeOps_ConvertPermutationToDeviceLayout_mF0FB4D08EFEEBAA5636CA9ACA3080E8842109F44 (void);
// 0x000004DC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose8D(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose8D_m34273C627D2602E362EB7E7D9F9F4C4664A038EB (void);
// 0x000004DD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose_m2DA0BA39D4948CD67DC4E1191C06610CD07B0F6F (void);
// 0x000004DE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GetTensorInCurrentMemoryLayout(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GetTensorInCurrentMemoryLayout_m41B9A378AB8CF7C1A9C98DC4EE61E006AEAF2ED5 (void);
// 0x000004DF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::TransposeToChannelFirst(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_TransposeToChannelFirst_mEE097A9D1D0CAB4B2DFAF80BDFA489B4D1A30F40 (void);
// 0x000004E0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Concat_m52F38FB853513F52F2F2EB9348027E24E8DBC6A3 (void);
// 0x000004E1 System.Void Unity.Barracuda.ReferenceComputeOps::Set8DParamsForShader(System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Set8DParamsForShader_m03228CAAB648DD7FE5780B5B512F86B8DEB0EF4A (void);
// 0x000004E2 System.Void Unity.Barracuda.ReferenceComputeOps::Set8DParamsForShader(System.Int32*,System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Set8DParamsForShader_m802176414520F3DA1BA60F62A97F45EB7CDBDAE6 (void);
// 0x000004E3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_StridedSlice_mF38ECEB036A0FF257064501C50FBA3E9DD1328B4 (void);
// 0x000004E4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Tile_m43B959019023B6F085B8694F28C456E68473AC1B (void);
// 0x000004E5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Gather_m853C4BAA2874EA13380F866955AC61C80B5E0174 (void);
// 0x000004E6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Copy_mFDB097EE0A824EA2015E8069713464E406C43390 (void);
// 0x000004E7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Prepare_m49ACD3A62F871AC44AB630B5E019BF6E83B336DB (void);
// 0x000004E8 System.Void Unity.Barracuda.ReferenceComputeOps::.cctor()
extern void ReferenceComputeOps__cctor_m03D36AAC00E0328E863A5F4ACACAE2E520906CB3 (void);
// 0x000004E9 System.UInt32 Unity.Barracuda.ComputeFunc::get_threadGroupSize()
extern void ComputeFunc_get_threadGroupSize_m2F7E9003C06C3EC3BE1356303ADD0662A2C0FD40 (void);
// 0x000004EA System.Int32 Unity.Barracuda.ComputeFunc::get_width()
extern void ComputeFunc_get_width_m025759585897ECD467C6E73686BCDA8A20BD11D5 (void);
// 0x000004EB System.Int32 Unity.Barracuda.ComputeFunc::get_height()
extern void ComputeFunc_get_height_m174A3D762763192F67CF141CEB53D83D165933FD (void);
// 0x000004EC System.Int32 Unity.Barracuda.ComputeFunc::get_depth()
extern void ComputeFunc_get_depth_m27A7A2A0E50FD3F450AD01CA9A5F85E8505BB8FA (void);
// 0x000004ED Unity.Barracuda.ComputeFunc/TensorDecl Unity.Barracuda.ComputeFunc::GetTensorDecl(System.String)
extern void ComputeFunc_GetTensorDecl_m4042E73E1E6CDE3514B1462AD5AB3ABDE38DCC06 (void);
// 0x000004EE System.Int32 Unity.Barracuda.ComputeFunc::GetTensorData(System.String)
extern void ComputeFunc_GetTensorData_mE4BBF9E8623D2B731D3FCAD8C742838B08201456 (void);
// 0x000004EF UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::get_dummyTexture2D()
extern void ComputeFunc_get_dummyTexture2D_m07A372AD52019E40CDF0B228C0A58C17B13A25CE (void);
// 0x000004F0 UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::get_dummyTexture3D()
extern void ComputeFunc_get_dummyTexture3D_m4B1F4811745A0A6C9A5028AD5801FAF7574571ED (void);
// 0x000004F1 UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::get_dummyTexture2DArray()
extern void ComputeFunc_get_dummyTexture2DArray_m363E218CD132AB75A0253A16FA4BAE76055E8689 (void);
// 0x000004F2 System.Void Unity.Barracuda.ComputeFunc::.ctor(Unity.Barracuda.ComputeShaderContext,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_mB18BD7FE3A993830F933080E40209C5C9EF38302 (void);
// 0x000004F3 System.Void Unity.Barracuda.ComputeFunc::.ctor(Unity.Barracuda.ComputeShaderContext,System.String)
extern void ComputeFunc__ctor_mE72583BEE682EFE80CBAEF2226B000C2704B66EC (void);
// 0x000004F4 System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m5240B86B2C6218E7B4427AEC1A0DCC0B1D2F7E7F (void);
// 0x000004F5 System.Void Unity.Barracuda.ComputeFunc::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m75809DABD3AA12B2933EF33C614F40508786AC48 (void);
// 0x000004F6 System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.Texture,System.Int64)
extern void ComputeFunc_SetTensor_m3D89C87997B98979986F8D4A163053C629454B54 (void);
// 0x000004F7 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_mDC6003202B8C90927F51C564C14EA7D85ECEE7B6 (void);
// 0x000004F8 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m7683508ED3D2C10AA27E80A6B74A76984986E355 (void);
// 0x000004F9 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_m63A49270BA6566DECB62C92542339251CDBE30C4 (void);
// 0x000004FA System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_m52CCC193D62126AA027E316D3826474424B77DD3 (void);
// 0x000004FB System.Void Unity.Barracuda.ComputeFunc::SetTexture(System.String,UnityEngine.Texture)
extern void ComputeFunc_SetTexture_m14B449AED78E27755422090DF51AADA1AC08F1CC (void);
// 0x000004FC System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeFunc_Dispatch_m3BD6D194D7D2BD47623441CFAD23F2EE6315B237 (void);
// 0x000004FD System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_Dispatch_mF129519DCEA1F6A773119ED7DC809DE5372D02AE (void);
// 0x000004FE System.Int32 Unity.Barracuda.ComputeFunc::IntDivCeil(System.Int32,System.Int32)
extern void ComputeFunc_IntDivCeil_m421B6ABD1D4AD6BA43791FBDC4663502D21E0038 (void);
// 0x000004FF System.String Unity.Barracuda.ComputeFunc::FindBestKernelMatchingDimensions(Unity.Barracuda.ComputeShaderContext,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_FindBestKernelMatchingDimensions_mDCCAAC69FACC3DCA110B10197EBFA255E44E15AE (void);
// 0x00000500 System.Void Unity.Barracuda.ComputeFunc::.cctor()
extern void ComputeFunc__cctor_m33A512979C61E778498A141D2CDE8ABFF712BD2F (void);
// 0x00000501 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_ShapeId()
extern void TensorDecl_get_ShapeId_mDB726E90755857F4257DC21F865F3DA31D557B32 (void);
// 0x00000502 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_ShapeId8D()
extern void TensorDecl_get_ShapeId8D_mBA6B0FE1E9C5A6BE07A714D3A874535F0D37A4B9 (void);
// 0x00000503 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_InfoId()
extern void TensorDecl_get_InfoId_m18E2715CD57BF6BEA5A49DE1FFFBAE242820C14F (void);
// 0x00000504 System.Void Unity.Barracuda.ComputeFunc/TensorDecl::.ctor(System.Int32,System.Int32,System.Int32)
extern void TensorDecl__ctor_m23281FFEF10C87E30BD42ACAD57EA74F2BCFF9B1 (void);
// 0x00000505 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Int32)
extern void UnsafeArrayTensorData__ctor_m955268E825A4B8177CBDCBCA26102EB3124B7424 (void);
// 0x00000506 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData__ctor_mC6881E0867F1B3C964415CF7424CD153E25FED9D (void);
// 0x00000507 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void UnsafeArrayTensorData__ctor_m9B6294FA53404A7BFF0FE590AE793435C05A977A (void);
// 0x00000508 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void UnsafeArrayTensorData__ctor_m189B873E2573966D526BD0CB31EE177A55E7470D (void);
// 0x00000509 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void UnsafeArrayTensorData__ctor_m19166D554FA4B8B9585238329CB4101129CAAFC6 (void);
// 0x0000050A System.Void Unity.Barracuda.UnsafeArrayTensorData::Finalize()
extern void UnsafeArrayTensorData_Finalize_mC142B3E7625111506420FD23EC6BFAA4F6092C09 (void);
// 0x0000050B System.Void Unity.Barracuda.UnsafeArrayTensorData::Dispose()
extern void UnsafeArrayTensorData_Dispose_m60E8E3BBB2FE24F201866530151EC269F04BEAB5 (void);
// 0x0000050C System.Void Unity.Barracuda.UnsafeArrayTensorData::Reserve(System.Int32)
extern void UnsafeArrayTensorData_Reserve_m8825259F134624C6C88EA64008D916C0DD431CFF (void);
// 0x0000050D System.Void Unity.Barracuda.UnsafeArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void UnsafeArrayTensorData_Upload_mDD0CA115D8E615D235F24C0F45F95BA8DFEECB8D (void);
// 0x0000050E System.Single[] Unity.Barracuda.UnsafeArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData_Download_m19C4EACD453004DB02D2E9F40E8E6D630AA0610A (void);
// 0x0000050F System.String Unity.Barracuda.UnsafeArrayTensorData::ToString()
extern void UnsafeArrayTensorData_ToString_mF0E3661D824AA87BA33264D69C0552E475490786 (void);
// 0x00000510 Unity.Barracuda.BLASPlugin Unity.Barracuda.UnsafeArrayCPUOps::get_blas()
extern void UnsafeArrayCPUOps_get_blas_m3401971DAC22E49F2A2B2BC1F126113DA2D8B5DF (void);
// 0x00000511 System.Void Unity.Barracuda.UnsafeArrayCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void UnsafeArrayCPUOps__ctor_m0BF919A3BC4B0937D1A775E3AB5B9355DE69B805 (void);
// 0x00000512 Unity.Barracuda.UnsafeArrayTensorData Unity.Barracuda.UnsafeArrayCPUOps::Pin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Pin_mC5843B2D7D3C0315D00E85F781FC75D941AA7126 (void);
// 0x00000513 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Parallel_For(System.Int64,System.Int64,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_Parallel_For_m90569504ADD71A54ACBA00EF741F6C3F829060FE (void);
// 0x00000514 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Neg(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Neg_m99A1D720ADB7329F5D0FF18BE7FF65F83D9FD91E (void);
// 0x00000515 System.Void Unity.Barracuda.UnsafeArrayCPUOps::NegInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_NegInnerLoop_mB452B296DA9B6FBFC51426159F1F8D6AA0B2A417 (void);
// 0x00000516 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu_m79E07759152CF73DD16EBC6F2ED9FA17F7B71B41 (void);
// 0x00000517 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ReluInnerLoop_m8926CC01FF9F0F826DEE774D400AA9060B509243 (void);
// 0x00000518 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu6_m9B2B7A696EF6C7163FD3C62FDAA46C810C4C7534 (void);
// 0x00000519 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Relu6InnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_Relu6InnerLoop_mB91C862D3F908B56CC0BCA4A0CC01F467C7104BD (void);
// 0x0000051A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_LeakyRelu_m8225200C4BE96B07B22165A50B8D4184E23B670F (void);
// 0x0000051B System.Void Unity.Barracuda.UnsafeArrayCPUOps::LeakyReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_LeakyReluInnerLoop_mB969037F1073A30B92982E792E54577F7E20E7D4 (void);
// 0x0000051C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_Elu_mCDECDD426C8B83A49170818B4EFB8D030F0F812C (void);
// 0x0000051D System.Void Unity.Barracuda.UnsafeArrayCPUOps::EluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_EluInnerLoop_m3719DE842DE081740D38DEA029EB4E73E4909F97 (void);
// 0x0000051E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_PRelu_mE059AA816743D882A7D72C8DB865487BEF0DEEA3 (void);
// 0x0000051F System.Void Unity.Barracuda.UnsafeArrayCPUOps::PReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_PReluInnerLoop_m107AC085189F2C84703F7A3FD2012A479F20FB32 (void);
// 0x00000520 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Softplus_mD9524DFFDA70FB49A8CA6DDF06762EA2CCDD59EF (void);
// 0x00000521 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SoftplusInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SoftplusInnerLoop_mF9727282620E2519EC5DA1FDB602FC86B73C5392 (void);
// 0x00000522 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sigmoid_mF269C9DE55C9F27CBC00130DC67BE3A164562712 (void);
// 0x00000523 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SigmoidInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SigmoidInnerLoop_mEFC296328B24299AD191859F4C3CD9F61A426AA4 (void);
// 0x00000524 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Swish(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Swish_m13D9859E7AE4DCE3F46D40FD9586231B823C8602 (void);
// 0x00000525 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SwishInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SwishInnerLoop_m817D50E2BFB96172218BAC3FBA1B43B40F226B77 (void);
// 0x00000526 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Exp(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Exp_mC1D9BF196B2A7DAC0A8492E5D6D6879C5A87507F (void);
// 0x00000527 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ExpInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ExpInnerLoop_m4DDA6E59F4E0DF4F287079491663CFA9FBD6E754 (void);
// 0x00000528 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sqrt_m0A2670B0FF2ABB47C532C55B2CCA15149B45442F (void);
// 0x00000529 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SqrtInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SqrtInnerLoop_mF8505429B1D27CA6BF136FB4FAC8D0B531064FD5 (void);
// 0x0000052A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tanh_m1F12592FDB7297AF9AB7C5917B51769C4BF4DC7A (void);
// 0x0000052B System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanhInnerLoop_m1838E3009DA4BAE3743538BE797790AA85C5FF57 (void);
// 0x0000052C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acos_m3B09AB759428CE0D02C5610BE18FC109247D86DC (void);
// 0x0000052D System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcosInnerLoop_mEC8BFA293E80FE641569EA041C6D31E57D3EB9F0 (void);
// 0x0000052E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acosh_mF5F7491F29D1A7A8BE73699B2BEFC50E0F320291 (void);
// 0x0000052F System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcoshInnerLoop_mF57A6832809EE4224BF7A69188B07B3309B51487 (void);
// 0x00000530 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asin_mFF9A622286E193D964F12C91B68D570C87B7F4BE (void);
// 0x00000531 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinInnerLoop_mCFFF3D8736AB676017A07EB31C7DD1BAF99592A2 (void);
// 0x00000532 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asinh_m11C503668CA94822BA79EDDEF169F70839FC68A7 (void);
// 0x00000533 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinhInnerLoop_m51AB4B256197E4739BDDDE8BF714781D8DAA8F26 (void);
// 0x00000534 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atan_m7B7908C1C2186B3C09172BADE459B40DCBF36DA8 (void);
// 0x00000535 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanInnerLoop_m6422F5CC06D0F14B35A5A6555E5DC54F67697E8A (void);
// 0x00000536 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atanh_m9F7383CFE82638EECB2AFD51C2C6D14CCC96CA71 (void);
// 0x00000537 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanhInnerLoop_mD7953D92A7259B6CA029BD6B685A58F8CF1D59AD (void);
// 0x00000538 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cos_m0E75BFAA38BA939F3BA3E54BADF4D9118EC85100 (void);
// 0x00000539 System.Void Unity.Barracuda.UnsafeArrayCPUOps::CosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CosInnerLoop_m6853D4A42E3C0AC2A59A8DDA4A184E81FFCAA3BC (void);
// 0x0000053A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cosh_m7A5D4B88F171A31428DB3429DA1E4A6EBC57EAD2 (void);
// 0x0000053B System.Void Unity.Barracuda.UnsafeArrayCPUOps::CoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CoshInnerLoop_m40EC8D7A314BB0C78E6E1047460EC0DF32A73AFD (void);
// 0x0000053C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sin_m8C82F58FE17C2A2A935CB838B9D185807D3DA165 (void);
// 0x0000053D System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinInnerLoop_m441441D5892996F1995E62804BEB783CE980913D (void);
// 0x0000053E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sinh_m06BD6A47C5B3946C39E3B70AA0E81CEDB6F833C6 (void);
// 0x0000053F System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinhInnerLoop_m5C2CAFEC3615962ED82300027C018D824D47082C (void);
// 0x00000540 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tan_m99F7F1F17AF3884A8E026124AD3E7C2BBF0A3E8D (void);
// 0x00000541 System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanInnerLoop_m9C0D9CB1AECE2E098AFDA66B86D6FE0980CC2E7C (void);
// 0x00000542 System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mCCCAE5A44C9EAC4CD0068A8A2AA24829D3EC0B05 (void);
// 0x00000543 System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m0B5D360BD977B7277326CC4CC4AE70B97854F660 (void);
// 0x00000544 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m43A5E4FB601947C8F71E5A349870E54F4D3964E8 (void);
// 0x00000545 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Add(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Add_m9A8982047953ABFEFB99A54A0B71666DE228CBBE (void);
// 0x00000546 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Sub_m1C0F8972946DC09B4F4EA5329F92CFD2EDCCC56B (void);
// 0x00000547 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Mul_m41BB7C107F19EFBF7F613BD22D338909DF9F6990 (void);
// 0x00000548 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Div(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Div_m4452143F74476BAF5C2AF7D5689A09972D56D9CA (void);
// 0x00000549 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Min(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Min_m7F449E02903D9F023D48C741F0087CAA6A59DCA0 (void);
// 0x0000054A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Max(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Max_mAB75F6D6FFBD1CCF6A492160D0FC9F9A62AE81CE (void);
// 0x0000054B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Greater_mC1954375D843DB8C6D28D5D62F1B4BFD48B3E794 (void);
// 0x0000054C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GreaterEqual_mA82D21F588C836FD1DE3AA44BC3CC851E8D19FCD (void);
// 0x0000054D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Less_m046561FC4AC154BBF86D4036B7DBB9AA6E6FEDA9 (void);
// 0x0000054E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LessEqual_mF9A6A04EA0E4D965EDF0D5921EECB2161FDFBEC6 (void);
// 0x0000054F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Equal_m20299ECE854C9472B5C5CD7D3196D0EAD6A36021 (void);
// 0x00000550 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalOr_mC9E72F12DD8D2C027B2C2B73C3BF88968F78D9E3 (void);
// 0x00000551 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalAnd_m841645B010C2C72224B4C1115F2F8B0A9476A07C (void);
// 0x00000552 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalXor_m9D195BFDFE9CA261E26501D8909E3F949DEB8DEF (void);
// 0x00000553 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalNot_mE88189F4B6F512DCEFDC457D3B53B6B441BBE409 (void);
// 0x00000554 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sign(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sign_mBB458262B9E54AB8A3A289FA769A89BC860AD2E6 (void);
// 0x00000555 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Where_mFDCBD958A08E7F9A29A13EBDB5D346F99D50D0A8 (void);
// 0x00000556 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyLogicalOperator_m4225B6B598B7A207593E9DB6933E6584B742AB82 (void);
// 0x00000557 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void UnsafeArrayCPUOps_MatMul_mF2AE9E87C0EB5961519B6DED517DF56B2D60F724 (void);
// 0x00000558 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Dense_mCD60928A9654C5EC259FBB925A6E3209CFA0FB0B (void);
// 0x00000559 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyFusedActivation(Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_ApplyFusedActivation_m14D65E5CF00D5BF3549FA223D3A56948D65A9E57 (void);
// 0x0000055A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_MaxPool2D_mD2508D0ACE40D4072DB8E652F6A03ADC49EFB35D (void);
// 0x0000055B System.Void Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_MaxPool2DInnerLoop_mF8AF0B7716D9F8C116B127B83BD233ED29A8834B (void);
// 0x0000055C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_AvgPool2D_mE4DF4E5B3AFCB1E7FC0EBE6AA6E9FDDAEFDFABCF (void);
// 0x0000055D System.Void Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_AvgPool2DInnerLoop_m4D889C6790C03386C9AA544AA031797EFEEF4040 (void);
// 0x0000055E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalMaxPool2D_mA1984969D7A46CE5174997B615FF1F02BD5AE46C (void);
// 0x0000055F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalAvgPool2D_mF2F572296CAB2616EB2D6C6FB06C959A4357B431 (void);
// 0x00000560 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Conv2D_m85DEEAAF1FEAD9BEDAFCF912ECF568F75149AED8 (void);
// 0x00000561 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2Col(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2Col_m4CE0BE19058A3838A0407CEEAFEA5DF3AA537D6A (void);
// 0x00000562 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Im2ColInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_Im2ColInnerLoop_m51D863F02576049846F65C2BF0F4890A365F7F4E (void);
// 0x00000563 System.Int32 Unity.Barracuda.UnsafeArrayCPUOps::SafeIntDivCeil(System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_SafeIntDivCeil_m92F3535AFC7A55D2FE201692F1560FA35E7A3D4E (void);
// 0x00000564 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m233D817EC376E93F8B445F4C1D1A2305C5BE4835 (void);
// 0x00000565 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_DepthwiseConv2D_m1B5D0735CD6BC364B43B746F216F3916D89870DE (void);
// 0x00000566 System.Void Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2DInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mED061C960649ACFD67BBA85A4C531F88D3A5E917 (void);
// 0x00000567 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyPadding_mFE57C2C0BC1B4AC21FBCE1700E084E40F7EF58DA (void);
// 0x00000568 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void UnsafeArrayCPUOps_Border2D_m7B1B0B362DFC5F357137F02480A3816092F8B475 (void);
// 0x00000569 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DEdge_m8948F1F6934B4D11CBA5449E401B3664691DCC3A (void);
// 0x0000056A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DReflect_mE37DBAE20BF3F20057829A4EA7D7674182079F74 (void);
// 0x0000056B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DSymmetric_m3CE4FE78C7F7B2E4F942A4FECC714C07442454DF (void);
// 0x0000056C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CopyAndReshape_m68A6948132EE02B5AC6EEFEE02973349A1F86293 (void);
// 0x0000056D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_ScaleBias_m3B17445E0E004518D87C3817AC0A277917269E46 (void);
// 0x0000056E System.Void Unity.Barracuda.UnsafeArrayCPUOps::ScaleBiasInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_ScaleBiasInnerLoop_m164E99B8CAD8C3AC1251950E0BC5E2BC40593405 (void);
// 0x0000056F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Prepare_m880BF8665E2FC582802236E5523EF3E8878662B9 (void);
// 0x00000570 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::.ctor()
extern void U3CU3Ec__DisplayClass78_0__ctor_m4A2E4A4863E709E8FE483B2AFA3B58AD17C86AA1 (void);
// 0x00000571 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::<MaxPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass78_0_U3CMaxPool2DInnerLoopU3Eb__0_m5F837706A695C04BE632EDFE7054D92CC5689496 (void);
// 0x00000572 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::.ctor()
extern void U3CU3Ec__DisplayClass80_0__ctor_m77DA6A58DAB32C10A016A20C12330449E1B165C1 (void);
// 0x00000573 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::<AvgPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass80_0_U3CAvgPool2DInnerLoopU3Eb__0_mE937FD44EC8FBC298F43741D73DAACC7EE28B5CF (void);
// 0x00000574 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::.ctor()
extern void U3CU3Ec__DisplayClass85_0__ctor_mD305039E2C6872521507966C2E3BC1B5F90DA15E (void);
// 0x00000575 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::<Im2ColInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass85_0_U3CIm2ColInnerLoopU3Eb__0_mCAAD3595A18692037D4F255E6C2752F9C58019F4 (void);
// 0x00000576 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::.ctor()
extern void U3CU3Ec__DisplayClass89_0__ctor_m884464EC4FB755CF52B19D2E0E1B66B4E963AAAF (void);
// 0x00000577 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass89_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_m5CF479F5B9BD84C4C351AF413311766A4F9DD294 (void);
// 0x00000578 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::.ctor()
extern void U3CU3Ec__DisplayClass90_0__ctor_m823476DD25DA460E917AD4FE6336C751ABFCAF45 (void);
// 0x00000579 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_1::.ctor()
extern void U3CU3Ec__DisplayClass90_1__ctor_m87CE5E963CEA56C03F2FCF100D680EBAA607FB93 (void);
// 0x0000057A System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_2::.ctor()
extern void U3CU3Ec__DisplayClass90_2__ctor_mB32B729737113898CEF252D20032F2D6AB3AF4AF (void);
// 0x0000057B System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_2::<ApplyPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass90_2_U3CApplyPaddingU3Eb__0_m4CA1041B4DC775CED37330C99D5ABC52CA115D07 (void);
// 0x0000057C System.Void Unity.Barracuda.InnerLoop::.ctor()
extern void InnerLoop__ctor_m1AB2AF63F6F6769DF47B8A0B04C3DC3D641AFA80 (void);
// 0x0000057D System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mDA30A635BAACDC626320CD7C0901B4AFEED790BA (void);
// 0x0000057E System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_m6D22A9AD25255838C932E9AA10A6345D78219040 (void);
// 0x0000057F System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_mDF5B031649C59202991505B77BC577BB6D66563D (void);
// 0x00000580 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_mEC1944C93803639FE2C65B77E34815583DFD1A0C (void);
// 0x00000581 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*)
extern void InnerLoop_SetState_m78FC56ECD45BD57B808F4E475CFFE5741A736083 (void);
// 0x00000582 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m82069F9440C68C17268DF970EA3209CC6DEB916F (void);
// 0x00000583 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_mFE205F29E49D17CE4C1B4626F946FD91B88A8C26 (void);
// 0x00000584 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single)
extern void InnerLoop_SetState_mEFFCDC5C3129A9973B2FDDF048CFE0979128EF11 (void);
// 0x00000585 System.Void Unity.Barracuda.InnerLoop::SetState(System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Single,System.Int32,System.Int32)
extern void InnerLoop_SetState_mEEFA711EB5EE7CA53C2BE7476499514716766E9B (void);
// 0x00000586 System.Void Unity.Barracuda.InnerLoop::NegInnerLoop(System.Int64)
extern void InnerLoop_NegInnerLoop_m45491AC3915C3E90DDE64E02FA0417B08592E34C (void);
// 0x00000587 System.Void Unity.Barracuda.InnerLoop::ReluInnerLoop(System.Int64)
extern void InnerLoop_ReluInnerLoop_mF7BDCC89835CE37283EA786029BAF8683318248A (void);
// 0x00000588 System.Void Unity.Barracuda.InnerLoop::Relu6InnerLoop(System.Int64)
extern void InnerLoop_Relu6InnerLoop_m169CC432927660996E564773BC2A8CD10F196C65 (void);
// 0x00000589 System.Void Unity.Barracuda.InnerLoop::LeakyReluInnerLoop(System.Int64)
extern void InnerLoop_LeakyReluInnerLoop_mB5F05B5C23B5839FB26A4C02C3D8A0E04EDDD727 (void);
// 0x0000058A System.Void Unity.Barracuda.InnerLoop::EluInnerLoop(System.Int64)
extern void InnerLoop_EluInnerLoop_m0A09C9F3C7D3D44DEC22E9A9B0B1902554230BF1 (void);
// 0x0000058B System.Void Unity.Barracuda.InnerLoop::PReluInnerLoop(System.Int64)
extern void InnerLoop_PReluInnerLoop_m8A9698F9E0C75E68C5564844C249C563487D43A2 (void);
// 0x0000058C System.Void Unity.Barracuda.InnerLoop::SoftplusInnerLoop(System.Int64)
extern void InnerLoop_SoftplusInnerLoop_mA1B3A9715A66B1154CFF43C17C90DCA298E49E6D (void);
// 0x0000058D System.Void Unity.Barracuda.InnerLoop::SigmoidInnerLoop(System.Int64)
extern void InnerLoop_SigmoidInnerLoop_mAB609F410BFAC96DC174D1ECDAB841A708BD996D (void);
// 0x0000058E System.Void Unity.Barracuda.InnerLoop::SwishInnerLoop(System.Int64)
extern void InnerLoop_SwishInnerLoop_m964C374AC29A190E8A31886ABEF5CDD13A55C9A0 (void);
// 0x0000058F System.Void Unity.Barracuda.InnerLoop::ExpInnerLoop(System.Int64)
extern void InnerLoop_ExpInnerLoop_mFD386947E4395FE2C0E879E76E8B1BC5975A0F40 (void);
// 0x00000590 System.Void Unity.Barracuda.InnerLoop::SqrtInnerLoop(System.Int64)
extern void InnerLoop_SqrtInnerLoop_m086753CFA692BB23FEB25F7DDD38888AE055ECE7 (void);
// 0x00000591 System.Void Unity.Barracuda.InnerLoop::TanhInnerLoop(System.Int64)
extern void InnerLoop_TanhInnerLoop_m0D56C152887D8D9BAF112C50ACEEFD1761219EE6 (void);
// 0x00000592 System.Void Unity.Barracuda.InnerLoop::AcosInnerLoop(System.Int64)
extern void InnerLoop_AcosInnerLoop_mF96105E71AE4FA12223B8C1C82949CE1FF92773D (void);
// 0x00000593 System.Void Unity.Barracuda.InnerLoop::AcoshInnerLoop(System.Int64)
extern void InnerLoop_AcoshInnerLoop_mE94B143127DF97A4C935D60662BE05417344E6C0 (void);
// 0x00000594 System.Void Unity.Barracuda.InnerLoop::AsinInnerLoop(System.Int64)
extern void InnerLoop_AsinInnerLoop_m1C1BB2866B4F214A852A9C90DDD4079071A91F43 (void);
// 0x00000595 System.Void Unity.Barracuda.InnerLoop::AsinhInnerLoop(System.Int64)
extern void InnerLoop_AsinhInnerLoop_mD81680641E181101116C5594EE858CE0BD8DCDEF (void);
// 0x00000596 System.Void Unity.Barracuda.InnerLoop::AtanInnerLoop(System.Int64)
extern void InnerLoop_AtanInnerLoop_mF6E508D6BA48144E971A001D01B7526866A0D3B3 (void);
// 0x00000597 System.Void Unity.Barracuda.InnerLoop::AtanhInnerLoop(System.Int64)
extern void InnerLoop_AtanhInnerLoop_m9300673FD5A4F6A5AAC30B6CD174920D90768573 (void);
// 0x00000598 System.Void Unity.Barracuda.InnerLoop::CosInnerLoop(System.Int64)
extern void InnerLoop_CosInnerLoop_m6CAE1D4F94BE2AE573F6A446D7646107044DF8CF (void);
// 0x00000599 System.Void Unity.Barracuda.InnerLoop::CoshInnerLoop(System.Int64)
extern void InnerLoop_CoshInnerLoop_m05D1506CE337DF77B7BFD912E146BE1C169AE3C8 (void);
// 0x0000059A System.Void Unity.Barracuda.InnerLoop::SinInnerLoop(System.Int64)
extern void InnerLoop_SinInnerLoop_m7A501D0ECEB76DE5EE6225C4709BA1F08A468A08 (void);
// 0x0000059B System.Void Unity.Barracuda.InnerLoop::SinhInnerLoop(System.Int64)
extern void InnerLoop_SinhInnerLoop_mB4DB53A79BA6342F3EE6708D87F2C18CB5E74B30 (void);
// 0x0000059C System.Void Unity.Barracuda.InnerLoop::TanInnerLoop(System.Int64)
extern void InnerLoop_TanInnerLoop_mACE98CAB67E00E64A0E14AD8235F18EBBC54EB9B (void);
// 0x0000059D System.Void Unity.Barracuda.InnerLoop::AddInnerLoop(System.Int64)
extern void InnerLoop_AddInnerLoop_mC479060A1ED168053CAA88FDFB4320DF78BDB9EF (void);
// 0x0000059E System.Void Unity.Barracuda.InnerLoop::SubInnerLoop(System.Int64)
extern void InnerLoop_SubInnerLoop_mF21AC71BCBF0CD5E2112C0AA5DD5CC056BC1406A (void);
// 0x0000059F System.Void Unity.Barracuda.InnerLoop::MulInnerLoop(System.Int64)
extern void InnerLoop_MulInnerLoop_mFCBE29EE61D871D525323CEB836F5426D8B2D002 (void);
// 0x000005A0 System.Void Unity.Barracuda.InnerLoop::DivInnerLoop(System.Int64)
extern void InnerLoop_DivInnerLoop_m02287A5F66AEDA414A2711B814EAA71908F56721 (void);
// 0x000005A1 System.Void Unity.Barracuda.InnerLoop::MinInnerLoop(System.Int64)
extern void InnerLoop_MinInnerLoop_mD2D73D892F6E75C1C7A50380187CF779EB138B0F (void);
// 0x000005A2 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoop(System.Int64)
extern void InnerLoop_MaxInnerLoop_m6F79433322657D03743D5B697974DC09C7E723B7 (void);
// 0x000005A3 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoop(System.Int64)
extern void InnerLoop_GreaterInnerLoop_m4DC2C25DB401809319F554E0C4AE8BB2DEF46B50 (void);
// 0x000005A4 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoop(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoop_m49BC091FC03F5445386537292358C19CFDF52675 (void);
// 0x000005A5 System.Void Unity.Barracuda.InnerLoop::LessInnerLoop(System.Int64)
extern void InnerLoop_LessInnerLoop_m039F298CE0B70491259DAA302ECDC77C28C19E27 (void);
// 0x000005A6 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoop(System.Int64)
extern void InnerLoop_LessEqualInnerLoop_mCFA1573E64F382EFE677691AC6A55DF8F6A8C34C (void);
// 0x000005A7 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoop(System.Int64)
extern void InnerLoop_EqualInnerLoop_m2D2449C92C7BFA70183D75FF3D26BAB6ABFF070B (void);
// 0x000005A8 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoop(System.Int64)
extern void InnerLoop_LogicalOrInnerLoop_mFDEC71FF187C5F3463B710149AB861E6DCB5E839 (void);
// 0x000005A9 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoop(System.Int64)
extern void InnerLoop_LogicalAndInnerLoop_mDBEF77B91629E4C1AE8395AF56EE6A50C71EE452 (void);
// 0x000005AA System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoop(System.Int64)
extern void InnerLoop_LogicalXorInnerLoop_m3B35595C542643F38D139757B5AD91265F6E86C4 (void);
// 0x000005AB System.Void Unity.Barracuda.InnerLoop::WhereInnerLoop(System.Int64)
extern void InnerLoop_WhereInnerLoop_mC48C618D7A947C09CA1719DD9D57BE5D7864D368 (void);
// 0x000005AC System.Void Unity.Barracuda.InnerLoop::AddInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_AddInnerLoopNoBroadcast_mAA7A18BED681A414DDBE239AEA10ECF4C346F10F (void);
// 0x000005AD System.Void Unity.Barracuda.InnerLoop::SubInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_SubInnerLoopNoBroadcast_m8CF3B904AB1385E33DEE7DF22053156B25E33EDF (void);
// 0x000005AE System.Void Unity.Barracuda.InnerLoop::MulInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MulInnerLoopNoBroadcast_mEA66B1D7A6A9CAFED67D68EF888D344094CE0CDF (void);
// 0x000005AF System.Void Unity.Barracuda.InnerLoop::DivInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_DivInnerLoopNoBroadcast_mC23AD221C4F2AC2F22546831FF130831C7166518 (void);
// 0x000005B0 System.Void Unity.Barracuda.InnerLoop::MinInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MinInnerLoopNoBroadcast_m329DD12256F1365ACC2799E83159844D1C853052 (void);
// 0x000005B1 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MaxInnerLoopNoBroadcast_m3348CE843E7B986A576E27D29DA1B883EB1F3C59 (void);
// 0x000005B2 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterInnerLoopNoBroadcast_mC894A8870982E65838D5C48BBBE0BA26AFCE0ED0 (void);
// 0x000005B3 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoopNoBroadcast_m460D3FD4F8739D888D68845041F18FABF908E9A4 (void);
// 0x000005B4 System.Void Unity.Barracuda.InnerLoop::LessInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessInnerLoopNoBroadcast_m2A48616328CD30480561BEE91940F59334E6A6DC (void);
// 0x000005B5 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessEqualInnerLoopNoBroadcast_mDCE01BB92966F3A2B1B4CDF2280E239791841EB9 (void);
// 0x000005B6 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_EqualInnerLoopNoBroadcast_mB6976BBEA4834766E6A99A7D606DBE0A22144938 (void);
// 0x000005B7 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalOrInnerLoopNoBroadcast_m45772BFFB3F3D464C3F7A01D2CEF3FB393B60861 (void);
// 0x000005B8 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalAndInnerLoopNoBroadcast_mEAD2210215ED8918E532BCB25D7E806F35E9877C (void);
// 0x000005B9 System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalXorInnerLoopNoBroadcast_m3DD9D1248B0D8E5A31F7457551E82D7E1372F921 (void);
// 0x000005BA System.Void Unity.Barracuda.InnerLoop::LogicalNotInnerLoop(System.Int64)
extern void InnerLoop_LogicalNotInnerLoop_m5C87B75C7037617F1A15ED5A6528E3DDB85E1D32 (void);
// 0x000005BB System.Void Unity.Barracuda.InnerLoop::SignInnerLoop(System.Int64)
extern void InnerLoop_SignInnerLoop_mE426CB0382284C48BDD712980279EE79727367C2 (void);
// 0x000005BC System.Void Unity.Barracuda.InnerLoop::WhereInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_WhereInnerLoopNoBroadcast_m2C758DD2ACF85E987A2F5311D46BE39E05827142 (void);
// 0x000005BD System.Void Unity.Barracuda.InnerLoop::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void InnerLoop_ClampHWToTensorShape_m88567F80C73EDC7F39F161842A3C9118D6F0E84F (void);
// 0x000005BE System.Void Unity.Barracuda.InnerLoop::Border2DInnerLoop(System.Int64)
extern void InnerLoop_Border2DInnerLoop_m8941B14D72A850132F0CDBE6A8527142D8422733 (void);
// 0x000005BF System.Void Unity.Barracuda.InnerLoop::Pad2DEdgeInnerLoop(System.Int64)
extern void InnerLoop_Pad2DEdgeInnerLoop_m909FED83F8FCEA33A6BD8D54E4B7C2383BA5AAC3 (void);
// 0x000005C0 System.Void Unity.Barracuda.InnerLoop::Pad2DReflectInnerLoop(System.Int64)
extern void InnerLoop_Pad2DReflectInnerLoop_mB0CE090F99E7A2842ECCC17DF8C80290E10F0405 (void);
// 0x000005C1 System.Void Unity.Barracuda.InnerLoop::Pad2DSymmetricInnerLoop(System.Int64)
extern void InnerLoop_Pad2DSymmetricInnerLoop_m06783D95EE38187F1E63819433B5C6F222CA9FCD (void);
// 0x000005C2 System.Void Unity.Barracuda.InnerLoop::ScaleBiasInnerLoop(System.Int64)
extern void InnerLoop_ScaleBiasInnerLoop_m9508FFF8DF776FFA6C8CBDE57DB0B92062B6DD39 (void);
// 0x000005C3 System.Single Unity.Barracuda.InnerLoop::Add(System.Single,System.Single)
extern void InnerLoop_Add_mFBF4055DF41BBA000D072DC2DFF886475E1F3341 (void);
// 0x000005C4 System.Single Unity.Barracuda.InnerLoop::Sub(System.Single,System.Single)
extern void InnerLoop_Sub_m08770E92DFD455C4CBE024A498E1B7A681684E69 (void);
// 0x000005C5 System.Single Unity.Barracuda.InnerLoop::Mul(System.Single,System.Single)
extern void InnerLoop_Mul_m2F6DA7D6904F23725577E89C14A7ACF36838C3BC (void);
// 0x000005C6 System.Single Unity.Barracuda.InnerLoop::Div(System.Single,System.Single)
extern void InnerLoop_Div_m7D6EF86A90A77173D8D68F24924AEB41906D6FE4 (void);
// 0x000005C7 System.Single Unity.Barracuda.InnerLoop::Min(System.Single,System.Single)
extern void InnerLoop_Min_m89A830737D3CBDA6AAF82CE0B13ED1C39E75A295 (void);
// 0x000005C8 System.Single Unity.Barracuda.InnerLoop::Max(System.Single,System.Single)
extern void InnerLoop_Max_m94CA610A4E7BCD0A612285FE2D4E463057243A87 (void);
// 0x000005C9 System.Single Unity.Barracuda.InnerLoop::Greater(System.Single,System.Single)
extern void InnerLoop_Greater_m3A2183E520A5393A89A3B4C9468B622BECF95C53 (void);
// 0x000005CA System.Single Unity.Barracuda.InnerLoop::GreaterEqual(System.Single,System.Single)
extern void InnerLoop_GreaterEqual_m60DD45BA74E86A840BDE8C9C0C02A327540B6667 (void);
// 0x000005CB System.Single Unity.Barracuda.InnerLoop::Less(System.Single,System.Single)
extern void InnerLoop_Less_mA2E6E70BE31AAEDD99E21A05F51CF9C94D71C808 (void);
// 0x000005CC System.Single Unity.Barracuda.InnerLoop::LessEqual(System.Single,System.Single)
extern void InnerLoop_LessEqual_m78AFB7B59C117AC044A23E47C5F16BC3F3A5F37A (void);
// 0x000005CD System.Single Unity.Barracuda.InnerLoop::Equal(System.Single,System.Single)
extern void InnerLoop_Equal_m88EE25274E8ED1A154D76D394D3FD09DC5279987 (void);
// 0x000005CE System.Single Unity.Barracuda.InnerLoop::LogicalOr(System.Single,System.Single)
extern void InnerLoop_LogicalOr_mE74B33176A5621815ADD66ACAC4697E5254975E9 (void);
// 0x000005CF System.Single Unity.Barracuda.InnerLoop::LogicalAnd(System.Single,System.Single)
extern void InnerLoop_LogicalAnd_m74367C538813013A5DCD833CB9A8FD3C91D84B50 (void);
// 0x000005D0 System.Single Unity.Barracuda.InnerLoop::LogicalXor(System.Single,System.Single)
extern void InnerLoop_LogicalXor_mBACB1D32A66454A7136FB08B8489DF8E8A0CE801 (void);
// 0x000005D1 System.Single Unity.Barracuda.InnerLoop::LogicalNot(System.Single)
extern void InnerLoop_LogicalNot_mC7C725DB8E1828C1EC14F9A6882FA3A6B1CB5A4F (void);
// 0x000005D2 System.Single Unity.Barracuda.InnerLoop::Sign(System.Single)
extern void InnerLoop_Sign_m15079258CAAC202DD37F0B9028B4B1C9AA128592 (void);
// 0x000005D3 System.Single Unity.Barracuda.InnerLoop::Where(System.Single,System.Single,System.Single)
extern void InnerLoop_Where_m1DBCACF02E311F5DF26B6A5037620639F5057ACC (void);
// 0x000005D4 System.Void Unity.Barracuda.CompareOps::.ctor(Unity.Barracuda.IOps,Unity.Barracuda.IOps,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void CompareOps__ctor_mD3A189957CBB8EC7928DCB9CFD86857FC0288221 (void);
// 0x000005D5 System.Void Unity.Barracuda.CompareOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void CompareOps_PrepareModel_m6E67839DC225E0DE387A7D580244AEF79CBD637C (void);
// 0x000005D6 System.Void Unity.Barracuda.CompareOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void CompareOps_PreExecuteLayer_m6F93D26B4F79DE59B0A87B8A7E9674D185D69543 (void);
// 0x000005D7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_mCD56B3D878C1274BF66EA7ACF719DA95D0648E9A (void);
// 0x000005D8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m6D34EE18B8B85CB02AA6F3A5AAB031F1A7567669 (void);
// 0x000005D9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Dense_mE60132EB7CCF37848B63E1DF20529A8791210AF0 (void);
// 0x000005DA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Dense3_m1B20AA50AEF24D3371D4AE66547000F4E635114C (void);
// 0x000005DB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2D_m8B22546AD0C30B9D7DBFE202A805FF19CBA156E7 (void);
// 0x000005DC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv3D_mBF56D87379888E0AA8F3DBA7CAF69984E2480950 (void);
// 0x000005DD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_mA839693A02F5A253E1A9EB2BAB14456F371F2032 (void);
// 0x000005DE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mD0F0108CAA3E2D26F677B5BF7249A9290939212E (void);
// 0x000005DF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample2D_m8E44FC950524AC5697D54D52CDD74E16A6BDEC74 (void);
// 0x000005E0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample3D_m17835CC074D1AE989EB1C48EED9FB1483069D24A (void);
// 0x000005E1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Resample2D_mBDBA2B080AE6D1021800DDF20546A0E3EE612D1B (void);
// 0x000005E2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void CompareOps_Unity_Barracuda_IOps_DepthToSpace_m17AE4710D443CC4FCC09649B427545AA687C4F9A (void);
// 0x000005E3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m068BA415E2924812C943007D2A2C9AD361D52BB7 (void);
// 0x000005E4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_MaxPool2D_mCE74864F93B81B27E5FA030C53EBBFA21B7B103D (void);
// 0x000005E5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_AvgPool2D_mF95036836FE90A22DE570B8207867648AA1031D7 (void);
// 0x000005E6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m0810E3C063802321BE1B5D64F29CCA3E3141FFA2 (void);
// 0x000005E7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m5855F4EEE2D3EAD15DEA845DE1394C61C06F0ABF (void);
// 0x000005E8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m36BA9AF243F72FEC2DD916565F6B590BA254D4A2 (void);
// 0x000005E9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border2D_m800F82DC62249DBC0249D1E1C7774FBA8C915F27 (void);
// 0x000005EA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border3D_m6D7DCDE5C4D4EE52A0BF799477DBE1E19C63BE7F (void);
// 0x000005EB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m855C31BE649F918172460BC7A5CEE230D9167C79 (void);
// 0x000005EC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_mB9426BFAFD4D5CF8333A1208BF0B056D9B566A50 (void);
// 0x000005ED Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DEdge_mD8F479F582B4E33DC9667C4E2DF66C4402C2146A (void);
// 0x000005EE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_ScaleBias_m24FD8A722F2EB4F79DEA559D3ABE35BD39665111 (void);
// 0x000005EF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Normalization_m96D04A27533ED159DE572ECA1FF46D4A6B6C34A5 (void);
// 0x000005F0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_LRN_m6436B9E0B5C821D1FCDCCDF400ACF159E19E71EE (void);
// 0x000005F1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Dropout_mE29D6C881B25AF2AC3C47CC626CA01B5715079C0 (void);
// 0x000005F2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomNormal_m5B9EAFEDEA86E1B40C19094A0C655CB5D53EA14B (void);
// 0x000005F3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomUniform_m0C33FE9E338A6F2E503E0708124303CB9B246C67 (void);
// 0x000005F4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Multinomial_mE52A2588988D46CB4A3A1C87EB281295602B23FC (void);
// 0x000005F5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_OneHot_m94DF3CB33A4B03BB6E430FBCE47EABC68D52D175 (void);
// 0x000005F6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_TopKIndices_mA41800137AF92C0574CABDF92E636DE38ED4AEAF (void);
// 0x000005F7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_TopKValues_mA897DA9E0C9583907F08D4F2C1F3D002D2AAE281 (void);
// 0x000005F8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::NonZero(Unity.Barracuda.Tensor)
extern void CompareOps_NonZero_m45768529C9BFE75105D221A504AB9E24EB559D8A (void);
// 0x000005F9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu_m7C15D61CAEF5026FF8D98C877036541D34DF9FB7 (void);
// 0x000005FA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Softmax_m7DCA80332B16E3EC6ED670392A25D4F3B3156BEF (void);
// 0x000005FB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogSoftmax_m97339F3A5C059C21B36A71B3D9E485FDBC2A801F (void);
// 0x000005FC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tanh_mB7743B25816BB5654D1CF25B9B4EEEA87BFC726D (void);
// 0x000005FD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Softplus_m1E8A4D861A3AC1318959241FB81D73552B16CDF7 (void);
// 0x000005FE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sigmoid_m56D2889DC5C21E7360D30CDF18E4448F1B2C0C5B (void);
// 0x000005FF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Elu_m34862BCE8054B4438D74DAE038B3ABDC7C05DE0D (void);
// 0x00000600 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu6_m750FE77D57EFDF9E37C481562FC102BFF5130BE5 (void);
// 0x00000601 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_LeakyRelu_m7B8DEBBCE67974B7841D402B309F26093C53F083 (void);
// 0x00000602 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Selu_m8B545D41DAC171C8BFDDAF3FAF9D6DFA2678EDAA (void);
// 0x00000603 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_PRelu_m4B9BFEF2FF7F75D66BBA42B41EAEF660D569DC5B (void);
// 0x00000604 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Swish_m3808EFEA0F4AC9FDBE18C53D84B19709066C2267 (void);
// 0x00000605 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Abs_m01995C2F99C1A26650C65A15C5E049909C6073D6 (void);
// 0x00000606 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Neg_mD192722D178AE989F50AD3EE7AD0ACA34316F7C4 (void);
// 0x00000607 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Ceil_m8242431D9F00A39EC4FA9EF868DB3F7D4BFCE549 (void);
// 0x00000608 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Clip_m73A78B133CD5E1E767F530F854EA0C5AA33AECF5 (void);
// 0x00000609 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Floor_m8BEF15B375028455A6FCBD003E1E8F080DAAED7C (void);
// 0x0000060A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Round(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Round_mA13988709B6FB171CB7065D57391A3DA65620284 (void);
// 0x0000060B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Reciprocal_mB23D7FDEF92A5893776E11D458517F7BB60A1A35 (void);
// 0x0000060C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Pow_mBECD0E6029992707F2B10D1CF869D56E5D920470 (void);
// 0x0000060D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Exp_mA512F652EB003AD27048599C953902E1F6CC4A2D (void);
// 0x0000060E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Log_m5CCC2F134AF5384473D343D010535CB79BE3982C (void);
// 0x0000060F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sqrt_mC20DB9FCDBF3236CE3BE885D2813969063BA0EEF (void);
// 0x00000610 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acos_mE0E41A2463E7353D2175B94F1FADDD6A31F3A17C (void);
// 0x00000611 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acosh_m9200B2F9C5AE8E8FAE5ABF03B280B68743789590 (void);
// 0x00000612 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asin_m14B8D50F7E4FF33372354E4A6139FC5566B837BD (void);
// 0x00000613 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asinh_m936D634258BCC60F7C3E9FAB0EAB3C7D0BDEB894 (void);
// 0x00000614 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atan_m229CCE4AD0B327CDEDA79A7282681069CF387D01 (void);
// 0x00000615 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atanh_mF235361A1D20E7461A61DB19B6EE28DD4E0714DB (void);
// 0x00000616 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cos_m444531C765E1D13D4C6D360F8829475E190E201F (void);
// 0x00000617 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cosh_mF5CF73C65EA9A97F7AE981868BC909310F850BE2 (void);
// 0x00000618 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sin_m85C5ADB70F518B570F9FF087A5BEB508242FE766 (void);
// 0x00000619 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sinh_m837BFE5C4928BCE8F0F4748DFEEAC9D1B2C4B5CA (void);
// 0x0000061A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tan_m354257C3ECAB2ADC0983E9A21E7DA8D144BF0515 (void);
// 0x0000061B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Add_m5717585972772C457767D8EA5D4AFC3FECC661C5 (void);
// 0x0000061C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Sub_mE2F006131350A6E024422C116E0829DBAB80CC25 (void);
// 0x0000061D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mul_mA8008590C7CA0DBB6CE18AFBD91C154D10C4FD51 (void);
// 0x0000061E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Div_m906838AD284E611DE951C6FF2906A0A1146146E6 (void);
// 0x0000061F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Pow_m119DF0D5774D601D3ED9CF1873509EA914751821 (void);
// 0x00000620 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Min_m4DCB388C77E401E73838DF03591A74CB29339B45 (void);
// 0x00000621 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Max_m629EE5005FEF9A1AB177E8E3FE4FAF8D5CBBA97E (void);
// 0x00000622 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mean_m507904B6E8558FE1D495A6716C8A660DA74611AD (void);
// 0x00000623 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMax_m18AE2827F5794060B8CF517B2EF6B93758E03D74 (void);
// 0x00000624 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMin_mA25CBD73C04D575AAD503E7CDB8A9CA7F0960E8C (void);
// 0x00000625 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMax_m42F0BDFCA479353C78354D485E2F6F33A33DB105 (void);
// 0x00000626 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMean_mEFED96DB22399195C381866D1FBE12BD18A2F972 (void);
// 0x00000627 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMin_mF125C7CAE5598925AF21634E0AEC763B086FF430 (void);
// 0x00000628 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceProd_mD4269C546344EA8DD0CE716E8A6FC88352B5F2F6 (void);
// 0x00000629 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceSum_m559615B283EF73F9516CC20286B83F56BD874AAF (void);
// 0x0000062A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Greater_mFF29C7E3C19C2FE2FD63AA18D2B636E4EE0D6858 (void);
// 0x0000062B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GreaterEqual_m002E838DFCCF2C385A553E5776E80C7B6B6D8949 (void);
// 0x0000062C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Less_mE600F93647AA838B2D89AE3C17B0E000A46CB1FE (void);
// 0x0000062D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LessEqual_mDFF43213B7AD959C32ADBB2B010BA9B0C497233C (void);
// 0x0000062E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Equal_mAF3A7B1373935977ACA2C2CC3B6B6AFA48C273BA (void);
// 0x0000062F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalOr_m13AB65F743B389DC4926C0707C564C30CC780A12 (void);
// 0x00000630 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalAnd_m3C13A687E25E07B615ECCFBDDA480C44BE1398A4 (void);
// 0x00000631 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalXor_m18419D40570DB4809C92233752EFEDC559113270 (void);
// 0x00000632 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalNot_mEB42A273EF0929FF4FCD4EABD98960F63200B8FA (void);
// 0x00000633 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sign(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sign_m9CFBF04FC350B6BB221246AFA243B59D89C92D29 (void);
// 0x00000634 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Where_m866F211C6A81E36C961CC44240F533F1B4EF1FC8 (void);
// 0x00000635 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Flatten_m53AF19169824080B0BE6402F4418067CC2B0A749 (void);
// 0x00000636 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Reshape_m3727C92180DCADFE7EA0B62D63A4FBB17DBD6EAD (void);
// 0x00000637 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Expand_mA41CDCA1CA570C9606FBD9F77A807BCA2113A5A4 (void);
// 0x00000638 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Transpose_m104BF7B6E640D00BCFE3BA9853FE5DC5A094F7BB (void);
// 0x00000639 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Transpose_mC31E1308BE95778079DA78AF6532294FA6C6B4CE (void);
// 0x0000063A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Gather_mE7429641CF310BECBDA3240CB1812F21FE1A02F4 (void);
// 0x0000063B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_m8AA4E78D2F5FBB1CA98211C7183E20B860E21E0B (void);
// 0x0000063C Unity.Barracuda.Tensor[] Unity.Barracuda.CompareOps::LSTM(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_LSTM_mB17C70A503A459A854E599C00B55AF1831C185E0 (void);
// 0x0000063D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Concat_m3D2BDD042C6F654D84AF95515C48FCAF69E01A32 (void);
// 0x0000063E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_StridedSlice_m415D59332668050E90BF9A286C410989DB0E0704 (void);
// 0x0000063F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Tile_m8D0B30F7B5740148F9E08E03B53351842ED9EC1F (void);
// 0x00000640 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Shape_m5029C008A6E0FEE1A87DFAAB8A87C4F04870AA0C (void);
// 0x00000641 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ConstantOfShape(Unity.Barracuda.TensorShape,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_ConstantOfShape_mFDB7526FC28E187BB903C6130E18F3E5F461653C (void);
// 0x00000642 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Copy_m9A0D1ED06447FD9AC5ABDE2235FAF4206F8B12DF (void);
// 0x00000643 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Prepare_mBE146A4EB5FC22888001EB73E689CFB51A11C160 (void);
// 0x00000644 System.Void Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_ResetAllocator_m9C83B90A20EAAF09DEB50B8DC105C542B12DD431 (void);
// 0x00000645 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_m4760BAAAB45F680564C124F83F9F365EE3046D9D (void);
// 0x00000646 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_m975D9072194E4A010C2C18C0DC3169E207C30BF6 (void);
// 0x00000647 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_m1AD529C6C3A26D919DA9DB34C723AB42DB31A97D (void);
// 0x00000648 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_mD3CDA81991FF3D3AF85FED728997F21D3B98613B (void);
// 0x00000649 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_m5ACCDB0CCC0338ABCC1618E3F020476D7B0E7ACD (void);
// 0x0000064A System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_m73BF7D16FC7D0C09961D805B24CF86065045EC6E (void);
// 0x0000064B System.Void Unity.Barracuda.CompareOpsUtils::.ctor()
extern void CompareOpsUtils__ctor_m7BEA5D05407C7ABC47946B8396A4D03E19183623 (void);
// 0x0000064C System.Void Unity.Barracuda.ComputeInfo::.cctor()
extern void ComputeInfo__cctor_mE8262C1890EA8B5238A404A286577412B2F81772 (void);
// 0x0000064D System.Void Unity.Barracuda.ComputeInfo::.ctor()
extern void ComputeInfo__ctor_m18CD556160B7E93EC4358546278C014559AA70F5 (void);
// 0x0000064E System.Void Unity.Barracuda.ComputeShaderSingleton::.ctor()
extern void ComputeShaderSingleton__ctor_mBD3FE0314C5205F909FA11EEBC1990367D3CF413 (void);
// 0x0000064F System.Void Unity.Barracuda.ComputeShaderSingleton::RegisterKernels(System.String,System.String[])
extern void ComputeShaderSingleton_RegisterKernels_m653A187AFF3CFDAAF6F536AA988492BAC0402D20 (void);
// 0x00000650 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindComputeShader(Unity.Barracuda.ComputeShaderContext,System.String)
extern void ComputeShaderSingleton_FindComputeShader_mDFA452E6261C50A8B5C471DF55BB2D0D34F7E961 (void);
// 0x00000651 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindReferenceComputeShader(System.String)
extern void ComputeShaderSingleton_FindReferenceComputeShader_m57EBEA07FAFFA649C261AEF49CD590DB57D1614B (void);
// 0x00000652 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindOptimizedComputeShader(System.String)
extern void ComputeShaderSingleton_FindOptimizedComputeShader_m9ED545E478A1C41C3E6D5626D161C185C685C8AB (void);
// 0x00000653 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindComputeShader(System.String)
extern void ComputeShaderSingleton_FindComputeShader_m3ADD0EFF359B394C5A66D7E8899F3417EE53214B (void);
// 0x00000654 System.Collections.IEnumerator Unity.Barracuda.ComputeShaderSingleton::WarmupReferenceKernels(System.Collections.Generic.List`1<System.String>)
extern void ComputeShaderSingleton_WarmupReferenceKernels_mDA26ADBE11D7EA659E23A3B65F44BD7D298F101E (void);
// 0x00000655 System.Collections.IEnumerator Unity.Barracuda.ComputeShaderSingleton::WarmupOptimizedKernels(System.Collections.Generic.List`1<System.String>)
extern void ComputeShaderSingleton_WarmupOptimizedKernels_m513238F9AE568427073AEEA81B20183E7B45C086 (void);
// 0x00000656 System.Collections.Generic.List`1<System.String> Unity.Barracuda.ComputeShaderSingleton::GetUsedReferenceKernels()
extern void ComputeShaderSingleton_GetUsedReferenceKernels_m9442FE0AE21BB869EED6C45452EAA8DF59468858 (void);
// 0x00000657 System.Collections.Generic.List`1<System.String> Unity.Barracuda.ComputeShaderSingleton::GetUsedOptimizedKernels()
extern void ComputeShaderSingleton_GetUsedOptimizedKernels_mE3DD827D009E9C414F76F4E0F29EF48457384A49 (void);
// 0x00000658 Unity.Barracuda.ComputeShaderSingleton Unity.Barracuda.ComputeShaderSingleton::get_Instance()
extern void ComputeShaderSingleton_get_Instance_m7A4B10E778915736DA154984A058670DEEE833F2 (void);
// 0x00000659 System.Boolean Unity.Barracuda.ComputeShaderSingleton::get_supported()
extern void ComputeShaderSingleton_get_supported_m4F31E131A15E870559F25154867411E281FED56B (void);
// 0x0000065A System.Void Unity.Barracuda.ComputeShaderSingleton::.cctor()
extern void ComputeShaderSingleton__cctor_mCE797C9491CB1F310549B2144F55203F9105ECA0 (void);
// 0x0000065B System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::.ctor(System.Int32)
extern void U3CWarmupReferenceKernelsU3Ed__12__ctor_mBD6DF2A96082FAC9812ACF0121330C8069EEE848 (void);
// 0x0000065C System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.IDisposable.Dispose()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_IDisposable_Dispose_m064FB6C44DB335FB0061BD1BCCE5FBDCBD8B5D0A (void);
// 0x0000065D System.Boolean Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::MoveNext()
extern void U3CWarmupReferenceKernelsU3Ed__12_MoveNext_m41EAB3C5BFAC5B5FEC41F72BF8394F50C8A20BCA (void);
// 0x0000065E System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43363E9411CBAE5F37483EF79752CCE5B5FBD4FD (void);
// 0x0000065F System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.IEnumerator.Reset()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_Reset_mC8F9C75EDD4A3F8C37926F92ECC05B49614F7AD3 (void);
// 0x00000660 System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_get_Current_mB4256A460E611B738B018FBA48A526233EBD9DAF (void);
// 0x00000661 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::.ctor(System.Int32)
extern void U3CWarmupOptimizedKernelsU3Ed__13__ctor_mA6B1D997050490528B7388B236F9292BC1E84BBB (void);
// 0x00000662 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.IDisposable.Dispose()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_IDisposable_Dispose_mA4E8C4672CD58AE5CC8BDFCB6A53981BBD95F9AA (void);
// 0x00000663 System.Boolean Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::MoveNext()
extern void U3CWarmupOptimizedKernelsU3Ed__13_MoveNext_mE6CF0F3F5D1E8FDC8EACB3C84C3A878E3D6392CC (void);
// 0x00000664 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::<>m__Finally1()
extern void U3CWarmupOptimizedKernelsU3Ed__13_U3CU3Em__Finally1_m9ED4E3ECD9C85C2DBB7C5FE4E2AFCFFE7292D502 (void);
// 0x00000665 System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53FCC8464B0B49A25FD531F28052B105A251E262 (void);
// 0x00000666 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.IEnumerator.Reset()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_Reset_m1E14A9E826C97E6CCB438AB0C98CF312FA4D1E1C (void);
// 0x00000667 System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.IEnumerator.get_Current()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_get_Current_mAB519E4AEC4800C7364DDE78B303B2FF26EEB453 (void);
// 0x00000668 System.Void Unity.Barracuda.GenericWorker::.ctor(Unity.Barracuda.Model,Unity.Barracuda.IOps,Unity.Barracuda.IVars,System.Boolean)
extern void GenericWorker__ctor_mABFADD1573C4EAD435727FB02A73B3AE326306B1 (void);
// 0x00000669 System.Void Unity.Barracuda.GenericWorker::Finalize()
extern void GenericWorker_Finalize_mA8A52CA55821A5A08F0A47FC8D0FE5E7AC12A625 (void);
// 0x0000066A System.Void Unity.Barracuda.GenericWorker::OccupyAllocator()
extern void GenericWorker_OccupyAllocator_mC808499E33FC2DF20293DCF0C4382916D19539E8 (void);
// 0x0000066B System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStale()
extern void GenericWorker_ResetAllocatorIfStale_m02D23F932C34BFA2A73F3D36F35536F8887F6B6B (void);
// 0x0000066C System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStaleAndNotOccupied()
extern void GenericWorker_ResetAllocatorIfStaleAndNotOccupied_m7B00481E3EB9AC9C733E14890A093E0C466B93F1 (void);
// 0x0000066D System.Void Unity.Barracuda.GenericWorker::Dispose()
extern void GenericWorker_Dispose_m4988A63DDCB3BA438B4814C99289C3A137876CAF (void);
// 0x0000066E System.Void Unity.Barracuda.GenericWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericWorker_PrepareForInput_m07159902BB31BC2806EB8D1DA660CE8E89E0743F (void);
// 0x0000066F System.Void Unity.Barracuda.GenericWorker::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_mAEE0BE4B6C4C234292410620C476DBB88B8A6CAB (void);
// 0x00000670 System.Void Unity.Barracuda.GenericWorker::SetInput(Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_m4E58347C4D1EE71D904635A6AF65F8E839762A5F (void);
// 0x00000671 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_Execute_m32211EA25228978C89B2DF4B937349C5F2598413 (void);
// 0x00000672 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(Unity.Barracuda.Tensor)
extern void GenericWorker_Execute_m11E94F654ACFEDF4E7C44D4FB5873C0A83388548 (void);
// 0x00000673 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute()
extern void GenericWorker_Execute_mA476C7AFDB85C21557A41E7CB64868EADF07086A (void);
// 0x00000674 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_StartManualSchedule_mED32F2823CDC202B58538C0A5D14B1008B156EC7 (void);
// 0x00000675 System.Void Unity.Barracuda.GenericWorker::FlushSchedule(System.Boolean)
extern void GenericWorker_FlushSchedule_m54FADDA6598AB7709D5EC739208DF7E0E7890590 (void);
// 0x00000676 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(Unity.Barracuda.Tensor)
extern void GenericWorker_StartManualSchedule_m74DE7996138C7A2D97CE5F5B8260E3111E33B635 (void);
// 0x00000677 System.Single Unity.Barracuda.GenericWorker::get_scheduleProgress()
extern void GenericWorker_get_scheduleProgress_m2379CC7A658E6B40BB8C6DFAB7E47CC2F3497C2E (void);
// 0x00000678 Unity.Barracuda.Layer/FusedActivation Unity.Barracuda.GenericWorker::GetAndVerifyFusedActivation(Unity.Barracuda.Layer)
extern void GenericWorker_GetAndVerifyFusedActivation_m68A0947993F1D534550D31537CC2F31B3F9719C8 (void);
// 0x00000679 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule()
extern void GenericWorker_StartManualSchedule_mE8EB02F076769BEA39B3AFA2B9C200CB9CBEAC48 (void);
// 0x0000067A Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput()
extern void GenericWorker_PeekOutput_m91C5184C7AFE45CAC38720E8178E4E0E49A29FDC (void);
// 0x0000067B Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput(System.String)
extern void GenericWorker_PeekOutput_m7411C5908AF4BE8015597DFDCBC7AB28C8DEA523 (void);
// 0x0000067C Unity.Barracuda.Tensor[] Unity.Barracuda.GenericWorker::PeekConstants(System.String)
extern void GenericWorker_PeekConstants_m7BFD9165B1DBD64C22BA49BFBA8A7EA7D20EB618 (void);
// 0x0000067D System.String Unity.Barracuda.GenericWorker::Summary()
extern void GenericWorker_Summary_m043814D87856EEA56E6D196E189686F470779E06 (void);
// 0x0000067E System.Void Unity.Barracuda.GenericWorker/<>c::.cctor()
extern void U3CU3Ec__cctor_mB6530380EC4C73073865EC315E0DD83A214C3F6F (void);
// 0x0000067F System.Void Unity.Barracuda.GenericWorker/<>c::.ctor()
extern void U3CU3Ec__ctor_m0AB36E61DADBCCDB316C823AA87D20296F4444DD (void);
// 0x00000680 System.Int32 Unity.Barracuda.GenericWorker/<>c::<StartManualSchedule>b__33_0(System.Single)
extern void U3CU3Ec_U3CStartManualScheduleU3Eb__33_0_mEBE28EFBC4595ADE5797AE5CF97D4CF695ECFAA3 (void);
// 0x00000681 System.Int32 Unity.Barracuda.GenericWorker/<>c::<StartManualSchedule>b__33_1(System.Single)
extern void U3CU3Ec_U3CStartManualScheduleU3Eb__33_1_m72DA38A2D90C298AFE65BEF110ABC8D17F6E52F5 (void);
// 0x00000682 System.Int32 Unity.Barracuda.GenericWorker/<>c::<StartManualSchedule>b__33_2(System.Single)
extern void U3CU3Ec_U3CStartManualScheduleU3Eb__33_2_m28B54A88F1B25CB960BB31F77B64E2386D7821EA (void);
// 0x00000683 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::.ctor(System.Int32)
extern void U3CStartManualScheduleU3Ed__33__ctor_m6094162C9BF524000117DE73E0FA88D5FCDBB026 (void);
// 0x00000684 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.IDisposable.Dispose()
extern void U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m7AABA5418C1144B04C86D158BF6AE2F8B9501987 (void);
// 0x00000685 System.Boolean Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::MoveNext()
extern void U3CStartManualScheduleU3Ed__33_MoveNext_mF62BEBBC3A876B1A8F856D99B73557F5E920D08D (void);
// 0x00000686 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::<>m__Finally1()
extern void U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_m93146170D99DC92068AB67E512C2E3BAF8422ACF (void);
// 0x00000687 System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF099AFC425CF15FBF2C64C78B5E5CBF99791E1AB (void);
// 0x00000688 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.Reset()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_m637F032CAAA2CDD40F20A49677286A30D85FD4D7 (void);
// 0x00000689 System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_m8119BACBAEFADA8C725322C182AA7254EDF0384F (void);
// 0x0000068A System.Void Unity.Barracuda.GenericVars::.ctor()
extern void GenericVars__ctor_m39718FBE56DFDA7673BD8C2714EA4FF075C21606 (void);
// 0x0000068B System.Void Unity.Barracuda.GenericVars::Finalize()
extern void GenericVars_Finalize_mC805CF039738909B752397355117269B5A8C0ED0 (void);
// 0x0000068C System.Void Unity.Barracuda.GenericVars::Dispose()
extern void GenericVars_Dispose_m168CB0487672223146BDF285921E631725DDC84C (void);
// 0x0000068D Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVars::GetAllocator()
extern void GenericVars_GetAllocator_m82EB86CBE76D82739D074797D68EE09774BB8F66 (void);
// 0x0000068E System.Boolean Unity.Barracuda.GenericVars::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVars_IsTensorOwnedByInternalAllocator_m142ECB0C6C5C39176153AD75F84D1D04085B0E40 (void);
// 0x0000068F System.Boolean Unity.Barracuda.GenericVars::ValidateGlobalInputs(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_ValidateGlobalInputs_m55FE6DA85409E34C418AE8480DB08FC2E2E8DC18 (void);
// 0x00000690 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void GenericVars_PrepareLayerInputTensors_m99E5B22BBAC091DD52615B4BF47787038305342C (void);
// 0x00000691 System.Void Unity.Barracuda.GenericVars::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericVars_SetInput_m4A804409D1D685E1182A19164CA5C115E2116C42 (void);
// 0x00000692 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_PrepareStorage_mCCFC0B10FDDB7C3700808514C144CD79BCFEA3C2 (void);
// 0x00000693 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::GatherInputs(Unity.Barracuda.Layer)
extern void GenericVars_GatherInputs_mCFB42AE10E29289C85C5730CCD003EDE22A98424 (void);
// 0x00000694 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVars_PrepareStorage_mDFC896C562770147C1C3F0DCD7E0352D8E630928 (void);
// 0x00000695 System.Void Unity.Barracuda.GenericVars::DisposeAfterLayer(Unity.Barracuda.Layer)
extern void GenericVars_DisposeAfterLayer_m916027299D4C97E5F3B68F18A164B556588FF2F9 (void);
// 0x00000696 System.Void Unity.Barracuda.GenericVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVars_Store_mA528990B672AB18845FF6CBBA904212E86A7B2A5 (void);
// 0x00000697 Unity.Barracuda.Tensor Unity.Barracuda.GenericVars::PeekOutput(System.String)
extern void GenericVars_PeekOutput_mE942C84402B6C4D42ADB7E7A23F67B394CB7888C (void);
// 0x00000698 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PeekConstants(System.String)
extern void GenericVars_PeekConstants_mCAC2F7ABDCBBA6FA8D56EB84198AE752AEB34038 (void);
// 0x00000699 System.Void Unity.Barracuda.GenericVars/<>c::.cctor()
extern void U3CU3Ec__cctor_mFEDEE438FF96DB4DA8761F0969AA69353BCCF427 (void);
// 0x0000069A System.Void Unity.Barracuda.GenericVars/<>c::.ctor()
extern void U3CU3Ec__ctor_m1A7F16C781B89DA9B3287CD8386D80C8D9F55A03 (void);
// 0x0000069B System.String Unity.Barracuda.GenericVars/<>c::<PrepareStorage>b__16_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CPrepareStorageU3Eb__16_0_m39F6D4DC39F214C6A8A895DB95B0E97DDD4E64AA (void);
// 0x0000069C System.String Unity.Barracuda.GenericVars/<>c::<PrepareStorage>b__16_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CPrepareStorageU3Eb__16_1_m9786452D078BA2E8E1302F8B98161FE2B37E5E38 (void);
// 0x0000069D System.String Unity.Barracuda.GenericVars/<>c::<PrepareStorage>b__16_2(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CPrepareStorageU3Eb__16_2_m82C2EEAEDB6C7C5BD13A4C4DD3E90A5305B8FC54 (void);
// 0x0000069E System.Boolean Unity.Barracuda.GenericVarsWithReuse::get_layerRequiresStorage()
extern void GenericVarsWithReuse_get_layerRequiresStorage_mCF1E6873474FCD0F4E808771A1B9E7FC06B6E7A6 (void);
// 0x0000069F Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::get_temporary()
extern void GenericVarsWithReuse_get_temporary_mDB821C4D5BDF25C07602C21D555CC6CF4DBE3F78 (void);
// 0x000006A0 System.Void Unity.Barracuda.GenericVarsWithReuse::ReleaseTemporary()
extern void GenericVarsWithReuse_ReleaseTemporary_mC309FE4B34BF7DC887A42A48C5F4D0B77A8AE91D (void);
// 0x000006A1 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithReuse_PrepareStorage_m18DEEA89E9A9757D0BF072A29525219BD9EBC568 (void);
// 0x000006A2 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVarsWithReuse_PrepareStorage_m4465A180A91089E3383C5D7B6E3053B3948678AE (void);
// 0x000006A3 System.Void Unity.Barracuda.GenericVarsWithReuse::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVarsWithReuse_Store_mE0681C8164BAD07EEAB992DE32C0FC20E21B003B (void);
// 0x000006A4 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::PeekOutput(System.String)
extern void GenericVarsWithReuse_PeekOutput_m101BADDB2C4F1311B9216E7DB3E4477C102D49D1 (void);
// 0x000006A5 System.Void Unity.Barracuda.GenericVarsWithReuse::.ctor()
extern void GenericVarsWithReuse__ctor_mB166D90DE4F6CA70AB9C6BDF7EB96D54F8826E02 (void);
// 0x000006A6 System.Void Unity.Barracuda.GenericVarsWithPreallocation::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithPreallocation_PrepareStorage_mE70E9403BC85CAB707B373DFA1C660D99C5DBBAF (void);
// 0x000006A7 Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVarsWithPreallocation::GetAllocator()
extern void GenericVarsWithPreallocation_GetAllocator_m0BC6F52F963CC9901B275A7FC1B0A5FFB2920D12 (void);
// 0x000006A8 System.Boolean Unity.Barracuda.GenericVarsWithPreallocation::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_m5BC0727D7750198F51D4736EE78B0D730ED263C0 (void);
// 0x000006A9 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape)
extern void GenericVarsWithPreallocation_Alloc_m965976D3BEE07BEB7C56CF70551DB5E2E115EAE1 (void);
// 0x000006AA Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void GenericVarsWithPreallocation_Alloc_mF71ABF2FA59707A4D0808CD33C3F570EE7A8D9A2 (void);
// 0x000006AB System.Void Unity.Barracuda.GenericVarsWithPreallocation::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void GenericVarsWithPreallocation_MoveToDevice_m25AB2F7D2D984D4F4DCAD71219734B603C03ADC0 (void);
// 0x000006AC System.Void Unity.Barracuda.GenericVarsWithPreallocation::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void GenericVarsWithPreallocation_Release_mF5A90F98BFC372A0070AF80E188706A3B88214A7 (void);
// 0x000006AD System.Void Unity.Barracuda.GenericVarsWithPreallocation::WaiveOwnership(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_WaiveOwnership_m529F8707461C5340F1F6137BD4A6FB7F040EA2FA (void);
// 0x000006AE System.Void Unity.Barracuda.GenericVarsWithPreallocation::Reset(System.Boolean)
extern void GenericVarsWithPreallocation_Reset_mE19C00E2DAE6959AFDD1AEC6E9DE1428BBCB5118 (void);
// 0x000006AF System.Void Unity.Barracuda.GenericVarsWithPreallocation::Dispose()
extern void GenericVarsWithPreallocation_Dispose_mB96FCAE81800F3EC5CBA641174EF2E0FD4EB6A6C (void);
// 0x000006B0 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_busyBytes()
extern void GenericVarsWithPreallocation_get_busyBytes_m3E03ECF0A26ABCE689A77523AE86DA5D69E1DCC3 (void);
// 0x000006B1 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_freeBytes()
extern void GenericVarsWithPreallocation_get_freeBytes_mB8AD77B532D3CDF022A606300AED83A45956A394 (void);
// 0x000006B2 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_totalBytes()
extern void GenericVarsWithPreallocation_get_totalBytes_mDBA093B2D5B85B8D9FD2E603CFE07EBC710401B3 (void);
// 0x000006B3 System.String Unity.Barracuda.GenericVarsWithPreallocation::ToString()
extern void GenericVarsWithPreallocation_ToString_m32E1D1075B3787C657F4645D3F9A3DFE3076D44F (void);
// 0x000006B4 System.Void Unity.Barracuda.GenericVarsWithPreallocation::.ctor()
extern void GenericVarsWithPreallocation__ctor_mCC16E60C13046246471111418C7E82AC9542996C (void);
// 0x000006B5 System.Void Unity.Barracuda.DefaultTensorAllocator::.ctor()
extern void DefaultTensorAllocator__ctor_m9B4AF562AC76CED2BDA9A67D1D11285A16E489CC (void);
// 0x000006B6 System.Void Unity.Barracuda.DefaultVars::.ctor()
extern void DefaultVars__ctor_m00870199CAAFF78AF38F1A4EFF52E54155BB6457 (void);
// 0x000006B7 System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinear(Unity.Barracuda.Layer,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_IsLayerLinear_m8363A823284AC9382DA5BA03F93EEA4EB15DB734 (void);
// 0x000006B8 System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinearMathOp(Unity.Barracuda.Layer)
extern void LinearLayerFusing_IsLayerLinearMathOp_m8021B6B050635E2171260D41EDD7DDD8009735B9 (void);
// 0x000006B9 System.Boolean Unity.Barracuda.LinearLayerFusing::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_AreLayersFusable_m1303E4265F3EC9A71B848BF669751DDD7E65A6AF (void);
// 0x000006BA System.Void Unity.Barracuda.LinearLayerFusing::Add(System.ValueTuple`2<Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Type>,System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.Layer,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_Add_m8DEE311927BF6EB4D96F19E2B6DD09BB24F5D6E3 (void);
// 0x000006BB System.Void Unity.Barracuda.LinearLayerFusing::.ctor()
extern void LinearLayerFusing__ctor_mE7939480091C9D3D502A8BA9577AC3A169872D70 (void);
// 0x000006BC Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::FuseLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_FuseLayers_mAD1B4D3FABD01F577D2201CFA853F952182CC6A2 (void);
// 0x000006BD Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_0(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_0_m32E68294A7F89CE062CC777EE8AB64A42B7C86F3 (void);
// 0x000006BE Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_1(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_1_m56E53D55B5EBE0DB9EDEE65CAF64DA092A39D59F (void);
// 0x000006BF Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_2(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_2_m76B1CE4EE7EE7B55CB3AEAA7FAEA353E3AB373A5 (void);
// 0x000006C0 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_3(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_3_m04832DCBDC7345D3865CBDDC19FAB0E57DFA4E24 (void);
// 0x000006C1 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_4(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_4_m0D1B0DDE2C3CACBB0232C5E12A92C1276BDBA78E (void);
// 0x000006C2 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_6(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_6_m85D27C80F3331E001762685EB37131F4784A7C5B (void);
// 0x000006C3 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_8(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_8_m784521027348A17B219CCFD630D547DFC99AABEC (void);
// 0x000006C4 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_9(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_9_m968B20E6C021DC1AAD697BC367016476D02258D5 (void);
// 0x000006C5 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_11(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_11_m364E27C905FEA62C7A5D11BBC68615ACD689A572 (void);
// 0x000006C6 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_13(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_13_m5E9852B2E8924BB0BC5CA551905762939D0993C1 (void);
// 0x000006C7 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_14(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_14_m4C43E47184C5E4904CBF1B9EFD4F15E14E9A62B5 (void);
// 0x000006C8 System.Void Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mC53840D35453F66D180E9F5936472E30F7A6A6AB (void);
// 0x000006C9 System.Boolean Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::<IsLayerLinear>b__0(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_mBDCA676F2B59CA0033A3E322830507CF022E9428 (void);
// 0x000006CA System.Void Unity.Barracuda.LinearLayerFusing/<>c::.cctor()
extern void U3CU3Ec__cctor_mC84D4E5E0112EC86C399C1B4F004250367265E17 (void);
// 0x000006CB System.Void Unity.Barracuda.LinearLayerFusing/<>c::.ctor()
extern void U3CU3Ec__ctor_m09F5D9C5B18F1F7EDF31E9A0F7656E4EB6E57361 (void);
// 0x000006CC System.Boolean Unity.Barracuda.LinearLayerFusing/<>c::<AreLayersFusable>b__2_0(System.Int32)
extern void U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_mD19939C9AE076D5F84600DE3087C859C6E9A25D1 (void);
// 0x000006CD Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_5(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_5_m95829947FF0D25A0C061EB1878CBC863433D340B (void);
// 0x000006CE Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_7(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_7_mA51861579CB69AB0C0F2664C3C043EAC612CA338 (void);
// 0x000006CF Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_10(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_10_m91AA25CA8C59E83BD03B768DFB4AE497317BCAA3 (void);
// 0x000006D0 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_12(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_12_m65CE0CC6B0840A7EAB7847DC5D4DC546233B218A (void);
// 0x000006D1 System.Boolean Unity.Barracuda.CSharpBLAS::IsNative()
extern void CSharpBLAS_IsNative_m3B29CAE2D7D7BC97A18594EEA0BC731BA96DA899 (void);
// 0x000006D2 System.Boolean Unity.Barracuda.CSharpBLAS::IsCurrentPlatformSupported()
extern void CSharpBLAS_IsCurrentPlatformSupported_m7979F46AE8D147343D562331B5E16C3785FC45C2 (void);
// 0x000006D3 System.Void Unity.Barracuda.CSharpBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_SGEMM_mFD02775FAACA6FE5247577DD8A1C433B921DAD45 (void);
// 0x000006D4 Unity.Jobs.JobHandle Unity.Barracuda.CSharpBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_ScheduleSGEMM_m300E24074D506054E3DC8D3B8CC6FFF53A66DEB1 (void);
// 0x000006D5 System.Void Unity.Barracuda.CSharpBLAS::.ctor()
extern void CSharpBLAS__ctor_m6235D5A8E0634F6079475E8F66FE6BECF0D1E04B (void);
// 0x000006D6 System.Void Unity.Barracuda.CSharpBLAS/SGEMMJob::Execute()
extern void SGEMMJob_Execute_m75C2F62F0911B708F35FA2C3249541F4AC74DDF0 (void);
// 0x000006D7 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m2CAD9B7375432DAD05F1F6C72DEE5105C6AC7062 (void);
// 0x000006D8 System.Void Unity.Barracuda.MatrixUtils::ClearFloatArray(System.Single*,System.Single,System.Int32)
extern void MatrixUtils_ClearFloatArray_m8C70B1DF2AB1C273F164ACB9752E374557884596 (void);
// 0x000006D9 System.Void Unity.Barracuda.MatrixUtils::CopyFloatArray(System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_CopyFloatArray_m20BB01A8CA8D33A7AAFB8958F16F89D07E2DCD81 (void);
// 0x000006DA System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m57E9FF4174465FFB20CFCB2122E27BE9A1CCE5A6 (void);
// 0x000006DB System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single[],System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m00B253C71C910D09E31B427C3A7ED290F62265DE (void);
// 0x000006DC System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m26087782CA57039972F464704ACEC1A4A0EE89B3 (void);
// 0x000006DD System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhPadded(System.Single*,System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_MultiplyBlockUnroll8xhPadded_m94E4CFC5B957B006314D0F72D0AC5BEDBF17A288 (void);
// 0x000006DE System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhParallelWithPadding(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_mE6F66B1A86BFC59FFC94C3A18A09CD614206C85F (void);
// 0x000006DF System.Void Unity.Barracuda.MatrixUtils::.ctor()
extern void MatrixUtils__ctor_m5BA4B34632FF179ADA03479E7D1D96B20D95D1E0 (void);
// 0x000006E0 System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mC443A8667D8C1FB04050D69FE06F5DD7E4118F0E (void);
// 0x000006E1 System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::<MultiplyBlockUnroll8xhParallelWithPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m08D0BE62888DEEAA8182CDC2B192FC0BF953009D (void);
// 0x000006E2 System.String Unity.Barracuda.ModelAnalyzer::GetDefaultInputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultInputName_m2222DCDB46AB58251DE236CDD81EEFD1FEED29F9 (void);
// 0x000006E3 System.String Unity.Barracuda.ModelAnalyzer::GetDefaultOutputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultOutputName_m243EE07633D78E7126A5A250531AC40278EF0F4A (void);
// 0x000006E4 System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_ListTemporaryTensorShapes_m5000ED15B7314A0D777A7C21DF377B24BE04AFDE (void);
// 0x000006E5 System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mDD9AF26F0FB745125A758BE5B166E37321E717E9 (void);
// 0x000006E6 System.Void Unity.Barracuda.ModelAnalyzer::LegacyGetXYRanks(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ModelAnalyzer_LegacyGetXYRanks_m4BDF7765F65AAD2117886609E3B9CA3F60D9FB16 (void);
// 0x000006E7 System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_mBF2C86B45DE749B2D77C977D65292E8D505FD813 (void);
// 0x000006E8 System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m742843234766C2A85BE0AC0F7BD05E71F51E2507 (void);
// 0x000006E9 System.Boolean Unity.Barracuda.ModelAnalyzer::FindLayerByName(Unity.Barracuda.Model,System.String,Unity.Barracuda.Layer&)
extern void ModelAnalyzer_FindLayerByName_m08CE91AA8817E867780540195450DFEB4D8DE719 (void);
// 0x000006EA System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindLayersThatRequireStorage(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLayersThatRequireStorage_mEC3817CBCC969E31A873FEDA99C2CF8E98B1AE56 (void);
// 0x000006EB System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindUpstreamLayers(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindUpstreamLayers_m84C4E75016638FC3F42179ACB12A6837FCEE8DAA (void);
// 0x000006EC Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestNecessaryTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_FindLargestNecessaryTensorShape_m802B505615D341831229BC2DF4801129094B02FE (void);
// 0x000006ED Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestArgumentTensorShape(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLargestArgumentTensorShape_mC34F621D25FDCC2A6C4C401C149F943CB7E2AF63 (void);
// 0x000006EE System.String[] Unity.Barracuda.ModelAnalyzer::FindUnusedLayers(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnusedLayers_m7B5FB6091223CAC0AB96111BCF9D1544E223D587 (void);
// 0x000006EF System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelAnalyzer_FindBrokenLinks_m2888514EC548D9B028035CA74A1F3BFDFC8FAC52 (void);
// 0x000006F0 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindBrokenLinks_m6D03728FCAD25FD7CB0F267701E9C0BEA8B5D443 (void);
// 0x000006F1 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindBrokenLinks_m79EFDD5C12949C18ABDFC554EF58FF582DF5E32F (void);
// 0x000006F2 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedInputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedInputs_mF19DCB7E332E29D87B2B947D9503E433459F0031 (void);
// 0x000006F3 System.String[] Unity.Barracuda.ModelAnalyzer::FindLayerOutputs(Unity.Barracuda.Model,System.String)
extern void ModelAnalyzer_FindLayerOutputs_mF44AF56B52327AC8AAAD8C5DBF3AA54C86BA35DC (void);
// 0x000006F4 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedOutputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedOutputs_m142F1CCC53C532D6DFD5E59B51B90C77F326494E (void);
// 0x000006F5 System.Boolean Unity.Barracuda.ModelAnalyzer::IsLayerBroacastable(Unity.Barracuda.Layer)
extern void ModelAnalyzer_IsLayerBroacastable_mCFFB0646EC5049D54F3DC08D2C565B820EF7CF4B (void);
// 0x000006F6 System.Boolean Unity.Barracuda.ModelAnalyzer::IsInputShapeAcceptablyKnowForShapeInference(Unity.Barracuda.Model/Input)
extern void ModelAnalyzer_IsInputShapeAcceptablyKnowForShapeInference_m954F11FAFAD4250847A43FEF0175DC4B696AA123 (void);
// 0x000006F7 System.Void Unity.Barracuda.ModelAnalyzer::.ctor()
extern void ModelAnalyzer__ctor_m83B2E95F03C2D3E2F24F03AC79679BDCE8F58358 (void);
// 0x000006F8 System.Void Unity.Barracuda.ModelAnalyzer/<>c::.cctor()
extern void U3CU3Ec__cctor_m9376C4F72590B217C9060278215391C733B1325F (void);
// 0x000006F9 System.Void Unity.Barracuda.ModelAnalyzer/<>c::.ctor()
extern void U3CU3Ec__ctor_mA78F21A653700AF04B8F3CA7F1CFDED117F1206B (void);
// 0x000006FA System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_0_m4E014833242318F1FEF269B196800C1A771F1654 (void);
// 0x000006FB System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_1_mB5DADB44AEC3CFE1ECDB32ABE172FC45B57FB5EE (void);
// 0x000006FC System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_2_mEFD499942AD09CB68DEFDA7ACCEB72F218F8837F (void);
// 0x000006FD System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_3_mDBB19AC3F7191B78BDE0D72228FB9E02B38A9591 (void);
// 0x000006FE System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_0_mFBE3635F47300AAC9DAE6ACC28F2C09E1063A49A (void);
// 0x000006FF System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_1_m9E7EDBFDE299279DDA7EDB616F65835CD7BFAF0F (void);
// 0x00000700 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_2_m9445E0A238D125A303144810D9DD259C5CC93912 (void);
// 0x00000701 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_0_m86521ACC6DA024F9880B219FD1425A1FEA2EBE61 (void);
// 0x00000702 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_1_m52683035516E05D89CBC238DEBBEC95D31B75BA9 (void);
// 0x00000703 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindLayerOutputs>b__17_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindLayerOutputsU3Eb__17_1_m579A8839FF15DA486C761CE9F2EC4441DDA683EF (void);
// 0x00000704 System.Void Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m49FCBDBB33507DF44E33DA0B2A4A5ABF99837A9B (void);
// 0x00000705 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::<FindLayerOutputs>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__0_m05E38812EC1F9C1708C25A2783E77AE84FCF879C (void);
// 0x00000706 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::<FindLayerOutputs>b__2(System.String)
extern void U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__2_m8FA1B8A4DFB5405997AD97D2B53A6CDCAB1A390D (void);
// 0x00000707 Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::Optimize(Unity.Barracuda.Model,System.Boolean,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_Optimize_m04437DC75EECCCF263EB06C93C9D894CDFDAF094 (void);
// 0x00000708 System.Void Unity.Barracuda.ModelOptimizer::RemoveUnused(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_RemoveUnused_mF64280C2A98D609F8A7CDA0E3BB99D7EC1DEE1EB (void);
// 0x00000709 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer/Type)
extern void ModelOptimizer_IsLayerSupportingActivationFusing_mA2F51D2F325DF560255A5FC082F5A6DC538B56B9 (void);
// 0x0000070A System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer/Activation)
extern void ModelOptimizer_IsActivationFusable_mF4BC0995BFC12E9C21A134DA6EDD80DB67DFCED6 (void);
// 0x0000070B System.Void Unity.Barracuda.ModelOptimizer::FuseActivation(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseActivation_m677B74D258108CEBDA9ADCCABE3341F2983B8858 (void);
// 0x0000070C System.Void Unity.Barracuda.ModelOptimizer::FuseActivations(Unity.Barracuda.Model)
extern void ModelOptimizer_FuseActivations_m4A1E36FA36BCBDF56A2A6381F52AE3A2F3D9EE83 (void);
// 0x0000070D System.Boolean Unity.Barracuda.ModelOptimizer::IsPermutationNoop(System.Int32[])
extern void ModelOptimizer_IsPermutationNoop_mD23084AF77E83DEA2872D38B18FDAEAB20CDD080 (void);
// 0x0000070E System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerNoop(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerNoop_mD30A718BEE5D4AC1D8F730887FDFC593E389B2BC (void);
// 0x0000070F Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::RemoveNoop(Unity.Barracuda.Model)
extern void ModelOptimizer_RemoveNoop_mEBCE1B972E73564784976F821BEFC5B5E19EA189 (void);
// 0x00000710 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerConstant(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerConstant_m772513F17D792970CD2FBC4D4ABB940805919A27 (void);
// 0x00000711 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerFusedActivation(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerFusedActivation_m21E71E557BD54F6BF27F61645A3E8C49D3400488 (void);
// 0x00000712 System.Int64 Unity.Barracuda.ModelOptimizer::LayerComplextity(Unity.Barracuda.Layer)
extern void ModelOptimizer_LayerComplextity_m37B3F1DA50DDA59C3A3C4485A32F18E6BC4BC835 (void);
// 0x00000713 Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer::FuseConsecutiveLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseConsecutiveLayers_m5495018E466D5CEE8124C5FF9BB5DFADAEBFE02C (void);
// 0x00000714 System.Boolean Unity.Barracuda.ModelOptimizer::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_AreLayersFusable_m571C8EC99E8E48370DC251C2F9349E4C086167C2 (void);
// 0x00000715 System.Void Unity.Barracuda.ModelOptimizer::PackConstants(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void ModelOptimizer_PackConstants_m175627848E8A4F02C7631487A5EF57EA2764A8D2 (void);
// 0x00000716 System.Void Unity.Barracuda.ModelOptimizer::UnpackConstants(Unity.Barracuda.Model)
extern void ModelOptimizer_UnpackConstants_mBFF0130AA2E5C74215538A1A80F0D787757EAEFF (void);
// 0x00000717 System.Void Unity.Barracuda.ModelOptimizer::FuseLinear(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_FuseLinear_mC1612AC0008CAB2EE7AB763663352B89431223F5 (void);
// 0x00000718 System.Void Unity.Barracuda.ModelOptimizer::.ctor()
extern void ModelOptimizer__ctor_m198627FD12249135866FAB55F8CAD89A20772B56 (void);
// 0x00000719 System.Void Unity.Barracuda.ModelOptimizer::.cctor()
extern void ModelOptimizer__cctor_m338C1D632382A8DD8C328022AAB2032CC973F162 (void);
// 0x0000071A System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m41D0C4D128F8850F8D4BB0C3AAC312A1B5EA3617 (void);
// 0x0000071B System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::<RemoveUnused>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mF8BA8E89A30A186A22ED3C10C41D2651D7558AED (void);
// 0x0000071C System.Void Unity.Barracuda.ModelOptimizer/<>c::.cctor()
extern void U3CU3Ec__cctor_m1954BDCFB2739215AAA053B8B96DB3E0A68A78F9 (void);
// 0x0000071D System.Void Unity.Barracuda.ModelOptimizer/<>c::.ctor()
extern void U3CU3Ec__ctor_m853AAB6E0A17715A0C012589988979148C1E9F1D (void);
// 0x0000071E System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_mFB2AF7F0E1F7C44C2968773980B3C2ED10C88018 (void);
// 0x0000071F System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_m4D6DAB1CC99F7FB35112602416E8044E37439725 (void);
// 0x00000720 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<FuseActivations>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFuseActivationsU3Eb__5_0_m152761A805B761F79F98DE7E0CC23456CAE66E19 (void);
// 0x00000721 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_0(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m933ECBFE698A9A54F26AE2A19E4CA186B313D676 (void);
// 0x00000722 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_1(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_m210DC7EE7DD5EF139A986B9A875627E1EEFFFF2D (void);
// 0x00000723 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_2(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mB3A6AAC630CF6240A2C62B3B1500053BDCE21456 (void);
// 0x00000724 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mDC691CC75D6B8858D90AC645EA9EC25CA8D8F9E2 (void);
// 0x00000725 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m8A6E84ADFBC612818F74B618602C76B01C795A65 (void);
// 0x00000726 System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_0_m6141AAD897EEC8AAFAE3B76C6B91E1596B0D87E6 (void);
// 0x00000727 System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_1_m72EE8042B01C910B4F212C88A30FA6A89ECA8434 (void);
// 0x00000728 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m3E4AB071D90BBC06F0088A4D4DC1B6BC5F177F81 (void);
// 0x00000729 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_m62BF0A3012A45C396BCA671E2784CECF748EAB77 (void);
// 0x0000072A System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m0EA6D19F6AF3D1753CEF4D54D7CFA4A696A65907 (void);
// 0x0000072B System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_m1F27ABFEA3C12DC54821D8ADF10ADE3C243572F0 (void);
// 0x0000072C System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::.ctor()
extern void U3CU3Ec__DisplayClass5_1__ctor_mCD1DBF5496A40110C4A7ECA08512E5B4687B8083 (void);
// 0x0000072D System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_m455CBBD9B542DA4DFBD7C35C5C11CBBB63BEAA4A (void);
// 0x0000072E System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m353674D1961ABBEC16983FDADA042CD91E4A1020 (void);
// 0x0000072F System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mD5FBEB774930B1DFFCB6098E6D2120C26D2284E9 (void);
// 0x00000730 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass8_0::<RemoveNoop>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass8_0_U3CRemoveNoopU3Eb__2_m5D20333E788D2F6909AB667BAB7C1AD7C285D03B (void);
// 0x00000731 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass8_0::<RemoveNoop>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass8_0_U3CRemoveNoopU3Eb__3_m789394A8A6601096060EDE53FEE1F097029D59FD (void);
// 0x00000732 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mD95BE00428B553300E7234704BC34F25F8A52D14 (void);
// 0x00000733 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__0(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_m8936C65AE0F073F556416DC27467F440DBDBDDC7 (void);
// 0x00000734 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__1(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_m91824B1B9D3758B31515E81A91660AB5FCE03553 (void);
// 0x00000735 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::.ctor()
extern void U3CU3Ec__DisplayClass16_1__ctor_mAA89F44745F8E270500B6878AEC3AB51D891861F (void);
// 0x00000736 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::<PackConstants>b__2(System.String)
extern void U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m7D5AAEE6F6687A44CD77EEA58A8073AF2053FF56 (void);
// 0x00000737 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_m93BE8F96470F1680B112DAC52A3AA51FE45FD2DE (void);
// 0x00000738 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__4(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_mFAE5FBAC3F35591CF532F4BEF0DAA78AA6088CE7 (void);
// 0x00000739 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__5(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_m0B00B239AB4C61EA477123874403150A55C10E1E (void);
// 0x0000073A System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_m09A08C3C7324C722778086971039FD588FEC336C (void);
// 0x0000073B System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_m3E6D4CA581E79F5926C77EE1EC6B91FCE49E5569 (void);
// 0x0000073C System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::.ctor()
extern void U3CU3Ec__DisplayClass18_1__ctor_mDDB88F759D920050BD1939A0B5F967FEAA8C191A (void);
// 0x0000073D System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::<FuseLinear>b__6(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_mC75CBF942DB8665FBBA445DE5C3DAF28F4034960 (void);
// 0x0000073E System.Void Unity.Barracuda.OpsUtils::SplitWRBForLSTM(Unity.Barracuda.IOps,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[]&,Unity.Barracuda.Tensor[]&,Unity.Barracuda.Tensor[]&,Unity.Barracuda.Tensor[]&)
extern void OpsUtils_SplitWRBForLSTM_m3189E209CE8A4C769331757075481CCB39A42DD1 (void);
// 0x0000073F System.Void Unity.Barracuda.OpsUtils::BakeConstantWRBIntoLSTMLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void OpsUtils_BakeConstantWRBIntoLSTMLayer_m664733113F32ABDFA73402AF79C2267212F593EA (void);
// 0x00000740 System.Void Unity.Barracuda.OpsUtils::.ctor()
extern void OpsUtils__ctor_mE33DBAEA150B0FD7D28362845C3382EA9DBC356E (void);
// 0x00000741 System.Void Unity.Barracuda.OpsUtils::<BakeConstantWRBIntoLSTMLayer>g__AddDataset|1_0(System.Collections.Generic.List`1<Unity.Barracuda.Layer/DataSet>,System.Single[],System.String,Unity.Barracuda.Tensor,System.Int32&,Unity.Barracuda.OpsUtils/<>c__DisplayClass1_0&)
extern void OpsUtils_U3CBakeConstantWRBIntoLSTMLayerU3Eg__AddDatasetU7C1_0_m0FDE4B5CFCBA21B1984845DF52EC93F6A385F933 (void);
// 0x00000742 System.Void Unity.Barracuda.StaticLayerOppComplexity::Add(Unity.Barracuda.Layer/Type,System.Func`2<Unity.Barracuda.Layer,System.Int64>)
extern void StaticLayerOppComplexity_Add_m1892D68D5C4972CBD0DE50045E03EADC49068F34 (void);
// 0x00000743 System.Void Unity.Barracuda.StaticLayerOppComplexity::.ctor()
extern void StaticLayerOppComplexity__ctor_m38C50A0FA2E5F62CEA45391B53CF4B8820F5B2B7 (void);
// 0x00000744 System.Int64 Unity.Barracuda.StaticLayerOppComplexity::LayerComplextity(Unity.Barracuda.Layer)
extern void StaticLayerOppComplexity_LayerComplextity_mBDD73DB2D420C65941F12D02DE0507EF43CDA160 (void);
// 0x00000745 System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.cctor()
extern void U3CU3Ec__cctor_m4EC2B822E4479F341248B3F05118303C7A0F2774 (void);
// 0x00000746 System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.ctor()
extern void U3CU3Ec__ctor_m16A8F2F86E954E15DA9147BE142C7EFA93EA54D6 (void);
// 0x00000747 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_0_mE9228ECC9A0D3CEB79B8D34E7B0935C469FA428B (void);
// 0x00000748 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_1_m91A55E685C2881E9D90B473826925A9D00D1758B (void);
// 0x00000749 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_2_m847F4965C1E6874D19D86BD90E40C78DFD7D9828 (void);
// 0x0000074A System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_3(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_3_m8CEDDB9300D2791E68BB9E2917D3FA8F32B0B5C0 (void);
// 0x0000074B System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_4(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_4_m499933611976892DD9451EB4CD44BE7A3AF96C39 (void);
// 0x0000074C System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_5(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_5_m878246701B2EEA888B88C27FBC7C54810E2E3153 (void);
// 0x0000074D System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_6(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_6_m982BD9A86E152F593DED1496B72E5B61827C2822 (void);
// 0x0000074E System.Void Unity.Barracuda.StatsOps::.ctor(Unity.Barracuda.IOps)
extern void StatsOps__ctor_mBF5CEACAC814415F5BB6EC27EA60E53444475E06 (void);
// 0x0000074F System.Void Unity.Barracuda.StatsOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void StatsOps_PrepareModel_m65D037B78BD9569AE09F6F9F27745E1EECBE5EB9 (void);
// 0x00000750 System.Void Unity.Barracuda.StatsOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void StatsOps_PreExecuteLayer_m5A345EB729F399D3DC3EF445D890DFCFE461FFE4 (void);
// 0x00000751 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_mB9B135DB3DCE2F1C8A2B092A2DC1D6E72AA542A0 (void);
// 0x00000752 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_m1C0FDA32F73C8193CAD73FA2691DE33EB11DF020 (void);
// 0x00000753 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Dense_m7374754DE365438CD4B5558CF29F0F1B0613FCA6 (void);
// 0x00000754 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Dense3_mB749A500E39B108BDD2F3F4E60A3EC1B64D8E752 (void);
// 0x00000755 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2D_m0D17E16D0036C7FA6A28CCE7423C550A4AAAB4B9 (void);
// 0x00000756 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv3D_m5327D9483A8EA8BF32945F42B59681471B45F12D (void);
// 0x00000757 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_mD753E90633471B7B389BB828C25DE030522B5B77 (void);
// 0x00000758 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mF73254F3400E9624E096C1929CB2CAFA1C0CD619 (void);
// 0x00000759 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample2D_m87724A5BA5394DC758A9D80FFA6576E1F0913FB9 (void);
// 0x0000075A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample3D_m8D22AB073301733013F4E201FBF6FCB55C89AF65 (void);
// 0x0000075B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Resample2D_m1508ECE2EAD38D373138073C0736DCB37D107EDE (void);
// 0x0000075C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void StatsOps_Unity_Barracuda_IOps_DepthToSpace_m5CD4D6578AB46DA97A668DC23F139DAFD0654E05 (void);
// 0x0000075D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_SpaceToDepth_mCCB874481F6E0A9C7E56167C63744B72C0B9D5C4 (void);
// 0x0000075E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_MaxPool2D_m5D750BD3459B18484B83E45539E14D51A5AC4CC3 (void);
// 0x0000075F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_AvgPool2D_m779B834A6901AB3C79F03EB1EFB72BD5919FB7A5 (void);
// 0x00000760 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m6852934353878B0514207BBA1ADD1F7805F2A02D (void);
// 0x00000761 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m755CA32B765ACD1AB36C24DED07FCF6AAD2BA44F (void);
// 0x00000762 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m9E22DBC525A83942010C0962D474742AA79C35D1 (void);
// 0x00000763 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border2D_m947B576143A4A41A923DE96F8D2FB6991507F8DE (void);
// 0x00000764 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border3D_mB6C69F7628994E80A9B5C5F880D42C1FBA55FA6C (void);
// 0x00000765 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m77C339AB327BDFF8E87DF156BB4C5CC66122A611 (void);
// 0x00000766 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m29D5FA69E8DD6F00D5F0B1EAA417DC6DEF6CFAEA (void);
// 0x00000767 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DEdge_mA40DBAD76B14F107DEF1547DEA926129D6B21880 (void);
// 0x00000768 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_ScaleBias_mEB176AE8CED884CFB602BC4DC11CB4C406AD736C (void);
// 0x00000769 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Normalization_m820E888CBC82A9020E9217066E188E5494883631 (void);
// 0x0000076A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_LRN_m2BCB6D1040F3D3DC1B8902DFF32A0158A77C39AD (void);
// 0x0000076B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Dropout_m62457FBF8BF8F19EA58D3C84B43EA74696716776 (void);
// 0x0000076C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomNormal_mC602EFCC7146E863A23FCC97773A93FC8C5CA01F (void);
// 0x0000076D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomUniform_mA15D0A02444709A966AF70257E48E39F46B8354F (void);
// 0x0000076E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Multinomial_m43B31ED45E48DE0919CF33E945B33750022D0862 (void);
// 0x0000076F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_OneHot_m022398B02777B2995663B771F1427B578D685EAB (void);
// 0x00000770 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_TopKIndices_mFA19D093407E85B875E4244EC939DF134129740A (void);
// 0x00000771 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_TopKValues_mD25143CF9ABE91149D5443F93140FEE7A452B7D8 (void);
// 0x00000772 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::NonZero(Unity.Barracuda.Tensor)
extern void StatsOps_NonZero_mFF208B9AF83F4068EAC74BD051C1BBBA772ED309 (void);
// 0x00000773 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu_mC0273C53D03C2F4F5A225131F68C9A92EBDC73B5 (void);
// 0x00000774 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Softmax_m2331CD13B27D3561DD1D1A2F49B8D0AFBC19679F (void);
// 0x00000775 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogSoftmax_mE0D1860B63BA337202FED15F66E96AA658E53B62 (void);
// 0x00000776 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tanh_mD93D72BABB13CBE1348C9F91ACF76F76BDA2E104 (void);
// 0x00000777 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Softplus_mA9E7590FA409472060C18EC4DCA173E36F72E6E8 (void);
// 0x00000778 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sigmoid_m3C0A5F6CC6C0E747B27E30555E547A65B2B625D2 (void);
// 0x00000779 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu6_m2D5229F7E1124A3E2316AD323EB09A2F869423CF (void);
// 0x0000077A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Elu_mCC36A131C61F9A749785C8D367D70C693D344F8B (void);
// 0x0000077B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_LeakyRelu_m63DCA80F4FAB30E545C793D84F46D4A7525467A8 (void);
// 0x0000077C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Selu_m85B154E134142452695829CCC744A2861A66B81D (void);
// 0x0000077D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_PRelu_m152DC5297A152704B825ECEF84925FD49B8CDBD7 (void);
// 0x0000077E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Swish_mDDBD197674FF505F2A0CA65D9C6562B7EFC8FF8F (void);
// 0x0000077F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Abs_m359B76F384B27E09019AC9A973CDA008E852E777 (void);
// 0x00000780 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Neg_mCEE8853E5B8A500B9291A0D648ADB0AE90992D64 (void);
// 0x00000781 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Ceil_mDD3531ABF192B850F3B15D6AE4C8C07A74A4C42B (void);
// 0x00000782 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Clip_mB494C647D8A0D8D9229CFE7783A2E2679EE25645 (void);
// 0x00000783 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Floor_m31E5EFE9057A9D6D61948B753DCE0F5B77691483 (void);
// 0x00000784 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Round(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Round_mBC61A104C6C8F0575251B078C3D1D4E538192E3A (void);
// 0x00000785 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Reciprocal_m4F6F27B19115A52819AB89D7FECF072BC86DDFEF (void);
// 0x00000786 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Pow_m14F695C84EA9A2A28CE9181085D8AB837005F44D (void);
// 0x00000787 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Exp_mB906D901D5745FE389CD4091CCC8D110AF8F88AB (void);
// 0x00000788 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Log_m5A196337FBA103BAF9233A8798E1A1EAE7D27AA2 (void);
// 0x00000789 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sqrt_mDAAF9802FC26F7D11CB171F8BC35162564244207 (void);
// 0x0000078A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acos_mA8E02756CF29FD53A6536EAA6002E0CEB5713204 (void);
// 0x0000078B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acosh_mF43AA8A715EFF61CBC306101F46BE97C835D189F (void);
// 0x0000078C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asin_m820252F24D6750F4DF30FB95F8E91FD231169186 (void);
// 0x0000078D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asinh_mA0299A97295BC1731B5ABA2B53B55B4421892942 (void);
// 0x0000078E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atan_mE7C54DE32C0B4A3F355B62BFE2FC50A4F499FA30 (void);
// 0x0000078F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atanh_m4B9C771C5D7C602109E58EC20AFC099F057BEB01 (void);
// 0x00000790 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cos_mE90E2533E802FB053A3D0F51D5CBCB69B0407C78 (void);
// 0x00000791 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cosh_m9246C2692C2507FC0627A5BB03029A168256F9FE (void);
// 0x00000792 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sin_mBE499DEF07BF9986F741AD4983096DFBBA8DB677 (void);
// 0x00000793 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sinh_mDECC94D6FD75EB255532C636C89FFC8C9BEF50BD (void);
// 0x00000794 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tan_m2E0AB326F7610A7702F7F7150DDBCDC3C1FEB0CC (void);
// 0x00000795 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Add_mE4D846DF9EB1C9FA5041D437F2D854A192A2CC82 (void);
// 0x00000796 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Sub_m099E8600D96F475908111CF807775A1310533B16 (void);
// 0x00000797 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mul_m902476A7E594F45446D9DB0D9AF7A342DCDF7B66 (void);
// 0x00000798 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Div_m2E22DBB1846799D229FC50A1F8C1B840E41F236B (void);
// 0x00000799 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Pow_mD47D66DC5047233AB5474EA229B5A9B79373A657 (void);
// 0x0000079A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Min_m04D6504B1C862CFEF935DE1AB10383B28353428A (void);
// 0x0000079B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Max_mF6C6A4207E39333A36D1BFA3C89573FE9A859605 (void);
// 0x0000079C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mean_mC40097726F3EA035DEC43A192C8966B53EE9712F (void);
// 0x0000079D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMax_m6EDFB3462B5C5B7E2865634ACF3B87C853DBEA44 (void);
// 0x0000079E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMin_m1C69C1844C6F2A6893B5730AAF027F965B3E77B4 (void);
// 0x0000079F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMax_m1EB9C2768E2C23B51DF0112F054FC65CA759A2EE (void);
// 0x000007A0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMean_m564A2932BFE22D708BC13C795EA73EFAE2C4586A (void);
// 0x000007A1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMin_m769956F9EB5FCE5C781048073C70F912E0469E7D (void);
// 0x000007A2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceProd_m0CD573C08696A2421868F34BB8BFCF8C47B35D66 (void);
// 0x000007A3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceSum_mE3B17299DF341664904BC0C6CD228E1F6BAA0AC6 (void);
// 0x000007A4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Greater_mCC9AFE5527F65677959A9AE962DCD584AE9583A6 (void);
// 0x000007A5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GreaterEqual_mF743BB3559852C7F2AEE11E7BF3B0E76C7630D54 (void);
// 0x000007A6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Less_mCAB3258623E5F81F9A4443AF85A2DE5946A56EE0 (void);
// 0x000007A7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LessEqual_mE1949682885BC03CFC3F3FE90C91884BC12A24D6 (void);
// 0x000007A8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Equal_m116DEA0CE3FBE90B07BFE4119B87413E050BBF3D (void);
// 0x000007A9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalOr_m45802609506DBE3A7C77E3E0C877D09249C220E3 (void);
// 0x000007AA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalAnd_mAB05D1935267402BE85B88AD825D6E32BB261FA4 (void);
// 0x000007AB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalXor_mCF9456524052BA2ADD6D088290362B28EA5869FB (void);
// 0x000007AC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalNot_mB4680B5AE0F1D204789476ED8F7FDFA506B12164 (void);
// 0x000007AD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sign(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sign_m15FDFA8DBB243AC500FD17BCB5D26868882C31DF (void);
// 0x000007AE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Where_mC30261D7A9AC37D8576C385D0B3A53C0ED542CD7 (void);
// 0x000007AF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Flatten_m43CA37F6AA7EA2B1206CF77D06F323C92B0FDCC5 (void);
// 0x000007B0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Reshape_mEC78A21C4D972CBDE14A8C79B2DFFA6E1211BAB3 (void);
// 0x000007B1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Expand_m3A60D3E430D76B0D52A94DE4D2EBB7AB07AF6D00 (void);
// 0x000007B2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Transpose_mF58DAD9C48E20912408ACC89BD4BAE6C3A6F86E8 (void);
// 0x000007B3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Transpose_m0AD53B8345EB7002B21829CD806389384402FBB9 (void);
// 0x000007B4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Gather_m033A8865436311FA0AE32D068DFEF4E460BB6A4C (void);
// 0x000007B5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_mCFEAEBE56207EECD5593D89913AB1311318DB945 (void);
// 0x000007B6 Unity.Barracuda.Tensor[] Unity.Barracuda.StatsOps::LSTM(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_LSTM_m5EC64C8A10DA90D95766FB58C6C61A3274C92815 (void);
// 0x000007B7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Concat_m3EC695B440FF03584BC5C82DDE03C58964FF47C7 (void);
// 0x000007B8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_StridedSlice_mA09287C15D8A8DD6EF7E94BC615D654BB9C7CE40 (void);
// 0x000007B9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Tile_m6B755ADC47B85E0D55C47C55050F6EBB4180D5D1 (void);
// 0x000007BA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Shape_m916F2EDD1FA12FDD1C70AF763ED5D4701B9926D3 (void);
// 0x000007BB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ConstantOfShape(Unity.Barracuda.TensorShape,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_ConstantOfShape_m2FA25611438634D21B8A8A86061548ABFA049DE9 (void);
// 0x000007BC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Copy_m47B3215D1BD0C7E95F8A430497E16B1D6C3F626E (void);
// 0x000007BD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Prepare_m95DF44B05D5FBF7C01E05E47A56CD2EC55CA6DB6 (void);
// 0x000007BE System.Void Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_ResetAllocator_mA6C10B0EA0254CC9B45493F2A2BE2B596AF90737 (void);
// 0x000007BF System.String Unity.Barracuda.StatsOps::ToString()
extern void StatsOps_ToString_mD3A343CAC1E090FFAB9FC15D081AFB25FEBE36C0 (void);
// 0x000007C0 System.Void Unity.Barracuda.StatsOps::Elementwise(Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Elementwise_mAC0660B0D7DB17B6DABF6492D44D9420C2CB663E (void);
// 0x000007C1 System.Void Unity.Barracuda.StatsOps::ElementwiseBroadcast(Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_ElementwiseBroadcast_m7733A0DAE25A937E33EFA61D36D141906C8B04D0 (void);
// 0x000007C2 System.Void Unity.Barracuda.StatsOps::Reduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Reduce_mEC604FA374CE6EEE23F1C4CA61DAB6A6AFCCCFBC (void);
// 0x000007C3 System.Void Unity.Barracuda.StatsOps/Transcendental::.ctor()
extern void Transcendental__ctor_m8B9ADA5BE078015D55F1EA884EB0459D332C9BCE (void);
// 0x000007C4 System.Void Unity.Barracuda.TensorOperatorNewAllocator::.ctor()
extern void TensorOperatorNewAllocator__ctor_m3F2A16EF5878DAABE70F961386A91FCAF82F5342 (void);
// 0x000007C5 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Finalize()
extern void TensorOperatorNewAllocator_Finalize_m72DF5354218A3069AE228CA64FC991220D4B7DAC (void);
// 0x000007C6 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorOperatorNewAllocator_Alloc_mD451FF807D5AD65177667E319FC674419ED480C4 (void);
// 0x000007C7 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorOperatorNewAllocator_Alloc_m7D40E463B4F9002ACF8E8240B8E3BE14CA96F825 (void);
// 0x000007C8 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorOperatorNewAllocator_Release_m3062090C18586D6703C4F3CDB17B8972EF340EEE (void);
// 0x000007C9 System.Void Unity.Barracuda.TensorOperatorNewAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorOperatorNewAllocator_MoveToDevice_mB374A542B2880AA67C87DD2FAAC884EF163C0D9D (void);
// 0x000007CA System.Void Unity.Barracuda.TensorOperatorNewAllocator::Reset(System.Boolean)
extern void TensorOperatorNewAllocator_Reset_mA6D5941AE2DBD2874063B67C6EAE9A198BF234FE (void);
// 0x000007CB System.Void Unity.Barracuda.TensorOperatorNewAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorOperatorNewAllocator_WaiveOwnership_m730DA5BFB7E87C4907EDA7C47DCF5AB4497853E4 (void);
// 0x000007CC System.Void Unity.Barracuda.TensorOperatorNewAllocator::Dispose()
extern void TensorOperatorNewAllocator_Dispose_m8E81045860B903D090F04FCC8F8708EECB1DD5FF (void);
// 0x000007CD System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_busyBytes()
extern void TensorOperatorNewAllocator_get_busyBytes_mB93AC8167EA593284285FB03EB4907B616608D01 (void);
// 0x000007CE System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_freeBytes()
extern void TensorOperatorNewAllocator_get_freeBytes_m6E2F9BF34068275839AB2C143A4356934EE12A5D (void);
// 0x000007CF System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_totalBytes()
extern void TensorOperatorNewAllocator_get_totalBytes_m13B2C36FDEB368272D1F3D86F2532C0D0BB2EACA (void);
// 0x000007D0 System.String Unity.Barracuda.TensorOperatorNewAllocator::ToString()
extern void TensorOperatorNewAllocator_ToString_m945649EFF8FE347854057355AF4590CD70F40627 (void);
// 0x000007D1 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::.ctor()
extern void TensorCachingByShapeAllocator__ctor_m3B5930576FEC7B517CEF5E6033FAF2719468CC34 (void);
// 0x000007D2 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Finalize()
extern void TensorCachingByShapeAllocator_Finalize_m2E75289CB442983CE9EB4EF251D3BCB69CA8D243 (void);
// 0x000007D3 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AddRef_m44612830EDE9CEC7FAC33A4782CB9A22C2862D40 (void);
// 0x000007D4 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingByShapeAllocator_DecRef_m46FB59F36F78CFA4ACDB9879B1DC1EBDEB748CD0 (void);
// 0x000007D5 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AdoptFreeBuffer_m633C336E7C23E76CCA00D4255F62D6F4257972E0 (void);
// 0x000007D6 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingByShapeAllocator_Alloc_mDF867A2FFE0551448F73877298392DCCEA156F12 (void);
// 0x000007D7 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Alloc_m7007AC713E3E6D80341FDBD3C79BC89A30AB11D7 (void);
// 0x000007D8 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingByShapeAllocator_Release_mD39AA0E7F5A1A673600F39C32B0CF00EBD5D9372 (void);
// 0x000007D9 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingByShapeAllocator_MoveToDevice_m3007663AC9354803FFD7512CFBB299828CC47772 (void);
// 0x000007DA System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Cast_m79A462A1B34015F5F0DF97F0BCB6FD4CA7805DC3 (void);
// 0x000007DB System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Reset(System.Boolean)
extern void TensorCachingByShapeAllocator_Reset_mF2F260DEF21E64F77C0F2502B19CFA4EC825FF9E (void);
// 0x000007DC System.Void Unity.Barracuda.TensorCachingByShapeAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingByShapeAllocator_WaiveOwnership_m06CC242014B42851B8507A7A39BFE2E9C623CF0B (void);
// 0x000007DD System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Dispose()
extern void TensorCachingByShapeAllocator_Dispose_m3EB7CC7412FC88EF068A3F150CE659CB879D4E43 (void);
// 0x000007DE System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_busyBytes()
extern void TensorCachingByShapeAllocator_get_busyBytes_m39C112FDF7E6CB59D090969C54E7EB4E39240B86 (void);
// 0x000007DF System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_freeBytes()
extern void TensorCachingByShapeAllocator_get_freeBytes_m6039AE6222DA8506D8A5C4E46B14162A9433535C (void);
// 0x000007E0 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_totalBytes()
extern void TensorCachingByShapeAllocator_get_totalBytes_m17AA987221A958BCC2C91B74E5FBFD2F687D3A57 (void);
// 0x000007E1 System.String Unity.Barracuda.TensorCachingByShapeAllocator::ToString()
extern void TensorCachingByShapeAllocator_ToString_m7760D702F11BDEA3CDCEFD08A141FFF562A8BECA (void);
// 0x000007E2 System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mE005ACE374F58249FAFE8B1948E306EA71BE50A9 (void);
// 0x000007E3 System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
extern void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m3BE3ADFB2FD990695C8FFC79958B6B2EE3118578 (void);
// 0x000007E4 System.Void Unity.Barracuda.TensorCachingAllocator::.ctor()
extern void TensorCachingAllocator__ctor_m6E9648282E6945F8791073B3F4E35252199F29E4 (void);
// 0x000007E5 System.Void Unity.Barracuda.TensorCachingAllocator::Finalize()
extern void TensorCachingAllocator_Finalize_mCD77734661EA552E7365BE6B0D9234A6AEDB5717 (void);
// 0x000007E6 System.Int32 Unity.Barracuda.TensorCachingAllocator::GetAllocationMaxCount(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_GetAllocationMaxCount_m8E112C18FDD1EA16B1C17BDF4767D21F34792586 (void);
// 0x000007E7 System.Void Unity.Barracuda.TensorCachingAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AddRef_m10D42BEF652EF5FEB973B06170A7F514E55A5F77 (void);
// 0x000007E8 System.Void Unity.Barracuda.TensorCachingAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingAllocator_DecRef_m6EF79ECA6C328A5EC1D2BF8A55D6A0AD5FA3409C (void);
// 0x000007E9 System.Void Unity.Barracuda.TensorCachingAllocator::AdoptFreeBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AdoptFreeBuffer_m808301B80A9EF597F5D8D64B358540CFFB93F358 (void);
// 0x000007EA System.Void Unity.Barracuda.TensorCachingAllocator::DisposeAllocatedBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_DisposeAllocatedBuffer_m2E240C2E3501EC8ADB4A4213ACE4460BEE0551BA (void);
// 0x000007EB Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingAllocator_Alloc_mF03B33C623218258ED694393D12740C6678EAA4A (void);
// 0x000007EC Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Alloc_mDBBB4CA09B0D0ACFB785FAD51B9778E645A97AEC (void);
// 0x000007ED System.Void Unity.Barracuda.TensorCachingAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingAllocator_Release_mE68B863B43666C7B128CABD956166EB0DDAB523F (void);
// 0x000007EE System.Void Unity.Barracuda.TensorCachingAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingAllocator_MoveToDevice_mC601B312A3B7A49E79C1C873607AFB8ED791EF3B (void);
// 0x000007EF System.Void Unity.Barracuda.TensorCachingAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Cast_mBE38958EA8C000AE509854729C1A487FE4856DE3 (void);
// 0x000007F0 System.Void Unity.Barracuda.TensorCachingAllocator::Reset(System.Boolean)
extern void TensorCachingAllocator_Reset_m76BB93623EB8887AE6D7B1BFB3FF4618DADF232F (void);
// 0x000007F1 System.Void Unity.Barracuda.TensorCachingAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_WaiveOwnership_m08884259A9478CA5F306086F143E43EAC32341BC (void);
// 0x000007F2 System.Void Unity.Barracuda.TensorCachingAllocator::Dispose()
extern void TensorCachingAllocator_Dispose_m9274ABC517A9B98CDC85899B76D5BC53C3C50F9F (void);
// 0x000007F3 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_busyBytes()
extern void TensorCachingAllocator_get_busyBytes_m92C5D72331E550A77FD62A8D183A15B1D0583313 (void);
// 0x000007F4 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_freeBytes()
extern void TensorCachingAllocator_get_freeBytes_mF1762EA857953669200CABC0B559DF15D0B3DDBC (void);
// 0x000007F5 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_totalBytes()
extern void TensorCachingAllocator_get_totalBytes_mED25FB2C5E3829389DC3AA9F3B1A40EE0FB8FBD7 (void);
// 0x000007F6 System.String Unity.Barracuda.TensorCachingAllocator::ToString()
extern void TensorCachingAllocator_ToString_mEA909C6818303DAE4350EABEF095D75A4B4F74C8 (void);
// 0x000007F7 Unity.Barracuda.Tensor Unity.Barracuda.TensorScope::_(Unity.Barracuda.Tensor)
extern void TensorScope___m1C05DF203215BAC9784F5C565FD7E6BE30C264CF (void);
// 0x000007F8 System.Boolean Unity.Barracuda.TensorScope::Remove(Unity.Barracuda.Tensor)
extern void TensorScope_Remove_mD3FE671BC3ADAC74C69AB0D89D22F35352246867 (void);
// 0x000007F9 System.Void Unity.Barracuda.TensorScope::DependentOn(Unity.Barracuda.Tensor)
extern void TensorScope_DependentOn_m3189E8F49DBA545F47276D5584BD83F022092536 (void);
// 0x000007FA System.Void Unity.Barracuda.TensorScope::DependentDispose(Unity.Barracuda.Tensor)
extern void TensorScope_DependentDispose_m3D6DC3687CF12F69BFC9EFFB212361776233DBB9 (void);
// 0x000007FB System.Void Unity.Barracuda.TensorScope::Dispose()
extern void TensorScope_Dispose_m26B8AA3CBDA5E5BA486BD65A3138F0FBCA0353EB (void);
// 0x000007FC System.Void Unity.Barracuda.TensorScope::.ctor()
extern void TensorScope__ctor_m5516EC2F851AF1E31A6E6FCB028C0D2EBDEEF8E6 (void);
// 0x000007FD System.Void Unity.Barracuda.TensorScope/F::.ctor(System.Object,System.IntPtr)
extern void F__ctor_m1C57D66ADFD855B49F57835986CEE5DA18C27122 (void);
// 0x000007FE Unity.Barracuda.Tensor Unity.Barracuda.TensorScope/F::Invoke(Unity.Barracuda.Tensor)
extern void F_Invoke_mF9DE40521BFEBDFCA0F615EECF518CBDD6F3B581 (void);
// 0x000007FF System.IAsyncResult Unity.Barracuda.TensorScope/F::BeginInvoke(Unity.Barracuda.Tensor,System.AsyncCallback,System.Object)
extern void F_BeginInvoke_m30212E748BAF2A38BAE751325C3A6A1A52CF4602 (void);
// 0x00000800 Unity.Barracuda.Tensor Unity.Barracuda.TensorScope/F::EndInvoke(System.IAsyncResult)
extern void F_EndInvoke_m3157BBE33AC60E05422245FC0105419821DCE01E (void);
// 0x00000801 System.Void Unity.Barracuda.VerboseOps::.ctor(Unity.Barracuda.IOps)
extern void VerboseOps__ctor_mF8B929079BD5F1B5C387F08392E01638C83963AB (void);
// 0x00000802 System.Void Unity.Barracuda.VerboseOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void VerboseOps_PrepareModel_m4F341172CF66B035F9F1DF841369C4E62010B77E (void);
// 0x00000803 System.Void Unity.Barracuda.VerboseOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void VerboseOps_PreExecuteLayer_m9E79B34C65EFD12A741257CE77E5ADF82B489ACC (void);
// 0x00000804 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_mEDD93F00C31F420AAC6F2B0FC8F2532C144C058B (void);
// 0x00000805 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_m5621C4F6A0F4CF06D46361133D338E0B37551892 (void);
// 0x00000806 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Dense_m2D791C10F8F15E8A9BE3A1D33891D75B87EC7652 (void);
// 0x00000807 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense3(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Dense3_m1DF67178250A4DA905684F5C8F479F310B2C823E (void);
// 0x00000808 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2D_mEB61143AA26D61DE73FF6D531CBA265D1F9A5C91 (void);
// 0x00000809 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv3D_m340385E57D8D1F43A97AB4D60BBAD4BE1D8DDCE8 (void);
// 0x0000080A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m03259FDA4B23EE31EFB5C2C7C8FDBD0DBC4F1B49 (void);
// 0x0000080B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mC32E01214424D48F428DA15B789D900F43719BED (void);
// 0x0000080C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample2D_m74FFF29867F785B785C4BB00A65C7C539F08CDC0 (void);
// 0x0000080D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample3D_m71A75A35045380E7FD15540247079C6FA8925FD0 (void);
// 0x0000080E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Resample2D_mB8A42961AA1854206690BE1C9662993BE834C038 (void);
// 0x0000080F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m9F8102812788822C067233B1E56BE792A06F87A5 (void);
// 0x00000810 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_mFBE091478FE37FDE516810A1F23CB04D0CFC8CE2 (void);
// 0x00000811 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_MaxPool2D_m5DCA0C40A53362964B3EACA43F855AA29DC70AEF (void);
// 0x00000812 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_AvgPool2D_mC498B6A463CAB443A6E360C20FE60CCBD05E6FD3 (void);
// 0x00000813 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m1E256C07918E7494A10DC46DE7A89C815E56DC93 (void);
// 0x00000814 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m75DB7F2160AF955012FE6A0E779BAA2B849B2B2A (void);
// 0x00000815 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mD87136ACE2CE16DC6A08F9259A1EAC7293475877 (void);
// 0x00000816 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border2D_m076EE76361F370A7F95DF82ABACDEB5E730CAD90 (void);
// 0x00000817 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border3D_m4A52E674B342A29EB70D266A6EA34E6AE49FDADC (void);
// 0x00000818 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m76C95E9258BE296CE5C06F9E0D1DA63B1EBA1CE9 (void);
// 0x00000819 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m328D656CFF4AFE1D2A4FE0F21E53C9F8FAEE55F6 (void);
// 0x0000081A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_mF9204ECE85A72C1F6E77E2C97054B482A1C90CB3 (void);
// 0x0000081B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_ScaleBias_m7994B92205657D30EDE8CDA86DAFF5EF36139B61 (void);
// 0x0000081C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Normalization_mE5C57CB24EA80D5DC887BD98A156D60FA491A077 (void);
// 0x0000081D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_LRN_m395EEB99D3450F383D8FD5CA20068B9AE2B0A8CE (void);
// 0x0000081E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Dropout_m07EFC7BF9056D5FFF1053F2F87884523EB3976E3 (void);
// 0x0000081F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomNormal_mE2A1391A510820D2295FAFCCA26C8BE342FAF631 (void);
// 0x00000820 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomUniform_m67F493BA5CBAFFB80599E33F41D287EAEAACD5ED (void);
// 0x00000821 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Multinomial_mDF87CB2A1CA25505EC69F6E63B51759C2449FBB4 (void);
// 0x00000822 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_OneHot_m24A6676E2B25184D6DB32ED68706A53D5D9CBBB8 (void);
// 0x00000823 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_TopKIndices_mE40A6A418A5B3CF0B5D38C93B5B9B4EB9F5DA39D (void);
// 0x00000824 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_TopKValues_m6E1DF40BD573C370A7FD2058AEAB8194236A399F (void);
// 0x00000825 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::NonZero(Unity.Barracuda.Tensor)
extern void VerboseOps_NonZero_mE66EB38C0654E1C0D78BF3924A9B0F4AF3FDC4C7 (void);
// 0x00000826 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu_m365731856C99E039FE6ED61E7310933169FD4277 (void);
// 0x00000827 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Softmax_m14EF4A4986448809F354E137B465FAA8B7C4F2A0 (void);
// 0x00000828 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogSoftmax_mD6B719AB0944075D607BBA9ED769833350747C9A (void);
// 0x00000829 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tanh_m4D29788958D293CB71BC8C6F1C0F0187B3C5608C (void);
// 0x0000082A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Softplus_m5F2280DAD9F8E4C4FF0C9828AB0FB217D6D30EAB (void);
// 0x0000082B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sigmoid_m9EB190CA8B94B3BFE7562172F99849C11280D4FD (void);
// 0x0000082C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu6_mA26390A7C467D26848F62FB86BF6BB998A3A431F (void);
// 0x0000082D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Elu_mE778380C26A440335B3E3F1249890CA2FF24F455 (void);
// 0x0000082E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m220150CF781DAE64065A39389F7417C147664D58 (void);
// 0x0000082F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Selu_m3A7F76828B9BB5C08FA46B825D5BCAC6D7091F03 (void);
// 0x00000830 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_PRelu_mC8ADD05124ADFD4CF846DA34AC0D92337E136DF4 (void);
// 0x00000831 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Swish_mA9B790C2475695CD0AD152B5DDC95A122675B66C (void);
// 0x00000832 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Abs_m6D0D2900921F8CBEFD3D439DA0FF28878A07CEDC (void);
// 0x00000833 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Neg_m3C436D642E8D71B1403111E0736F7F38A1055B05 (void);
// 0x00000834 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Ceil_m00364CD4E5E9A91D7114A75176FA98F1C52C0B5C (void);
// 0x00000835 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Clip_mD0662FDD745CDD9A7B00669BE1E25198F5B79975 (void);
// 0x00000836 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Floor_m0AB946360FF2E49EF8898C9C8D9AFC8B0F422D05 (void);
// 0x00000837 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Round(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Round_mB1AEC9F071AFDE9B9E634F66EA3947706432A64A (void);
// 0x00000838 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Reciprocal_mA4EA404A8340BABE7240C2A8B334E0E1CB297C99 (void);
// 0x00000839 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Pow_mE58DB332A7207EF1083CE1588E50372D8125D005 (void);
// 0x0000083A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Exp_mB78FBA9B652D3EE43A5AD43C084074A414279295 (void);
// 0x0000083B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Log_m4A7C90FC5F87171456508381BD4E0A58102450F2 (void);
// 0x0000083C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sqrt_m7F990DF93CB3FEB70F64E9452839AD3D130389A3 (void);
// 0x0000083D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acos_m337F7997B486437331D4DD00052E853481B29ED3 (void);
// 0x0000083E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acosh_mE53C5C90A8DC7230236750F4BFD5E257F9B0940C (void);
// 0x0000083F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asin_mE7629EF686033B90E2B03D9164B6AFE12732ED38 (void);
// 0x00000840 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asinh_m2CAA123657EAEA1149B94E5F5F7F0C27E56791EC (void);
// 0x00000841 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atan_mB2EB0D57EAEEAC86B873B21ED62D45C14B2C5EC1 (void);
// 0x00000842 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atanh_m0EC93C0E35DD5FBF90ED69DBDAC4CC60A4F81DCE (void);
// 0x00000843 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cos_mE7479A837F23134D6E0F76FEFAB72293F98F5E87 (void);
// 0x00000844 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cosh_m69AC12E01287AB123B3DDB3DC5151FDC757CE622 (void);
// 0x00000845 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sin_m7ADC6F3CC3CEE8DA017921C1286DAD4E469AB2F4 (void);
// 0x00000846 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sinh_m6C380678162579DC86015193052DE0F0830D7BFB (void);
// 0x00000847 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tan_m2F5F2F9A936E31C8A6FD84120F81CA1372E11A13 (void);
// 0x00000848 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Add_m407951A4786C0CD0557DFB72320DC8F9ADC9CA98 (void);
// 0x00000849 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Sub_m0D2112CFD42E76EB166BC57E0C39010192D0CCD5 (void);
// 0x0000084A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mul_m9048E4B71E953AB4344D06C68FEA32A7B1EB9A23 (void);
// 0x0000084B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Div_mE8AABD81F62B66FAECEC9E5F574332F6D59288F8 (void);
// 0x0000084C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m699DC1CABC907B183259F18016FD8602A88A6BA1 (void);
// 0x0000084D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Min_mA21CDBE5D21CD84F24A46C4AC4F4458572BDC0D7 (void);
// 0x0000084E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Max_mF8F37BC07BB6B40FFFDE6493550C9453342BF714 (void);
// 0x0000084F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mean_m2A0505342B8485385971EDB00A7D9E92049A794B (void);
// 0x00000850 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB83906038719DD2FFD5EC8378015D354EDFD5A4F (void);
// 0x00000851 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMean_mC901370A2377C55110A70EAAFD548D9A357EFFCB (void);
// 0x00000852 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMin_m7134B187C3C72A2016DE5035E648CCC3D0FEE8E8 (void);
// 0x00000853 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceProd_m05E65EE3F70E7EA62C7454EC223D861A9DFAB7A8 (void);
// 0x00000854 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceSum_m1F2D7A57A50DDFBD2E9F3F5E870A6E20D057015E (void);
// 0x00000855 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMax_m38F96CAFFD4F45E5A50C8C098489A68BE08DFD8F (void);
// 0x00000856 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMin_m536A9F98312ABA534ABC1390804755EDD9076ADF (void);
// 0x00000857 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Greater_mF5E9587AE336D38D701F172CA6386956B9FCC340 (void);
// 0x00000858 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mD71129FADE713665C687D2FC9AF3B3F41062A4DA (void);
// 0x00000859 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Less_mA2CA98B56009F4DE4E0FB405B26697E718BA006A (void);
// 0x0000085A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LessEqual_mD8F47637567022CC90A1194AD7C9F81ED740A159 (void);
// 0x0000085B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Equal_m35AC0F2B044138A0878B7FCF55CC675F4226A017 (void);
// 0x0000085C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalOr_m1E44B6316451D62597CF2CE2791E86BFF14E6BCC (void);
// 0x0000085D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m53D3854E84BAE1E60D9B4DC22CFC80A6C08427E5 (void);
// 0x0000085E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalXor_m539ACBF775E73BADEB96F833066C304035A71CCE (void);
// 0x0000085F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalNot_m0CD37988688EA6BA301C219DE5385C5BAA62A00F (void);
// 0x00000860 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sign(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sign_m26587732D56C6EFF9665BD3A914F5B10CF3982C6 (void);
// 0x00000861 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Where_m24AA6BADA9545D5C085672C7093E045B9968908F (void);
// 0x00000862 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Flatten_m81ECAB78445A9F36F068B37147FADC5680C98FC2 (void);
// 0x00000863 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Reshape_mBE1AEDE5D3087EDC0DD802BAE3120BF72A7A943C (void);
// 0x00000864 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Expand_mFE95D6E86A169A98CC41D278BAEA9BD529648804 (void);
// 0x00000865 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_mD6089433B7E93A01B195DAC26C5E843CD2D172B0 (void);
// 0x00000866 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_m05B9B07E8AEAA805AAA505D8352E422633480299 (void);
// 0x00000867 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Gather_m4D28D6AF2B1F431BF64FA70DC2D851717953926D (void);
// 0x00000868 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_m79DB64EE007296F38A874A1A6135098F9771ED01 (void);
// 0x00000869 Unity.Barracuda.Tensor[] Unity.Barracuda.VerboseOps::LSTM(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_LSTM_m7BACC4ED7E8DCCA7BD0453D407A7457D7F852D01 (void);
// 0x0000086A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Concat_m892D1B129213834EA2DB89601824A0E2A59604EA (void);
// 0x0000086B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_StridedSlice_m1F33F84C92C163F45E8569FEBEE8C858E360241A (void);
// 0x0000086C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Tile_mAFBC7C9695FD5E37FF917ECF9B78A05BB674CC67 (void);
// 0x0000086D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Shape_mDB89106502D81BD7C61BAF029FFA69724519EA76 (void);
// 0x0000086E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ConstantOfShape(Unity.Barracuda.TensorShape,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_ConstantOfShape_m97392AE184873E866BEC7C35F2EB66FEF6424EAE (void);
// 0x0000086F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Copy_m6051B247B74E646701B10206BB2A49ACC24CA933 (void);
// 0x00000870 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Prepare_m01C306DE27B60364CF930427AA04C9B926C7CB25 (void);
// 0x00000871 System.Void Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m314C4E562E49CB2525196D0A5BE08058DBD419B1 (void);
// 0x00000872 System.Void Unity.Barracuda.VerboseOps/<>c::.cctor()
extern void U3CU3Ec__cctor_m16F0EDE0047A12E9C1183EB5A47B25212135533E (void);
// 0x00000873 System.Void Unity.Barracuda.VerboseOps/<>c::.ctor()
extern void U3CU3Ec__ctor_m844589AD1245CD726C4C001A0A5D84B91D3F4E39 (void);
// 0x00000874 System.String Unity.Barracuda.VerboseOps/<>c::<Unity.Barracuda.IOps.NonMaxSuppression>b__105_0(Unity.Barracuda.Tensor)
extern void U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__105_0_m70C905BF7A44185B7F3F5899756FA1989B84C44B (void);
// 0x00000875 System.Int32[] Unity.Barracuda.DeprecatedTensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void DeprecatedTensorExtensions_AdjustPadToPool_mF7E153782E5FDE4057122AA9AAA78B5DD7C2A0CD (void);
// 0x00000876 System.Int32[] Unity.Barracuda.DeprecatedTensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void DeprecatedTensorExtensions_AdjustPadToPool_m773070CE37D9F3FCCE9EB79ED2966F8FC3705B17 (void);
// 0x00000877 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndUploadToIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,System.Boolean)
extern void DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m95064344418A0CC41E3612F7EA9212004DD12D1E (void);
// 0x00000878 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndDownloadFromIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m9DA4A9B447C2D52C8793B6F6EA153DD7426F55CF (void);
// 0x00000879 Unity.Barracuda.ITensorData Unity.Barracuda.DeprecatedTensorExtensions::Unpin(Unity.Barracuda.Tensor,System.Boolean)
extern void DeprecatedTensorExtensions_Unpin_m0659D780EE05710D050DB133C524864DF3A23413 (void);
// 0x0000087A System.Void Unity.Barracuda.DeprecatedTensorExtensions::CastOnDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_CastOnDevice_m2BEB3B0861CBB89424A40CA7ACD3EE0CB402C586 (void);
// 0x0000087B System.Int32[] Unity.Barracuda.DeprecatedTestSetExtensions::GetInputShape(Unity.Barracuda.TestSet,System.Int32)
extern void DeprecatedTestSetExtensions_GetInputShape_m39B4EA7C754664E51B2F906B237A3BEBF525BC78 (void);
// 0x0000087C System.Int32[] Unity.Barracuda.DeprecatedTestSetExtensions::GetOutputShape(Unity.Barracuda.TestSet,System.Int32)
extern void DeprecatedTestSetExtensions_GetOutputShape_m5210BFAD48F2B3DFD8687C46553F3F5F83FA0241 (void);
// 0x0000087D System.Int32 Unity.Barracuda.DeprecatedTensorDataExtensions::GetMaxCount(Unity.Barracuda.ITensorData)
extern void DeprecatedTensorDataExtensions_GetMaxCount_m1302B23391D2AF422337CA681519A86ACB14EAA5 (void);
// 0x0000087E System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_m8CE22F8C2BCF42177DC570C34B891C6EA3D1A412 (void);
// 0x0000087F System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,System.String,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_mDFF6F93384EF99D576E3F331FDE78B722C29BA81 (void);
// 0x00000880 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Peek_mB9DA0EAF3927C2097424DA483618B97972050ACE (void);
// 0x00000881 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Peek_m7906C48EFC000C138659A96993721D5BBF96A545 (void);
// 0x00000882 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m52CB2796F2AD6C675ACC97AB551030B879CB3FBF (void);
// 0x00000883 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m484A64D2FA65AD44AF133885E8CDACF617610FF5 (void);
// 0x00000884 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m277457CB673F0A39A293B86DE6EE60B67505802E (void);
// 0x00000885 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::WaitForCompletion(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_WaitForCompletion_mAF349207AC48000993EE3E65FB4380B8D8CBDB14 (void);
// 0x00000886 System.Single Unity.Barracuda.DeprecatedWorkerExtensions::GetAsyncProgress(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_GetAsyncProgress_mF9C1C7FE148663036B6A8A40EFFE9F1AACA3EA9F (void);
// 0x00000887 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m4C6AB2857A1999D2254DB51D6827C2D05D443242 (void);
// 0x00000888 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m26320628B3C0BFA9F1E4A68C40DBBBD2706CD994 (void);
// 0x00000889 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m8F62832DAC6C2FD091F758A1EC83E1DC2B10C2DA (void);
// 0x0000088A Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m3A06B082427AADEB395F1F495DB581A267C29C37 (void);
// 0x0000088B Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Fetch_m8783D328228AA1766DECE3E4F9EB5A025F1F0DD2 (void);
// 0x0000088C Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Fetch_m60182BA905FBA9CDF99A005FD7B39DC46D645F05 (void);
// 0x0000088D System.Boolean Unity.Barracuda.BarracudaWorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.BarracudaWorkerFactory/Flags)
extern void BarracudaWorkerFactory_IsType_m6B93FA704779A64F9996CDEAFB730C5BABD2CF57 (void);
// 0x0000088E System.Void Unity.Barracuda.BarracudaWorkerFactory::.ctor()
extern void BarracudaWorkerFactory__ctor_mB9BFE93864AA70793A9CFBC9E0E2E061B3C0E370 (void);
// 0x0000088F System.Void Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_mC68B5D23C06DE3D0A1463632E681DB8467D9FA61 (void);
// 0x00000890 UnityEngine.RenderTexture Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m1564C9A1B6CFB0DD7453BAB37212E9DC92B3D0B5 (void);
// 0x00000891 System.Void Unity.Barracuda.BarracudaTextureUtils::.ctor()
extern void BarracudaTextureUtils__ctor_m2ED4E517FAEDC99D6C8311C4342540191514F270 (void);
// 0x00000892 System.Void Unity.Barracuda.IWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000893 System.Void Unity.Barracuda.IWorker::SetInput(Unity.Barracuda.Tensor)
// 0x00000894 System.Void Unity.Barracuda.IWorker::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000895 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute()
// 0x00000896 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(Unity.Barracuda.Tensor)
// 0x00000897 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x00000898 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule()
// 0x00000899 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(Unity.Barracuda.Tensor)
// 0x0000089A System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000089B System.Void Unity.Barracuda.IWorker::FlushSchedule(System.Boolean)
// 0x0000089C System.Single Unity.Barracuda.IWorker::get_scheduleProgress()
// 0x0000089D Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput()
// 0x0000089E Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String)
// 0x0000089F Unity.Barracuda.Tensor[] Unity.Barracuda.IWorker::PeekConstants(System.String)
// 0x000008A0 System.String Unity.Barracuda.IWorker::Summary()
// 0x000008A1 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
extern void WorkerExtensions_CopyOutput_m4297C8B0AB5590C3E9B174C18D89C27856FBD1CF (void);
// 0x000008A2 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
extern void WorkerExtensions_CopyOutput_mB99C7CA47CCC1B97536ECB20A0EEA1F33339E780 (void);
// 0x000008A3 System.Void Unity.Barracuda.ITensorData::Reserve(System.Int32)
// 0x000008A4 System.Void Unity.Barracuda.ITensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
// 0x000008A5 System.Boolean Unity.Barracuda.ITensorData::ScheduleAsyncDownload(System.Int32)
// 0x000008A6 System.Single[] Unity.Barracuda.ITensorData::Download(Unity.Barracuda.TensorShape)
// 0x000008A7 System.Single[] Unity.Barracuda.ITensorData::SharedAccess(System.Int32&)
// 0x000008A8 System.Int32 Unity.Barracuda.ITensorData::get_maxCapacity()
// 0x000008A9 Unity.Jobs.JobHandle Unity.Barracuda.IDependableMemoryResource::get_fence()
// 0x000008AA System.Void Unity.Barracuda.IDependableMemoryResource::set_fence(Unity.Jobs.JobHandle)
// 0x000008AB Unity.Jobs.JobHandle Unity.Barracuda.IDependableMemoryResource::get_reuse()
// 0x000008AC System.Void Unity.Barracuda.IDependableMemoryResource::set_reuse(Unity.Jobs.JobHandle)
// 0x000008AD System.Int32 Unity.Barracuda.RecurrentState::InferBatchSize(System.Int32,System.Int32,System.String)
extern void RecurrentState_InferBatchSize_m2852ACCCCBD8E07A661D77DBC1FF054E148C8950 (void);
// 0x000008AE System.Void Unity.Barracuda.RecurrentState::.ctor(Unity.Barracuda.Model,System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void RecurrentState__ctor_m25F92F69B692CE9F95ED4CEA0CC065394A949C60 (void);
// 0x000008AF System.Void Unity.Barracuda.RecurrentState::Finalize()
extern void RecurrentState_Finalize_m9C585456045F03F972B7BB39B1C3D41FA6C0E8B0 (void);
// 0x000008B0 System.Void Unity.Barracuda.RecurrentState::Dispose()
extern void RecurrentState_Dispose_mA96F04F613E5DB41644079E2CAA5C972CFFB480D (void);
// 0x000008B1 System.Int32 Unity.Barracuda.RecurrentState::GetBatchSize()
extern void RecurrentState_GetBatchSize_m816512A6F9E64D8EFF9848AD4961070C294E5F3A (void);
// 0x000008B2 System.Void Unity.Barracuda.RecurrentState::BeforeExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_BeforeExecution_mC53483C6CA1C8991033E21FA2B5120B25F366188 (void);
// 0x000008B3 System.Void Unity.Barracuda.RecurrentState::AfterExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_AfterExecution_mE2B1FDDC8329E0E09C11FBE15FA40572492287E3 (void);
// 0x000008B4 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_mA4961D52618119948EF42727E5C587CBF4051720 (void);
// 0x000008B5 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mD48F55FE0882A6FFDDC05B9231EBA06C3CF8E67C (void);
// 0x000008B6 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mC73D0F2088953D2D870D5C405FBBD45E5A3E2580 (void);
// 0x000008B7 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m63B1AA1B82AEB351371CE5FDE6C5023EC441F392 (void);
// 0x000008B8 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mE411FAEF5201B8C7C1E2F00B41EB11E28B0E1F8A (void);
// 0x000008B9 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_mBAFCAC781C2885942F12765658485566D09C2489 (void);
// 0x000008BA Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_m5C1692901B3806693F2046C7777C9702A01A1274 (void);
// 0x000008BB Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_m902A31ABE9998CC1E9C40C32DB3A5F4CA1007D3D (void);
// 0x000008BC Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m24BAF96D8A1BB7FEBB53A5FB648F497F3D522325 (void);
// 0x000008BD Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mD9C277F1AC92D6532A85E84C5CABFD0C35509D88 (void);
// 0x000008BE Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m023A10A44B7721973EAB096B8748B8B702C4D0CE (void);
// 0x000008BF Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceCPUWorker_m4468F68A883E2445E750D57BA1D3238FB02BAE63 (void);
// 0x000008C0 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceComputeWorker_m861FE07D8AE4914BED6FB654535D54F034A07592 (void);
// 0x000008C1 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateComputeWorker_m10D41286D90BD483563C017B5E48AC5984B8B998 (void);
// 0x000008C2 System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_IsType_m874E2127A5744F4FE3FDCFFA2AA7C04392298623 (void);
// 0x000008C3 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_GetBestTypeForDevice_m1CC803A3A0FA5783DE42EA189AC0E0AED5BCFEE2 (void);
// 0x000008C4 Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void WorkerFactory_ValidateType_mC849DB5AEBD9693353F23A775FB7406A5A6B4709 (void);
// 0x000008C5 System.Void Unity.Barracuda.WorkerFactory::.ctor()
extern void WorkerFactory__ctor_m8FA14747E5AFEF27B9437886758A2979C50EAD4D (void);
// 0x000008C6 System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void WorkerConfiguration__ctor_m79BFE73A37D292BB2DE12C3A1B04057802AE2061 (void);
// 0x000008C7 System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_mA66F255C6FD46763E54E219015CA4FFC896207F4 (void);
// 0x000008C8 System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
extern void WaitForCompletion__ctor_m08693D2C4C595F4066A5587EEB86082BE7A6B7C0 (void);
// 0x000008C9 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m84852252E47A0F0F4DE6D1510C7E6C59A64BE019 (void);
// 0x000008CA Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m94487ED53EDFB963F795CE6FA9C5D845B9BE9389 (void);
// 0x000008CB Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_m143F740FDEFFE7EAA3C10AF4DA27F1FAC543DCB0 (void);
// 0x000008CC Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_mF825CFE1C6FB6BECC5CFFEAAB7D7B50BD33BC4D6 (void);
// 0x000008CD System.Void Unity.Barracuda.D::LogWarning(System.Object)
extern void D_LogWarning_m82D89D513AC43402E47009C9F288A7225E1D57D1 (void);
// 0x000008CE System.Void Unity.Barracuda.D::LogWarning(System.Object,UnityEngine.Object)
extern void D_LogWarning_mE66DF1BDF94BC4574E4D23E3634CCFD2322E01C6 (void);
// 0x000008CF System.Void Unity.Barracuda.D::LogError(System.Object)
extern void D_LogError_mD01904E8CD07137CFCF0D93F876AB9AA6B80FBB5 (void);
// 0x000008D0 System.Void Unity.Barracuda.D::LogError(System.Object,UnityEngine.Object)
extern void D_LogError_m4DD59DD56B1A78A8F60885AB9C363BDEC413F419 (void);
// 0x000008D1 System.Void Unity.Barracuda.D::Log(System.Object)
extern void D_Log_mBAFB6B30A6C571C94D9814E4C23C448F02739515 (void);
// 0x000008D2 System.Void Unity.Barracuda.D::Log(System.Object,UnityEngine.Object)
extern void D_Log_m922B6352186EFE405D605E802C5A25AA73868737 (void);
// 0x000008D3 System.Void Unity.Barracuda.D::.ctor()
extern void D__ctor_m993DCB2D72DD1EA58747EF9EFA15130D42ADC1FD (void);
// 0x000008D4 System.Void Unity.Barracuda.D::.cctor()
extern void D__cctor_m738A776C3A6915E9F911D130995BAD0742DAADAD (void);
// 0x000008D5 System.Void Unity.Barracuda.Debug::.ctor()
extern void Debug__ctor_m3624F0CC83532C1685E646C6AA86E4326AA61980 (void);
// 0x000008D6 System.Void Unity.Barracuda.NNModel::.ctor()
extern void NNModel__ctor_mB5F33564590F9F3B07B2136D2B0CA3345E59E865 (void);
// 0x000008D7 System.Void Unity.Barracuda.NNModelData::.ctor()
extern void NNModelData__ctor_m7EFA24BC16AD35CBB919C25F4A892AEE663CAC10 (void);
// 0x000008D8 System.Boolean Unity.Barracuda.StringStringPair::Equals(Unity.Barracuda.StringStringPair)
extern void StringStringPair_Equals_mADB666454B85C8C9002E710886D2FD3FC2231C4B (void);
// 0x000008D9 System.Boolean Unity.Barracuda.StringStringPair::Equals(System.Object)
extern void StringStringPair_Equals_mA3407F90921CFA8319225E79F406AF777D20D001 (void);
// 0x000008DA System.Int32 Unity.Barracuda.StringStringPair::GetHashCode()
extern void StringStringPair_GetHashCode_m3BF40FD0CE3382CEBC43AC73E69FE25E4D00425F (void);
// 0x000008DB System.Int32 Unity.Barracuda.StringStringLongTriplet::GetHashCode()
extern void StringStringLongTriplet_GetHashCode_m93E6DE303C0A8B182B72DBEF932659B4366DB129 (void);
// 0x000008DC System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(Unity.Barracuda.StringStringLongTriplet)
extern void StringStringLongTriplet_Equals_m9499B2C596B7E740682198A63C612B9424913CB6 (void);
// 0x000008DD System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(System.Object)
extern void StringStringLongTriplet_Equals_mDAACEF0F4C92BA18F8B0FF10AB37BC831B778213 (void);
// 0x000008DE System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String)
extern void StringCache_Lookup_m80EE1FF42C651AF290481EDC8A58496A14CCFFB4 (void);
// 0x000008DF System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String,System.Int64)
extern void StringCache_Lookup_m6D0EDCE98D53FFA76E2F5EDB6CEC3D8DF1562BEF (void);
// 0x000008E0 System.Void Unity.Barracuda.StringCache::Clear()
extern void StringCache_Clear_m2B73944867D8020584E9696A6A452CF0C0E9E34D (void);
// 0x000008E1 System.Void Unity.Barracuda.StringCache::.ctor()
extern void StringCache__ctor_mEA993E7A38A48441B83987F7AA294C679D81F232 (void);
// 0x000008E2 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.RawTestSet)
extern void TestSet__ctor_m32296A1EC3734497DBB062B606EC411C6520DBE6 (void);
// 0x000008E3 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.JSONTestSet)
extern void TestSet__ctor_m956DE1CA7B67330A57D52D003625EECD3EAC57F6 (void);
// 0x000008E4 System.Void Unity.Barracuda.TestSet::.ctor()
extern void TestSet__ctor_m273D4F6BE83616884EB4C65D16A5CCE93AD6E7C1 (void);
// 0x000008E5 System.Boolean Unity.Barracuda.TestSet::SupportsNames()
extern void TestSet_SupportsNames_m1849217A52F39E8D6F917D9B41ABF31CEF540831 (void);
// 0x000008E6 System.Int32 Unity.Barracuda.TestSet::GetOutputCount()
extern void TestSet_GetOutputCount_m0F8BD0A8A89520ACC8CDD7703D8AB8E531AB1D6B (void);
// 0x000008E7 System.Single[] Unity.Barracuda.TestSet::GetOutputData(System.Int32)
extern void TestSet_GetOutputData_m795825A6DBB46054108AA93B8181636B64B8A0D4 (void);
// 0x000008E8 System.String Unity.Barracuda.TestSet::GetOutputName(System.Int32)
extern void TestSet_GetOutputName_m83CC22F82A68A9D542173A427DF7CC62D306F282 (void);
// 0x000008E9 System.Int32 Unity.Barracuda.TestSet::GetInputCount()
extern void TestSet_GetInputCount_m1C45DADAD0F9E45E90A5B0BF8C4BE81DDB72FFB7 (void);
// 0x000008EA System.String Unity.Barracuda.TestSet::GetInputName(System.Int32)
extern void TestSet_GetInputName_m77FEB57EC19E601FD57784AE50758D9DAC86A43D (void);
// 0x000008EB System.Single[] Unity.Barracuda.TestSet::GetInputData(System.Int32)
extern void TestSet_GetInputData_m08723AADB6B8DFE6F39DAA06518E4BD753615456 (void);
// 0x000008EC Unity.Barracuda.TensorShape Unity.Barracuda.TestSet::GetInputShape(System.Int32)
extern void TestSet_GetInputShape_mA846E7888D5688254871B41A716B368B5B0B7AC8 (void);
// 0x000008ED Unity.Barracuda.TensorShape Unity.Barracuda.TestSet::GetOutputShape(System.Int32)
extern void TestSet_GetOutputShape_mE1A1CE83A6D752718E3BB53A67DC279F275DAF54 (void);
// 0x000008EE System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetInputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetInputsAsTensorDictionary_mDAE9E792C7466F0AECD5D033754AD9AAAC48E8EA (void);
// 0x000008EF System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetOutputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetOutputsAsTensorDictionary_m84B72806AE269A429561DD986054D139264EA37A (void);
// 0x000008F0 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetInputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetInputAsTensor_m49AF14024ACEDA036985B06A3A5DB05956FED822 (void);
// 0x000008F1 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetOutputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetOutputAsTensor_mF8176B78AE1A76979E188FAB15B20B4FF4AD1C13 (void);
// 0x000008F2 System.Void Unity.Barracuda.RawTestSet::.ctor()
extern void RawTestSet__ctor_m1B408FE448433063C2CDCAAA95A2D11AF0CED892 (void);
// 0x000008F3 System.Void Unity.Barracuda.JSONTestSet::.ctor()
extern void JSONTestSet__ctor_mBE715552E509A339B40B2407F8389EC5512CEBEA (void);
// 0x000008F4 System.Void Unity.Barracuda.JSONTensorShape::.ctor()
extern void JSONTensorShape__ctor_m16C436369A54486D5EAAC75F8177F1420A76DBF5 (void);
// 0x000008F5 System.Void Unity.Barracuda.JSONTensor::.ctor()
extern void JSONTensor__ctor_m2D047872AFE343EBC0BC92495B8E64F2E64FFA03 (void);
// 0x000008F6 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::Load(System.String)
extern void TestSetLoader_Load_m6B6BA679E459E86799992F057A29E549DDAD074F (void);
// 0x000008F7 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadGZ(System.String)
extern void TestSetLoader_LoadGZ_m7F44D4788C3AF4EED5ED627902ED234192E590CC (void);
// 0x000008F8 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadJSON(System.String)
extern void TestSetLoader_LoadJSON_mA2410B97A550C0292752999D26030EDFA6ACEE3F (void);
// 0x000008F9 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadRaw(System.String)
extern void TestSetLoader_LoadRaw_m0DD9852AF7CC59AA3BEFC72EBB6C7E38EE82A27B (void);
// 0x000008FA UnityEngine.Texture Unity.Barracuda.TestSetLoader::LoadImage(System.String)
extern void TestSetLoader_LoadImage_m03303C9E1D18400CF972413C723A78775D627C4B (void);
// 0x000008FB System.Single[] Unity.Barracuda.TestSetLoader::LoadFloatArray(System.IO.BinaryReader)
extern void TestSetLoader_LoadFloatArray_m857E81CFB88088885C1529D4F4F84D54C1E24C4C (void);
// 0x000008FC System.IO.BinaryReader Unity.Barracuda.TestSetLoader::Open(System.String)
extern void TestSetLoader_Open_m2F18F88FAEEFEC439D6C4113E17DD20045DE9351 (void);
// 0x000008FD System.Void Unity.Barracuda.TestSetLoader::.ctor()
extern void TestSetLoader__ctor_mABA3F70FADBA8EE24B2B108B5B1C8D1830259850 (void);
// 0x000008FE System.Void Unity.Barracuda.Layer::.ctor(System.String)
extern void Layer__ctor_m3A38999F751C16164BF21C293F72F7AE8BC70022 (void);
// 0x000008FF System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mB8E93D6E1B8E81CD769D0C33AAB886A77A912A9C (void);
// 0x00000900 System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mCDFB28A4B21F905955A963B83DC8610FC232A8E4 (void);
// 0x00000901 System.String Unity.Barracuda.Layer::ToString()
extern void Layer_ToString_mDA02DD3A6C293E4FE6FB23E103E71B777FED9264 (void);
// 0x00000902 Unity.Barracuda.Tensor Unity.Barracuda.Layer::DataSetToTensor(System.Int32)
extern void Layer_DataSetToTensor_mF7A1BE2F23DBABCAA918E17DD5497B165CC7D53F (void);
// 0x00000903 System.Void Unity.Barracuda.Layer::ApplyTensorToDataSet(Unity.Barracuda.Tensor,System.Int32)
extern void Layer_ApplyTensorToDataSet_mDB9BC83E632E0624FE2069396121BDA453AADA08 (void);
// 0x00000904 System.Void Unity.Barracuda.Layer/<>c::.cctor()
extern void U3CU3Ec__cctor_mFE5B8C2C7193AAECB5413D69B1EB4A00A9D329D0 (void);
// 0x00000905 System.Void Unity.Barracuda.Layer/<>c::.ctor()
extern void U3CU3Ec__ctor_m747345BF8D0BE046B85E3ED1A32B03ADBB300BB5 (void);
// 0x00000906 System.String Unity.Barracuda.Layer/<>c::<ToString>b__25_0(Unity.Barracuda.Layer/DataSet)
extern void U3CU3Ec_U3CToStringU3Eb__25_0_mA9F57D6975B6DEE4F8CF045E05AA712FD25D4CBD (void);
// 0x00000907 System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning> Unity.Barracuda.Model::get_Warnings()
extern void Model_get_Warnings_m92E23EA836FC6E707CA01BD6948CF3EDB78551BB (void);
// 0x00000908 Unity.Barracuda.Model Unity.Barracuda.Model::ShallowCopy()
extern void Model_ShallowCopy_mF7FCBD8F668CF191D95C550BA6168118C2064EA6 (void);
// 0x00000909 System.String Unity.Barracuda.Model::ToString()
extern void Model_ToString_mF3C8BB02E731AD196995C9988ED476FD579A9BE3 (void);
// 0x0000090A System.Void Unity.Barracuda.Model::.ctor()
extern void Model__ctor_mAD764220A761A891A5AAAC9E7C8909D29BDD56F5 (void);
// 0x0000090B Unity.Barracuda.Model/Input Unity.Barracuda.Model/Input::WithName(System.String)
extern void Input_WithName_mAF604379319D2484EB7F05DD9CF167A4C5EF89B3 (void);
// 0x0000090C System.String Unity.Barracuda.Model/ImporterWarning::get_Message()
extern void ImporterWarning_get_Message_mA8547DE77ACCA5096B83D49C3D6EBF00CCBAC025 (void);
// 0x0000090D System.String Unity.Barracuda.Model/ImporterWarning::get_LayerName()
extern void ImporterWarning_get_LayerName_mEA18E769E4A045787C9CC099AB3FD1C3455F7153 (void);
// 0x0000090E System.Void Unity.Barracuda.Model/ImporterWarning::.ctor(System.String,System.String)
extern void ImporterWarning__ctor_m660F8AAE6E844FB89B3B78472B3181B508B5F408 (void);
// 0x0000090F System.Void Unity.Barracuda.Model/<>c::.cctor()
extern void U3CU3Ec__cctor_m652537AF3A9793744961E96AB541C910E9A0543B (void);
// 0x00000910 System.Void Unity.Barracuda.Model/<>c::.ctor()
extern void U3CU3Ec__ctor_m740723A7B0060B8E09AF66A27C2B3DDBEAD6F217 (void);
// 0x00000911 System.String Unity.Barracuda.Model/<>c::<ToString>b__17_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CToStringU3Eb__17_0_m26FFCEA7A825D72675E8A92A662108AEC37D1CAD (void);
// 0x00000912 System.String Unity.Barracuda.Model/<>c::<ToString>b__17_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CToStringU3Eb__17_1_mFCB4F6916A24F285EDA474C1D9FDD3DF04570FDE (void);
// 0x00000913 System.String Unity.Barracuda.Model/<>c::<ToString>b__17_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CToStringU3Eb__17_2_m385CA366DA80F79483BB58A8961E7F35D14FF0C4 (void);
// 0x00000914 Unity.Barracuda.Tensor Unity.Barracuda.ModelMetadataExtensions::GetTensorByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetTensorByName_mA9EF2C18F52E764220A1AA59DB193AF880E796B3 (void);
// 0x00000915 System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.ModelMetadataExtensions::GetShapeByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetShapeByName_m1D4B4909D97513ACF2F4A3CC1F36D6ABE17424B0 (void);
// 0x00000916 System.Int32 Unity.Barracuda.ModelMetadataExtensions::GetDownStreamLayersCount(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetDownStreamLayersCount_m7FF7CE213AF6C0C78855062FA9EEE96D99495EF5 (void);
// 0x00000917 System.Void Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mCC886D5DD65A87400E167252617E271CAA47AF93 (void);
// 0x00000918 System.Boolean Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::<GetDownStreamLayersCount>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_mEEAA29D26D9401751DC6479E0B54F4C251FD0F82 (void);
// 0x00000919 Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::get_model()
extern void ModelBuilder_get_model_mDECE31DCCA1A603118F5F0015C4E6394EC208A1F (void);
// 0x0000091A System.Void Unity.Barracuda.ModelBuilder::.ctor(Unity.Barracuda.Model)
extern void ModelBuilder__ctor_mCFEBBDC2A2C1A303B2242DDAF8C4BFF494ACEB0E (void);
// 0x0000091B Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32[],System.Int32)
extern void ModelBuilder_Input_m9840AB95C393A5903010AE9D6A8C6BB72FBF1F70 (void);
// 0x0000091C Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Input_m8CD5ADD47BA4B70A9ACADA10ECD774006B0128B8 (void);
// 0x0000091D Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32)
extern void ModelBuilder_Input_m56C729B7B3B2B59DC304338FA553B5CAEED65E8C (void);
// 0x0000091E Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_Input_m0B55FBC0CA4A7C9F31DA7139B2F61E118AABCA31 (void);
// 0x0000091F System.String Unity.Barracuda.ModelBuilder::Output(System.Object)
extern void ModelBuilder_Output_m3053F1F23E94F9FCE8ED7214F6A615D8AC111211 (void);
// 0x00000920 Unity.Barracuda.Model/Memory Unity.Barracuda.ModelBuilder::Memory(System.Object,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Memory_mD04983486E5C6187EDDD37942CE5CBEFB88D6F8F (void);
// 0x00000921 System.String Unity.Barracuda.ModelBuilder::ResolveInput(System.Object)
extern void ModelBuilder_ResolveInput_mE6BC6900DE0C046C4FD53D59437A289E95A4D52F (void);
// 0x00000922 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Const(System.String,Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ModelBuilder_Const_m73E3A1AB469CDB7E2B99C43A3BA6B11823DD1232 (void);
// 0x00000923 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ScaleBias(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_ScaleBias_m9D019BAD129B20D556844289F1394513B951F407 (void);
// 0x00000924 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LRN(System.String,System.Object,System.Single,System.Single,System.Single,System.Int32)
extern void ModelBuilder_LRN_mC6E12A93400A17069D69930F60CA211E6BAAF7F4 (void);
// 0x00000925 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Shape(System.String,System.Object,System.Int32)
extern void ModelBuilder_Shape_m1E8149B3288CDF3CC631007719F8362201C308C9 (void);
// 0x00000926 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Normalization(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void ModelBuilder_Normalization_m12FDA866ED4D985C6EA961704A811CAB08BBF699 (void);
// 0x00000927 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense_mA9BFD06E814A96FF6D51311D6B8D01266D164192 (void);
// 0x00000928 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense3(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense3_m39587A54B55258BAE9C2275AC5E6707B23A9605D (void);
// 0x00000929 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MatMul(System.String,System.Object,System.Object)
extern void ModelBuilder_MatMul_m219D341499DDEC166CEB6F8E43D187E1EAD41C58 (void);
// 0x0000092A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv(System.String,Unity.Barracuda.Layer/Type,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv_m49C62F3AA7B5173B7B2E484B362A4D5E6D3F43BF (void);
// 0x0000092B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2D_m4A4546A8D0A10E4E6385E1C0810780EC8E20B49C (void);
// 0x0000092C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv3D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv3D_m773BD7950EAC1B27A47FB5073D3B2C86FE2B7D85 (void);
// 0x0000092D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthwiseConv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_DepthwiseConv2D_m227224B300FEA951ABDA3C269FF0B9A24FEF72B3 (void);
// 0x0000092E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2DTrans(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2DTrans_m4FE48F3A5E201B71BC44CE72CCCE44476DDE0513 (void);
// 0x0000092F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pool(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_Pool_mA34944D3A03F73B86A666CC8923F8418E9FE26F9 (void);
// 0x00000930 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::AvgPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_AvgPool2D_m2099E8865DAA16D36689AF041F7A67BD4E51FE90 (void);
// 0x00000931 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MaxPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_MaxPool2D_mA5414CFDAE551AA93F0A9D7C5C2975F22EC6FB24 (void);
// 0x00000932 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalAvgPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalAvgPool2D_mE08F2AB0D4F831E2DB3C14EAD9B04DD150D0C4DF (void);
// 0x00000933 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalMaxPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalMaxPool2D_m13D586F562EFE7C37DFF509C1037EA0F69EA254D (void);
// 0x00000934 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample2D_m77F85AEE10250C3C43752FF18840327B2D7B9FCE (void);
// 0x00000935 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample2D_mD494CFBCDAE46E7B757149BE51C596363530A700 (void);
// 0x00000936 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample3D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample3D_mA3A954A5F0AAF4092862AEFAAFC98ED7122DCA01 (void);
// 0x00000937 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample3D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample3D_m7DA814085CE6C5BAE5A097A129115EFDB15BD582 (void);
// 0x00000938 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Resample2D_m058A7D2BF7ECB14CF0D986393D9DE0F42CFFE9C9 (void);
// 0x00000939 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Resample2D_mCD9C6F3024E4A47192EEBB92F46CD8119FB77FF0 (void);
// 0x0000093A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthToSpace(System.String,System.Object,System.Int32,System.String)
extern void ModelBuilder_DepthToSpace_mFA0013BEAFEDADDC75ED247F89BF597981D3A282 (void);
// 0x0000093B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::SpaceToDepth(System.String,System.Object,System.Int32)
extern void ModelBuilder_SpaceToDepth_m1241522BFE891432C36B0A71F785B016E6B2CC96 (void);
// 0x0000093C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Int32[],System.Int32)
extern void ModelBuilder_Reshape_m7D9CDFD797FF56370E600BA2C217C6F4E27FD1C8 (void);
// 0x0000093D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ConstantOfShape(System.String,System.Object,System.Single)
extern void ModelBuilder_ConstantOfShape_mF266B8F31BA111BCCF8E76648F378ACA0EB1F6C9 (void);
// 0x0000093E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Reshape_mA2470CBB907AE0CE3847C57F840A3FFCBC27D049 (void);
// 0x0000093F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Object)
extern void ModelBuilder_Reshape_mC6DB182060898FB09D5C4B8E6FBD463765D8C7EA (void);
// 0x00000940 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Expand_mDB83AAB9A7AEB8D7FC92524D5C457AB9B6802134 (void);
// 0x00000941 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Object)
extern void ModelBuilder_Expand_m92CAEEB9CCE669978D8AC2D3DE2A294B01F8B3D3 (void);
// 0x00000942 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Flatten(System.String,System.Object)
extern void ModelBuilder_Flatten_mC2916D3B628FD99C1D230D2CAD15B04C5ECDCF34 (void);
// 0x00000943 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Concat(System.String,System.Object[],System.Int32,System.Boolean)
extern void ModelBuilder_Concat_m70FF68EA53236CB8E8DEE2D4651FCB60214C2612 (void);
// 0x00000944 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_mB091E068E4C27D13825E852E0B6B1616F1E68D29 (void);
// 0x00000945 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_mAAC58AF34F38A8D884D2E16B5497C5DB6E5F9896 (void);
// 0x00000946 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
extern void ModelBuilder_StridedSlice_m7F54AAB4193EE2B5E4D6E251065B92F93F4A156B (void);
// 0x00000947 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tile(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Tile_m4012A91483BCA70398DEE93883F275EA4F46FB34 (void);
// 0x00000948 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tile(System.String,System.Object,System.Object)
extern void ModelBuilder_Tile_mAF1DFA356540C4257A7A716EAA8A345AAE697FEF (void);
// 0x00000949 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Copy(System.String,System.Object)
extern void ModelBuilder_Copy_m29058939F138BEC8B19D65BDDC50AAC9C1A5C9A1 (void);
// 0x0000094A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::OneHot(System.String,System.Object,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_OneHot_m0A6E7527F05944FFBD4FAD6EB794DDCEA8DB2EFD (void);
// 0x0000094B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKIndices(System.String,System.Object,System.Object,System.Int32,System.Boolean,System.Boolean)
extern void ModelBuilder_TopKIndices_m309908DCEC4B5EC9D291A9CDFEF7CF002D22E59C (void);
// 0x0000094C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKValues(System.String,System.Object,System.Object,System.Int32)
extern void ModelBuilder_TopKValues_m51334DB4430B2A5BE5315A338B06E7E5E37C4328 (void);
// 0x0000094D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonZero(System.String,System.Object)
extern void ModelBuilder_NonZero_m07DC6E62B17A83613DECD24AEF75F1FA999D0ED5 (void);
// 0x0000094E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Transpose(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Transpose_m7DC1ECA3B720A37DA7DF43111A6530FA72636B84 (void);
// 0x0000094F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Squeeze(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Squeeze_m8B9739C937CCA62278308CFEBB3B19BA12E7B3EA (void);
// 0x00000950 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Unsqueeze(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Unsqueeze_mE81ADFCCEFAAA803D8ADF41662C7F995ED610F6C (void);
// 0x00000951 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Activation(Unity.Barracuda.Layer/Activation,System.String,System.Object)
extern void ModelBuilder_Activation_m497D00129CA56A5950027A5008AD89D229886BE9 (void);
// 0x00000952 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Identity(System.String,System.Object,System.Int32)
extern void ModelBuilder_Identity_m0DD1E379434A6A50E4BD96478B18933A71289401 (void);
// 0x00000953 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu(System.String,System.Object)
extern void ModelBuilder_Relu_m629B102D295A25906A58BC9F0AF7C3628A93498F (void);
// 0x00000954 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softmax(System.String,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Softmax_mCD6F992899BB955AA424E4FF9CF79EF1B1C78B00 (void);
// 0x00000955 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogSoftmax(System.String,System.Object)
extern void ModelBuilder_LogSoftmax_m2BF02EE6A5F2782691A74B652CC09BF33C63810E (void);
// 0x00000956 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sqrt(System.String,System.Object)
extern void ModelBuilder_Sqrt_m9CCC92B14F5BA454B723319A17AA1AE54F704C94 (void);
// 0x00000957 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tanh(System.String,System.Object)
extern void ModelBuilder_Tanh_m9147ED6DD9DB8F934A4851598C6E80797A6EC0E6 (void);
// 0x00000958 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softplus(System.String,System.Object)
extern void ModelBuilder_Softplus_m1E3DB070879D7EE19EA337C3EEFAB3FE54EE2716 (void);
// 0x00000959 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sigmoid(System.String,System.Object)
extern void ModelBuilder_Sigmoid_mC6FC69AD9F20F89BDEEAAAE551B5AC38E4679DBA (void);
// 0x0000095A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Elu(System.String,System.Object,System.Single)
extern void ModelBuilder_Elu_m1FD81F3C4926F6402C07E9D206B67582284D4CF1 (void);
// 0x0000095B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu6(System.String,System.Object)
extern void ModelBuilder_Relu6_m315A8C696C2FC45D4927A176494C6600C1AF9F1B (void);
// 0x0000095C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LeakyRelu(System.String,System.Object,System.Single)
extern void ModelBuilder_LeakyRelu_m5940DCEAA86B0FAF21F29CD8E169A1732794648C (void);
// 0x0000095D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Selu(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Selu_mAADEA719D7DBEE8052B44E650903EC4D82AAB6D0 (void);
// 0x0000095E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::PRelu(System.String,System.Object,System.Object)
extern void ModelBuilder_PRelu_m34AC5FF7DDA8BCC65214C555CB45010C31DC9C8A (void);
// 0x0000095F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Swish(System.String,System.Object)
extern void ModelBuilder_Swish_m2B8DB9BEF10CB4DA8D11EB426D52D3A27E844BF0 (void);
// 0x00000960 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Clip(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Clip_m12BEF1F91CF6604F56BC74BD60CB097320FF46BA (void);
// 0x00000961 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Exp(System.String,System.Object)
extern void ModelBuilder_Exp_m457929F7F492B315750CFAE7485D5A515BA0F98E (void);
// 0x00000962 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Log(System.String,System.Object)
extern void ModelBuilder_Log_m917AE2A0E8121437F90CD13619489558B83F7400 (void);
// 0x00000963 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Neg(System.String,System.Object)
extern void ModelBuilder_Neg_m929F5824D81080AF609215F9128EFA70305659BC (void);
// 0x00000964 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reciprocal(System.String,System.Object)
extern void ModelBuilder_Reciprocal_m1A5F34869143942788EFE2CE00F5E25750377AF0 (void);
// 0x00000965 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Abs(System.String,System.Object)
extern void ModelBuilder_Abs_m96DDC9A4D184356AA677FA5612B8ABDEC84F3D33 (void);
// 0x00000966 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Ceil(System.String,System.Object)
extern void ModelBuilder_Ceil_m923041FFF578680761827DA6A1244A8727F8A065 (void);
// 0x00000967 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Floor(System.String,System.Object)
extern void ModelBuilder_Floor_m1B0D4117F0467EF81D47C6AFE2049E7456C51C34 (void);
// 0x00000968 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Round(System.String,System.Object)
extern void ModelBuilder_Round_m1BFC17A745AC30E8F9F9A95805A6CF81E197C336 (void);
// 0x00000969 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acos(System.String,System.Object)
extern void ModelBuilder_Acos_mC1BAE1026CEEF4F29D73444B351F61221F401E09 (void);
// 0x0000096A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acosh(System.String,System.Object)
extern void ModelBuilder_Acosh_mC8A7213254B3EB8E99DBEAB322FFA0F756BC4E63 (void);
// 0x0000096B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asin(System.String,System.Object)
extern void ModelBuilder_Asin_m28C2769B5AC6159F49C8623F4D79F00392959C8C (void);
// 0x0000096C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asinh(System.String,System.Object)
extern void ModelBuilder_Asinh_m490BD3E75AE3E2B2806B4CF87A603333ECCE0223 (void);
// 0x0000096D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atan(System.String,System.Object)
extern void ModelBuilder_Atan_m4F6CE694990B2AE2032A24FE198616AB455DD2F3 (void);
// 0x0000096E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atanh(System.String,System.Object)
extern void ModelBuilder_Atanh_m30D725ED2F30E35D0AEA620B2A2A700FBB28B757 (void);
// 0x0000096F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cos(System.String,System.Object)
extern void ModelBuilder_Cos_m9ECA2F4D66F2F0FFE222DE95DD0F65926F3BA6B0 (void);
// 0x00000970 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cosh(System.String,System.Object)
extern void ModelBuilder_Cosh_m305347E814EB776114A832642B5B7736EF706437 (void);
// 0x00000971 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sin(System.String,System.Object)
extern void ModelBuilder_Sin_m529E7D546583429E7D1E0E7B6015C816AF54023E (void);
// 0x00000972 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sinh(System.String,System.Object)
extern void ModelBuilder_Sinh_mF9E04137F0FDB118AA9F1D0DF1CA3B0F551CBB56 (void);
// 0x00000973 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tan(System.String,System.Object)
extern void ModelBuilder_Tan_m6F2A226FBD8517076952E515F0A9FB1AE127AC38 (void);
// 0x00000974 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Broadcast(Unity.Barracuda.Layer/Type,System.String,System.Object[])
extern void ModelBuilder_Broadcast_m163DEF960733BECC0D40C9BB37765B96DBE58C2F (void);
// 0x00000975 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Add(System.String,System.Object[])
extern void ModelBuilder_Add_m7E2DCC5724D6C6ACAEA632E7A874A8E37C1DFF2A (void);
// 0x00000976 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sub(System.String,System.Object[])
extern void ModelBuilder_Sub_mC80569C8A969F7984E25BA02AE867E840CFE7460 (void);
// 0x00000977 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mul(System.String,System.Object[])
extern void ModelBuilder_Mul_mA1D4DA88A70BC5E970F1AC7AD9D853A2B04484DD (void);
// 0x00000978 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Div(System.String,System.Object[])
extern void ModelBuilder_Div_m4F484249F3FDDE64B98645D6976FD00379E4E67F (void);
// 0x00000979 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pow(System.String,System.Object[])
extern void ModelBuilder_Pow_mDFBC1AED28859206D5CF40CE1AF00843E5785E23 (void);
// 0x0000097A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Min(System.String,System.Object[])
extern void ModelBuilder_Min_mE30A386C8B6871C6F4EC1CE3D2CC66895F5E1F44 (void);
// 0x0000097B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Max(System.String,System.Object[])
extern void ModelBuilder_Max_mC33D5881EEF75E425ABFC06E7CA844D23A734EBE (void);
// 0x0000097C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mean(System.String,System.Object[])
extern void ModelBuilder_Mean_mC29CE12ABE2F9F44E77A78390CB230370449D486 (void);
// 0x0000097D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Greater(System.String,System.Object,System.Object)
extern void ModelBuilder_Greater_mD1C9426BD1421B49984C5BD5EBBE8F0F3CC2E834 (void);
// 0x0000097E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GreaterEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_GreaterEqual_m0968AF76C973307DD8C2B394B1E0834739D5B120 (void);
// 0x0000097F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Less(System.String,System.Object,System.Object)
extern void ModelBuilder_Less_m28AAE3409C925DB37298039973482A3A26A27B82 (void);
// 0x00000980 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LessEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_LessEqual_mBF0056C169A0EDC909D9FB221FE8840E827CEE90 (void);
// 0x00000981 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Equal(System.String,System.Object,System.Object)
extern void ModelBuilder_Equal_mCBF66A243060C355E5EE49163F64665E7FAE3C78 (void);
// 0x00000982 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalAnd(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalAnd_m39E5CA8B3355C9960402718814E8B76EB5A70424 (void);
// 0x00000983 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalOr(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalOr_mDE9AB93E04C54C3AA09F3F1788654F415435C6A9 (void);
// 0x00000984 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalXor(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalXor_m873708788F6B53E99D1D61F0CDF738A66010A0CF (void);
// 0x00000985 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalNot(System.String,System.Object)
extern void ModelBuilder_LogicalNot_mB1D071F12364597398C11865DDFB0D2F0D0ED653 (void);
// 0x00000986 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sign(System.String,System.Object)
extern void ModelBuilder_Sign_mED72A40B67D65B9A176C31BFD455859DC53FD76E (void);
// 0x00000987 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Where(System.String,System.Object,System.Object,System.Object)
extern void ModelBuilder_Where_m6DCB902807F651A744770A0AE804793ABB26004E (void);
// 0x00000988 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Object,System.Object)
extern void ModelBuilder_Pad_m3AE36CF49E2645E8A384707C093EC95F649704A8 (void);
// 0x00000989 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Pad_m1960DC51761886844F07676CC5FBB3D4B1E649B9 (void);
// 0x0000098A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border2D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border2D_mA71C03C5C92440435421550043C8C5ACFD52AD8D (void);
// 0x0000098B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border3D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border3D_mDD59DCD072CA1A864534B06EBEBA158379614282 (void);
// 0x0000098C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DEdge(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DEdge_m8637CEB9E3C2A3AC0AA26E8C813A48F48F99590B (void);
// 0x0000098D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DReflect(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DReflect_m79F1EFDB91F5D4DA65D7F676F5AA12603FFBCF85 (void);
// 0x0000098E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2Symmetric(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2Symmetric_m8C7AB132931997A6284140A98D23E36DF193A1E5 (void);
// 0x0000098F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mBFA12B9B6A0AA7608A5784477DE8BE0F91A8B867 (void);
// 0x00000990 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_m509F7139D6B2297D647CE91F18ABEAA54B07B091 (void);
// 0x00000991 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m96AC441AF46DAFF64921D76931A95CA85ACE5C05 (void);
// 0x00000992 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m137E423F0751A245D7E36C4DE0D013EAAF617F38 (void);
// 0x00000993 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Multinomial(System.String,System.Object,System.Int32,System.Single)
extern void ModelBuilder_Multinomial_m42DFB869987563BA47CC0DF8EB1327239DA836FF (void);
// 0x00000994 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reduce(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32,System.Boolean,System.Int32)
extern void ModelBuilder_Reduce_mB12C5AE4F5A595108B6715DEE4B2DC94ED215516 (void);
// 0x00000995 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Range(System.String,System.Object,System.Object,System.Object)
extern void ModelBuilder_Range_m1BFDACA6F203FC815DF435E6B0ECFB9F33B7AB8E (void);
// 0x00000996 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Gather(System.String,System.Object,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Gather_mF3AF9384BD2EA32D0ED648EBADAE8EA1161E19B8 (void);
// 0x00000997 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonMaxSuppression(System.String,System.Object,System.Object,System.Object,System.Object,System.Object,System.Int32)
extern void ModelBuilder_NonMaxSuppression_m35BE6F5295476EA32F8BFECE5999D5F0111F6338 (void);
// 0x00000998 Unity.Barracuda.Layer[] Unity.Barracuda.ModelBuilder::LSTM(System.String,System.Object,System.String[],System.Object,System.Object,System.Object,System.Int32,System.Object,System.Object)
extern void ModelBuilder_LSTM_mCF5E2497C708CDC4A58EA5B5E75E64220B005F2C (void);
// 0x00000999 System.String Unity.Barracuda.ModelBuilder::<MatMul>b__18_0(System.Object)
extern void ModelBuilder_U3CMatMulU3Eb__18_0_mBCACE5AE8E8780FE0CB60D28DB1CDF6708DC4760 (void);
// 0x0000099A System.String Unity.Barracuda.ModelBuilder::<Concat>b__44_0(System.Object)
extern void ModelBuilder_U3CConcatU3Eb__44_0_m9D24DCEEACAC5936EE1C814DBE71CCB6DFFB89A7 (void);
// 0x0000099B System.String Unity.Barracuda.ModelBuilder::<PRelu>b__71_0(System.Object)
extern void ModelBuilder_U3CPReluU3Eb__71_0_m908A263ACA94EF0E32DED4C3DA6E701950D134BA (void);
// 0x0000099C System.String Unity.Barracuda.ModelBuilder::<Broadcast>b__93_0(System.Object)
extern void ModelBuilder_U3CBroadcastU3Eb__93_0_m6E029C5DC2D1430CA78206479FC528AB9B64CE8E (void);
// 0x0000099D System.String Unity.Barracuda.ModelBuilder::<Gather>b__127_0(System.Object)
extern void ModelBuilder_U3CGatherU3Eb__127_0_m5AE22266955D6B86E43E5EE89DB5278E586DEA4A (void);
// 0x0000099E Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(Unity.Barracuda.NNModel,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mDADBCE3F4F7F98CECFD6531B7C752ABAFBD8F0C0 (void);
// 0x0000099F Unity.Barracuda.Model Unity.Barracuda.ModelLoader::LoadFromStreamingAssets(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_LoadFromStreamingAssets_mFD21B0ACDF3AD93BDC0B277CF5780F89702ACD38 (void);
// 0x000009A0 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m7A5651033CBA0EA63E418A997877855C6FA70F8C (void);
// 0x000009A1 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean)
extern void ModelLoader_Load_m273B79DF8244AAF183A8EA8A3A77E07AE2E21A5F (void);
// 0x000009A2 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m510953F78CDC69FA2997E7F17A03A16D364D51BB (void);
// 0x000009A3 System.Int32 Unity.Barracuda.ModelLoader::ConvertLayerAxisFor8DShapeSupportIfNeeded(System.Int32,System.Int64,Unity.Barracuda.Layer/Type)
extern void ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_m9DD2AB660CE3BA8A586CD35B7BC64BAA127CF670 (void);
// 0x000009A4 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m539B661E19387D149D2DC5AD2AB01D28120DD5E6 (void);
// 0x000009A5 System.Void Unity.Barracuda.ModelLoader::PatchLayer(System.Collections.Generic.List`1<Unity.Barracuda.Layer>,Unity.Barracuda.Layer)
extern void ModelLoader_PatchLayer_mC815FF1487BA1D0AB64B680F01A001D66E76D890 (void);
// 0x000009A6 System.Void Unity.Barracuda.ModelLoader::SkipLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_SkipLargeFloatArray_mB0D646D844EAE7F4A5D3191506B0F34237606675 (void);
// 0x000009A7 System.Single[] Unity.Barracuda.ModelLoader::ReadLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_ReadLargeFloatArray_m2CBDE77FE442C0CBCA026B0B5EF46D63364959AF (void);
// 0x000009A8 System.Int32[] Unity.Barracuda.ModelLoader::ReadInt32Array(System.IO.BinaryReader)
extern void ModelLoader_ReadInt32Array_mFDC03571059F61E423BDB1365327FE0023174576 (void);
// 0x000009A9 System.String Unity.Barracuda.ModelLoader::ReadString(System.IO.BinaryReader)
extern void ModelLoader_ReadString_m6C03E59F3DCA0020474C6C76EDD53EF3ED194ABB (void);
// 0x000009AA System.String[] Unity.Barracuda.ModelLoader::ReadStringArray(System.IO.BinaryReader)
extern void ModelLoader_ReadStringArray_m6E950D611D3FCBECA5A09AC069F106E50EDCE97F (void);
// 0x000009AB System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.String)
extern void ModelLoader_Open_mB65114F56680F7E79570BEF2ECB5887F62446D30 (void);
// 0x000009AC System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.Byte[])
extern void ModelLoader_Open_mBD6556D9647E23CDB8DB4C662B7219050B27694A (void);
// 0x000009AD System.Void Unity.Barracuda.ModelWriter::Save(System.String,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m20C6B7481B62ACB633F872CC4F1DEF2C7F6E8619 (void);
// 0x000009AE System.Void Unity.Barracuda.ModelWriter::Save(System.IO.BinaryWriter,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m0AA4DFDE021AD0B347BFB9AD06A0C11E03EDC4B8 (void);
// 0x000009AF System.Void Unity.Barracuda.ModelWriter::WriteInt32Array(System.IO.BinaryWriter,System.Int32[])
extern void ModelWriter_WriteInt32Array_m7831095849F0BFC30DC0827594E044B3DADCA3FF (void);
// 0x000009B0 System.Void Unity.Barracuda.ModelWriter::WriteString(System.IO.BinaryWriter,System.String)
extern void ModelWriter_WriteString_m1A3D46CC7EF230C1C5BFAD8D0AA100417447FB00 (void);
// 0x000009B1 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.String[])
extern void ModelWriter_WriteStringArray_m5AB319388810EFF473DCCC76AFB0FBAFE17B10FA (void);
// 0x000009B2 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.Collections.Generic.List`1<System.String>)
extern void ModelWriter_WriteStringArray_m63B8376AAB96CAE972B82133FD5D07C91E80A0A8 (void);
// 0x000009B3 System.Void Unity.Barracuda.ModelWriter::.ctor()
extern void ModelWriter__ctor_mE0F92BD68B17B1A7A1E17CE47319BE069C53829F (void);
// 0x000009B4 System.Boolean Unity.Barracuda.BLASPlugin::IsNative()
// 0x000009B5 System.Boolean Unity.Barracuda.BLASPlugin::IsCurrentPlatformSupported()
// 0x000009B6 System.Void Unity.Barracuda.BLASPlugin::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x000009B7 Unity.Jobs.JobHandle Unity.Barracuda.BLASPlugin::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x000009B8 Unity.Barracuda.BLASPlugin Unity.Barracuda.BLASPluginFactory::CreateBLASPlugin()
extern void BLASPluginFactory_CreateBLASPlugin_m1E1A96505537009E442F033CD63A4A798FE96873 (void);
// 0x000009B9 System.Void Unity.Barracuda.BLASPluginFactory::.ctor()
extern void BLASPluginFactory__ctor_m6E57B9E9BFDE8A346854C4EFED825B58AD29D75C (void);
// 0x000009BA System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m3D0A670E59D0D5F0D13739F5C777DED331A7DAB6 (void);
// 0x000009BB System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m3DFA716CA6C672282490F4FC24DD6706497E8BCF (void);
// 0x000009BC System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m0318587E59DA4D042BBC786E5B6CF255C773FA57 (void);
// 0x000009BD System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m2BE83E834C3C8F346F054C616ACBFE4FD460C56B (void);
// 0x000009BE System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
extern void TensorShape__ctor_m7AB7F54A3AAB95BB6BF985DD3F86B8B95B1C972D (void);
// 0x000009BF System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32)
extern void TensorShape__ctor_mE83490DDD04BB7D686DEBC4F4D501AE15662CB84 (void);
// 0x000009C0 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32[])
extern void TensorShape__ctor_m114922F0493BEF2C3312E8826CA7EF09DB73574F (void);
// 0x000009C1 System.Int32 Unity.Barracuda.TensorShape::get_kernelSpatialDepth()
extern void TensorShape_get_kernelSpatialDepth_m7A492E370CA4B33FD7BE911B48059F6BFD92FD99 (void);
// 0x000009C2 System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
extern void TensorShape_get_kernelHeight_m454029EE1AB966CB2B05A483BDB170FEFA5C9295 (void);
// 0x000009C3 System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
extern void TensorShape_get_kernelWidth_mDE244878076A48678D8E87B4EE8A3682C3150282 (void);
// 0x000009C4 System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
extern void TensorShape_get_kernelDepth_mCD57091DA16F7F2CB300B79A17F42C29FAAA9EF1 (void);
// 0x000009C5 System.Int32 Unity.Barracuda.TensorShape::get_kernelCount()
extern void TensorShape_get_kernelCount_m6D82535660C620EE6C50B3CF2AA1D38BE560C258 (void);
// 0x000009C6 System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
extern void TensorShape_get_flatHeight_mC3A176A1C1DC85CAB3A0C2888A25850AA946B4A6 (void);
// 0x000009C7 System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
extern void TensorShape_get_flatWidth_m6A09153008C5760A0C71F84A39292C2C108E9A14 (void);
// 0x000009C8 System.Int32 Unity.Barracuda.TensorShape::get_length()
extern void TensorShape_get_length_m42D935AC99F95A1C8DE6B04AEC4DB9C96EDE7608 (void);
// 0x000009C9 System.Int32 Unity.Barracuda.TensorShape::get_rank()
extern void TensorShape_get_rank_mB2908CA2D3737CE8801AE64047AD7E5614280628 (void);
// 0x000009CA System.Int32 Unity.Barracuda.TensorShape::get_dimensions()
extern void TensorShape_get_dimensions_mA9A917D267B0D37A62A6B77F46B90AD5B04E7593 (void);
// 0x000009CB System.Int32 Unity.Barracuda.TensorShape::Axis(System.Int32)
extern void TensorShape_Axis_m9540333825C44D41F1A057AFCD2248193A1EA1D7 (void);
// 0x000009CC System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_m1D0BFA271F02E131FD139905B80656D42BA3D3A9 (void);
// 0x000009CD System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_mAA604C4FF06F3D72657B051D7B7D58B77A752AEE (void);
// 0x000009CE System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_mE63163877AEAD43DCDCA2E84317F8BB910800C77 (void);
// 0x000009CF System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_m3C995064F5BC06455A62FC808BB5469AEC905D39 (void);
// 0x000009D0 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_m70EDA13E88E268E60B25EDF511312DEA32B26E67 (void);
// 0x000009D1 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_mA5BA19932212AA2D1D5C9904DD2FC07E5905BC15 (void);
// 0x000009D2 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m73472404CD6C74C879DE9C7E91923A98AE451020 (void);
// 0x000009D3 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m39177A4CAE1063920E16790D0FB0C6309B28E132 (void);
// 0x000009D4 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_mFCAD7CD99FB34F354BEBC9465A7E2A0665504F37 (void);
// 0x000009D5 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m98AEF981C385B47A0EB2AB39B0FE4ACE184C9882 (void);
// 0x000009D6 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_mC3C2A1A08CCFB66E58F1A219B388EBE068531E16 (void);
// 0x000009D7 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_mBC2A1602541E21AE2919F39C2424580F06A7402E (void);
// 0x000009D8 System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_mC3491649D493646FF618B64977D7BDC823955468 (void);
// 0x000009D9 System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_mFF23BE549579C7F4CFEAA42A3BFF883D83DBBB9E (void);
// 0x000009DA System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32)
extern void TensorShape_Index_mDDF155D1995B2F241BE241EC68896BAE4CABBB02 (void);
// 0x000009DB System.Int32 Unity.Barracuda.TensorShape::get_Item(System.Int32)
extern void TensorShape_get_Item_m046FF56D8906EA7CD9D33486F778EBBCE949B33E (void);
// 0x000009DC System.Void Unity.Barracuda.TensorShape::set_Item(System.Int32,System.Int32)
extern void TensorShape_set_Item_m3E04172058C8855DBEE7B00941B909FF48D824A9 (void);
// 0x000009DD System.Int32[] Unity.Barracuda.TensorShape::ToArray()
extern void TensorShape_ToArray_m6F504949F53EAB92C210A4B52F7F53BE104E8637 (void);
// 0x000009DE Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Squeeze()
extern void TensorShape_Squeeze_mAE65C663FC4D5F3CCB596C03DAA02F810C6A04C0 (void);
// 0x000009DF Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Flatten()
extern void TensorShape_Flatten_m071EF526832C3614F714121763E93C1951D73D79 (void);
// 0x000009E0 System.Boolean Unity.Barracuda.TensorShape::op_Equality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Equality_mA23F2FC794570F9576BD70A4EF6C401598DA8368 (void);
// 0x000009E1 System.Boolean Unity.Barracuda.TensorShape::op_Inequality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Inequality_mB202068F7DC56F73EB8DFE6E0B03A5B121D39C99 (void);
// 0x000009E2 System.Boolean Unity.Barracuda.TensorShape::Equals(System.Object)
extern void TensorShape_Equals_mC5DAE406415A5127744D06E2DF022BD7C062A58B (void);
// 0x000009E3 System.Int32 Unity.Barracuda.TensorShape::GetHashCode()
extern void TensorShape_GetHashCode_mDF0AA9693A07A46DBDA669338F14E1E137CF76CB (void);
// 0x000009E4 System.String Unity.Barracuda.TensorShape::ToString()
extern void TensorShape_ToString_mE6CA208028006BF3EE98D8D6E9F8F6B1E8534224 (void);
// 0x000009E5 System.Void Unity.Barracuda.TensorShape::.cctor()
extern void TensorShape__cctor_m13ED6B09AB9FFBC087038C5B27E51E3EE01A0905 (void);
// 0x000009E6 System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorIterator__ctor_m155A791924246F4E780FA39C05FA2E78AE8DDFAC (void);
// 0x000009E7 System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.Tensor,System.Int32)
extern void TensorIterator__ctor_m6319470FAD9BD9F476FBCF1BB5B62700D21A0CD9 (void);
// 0x000009E8 System.Void Unity.Barracuda.TensorIterator::AssignIndexAndInvalidateDimensions(System.Int32)
extern void TensorIterator_AssignIndexAndInvalidateDimensions_m90A1DB1B133908ED5407CF228F7F00992ECE2881 (void);
// 0x000009E9 System.Void Unity.Barracuda.TensorIterator::Next()
extern void TensorIterator_Next_m3BBE90015F10C99DBD4317583E5C8696E45865B1 (void);
// 0x000009EA System.Void Unity.Barracuda.TensorIterator::Advance(System.Int32)
extern void TensorIterator_Advance_m8C0FFC9D952DA72EF2CB78C383A28839FA77F9A1 (void);
// 0x000009EB System.Boolean Unity.Barracuda.TensorIterator::IsValid()
extern void TensorIterator_IsValid_m35EB0AC3E815407848AFD55F95B88BF0093CC7A5 (void);
// 0x000009EC System.Int32 Unity.Barracuda.TensorIterator::IndexInReducedShape(Unity.Barracuda.TensorShape)
extern void TensorIterator_IndexInReducedShape_mC61CB8FA82E20218BE6DB90DF92EE42F734DD260 (void);
// 0x000009ED System.Int32 Unity.Barracuda.TensorIterator::IndexWithReplacedAxis(System.Int32,System.Int32)
extern void TensorIterator_IndexWithReplacedAxis_m5CC893C8253AC414C1BED1B7602E85EF4A01A50C (void);
// 0x000009EE System.Int32 Unity.Barracuda.TensorIterator::get_Item(System.Int32)
extern void TensorIterator_get_Item_m63E891C7B085A16BE0673E4A6AE6D26B08DAA97D (void);
// 0x000009EF System.Void Unity.Barracuda.Tensor::add_tensorDisposed(System.Action`1<Unity.Barracuda.Tensor>)
extern void Tensor_add_tensorDisposed_mC8A08CED6BABECDD90B340EBC512C54B01E09B5A (void);
// 0x000009F0 System.Void Unity.Barracuda.Tensor::remove_tensorDisposed(System.Action`1<Unity.Barracuda.Tensor>)
extern void Tensor_remove_tensorDisposed_m7E478235F7F238E414F291E71C89FD002CF49FA0 (void);
// 0x000009F1 System.Boolean Unity.Barracuda.Tensor::get_disposed()
extern void Tensor_get_disposed_m42B7B64ED13E56D0CFED223671BC45D18D59841C (void);
// 0x000009F2 Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::get_allocator()
extern void Tensor_get_allocator_m4B48DE0DCE9B90635E95EE1C0C1056D36B653CE6 (void);
// 0x000009F3 System.Int32 Unity.Barracuda.Tensor::get_sequenceLength()
extern void Tensor_get_sequenceLength_m1C35C5CE2C03196E92B31EF67193A8CF04BEF673 (void);
// 0x000009F4 System.Int32 Unity.Barracuda.Tensor::get_numberOfDirections()
extern void Tensor_get_numberOfDirections_m99769DBD13B00A309CA1B1EB8D0372EAACD6CAD6 (void);
// 0x000009F5 System.Int32 Unity.Barracuda.Tensor::get_batch()
extern void Tensor_get_batch_m6CD93DCCD32D6A47FDEDEBFF16FF70AC9C586DD9 (void);
// 0x000009F6 System.Int32 Unity.Barracuda.Tensor::get_extraDimension()
extern void Tensor_get_extraDimension_m403425FF6897945BC25BADFF2F3BB4CF2D13CFDF (void);
// 0x000009F7 System.Int32 Unity.Barracuda.Tensor::get_depth()
extern void Tensor_get_depth_mCBD84F5F780C2550B3D41F0EE99DC72FD5D93B91 (void);
// 0x000009F8 System.Int32 Unity.Barracuda.Tensor::get_height()
extern void Tensor_get_height_m0477A83109747FF1DA788569602DA2293D762AC1 (void);
// 0x000009F9 System.Int32 Unity.Barracuda.Tensor::get_width()
extern void Tensor_get_width_m9E948C3769B41324EB12D54CE6E2E51DC18DC488 (void);
// 0x000009FA System.Int32 Unity.Barracuda.Tensor::get_channels()
extern void Tensor_get_channels_m9DA46CF71B1C47E059EA3417C6A652E1233B5D04 (void);
// 0x000009FB System.Int32 Unity.Barracuda.Tensor::get_kernelSpatialDepth()
extern void Tensor_get_kernelSpatialDepth_mBFFDA142CB543B96A8AB39819D5EFBFC415B8746 (void);
// 0x000009FC System.Int32 Unity.Barracuda.Tensor::get_kernelWidth()
extern void Tensor_get_kernelWidth_m4CA0EF3AA1795E14C8C1B11F5D658188FAF6FB73 (void);
// 0x000009FD System.Int32 Unity.Barracuda.Tensor::get_kernelHeight()
extern void Tensor_get_kernelHeight_m3BB900FD718F6156405ED93688816729B0BB80C6 (void);
// 0x000009FE System.Int32 Unity.Barracuda.Tensor::get_kernelDepth()
extern void Tensor_get_kernelDepth_mE44E66338E9291E470D4CB152E2F8F83890567E9 (void);
// 0x000009FF System.Int32 Unity.Barracuda.Tensor::get_kernelCount()
extern void Tensor_get_kernelCount_m98E82502EEC69F11C14B0589D40710B818714722 (void);
// 0x00000A00 System.Int32 Unity.Barracuda.Tensor::get_flatHeight()
extern void Tensor_get_flatHeight_m5A8183FF5C9A9FBDE2F8080B134CA91ABA0FC50D (void);
// 0x00000A01 System.Int32 Unity.Barracuda.Tensor::get_flatWidth()
extern void Tensor_get_flatWidth_m7B9AECCB1EF9799E625DD86147A2A3F92F440CC5 (void);
// 0x00000A02 System.Int32 Unity.Barracuda.Tensor::get_length()
extern void Tensor_get_length_m35C7DA71ED506DB11C0626A040E8A182CA25D5CA (void);
// 0x00000A03 System.Int32 Unity.Barracuda.Tensor::get_dimensions()
extern void Tensor_get_dimensions_mD78E14F7C96D3C7E1F47BC20BFA4352E8C52E2BB (void);
// 0x00000A04 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[],System.String)
extern void Tensor__ctor_mCE818AF9B12915F09A0272529AA4F7AAD038A450 (void);
// 0x00000A05 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m6F4A668FB0CD6ACD79447138D103F9445894BDDA (void);
// 0x00000A06 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m24D0DCFA4710CD2B0914573BE68EB9557AC8111B (void);
// 0x00000A07 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[],System.String)
extern void Tensor__ctor_mC31FF4D386F7C17E79F1F8D6CC11FB03178C8FBF (void);
// 0x00000A08 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[][],System.String)
extern void Tensor__ctor_mA98BA01F5D16E474E3A0C75C2FE34844773F3DAA (void);
// 0x00000A09 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_m9F6946F64ACBF2F5BA83DC48A0021CAA3696D598 (void);
// 0x00000A0A System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_m9470DB2EDD6F540AAD3541B00485D0BC875BD004 (void);
// 0x00000A0B System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[][],System.String)
extern void Tensor__ctor_mF87C18BA2F0E460D2EBB0C659F28248A17BCBB73 (void);
// 0x00000A0C System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[,],System.String)
extern void Tensor__ctor_mBB1D6A6D452157420BD8458F8EC54861A06C7B8B (void);
// 0x00000A0D System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[,],System.String)
extern void Tensor__ctor_m8323535232B2589707ECAE46007B0F6845B47AE5 (void);
// 0x00000A0E System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[,],System.String)
extern void Tensor__ctor_m269C4550BFEB77EEBDBAD9B867FD02F7B28F9C19 (void);
// 0x00000A0F System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Array,System.String)
extern void Tensor__ctor_m91B138AB51306D03F4F2C542D4A3EABC04E9BF76 (void);
// 0x00000A10 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[,,,],System.String)
extern void Tensor__ctor_m8BB00EA367606BF3868ACFDE5D8641BB53DE7AE2 (void);
// 0x00000A11 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[,,,],System.String)
extern void Tensor__ctor_mB77C9D5E31557029E8A195C797C067C4DFF5232D (void);
// 0x00000A12 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[,,,],System.String)
extern void Tensor__ctor_m5F6CB97535F85984FCFB7C0A6B097821D40F8E0C (void);
// 0x00000A13 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mA49EA4FBE74A08FDB9E6A8BDF68C77D6E23D813E (void);
// 0x00000A14 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mB4D00AEFDAE4B47D0A640FEF022E1D59608ACCDC (void);
// 0x00000A15 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mB77F69261F0F9D4ED858874B9A9BB6EB7CD51626 (void);
// 0x00000A16 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m188A32A740CFE7FF2A128302D1EB9A37DB9EBF14 (void);
// 0x00000A17 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture,System.Int32,System.String)
extern void Tensor__ctor_mF7D6E1941906C22BECCC7F0CAF080DBB7887F2F9 (void);
// 0x00000A18 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture[],System.Int32,System.String)
extern void Tensor__ctor_mC678B616E5EEFC447152CFBC0F0A2472CF8F61DD (void);
// 0x00000A19 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m8E0B03603DFD15077B9F78C66EAB90912CA49E7A (void);
// 0x00000A1A System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m3ABF640DBBD44BF82B0403D84D136AD2E9E8B462 (void);
// 0x00000A1B System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m23E84C427FA04A5BE69F05B3212621149FF61B47 (void);
// 0x00000A1C System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mB65B72A7726DCBE09D4E6D1413C9BF4B02FFD356 (void);
// 0x00000A1D System.Void Unity.Barracuda.Tensor::.ctor(System.String)
extern void Tensor__ctor_mA736A54CEA510E7988D552BAA70B4E6A59D844C5 (void);
// 0x00000A1E System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.String)
extern void Tensor__ctor_mFD3B6E094A0734987127D70F0AA5372F225A433D (void);
// 0x00000A1F System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void Tensor__ctor_mD6EC8AA65BBB3EC22C16DDD75C8F32D60BC383BE (void);
// 0x00000A20 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m05A6C31EE331EFBB7BA2E1328EFCB67913A693B1 (void);
// 0x00000A21 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.String)
extern void Tensor__ctor_m6C94FE8C85C648CCD5D6A05DD5731DE5CC8DBECC (void);
// 0x00000A22 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m8F1DC50935E20EC84360CC311961278486BE0C7B (void);
// 0x00000A23 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mD8B9A868CE449E3C73E5C42160688AC20EC3CCF1 (void);
// 0x00000A24 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m010458E572193CFB40697B5265896B9BE416151F (void);
// 0x00000A25 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m3E7257EA2B19AC99FB3AEA33FC3E498180BC9AD0 (void);
// 0x00000A26 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m369335BE7F0D49B6FB5AD9095998F088F12367B8 (void);
// 0x00000A27 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m7B9EAF083E898A002AC5EEFC050B4CE7C854FB46 (void);
// 0x00000A28 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m708EDFB90449C1190A0F98E7B8341F6676F43DE0 (void);
// 0x00000A29 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m8507953F4FCC7116BDA3BF1DBD24DEE045C0B556 (void);
// 0x00000A2A System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mEF2CC1A8D6A1B1697EDB94601DF2652255AFF579 (void);
// 0x00000A2B System.Void Unity.Barracuda.Tensor::Finalize()
extern void Tensor_Finalize_m4F1FE2ABA7D8186A312B05988DA831CE35683707 (void);
// 0x00000A2C System.Void Unity.Barracuda.Tensor::PinToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_PinToDevice_m4C5218CFE07A4745AC44E14BD17323931C55D8CA (void);
// 0x00000A2D System.Void Unity.Barracuda.Tensor::UploadToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_UploadToDevice_m36E8F4C448389B026BDEF3E819381F685A734CBA (void);
// 0x00000A2E System.Void Unity.Barracuda.Tensor::AttachToDevice(Unity.Barracuda.ITensorData)
extern void Tensor_AttachToDevice_m8150036333DE4060FE6A4DB9CEDABA837FCE2CC7 (void);
// 0x00000A2F Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
extern void Tensor_DetachFromDevice_m3F61896410EFCC1607F1A7995BA3A956240290D0 (void);
// 0x00000A30 System.Void Unity.Barracuda.Tensor::UploadIfDirty()
extern void Tensor_UploadIfDirty_m05F2DC73189336FBE4000B46ABACEECB7960CFF3 (void);
// 0x00000A31 System.Void Unity.Barracuda.Tensor::UploadAndInvalidateCache()
extern void Tensor_UploadAndInvalidateCache_mDB3D9B1365A6D63E2F960DAD12E336F358D3E7CC (void);
// 0x00000A32 System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
extern void Tensor_PrepareCacheForAccess_m0A1B607B3A671C67A30A5DACE345079BEA55C0BC (void);
// 0x00000A33 System.Void Unity.Barracuda.Tensor::FlushCache()
extern void Tensor_FlushCache_m8E0109993C2CE8292A6F7879A5CFF6926C1916FD (void);
// 0x00000A34 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_ShallowCopy_m9B8077F6B59C1D42EB56EB45FDEA056C9BDB73C9 (void);
// 0x00000A35 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(System.String)
extern void Tensor_ShallowCopy_m13DFFFBB76E57DD9E8B57EABE6E98BEFF869BFEB (void);
// 0x00000A36 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Flatten(System.String)
extern void Tensor_Flatten_m2C87C9097269B973D3D7C759A2209B0BF55D7476 (void);
// 0x00000A37 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Reshape(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_Reshape_mA4BAB390E389DD469BE918BD7698107CC35C6B55 (void);
// 0x00000A38 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::DeepCopy()
extern void Tensor_DeepCopy_m383811DCFE8982FF6E4CA4E9E439FC955944C24C (void);
// 0x00000A39 System.Void Unity.Barracuda.Tensor::TakeOwnership()
extern void Tensor_TakeOwnership_mC555874C3009F3848294FFAE50DC0E57AF8C708A (void);
// 0x00000A3A Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::Invalidate()
extern void Tensor_Invalidate_m23D4171FBFFF6686EC6191593529E58C6EBD9CB2 (void);
// 0x00000A3B System.Void Unity.Barracuda.Tensor::Dispose()
extern void Tensor_Dispose_m33A51A8841C2948229105646095CAFC39E259512 (void);
// 0x00000A3C System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m2D7199A5E49B7E4F07509BC0AA9AAA3E1E71C354 (void);
// 0x00000A3D System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mCE43F17713D7B1AA919DB82BEE1ABEEDD0A4B80D (void);
// 0x00000A3E UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m8224FA55E72324513728868383F23D8667E38357 (void);
// 0x00000A3F UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mAB5024006BCA87BB21A8626C796CAC1589D76556 (void);
// 0x00000A40 System.Int32 Unity.Barracuda.Tensor::Axis(System.Int32)
extern void Tensor_Axis_m7C2ACE830F529D067CF2ACB989CB4617966678EA (void);
// 0x00000A41 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m9B79771242BEBFD7DABE460CA621983475E1F40E (void);
// 0x00000A42 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m0B806D9DC0AA37E742A0E0778F25CAD01E53AB7F (void);
// 0x00000A43 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m714BBFADAD4421F9C713C1FBDF794C5A46C30D9D (void);
// 0x00000A44 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_m5AAE1870FAD159CC4608843CE836A1EAF8D8AE2C (void);
// 0x00000A45 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_mEADD5A9E50B57ADD046A28383F03C846622CED93 (void);
// 0x00000A46 System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m4D1D0FF9B3BCE958C50C816CB632898B31507D46 (void);
// 0x00000A47 System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m143CB5EAE64D94906777F9CA075F1FF0F83C5154 (void);
// 0x00000A48 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32)
extern void Tensor_Index_mE615CBBA69180CDC8A307B77660B4416D11C26F0 (void);
// 0x00000A49 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
extern void Tensor_get_Item_m5CB172D8EE24160C0733436BC50BD8B998F3754E (void);
// 0x00000A4A System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Single)
extern void Tensor_set_Item_m825AF5D1FC078421906298C6662565DF5C64817E (void);
// 0x00000A4B System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32)
extern void Tensor_get_Item_mB3B371A025B020FBFB3A79C3375745EEA999829B (void);
// 0x00000A4C System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m3DDF7909FDDC72AE45128800669404B9A7151F87 (void);
// 0x00000A4D System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_mA53C387CBDB9F0EA0D069DD7BFC45970172290C5 (void);
// 0x00000A4E System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m7EF9E435A07905132E0C8C33A6C5A90E1E22BF58 (void);
// 0x00000A4F System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_mA5356D6E69A9A737CAAC9469CD796413667F784C (void);
// 0x00000A50 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m2DB3060AC1B6388733DCEBDBDA2FA5A27F40FB42 (void);
// 0x00000A51 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_mEC07898861EE98ED01A447281200D4F26CEDA1A9 (void);
// 0x00000A52 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m1709795A52A1A1B65C7E09BFC9FCF25AE53E227C (void);
// 0x00000A53 System.Single[] Unity.Barracuda.Tensor::ToReadOnlyArray()
extern void Tensor_ToReadOnlyArray_mDCBBEF11F36C4B4D0B2F994C5648EA822A759D2A (void);
// 0x00000A54 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_tensorOnDevice()
extern void Tensor_get_tensorOnDevice_m3869D45C1126A5C95288140B0A9705D772322E6D (void);
// 0x00000A55 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_data()
extern void Tensor_get_data_m02BB8F7F1185C6AF1A8192A63DFBD7CF29B3B59A (void);
// 0x00000A56 System.String Unity.Barracuda.Tensor::ToString()
extern void Tensor_ToString_mDB9E44F443373C18171D539B2B6DA0AD30F7EDBC (void);
// 0x00000A57 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::UnpinAndDisposeTensor()
extern void Tensor_UnpinAndDisposeTensor_m97679C72F3424B45D0BF83F56ACF39D1FE06D25C (void);
// 0x00000A58 System.Single[] Unity.Barracuda.Tensor::get_readonlyArray()
extern void Tensor_get_readonlyArray_m852FFD713FB419E52FF69A445CC12D4C52E96808 (void);
// 0x00000A59 System.Int32 Unity.Barracuda.Tensor::get_readonlyArrayOffset()
extern void Tensor_get_readonlyArrayOffset_mF897D907B53D93B1FA4B78805B01BFC9C6AFD6B7 (void);
// 0x00000A5A System.Void Unity.Barracuda.TensorExtensions::TestInit(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void TensorExtensions_TestInit_mF2C7F2A3931A74468C67405D84CA66F2BAB6E378 (void);
// 0x00000A5B System.Void Unity.Barracuda.TensorExtensions::TestInitCos(Unity.Barracuda.Tensor,System.Int32,System.Single)
extern void TensorExtensions_TestInitCos_m08D9365BD9B68545DAE59B369D054E20F420ECC7 (void);
// 0x00000A5C System.Void Unity.Barracuda.TensorExtensions::TestInitValue(Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_TestInitValue_m2D88E19ADC5579C0B6EC2DF496055C629F02DC02 (void);
// 0x00000A5D System.Single[] Unity.Barracuda.TensorExtensions::AsFloats(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsFloats_mE2B1F672F9C735588DA37A895F7840C7326F22FC (void);
// 0x00000A5E System.Int32[] Unity.Barracuda.TensorExtensions::AsInts(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsInts_m9AD941BD2FD9F2D3E8B92258F5C2E04DD266BBAF (void);
// 0x00000A5F System.String Unity.Barracuda.TensorExtensions::DataToString(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_DataToString_m9B659C2E4C3F6AA5511FDE3B6BD7E357DBFE60A4 (void);
// 0x00000A60 System.Void Unity.Barracuda.TensorExtensions::Print(Unity.Barracuda.Tensor,System.String)
extern void TensorExtensions_Print_mCA4FFD368863D90E239F3A150A56D22C926D4D96 (void);
// 0x00000A61 System.Void Unity.Barracuda.TensorExtensions::PrintDataPart(Unity.Barracuda.Tensor,System.Int32,System.String)
extern void TensorExtensions_PrintDataPart_m8E888788007FA282C1DF9F791DE7FF11108900ED (void);
// 0x00000A62 System.Boolean Unity.Barracuda.TensorExtensions::Equals(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_Equals_m18B89734D4E23490267B004F3084AB6E26D26FF9 (void);
// 0x00000A63 System.Boolean Unity.Barracuda.TensorExtensions::Approximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_Approximately_m2C24D6ECD72120247B51FD8D7C8342AA2AF98E0E (void);
// 0x00000A64 System.Single Unity.Barracuda.TensorExtensions::MaxDifference(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_MaxDifference_m788103FC9E047B9338C3AB357E71FB481A40F41A (void);
// 0x00000A65 Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.Tensor,System.Int32[])
extern void TensorExtensions_Reshape_m72BD8478CACA876E3FE0CC864922D120065E50F7 (void);
// 0x00000A66 System.Int32[] Unity.Barracuda.TensorExtensions::ArgMax(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgMax_mF0B079BA6F725E64A11903AECDB2314722D49265 (void);
// 0x00000A67 System.Int32[][] Unity.Barracuda.TensorExtensions::ArgSort(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgSort_mC3B518BD442AF44B0A263301E416CBD4A5EE5A73 (void);
// 0x00000A68 System.Void Unity.Barracuda.TensorExtensions::Fill(Unity.Barracuda.Tensor,System.Single)
extern void TensorExtensions_Fill_mFD0DC9D026783C26553D366D44203B9DE7F77056 (void);
// 0x00000A69 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Gather(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Gather_m72AE168823B4343DC9D20490923B663475AD8BBA (void);
// 0x00000A6A Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void TensorExtensions_Concat_m75BFAF346DDA62D560A4674C4B7DA3F0A9137F79 (void);
// 0x00000A6B Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Concat_m5FEB3B53E5F37582256D261910030019D8DB92AF (void);
// 0x00000A6C Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Max(Unity.Barracuda.TensorShape[])
extern void TensorExtensions_Max_mF8D3D71BBE6BC7B67C9E4DFE88E18130AF9FD285 (void);
// 0x00000A6D Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::MaxShape(Unity.Barracuda.Tensor[])
extern void TensorExtensions_MaxShape_m53F10A75EBA8FAF5EAC4855CD5E23627FF0CF741 (void);
// 0x00000A6E Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorExtensions_Scale_mDF164A5B110EAA93CDBD1FC1E9FB9B5CD29AD969 (void);
// 0x00000A6F Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Scale_m7FD866CB7B971A1BB0E281E211C7F41AB781F73A (void);
// 0x00000A70 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reduce(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorExtensions_Reduce_m560987AF34398CEE85412B1B5DCE11AB22B6712F (void);
// 0x00000A71 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Reshape_m2D1FF5C987A94B87A88690C7CA71CC32B8CC4D2B (void);
// 0x00000A72 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyBorder(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_ApplyBorder_m9E9BBD248EA93738E1D3C05DA0140DFCCFF5B065 (void);
// 0x00000A73 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m3AE12CC63BA4015BA4E6CAE5436CDCE4AC49C7A2 (void);
// 0x00000A74 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m0ADD8CEC4DCD41511243ED233D9D99F3A0FC8C7C (void);
// 0x00000A75 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m0D671C8C9AD0A86A39A229F303E3417BD8458485 (void);
// 0x00000A76 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32*,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mCC6D257B2F7A0D8820044CE075907CC36345717B (void);
// 0x00000A77 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mBBD956533BF985CC2974CB69D58E1E4FF07D6BC3 (void);
// 0x00000A78 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32*,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m1BE3FA1233D74E5B692717321B32C68D12EA0DD8 (void);
// 0x00000A79 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mB8C886661E283C591C554E99E632E67FAF2F084D (void);
// 0x00000A7A Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32*,System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mBF6016D7DB1B606870F7612EF2045DC28C8D862A (void);
// 0x00000A7B Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernel_m6D52E32ED54F6097A1E104CCB8CC7FB09F240443 (void);
// 0x00000A7C Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernelInverse(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernelInverse_m35496E3C9A2647840F5C8B2297365F643D84701C (void);
// 0x00000A7D System.Int32 Unity.Barracuda.TensorExtensions::WrapIndex(System.Int32,System.Int32)
extern void TensorExtensions_WrapIndex_m2CB48399E65FC2F88306940433EF6E260F9A31F5 (void);
// 0x00000A7E System.Boolean Unity.Barracuda.TensorExtensions::IsNDHWC(Unity.Barracuda.TensorShape)
extern void TensorExtensions_IsNDHWC_mAE6BCD15589A659050B19303629AD7252E90A49C (void);
// 0x00000A7F System.Boolean Unity.Barracuda.TensorExtensions::Is4D(Unity.Barracuda.TensorShape)
extern void TensorExtensions_Is4D_m1BB4A7DABDDBDB4046C16B6833336A64CD5A0C86 (void);
// 0x00000A80 System.Int32 Unity.Barracuda.TensorExtensions::Convert4DTo8DAxis(System.Int32)
extern void TensorExtensions_Convert4DTo8DAxis_mF1E59D0EAA74487291EAF4FB9ED1218F9FF99E8D (void);
// 0x00000A81 System.Int32 Unity.Barracuda.TensorExtensions::FirstNotIdentityFeatureDimensionIndex(Unity.Barracuda.TensorShape)
extern void TensorExtensions_FirstNotIdentityFeatureDimensionIndex_mB86C4353A122D923B962B0D30332ECB31C4B4664 (void);
// 0x00000A82 System.Boolean Unity.Barracuda.TensorExtensions::Is8DAxisConvertibleTo4D(System.Int32)
extern void TensorExtensions_Is8DAxisConvertibleTo4D_mF9096FCDE2A72949B308534D27B2AB886238F09D (void);
// 0x00000A83 System.Boolean Unity.Barracuda.TensorExtensions::AreAllTensorsConvertibleTo4D(Unity.Barracuda.Tensor[])
extern void TensorExtensions_AreAllTensorsConvertibleTo4D_m84501172818BBF63827564ACA3259C023DAA3223 (void);
// 0x00000A84 System.Int32 Unity.Barracuda.TensorExtensions::Convert8DAxisTo4D(System.Int32)
extern void TensorExtensions_Convert8DAxisTo4D_m4B4356063BCD46AA320F6603E5CC8A14C81A39B2 (void);
// 0x00000A85 System.Void Unity.Barracuda.TensorExtensions::Get8DParametersNoAlloc(Unity.Barracuda.TensorShape,System.Int32[],System.Int32*,System.Int32)
extern void TensorExtensions_Get8DParametersNoAlloc_m8BABE0CC703EED646CB20B460C69C30E81C1FBED (void);
// 0x00000A86 System.Int32[] Unity.Barracuda.TensorExtensions::Get8DPermutationsForNHWCPermutationsAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_mE45436875456051EC29BC0B4ACC19340CB806A1E (void);
// 0x00000A87 System.Int32[] Unity.Barracuda.TensorExtensions::Get8DPermutationsForNCHWPermutationsAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Get8DPermutationsForNCHWPermutationsAndShape_m6B214DEE3C60BDFB287B36DDCF8DDDB9A3E7E8EB (void);
// 0x00000A88 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice8DUnsafeNoAlloc(Unity.Barracuda.TensorShape,System.Int32*,System.Int32*,System.Int32*)
extern void TensorExtensions_ApplyStridedSlice8DUnsafeNoAlloc_mB133DE734B3023D4D5B5C9B6E5290634EF6BC90A (void);
// 0x00000A89 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyStridedSlice_mFF24E99E52CCFC173AD4B5954372FDB018AC6E7D (void);
// 0x00000A8A System.Int32[] Unity.Barracuda.TensorExtensions::Permute(System.Int32[],System.Int32[])
extern void TensorExtensions_Permute_m17FFD2B9FD93ECDD97FE0F7D621CACB443650663 (void);
// 0x00000A8B Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Permute(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Permute_m5B7A207CA82700EF3ECF35A5DFCB5A2EAB3DFAF0 (void);
// 0x00000A8C Unity.Barracuda.ITensorData Unity.Barracuda.TensorExtensions::CreateFromTexture(UnityEngine.Texture,Unity.Barracuda.TensorShape)
extern void TensorExtensions_CreateFromTexture_mD08C18240D6358A7BFEC750AF99E35C69B7A31E5 (void);
// 0x00000A8D System.Void Unity.Barracuda.TensorExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_mFC4357C23E79BB6B413A55E57A39DCFB0E344ACD (void);
// 0x00000A8E System.Void Unity.Barracuda.TensorExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_m8228570C3F70BC0DE680555EF35FB6FFEC1B9461 (void);
// 0x00000A8F System.Int32 Unity.Barracuda.TensorExtensions/<>c::<AsInts>b__4_0(System.Single)
extern void U3CU3Ec_U3CAsIntsU3Eb__4_0_mED40721A335A0F8C4276652D6C58FB59C9C666B5 (void);
// 0x00000A90 System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m3CF3FFB8B0452F92C98D886CA72B9ECDFF2F3163 (void);
// 0x00000A91 System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::.ctor()
extern void U3CU3Ec__DisplayClass13_1__ctor_m3B2A35DBFE8B8C86FA1F8AA8D534E1B92F8A481A (void);
// 0x00000A92 System.Int32 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::<ArgSort>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_mA377DB22C5A0D2C8214EF86CB4710C77A6832CB0 (void);
// 0x00000A93 System.Nullable`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::InferOutputRank(Unity.Barracuda.Layer,System.Int32[])
extern void RankInference_InferOutputRank_mCB721FA8361E4387F6DC86221B5C0CD5ACC9C92D (void);
// 0x00000A94 System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::UpdateKnownTensorRanks(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void RankInference_UpdateKnownTensorRanks_m3FB9C6C69D0BDB6E17A841E37A93DA9B192CA316 (void);
// 0x00000A95 System.Nullable`1<System.Int32>[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::ListTemporaryTensorRanks(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>&)
extern void RankInference_ListTemporaryTensorRanks_mABDA99A4B890CA021E85FA2BA912F9A321FAFCD8 (void);
// 0x00000A96 System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::.ctor()
extern void RankInference__ctor_mECA6AE648443E2EEF743D3507E8716D0D83D3E86 (void);
// 0x00000A97 System.Int32[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::BarracudaLayoutToTensorShapeLayout(System.Int32[])
extern void ShapeInference_BarracudaLayoutToTensorShapeLayout_mA4F5C66EA777FDD5A1EDBF74CC3475B1049C52E2 (void);
// 0x00000A98 System.Collections.Generic.List`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::BarracudaShapeToOnnxLayout(Unity.Barracuda.TensorShape,System.Int32)
extern void ShapeInference_BarracudaShapeToOnnxLayout_m94C60CDBF3B7CD59D0FC9539192D1E155C4E8992 (void);
// 0x00000A99 System.Collections.Generic.List`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::ShapeToOnnxLayout(Unity.Barracuda.TensorShape,System.Int32)
extern void ShapeInference_ShapeToOnnxLayout_m873C340AA2BAF90189FEED6EBBAD0D406FBF8D4A (void);
// 0x00000A9A System.Int32[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::OnnxLayoutToTensorShapeLayout(System.Int32[])
extern void ShapeInference_OnnxLayoutToTensorShapeLayout_mDAC5F424B6987D66F6A735404BE8EC47CFC9F429 (void);
// 0x00000A9B Unity.Barracuda.TensorShape Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::OnnxLayoutToTensorShape(System.Int32[])
extern void ShapeInference_OnnxLayoutToTensorShape_m9A172096A83F84C58F187A047780F6D87401BF50 (void);
// 0x00000A9C Unity.Barracuda.TensorShape Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::OnnxLayoutToBarracudaTensorShape(System.Int32[])
extern void ShapeInference_OnnxLayoutToBarracudaTensorShape_m565AA20AD0A9C23157B896E9BBDCDD4A0AD63358 (void);
// 0x00000A9D System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::InferOutputShapeNCHW(Unity.Barracuda.Layer,System.Int32[],Unity.Barracuda.TensorShape[])
extern void ShapeInference_InferOutputShapeNCHW_m3A6EB313B2823A86080DCE8EBE632A5E070FED19 (void);
// 0x00000A9E System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::UpdateKnownTensorShapesNCHW(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ShapeInference_UpdateKnownTensorShapesNCHW_mF12E03009240A3EE76B1CCAE8E087A31699D1E3D (void);
// 0x00000A9F System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::ListTemporaryTensorShapesNCHW(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ShapeInference_ListTemporaryTensorShapesNCHW_mF9E7A19604FAF974800C983162C9094960CE4964 (void);
// 0x00000AA0 System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::.ctor()
extern void ShapeInference__ctor_mE6216D33B3BB4C9929F700845641DACFC504A658 (void);
// 0x00000AA1 System.Void Unity.Barracuda.Compiler.Passes.IModelPass::Run(Unity.Barracuda.Model&)
// 0x00000AA2 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::Run(Unity.Barracuda.Model&)
extern void IRShapeInferenceAndConstantFusing_Run_m04F6A7DE77043674A46A5ED8127E01E9EA66AD6A (void);
// 0x00000AA3 Unity.Barracuda.Tensor Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::ShapeToNCHWTensor(Unity.Barracuda.TensorShape,System.Int32)
extern void IRShapeInferenceAndConstantFusing_ShapeToNCHWTensor_m131578DEA8CB668F0B7FB12824C91FB9566E1178 (void);
// 0x00000AA4 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::FuseShapesIntoConstants(Unity.Barracuda.Model&,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void IRShapeInferenceAndConstantFusing_FuseShapesIntoConstants_mC32E928E9DD63CC272FC8134F044A9FBA271C9BF (void);
// 0x00000AA5 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::InferAllShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>&)
extern void IRShapeInferenceAndConstantFusing_InferAllShapes_m0ACF3B8DC5C14ADCA077EBAB0858F249F9304CF6 (void);
// 0x00000AA6 System.Boolean Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::IsLayerKnown(System.String,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void IRShapeInferenceAndConstantFusing_IsLayerKnown_m8ACCD392711401877F4F45939E04BA96A58A5799 (void);
// 0x00000AA7 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::FuseInputsIntoLayer(Unity.Barracuda.Layer&,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void IRShapeInferenceAndConstantFusing_FuseInputsIntoLayer_mF961675844AA84C7796E19C089376221502F157A (void);
// 0x00000AA8 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::.ctor()
extern void IRShapeInferenceAndConstantFusing__ctor_mF540D357DADA8A8D565269CC65146FAB5A019FB1 (void);
// 0x00000AA9 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m9ECF850CE2D57C9058DCF463C58542771E5B301C (void);
// 0x00000AAA System.Boolean Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c__DisplayClass2_0::<FuseShapesIntoConstants>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CFuseShapesIntoConstantsU3Eb__0_mFF5A5652B261307287D05DB2D1961D1B48D6E32F (void);
// 0x00000AAB System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::.cctor()
extern void U3CU3Ec__cctor_mBEFD66CB399683093A5902738B51C2CAA6A0EBE0 (void);
// 0x00000AAC System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::.ctor()
extern void U3CU3Ec__ctor_m4BA4552BBC2203E927A96BF132A184A62CA0B106 (void);
// 0x00000AAD System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_0(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_0_m569922043E6B3DC72CFF713EF67CED214F02DE29 (void);
// 0x00000AAE System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_2(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_2_m9ECA00DCE03634A0796F645B2EDC515809C23D8F (void);
// 0x00000AAF System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_1(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_1_mA11153C0C999D29009ED0B53AFDB1DFBDEF28248 (void);
// 0x00000AB0 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_3(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_3_m7932C2BC5A153947C533D622195203162B63B6AF (void);
// 0x00000AB1 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_4(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_4_mEDC46FCAC0E2C12811BD46BC98392DC914CDD7B2 (void);
// 0x00000AB2 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_5(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_5_mB3A73D86AE47ADBEFEDE86CA26D665CAD87BE730 (void);
// 0x00000AB3 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_6(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_6_mE03A4CEAE08C65F59391CFDF3F04BD237167704A (void);
// 0x00000AB4 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_7(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_7_m23BEF11F2F59B51D29C4E6319058D072A1B6F5DB (void);
// 0x00000AB5 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_8(System.Int32)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_8_m25CA242ED6613158D80DB01DD5CA3DA63F232783 (void);
// 0x00000AB6 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_9(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_9_mAFC231B945FBA9C02E7E2A87DBB98DF455452CF6 (void);
// 0x00000AB7 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_10(System.Int32)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_10_mA308BD62D86D833859A7AB594F66E66CA2EF8D74 (void);
// 0x00000AB8 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_11(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_11_mE8408C8E7196132E94CAA45046B4939680D1D546 (void);
// 0x00000AB9 System.Void Unity.Barracuda.Compiler.Passes.IValidateModelPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
// 0x00000ABA System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::Run(Unity.Barracuda.Model&)
extern void IntermediateToRunnableNCHWPass_Run_mEC5AA1FD5BD038C38ECF6726BA692BF0ED44F8DC (void);
// 0x00000ABB System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::AxisToBarracuda(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_AxisToBarracuda_m81E621DAB1131B07848C1CF8ECC0A8E494C713C8 (void);
// 0x00000ABC System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeToBarracuda(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeToBarracuda_mB206B80B19151D6C3FA4826E77D016ADDC466F3A (void);
// 0x00000ABD System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::ShapeToBarracuda(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_ShapeToBarracuda_m76DB272A31374E09A6FAC52EADB6F7034472D110 (void);
// 0x00000ABE System.Int32[] Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::SqueezeAxisPermutation(System.Int32,System.Int32)
extern void IntermediateToRunnableNCHWPass_SqueezeAxisPermutation_m196E60D8B1BF370A302CCEFDFC82741FC978050B (void);
// 0x00000ABF System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::SliceToBarracuda(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_SliceToBarracuda_mBC2C340E021F7492EA94926B93CBA71B396E0CF6 (void);
// 0x00000AC0 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::Transpose0UsingRank(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_Transpose0UsingRank_m542C40DA7CA23E75ADEEC5E95FEDA987D95B70A8 (void);
// 0x00000AC1 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeInput01UsingRank(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeInput01UsingRank_m64993A94128562457F43D56908A5B49F4742F17A (void);
// 0x00000AC2 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeForBroadcast(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeForBroadcast_mE224518517FAD3FC48C957B02854786DF8647AFF (void);
// 0x00000AC3 System.Int32[] Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::GetTransposeForBroadCast(System.Int32,System.Int32)
extern void IntermediateToRunnableNCHWPass_GetTransposeForBroadCast_m83740F7EF909B47BBB7E176F4087D51B893A0FCF (void);
// 0x00000AC4 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeInput01(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeInput01_m977E40FC1D6BF6A0A053C609258778CD123604EC (void);
// 0x00000AC5 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeInput0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeInput0_m71EB5CD43C595F4ECE7988DA62890C4523280E88 (void);
// 0x00000AC6 System.Int32[] Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::RankChangePermutationBarracuda(System.Int32,System.Int32)
extern void IntermediateToRunnableNCHWPass_RankChangePermutationBarracuda_m69B3857415BF0AF1A28AE0A4C38AAE3F76E44F54 (void);
// 0x00000AC7 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::.ctor()
extern void IntermediateToRunnableNCHWPass__ctor_m7C9ADD36624AEF7F38AA7BD046BA382646BA7B1E (void);
// 0x00000AC8 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mAD401F5B1DC9ED8333067AB9A16BF103C3B9C990 (void);
// 0x00000AC9 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__0_m6803FCA8799AC4C38C318A1135F1BADFCA00CEF6 (void);
// 0x00000ACA System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__1_m2499BA2F2E3B39C02BDAE74549139E28A3C1CCC2 (void);
// 0x00000ACB System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__2_m2C3763FB67C8EC0CD081EFBB794A9E83E1164ADB (void);
// 0x00000ACC System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__3_m4246D551E6B51200E409A81A895D07C32D38A03A (void);
// 0x00000ACD System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__4(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__4_mD07A098408EE90C10D5C8B71889CD900AA145C34 (void);
// 0x00000ACE System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__5(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__5_m39D885681B6DEE78CFC23E0169F7F74BA7EAF882 (void);
// 0x00000ACF System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_0::<Run>b__6(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__6_m65D89A8E01B23C99CCB2023656E3BF42E826CA40 (void);
// 0x00000AD0 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_1::.ctor()
extern void U3CU3Ec__DisplayClass4_1__ctor_m88C788F9EDC55A1C5DA483953B89CB98835C54D7 (void);
// 0x00000AD1 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_1::<Run>b__7(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass4_1_U3CRunU3Eb__7_m1896CD7F66A5C20947E26B90DF86107BF5C9F8F7 (void);
// 0x00000AD2 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_2::.ctor()
extern void U3CU3Ec__DisplayClass4_2__ctor_m22C90D907413988DFBCA08572279133D63D2D5EC (void);
// 0x00000AD3 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass4_2::<Run>b__8(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass4_2_U3CRunU3Eb__8_m359F19F23167FC0673D4C22CF16362E3FD5E1E8A (void);
// 0x00000AD4 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m2243DD0AB597FB630AE665E3395ECA406DA4CD69 (void);
// 0x00000AD5 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass5_0::<AxisToBarracuda>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass5_0_U3CAxisToBarracudaU3Eb__0_m8DB21FC6211D9EE29BA305C45A012DFE7EE5F91C (void);
// 0x00000AD6 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m951FB305F2A8B49D4AF6CDBAB54519E529BAD7EE (void);
// 0x00000AD7 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass6_0::<TransposeToBarracuda>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass6_0_U3CTransposeToBarracudaU3Eb__0_m2F8D4EBD901F3F9030A705167A83B250C1FD8AA7 (void);
// 0x00000AD8 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m48C012790900CDA4FD8BEB82D4C358861F64841F (void);
// 0x00000AD9 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass9_0::<SliceToBarracuda>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass9_0_U3CSliceToBarracudaU3Eb__0_mA4412FAB07E4F83D80BC12FECED41D7624B4013B (void);
// 0x00000ADA System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m8775C5AE4E09D1550E23C8B60E8ECB7E72C6E5C0 (void);
// 0x00000ADB System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass10_0::<Transpose0UsingRank>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass10_0_U3CTranspose0UsingRankU3Eb__0_m458AA67DA4BE1C4508551908AB4BCFACC7BF3AD0 (void);
// 0x00000ADC System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m9052CBD6F1ECCC848BA5DFF7CACF18ADF02976E7 (void);
// 0x00000ADD System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass11_0::<TransposeInput01UsingRank>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass11_0_U3CTransposeInput01UsingRankU3Eb__0_m8395F486C49538B2110338BBC28F4EA39A726B82 (void);
// 0x00000ADE System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass11_0::<TransposeInput01UsingRank>b__1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass11_0_U3CTransposeInput01UsingRankU3Eb__1_m1D4C4F644DDB7D2898B6857448FD2D4A664A62E7 (void);
// 0x00000ADF System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m035A9B619A75EC58A7748AD527BA592942FC6225 (void);
// 0x00000AE0 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass12_1::.ctor()
extern void U3CU3Ec__DisplayClass12_1__ctor_m66B07E47BCD590DBCE94681F47C62798D7391EF0 (void);
// 0x00000AE1 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass12_1::<TransposeForBroadcast>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass12_1_U3CTransposeForBroadcastU3Eb__0_m336419F17DB41A04259A5C3993C125FA570AE4DA (void);
// 0x00000AE2 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass12_2::.ctor()
extern void U3CU3Ec__DisplayClass12_2__ctor_m2BA5B1971A0F0206EC989C69DAE831DF34DD0D53 (void);
// 0x00000AE3 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass12_2::<TransposeForBroadcast>b__1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass12_2_U3CTransposeForBroadcastU3Eb__1_m25DD2B4B614D9939147FD1C66DBC20A03BC45EAE (void);
// 0x00000AE4 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNHWCPass::Run(Unity.Barracuda.Model&)
extern void IntermediateToRunnableNHWCPass_Run_m835236673BFCA3E6CF59F4C74941B0112AC8C8FC (void);
// 0x00000AE5 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNHWCPass::.ctor()
extern void IntermediateToRunnableNHWCPass__ctor_m685E3078FC46F63162ABA6891E1D16B880CE77F9 (void);
// 0x00000AE6 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsImporterLikelyNHWCLayout(System.String)
extern void LayoutTransposeRemovalHelper_IsImporterLikelyNHWCLayout_mD631A536254B2AC7CED880A2719FA5CACF832955 (void);
// 0x00000AE7 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerNecessarilyNCHWOnnx(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerNecessarilyNCHWOnnx_m1D1D2592B5758D927F8B423EF724E8ACD3BA9DEF (void);
// 0x00000AE8 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerTranpose(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerTranpose_mEACC25EAA2362AEF2459D07C6D3191738E10251E (void);
// 0x00000AE9 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerReshape(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerReshape_m16A1978A41B24AFEEF00E379A8C29CFEDFB6687D (void);
// 0x00000AEA System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerSqueeze(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerSqueeze_m8D39338A1EF0CFA0773FF7B0708A021792FF7509 (void);
// 0x00000AEB System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerFlatten(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerFlatten_mE7FAF551D59A9B94B1CA4E34B763AE9E4F469A50 (void);
// 0x00000AEC System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerConst(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerConst_m12CCEC87B23EC02749A790D8B7C26A6522767ADC (void);
// 0x00000AED System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerRandom(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerRandom_m348ECB6BDCEFE9D657AB639C82F3F7FFAD0D3F62 (void);
// 0x00000AEE System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsReshapeTransposeToNCHW(Unity.Barracuda.Layer,Unity.Barracuda.TensorShape)
extern void LayoutTransposeRemovalHelper_IsReshapeTransposeToNCHW_m695EB00D8610E2AAC28BF2ACFE78D991CE29FEFE (void);
// 0x00000AEF System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsReshapeTransposeToNHWC(Unity.Barracuda.Layer,Unity.Barracuda.TensorShape)
extern void LayoutTransposeRemovalHelper_IsReshapeTransposeToNHWC_mC2A1652D77980C1B01AE3206FF8097740AC5C4DF (void);
// 0x00000AF0 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsSqueezeTransposeToNHWC(Unity.Barracuda.Layer,System.Int32)
extern void LayoutTransposeRemovalHelper_IsSqueezeTransposeToNHWC_mFC9CDF5ADEEB5E51DF4F7BA01D26EDB6D9143971 (void);
// 0x00000AF1 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsFlattenTransposeToNHWC(Unity.Barracuda.Layer,System.Int32)
extern void LayoutTransposeRemovalHelper_IsFlattenTransposeToNHWC_m2628BB39AFFE54934DE8252A327851D58E5E1CB1 (void);
// 0x00000AF2 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerChangingLayoutToNHWC(Unity.Barracuda.Layer,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void LayoutTransposeRemovalHelper_IsLayerChangingLayoutToNHWC_m54256AB8408A01FE78997C5DAD440504C8ED49D9 (void);
// 0x00000AF3 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerChangingLayoutToNCHW(Unity.Barracuda.Layer,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void LayoutTransposeRemovalHelper_IsLayerChangingLayoutToNCHW_m3BFD4F7C42D7E56C7D629E5A5DD662922923357F (void);
// 0x00000AF4 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::InferAllLayersChannelOrder(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/ChannelsOrder>&)
extern void LayoutTransposeRemovalHelper_InferAllLayersChannelOrder_mC1AA4E905B4603B1332F69E3F555695177A5F7B5 (void);
// 0x00000AF5 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::RemoveAllChannelLayoutTransposes(Unity.Barracuda.Model&,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/ChannelsOrder>)
extern void LayoutTransposeRemovalHelper_RemoveAllChannelLayoutTransposes_mE303768FF211466F28A5635510C7CCD2088F62AB (void);
// 0x00000AF6 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::.ctor()
extern void LayoutTransposeRemovalHelper__ctor_mB2C13E175ADBDEF53947CF2D7B4FF14812387AEF (void);
// 0x00000AF7 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m3F25688AC63345AFB6F0CC7D1E0327BB05467B47 (void);
// 0x00000AF8 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass1_0::<IsImporterLikelyNHWCLayout>b__0(System.String)
extern void U3CU3Ec__DisplayClass1_0_U3CIsImporterLikelyNHWCLayoutU3Eb__0_m53ECC0222CAFEE86303E3BCA9ECB292A3C16BAB0 (void);
// 0x00000AF9 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetPermutationForBroadcast(System.Int32,System.Int32,System.Boolean)
extern void NCHWToNHWCPass_GetPermutationForBroadcast_m3810969BEB84F00F951A679E19B6D0B8D951FF35 (void);
// 0x00000AFA System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::CorrectConstantsForBroadCast(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_CorrectConstantsForBroadCast_mE88CF7F974C396ACB96AC8B1FD8032F1646751A1 (void);
// 0x00000AFB System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::CorrectDynamicInputsForBroadCast(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_CorrectDynamicInputsForBroadCast_m6F0F3E79784109E79AE13B34080E8FCC599C8C75 (void);
// 0x00000AFC System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::CorrectOutputLayoutToMatchNHWCLayout(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_CorrectOutputLayoutToMatchNHWCLayout_m6FE82A3F90D3C4090D88737768304C0745AC1970 (void);
// 0x00000AFD System.Collections.Generic.Dictionary`2<Unity.Barracuda.Layer/Type,System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean>> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::InstantiateRewriterNCHWToNHWC()
extern void NCHWToNHWCPass_InstantiateRewriterNCHWToNHWC_mEB08BE185523E7C76479C22F68D2090D1CA8860F (void);
// 0x00000AFE System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetChannelsLastPermutationsFromRank(System.Int32)
extern void NCHWToNHWCPass_GetChannelsLastPermutationsFromRank_m3B3BD2BC4BF8B0A7A940E227A40497F4E5E102AD (void);
// 0x00000AFF System.Int32 Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetApproximateRankFromTensorShape(Unity.Barracuda.TensorShape)
extern void NCHWToNHWCPass_GetApproximateRankFromTensorShape_m953AC80045EDFD33EF105BE6062EFCC1C697E16D (void);
// 0x00000B00 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertDatasets(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertDatasets_mE226A5B2BE4B0513DA1B217D682E1EBC898D37EC (void);
// 0x00000B01 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertActivation(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertActivation_mC7FFC1455AAFD0E46548A52CC488D622896794C5 (void);
// 0x00000B02 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertNormal(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertNormal_mB99A520808AC27850093972C1D2429F603912921 (void);
// 0x00000B03 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertShape(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertShape_m7912CEEE705CD6D15CA93D61EFF7DB1BDD4EF2CD (void);
// 0x00000B04 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertAxis(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertAxis_m22DD1F8D7ACDB6C33608CA6E3423CD2F7D86D7FC (void);
// 0x00000B05 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Upsample(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_Upsample_m6C05F6089F871B3EC16E62FE71F1E316EF8B7CCF (void);
// 0x00000B06 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Reduce(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_Reduce_mEE8AC4ABE4344BFE06A10DE8F9359AFAF0610869 (void);
// 0x00000B07 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::AxisPermutationsForMappingNCHWLayoutToBarracuda(System.Int32)
extern void NCHWToNHWCPass_AxisPermutationsForMappingNCHWLayoutToBarracuda_m54EC7BE9F14CFB7E61A68D7C2F33F7B76BF64FBC (void);
// 0x00000B08 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::PermuteToBarracuda(System.Int32[],System.Int32,System.Int32)
extern void NCHWToNHWCPass_PermuteToBarracuda_mC31773B7744E1A0400445342BCC56C270A1E8D73 (void);
// 0x00000B09 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda(System.Int32,System.Int32)
extern void NCHWToNHWCPass_UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mA514BAB9FB856638C3D2A2E8D931B9E2629E36EA (void);
// 0x00000B0A System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda(System.Int32,System.Int32)
extern void NCHWToNHWCPass_SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mFC96060B4558B523FBB56C9FBADF71AECB496E39 (void);
// 0x00000B0B System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetPermutationToMatchReduceWithDroppedDimensionsFromONNX(System.Int32[],System.Int32)
extern void NCHWToNHWCPass_GetPermutationToMatchReduceWithDroppedDimensionsFromONNX_m17284DB21C60AA949E158ACE5A874259B85E7AE4 (void);
// 0x00000B0C System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::RankChangePermutationBarracuda(System.Int32,System.Int32)
extern void NCHWToNHWCPass_RankChangePermutationBarracuda_m718E15E2C9D95C988960DF1CD76A5BD7E7D2F339 (void);
// 0x00000B0D System.Collections.Generic.Dictionary`2<Unity.Barracuda.Layer/Type,System.Action`2<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder>> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::InstantiateRewriterNHWCToNHWC()
extern void NCHWToNHWCPass_InstantiateRewriterNHWCToNHWC_m92FF7E6CE90E2FAEF6228EB387AEDE10E3F8EB7E (void);
// 0x00000B0E System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertAxisNHWC(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertAxisNHWC_mCCDC44EA06D6FE61DE2C192575E4FAD525E1A894 (void);
// 0x00000B0F System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Run(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_Run_m1551B83403E73D790E48BB4A0DFDDDC1808CB277 (void);
// 0x00000B10 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Rewrite(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_Rewrite_m6398880C9294794DE8CF693080EA2FAF3CA9100F (void);
// 0x00000B11 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::.ctor()
extern void NCHWToNHWCPass__ctor_m45559D9B9F5BBD9184A50CB18F5DD6BBF210F003 (void);
// 0x00000B12 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::.cctor()
extern void NCHWToNHWCPass__cctor_mEC585A0B0C9B586EDFDDBC433107E5AB911053D3 (void);
// 0x00000B13 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_0_mF3E4D34EA76BFCC31567C8D8CB8E96CFFCB8F69A (void);
// 0x00000B14 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_1_m8AB3B23F1483860CD7F2893CDAE25124193C4479 (void);
// 0x00000B15 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_2_mC85FF92D363F9E5CBA372C1876096763BAA0B8B4 (void);
// 0x00000B16 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_4(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_4_mF7ABF3B563E403CB0E311FD19D6D4A3BE9BEB4CA (void);
// 0x00000B17 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_5(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_5_m582E32A3CEE6DF5109D9089B3161CC7FE8582076 (void);
// 0x00000B18 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_6(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_6_mA6D0C21081E51E159DBA3D02143B66EE32CB94AB (void);
// 0x00000B19 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_7(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_7_mDF8688C8D1571CA44D5B1D46DE863111FE1D572D (void);
// 0x00000B1A System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_8(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_8_mED14C4328AE18BC47919C5EC01DEE5A096BFED9A (void);
// 0x00000B1B System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__4_9(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_9_m1492986F8B7B665DD7CBA5A7270539EC1610966A (void);
// 0x00000B1C System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNHWCToNHWC>b__20_2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_2_m796197BDCC2B66C2E5927AA89D25AF85FEE46CC0 (void);
// 0x00000B1D System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNHWCToNHWC>b__20_6(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_6_mB67F5BAB51DFAFF48A001BF4B51CF7D231345D6E (void);
// 0x00000B1E System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m24AD26A782588389E4110E5F9859F547F4B13444 (void);
// 0x00000B1F System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.ctor()
extern void U3CU3Ec__ctor_mFF76573E7BDE0A15915331F1C6257FA6307DBD2B (void);
// 0x00000B20 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNCHWToNHWC>b__4_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_3_m04940B8E312F7855494DF8F75E37BFAB44D39685 (void);
// 0x00000B21 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<PermuteToBarracuda>b__15_0(System.Int32)
extern void U3CU3Ec_U3CPermuteToBarracudaU3Eb__15_0_m1BEAA855491460F32C4A1EC4AB8E0FE8927D4226 (void);
// 0x00000B22 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__20_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_0_m0D370BB6499E1310D3702418E11D6CB0C81C7AA1 (void);
// 0x00000B23 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__20_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_1_m607C9C4001036F8D00CCB6108BA58CF4EAB42B9C (void);
// 0x00000B24 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__20_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_3_m98F5ECB7B773EFBC3C6CB959A8191945FF604377 (void);
// 0x00000B25 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__20_4(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_4_m5AFB64A538B6F92FA3ED86F9593157B0E5A14EB6 (void);
// 0x00000B26 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__20_5(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_5_m753BD80A1286626B2CD9320290619BE2E6842EFB (void);
// 0x00000B27 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass32_0::.ctor()
extern void U3CU3Ec__DisplayClass32_0__ctor_m1F2E683F0C62C61D361D59AF311D6A0A2C6D81A9 (void);
// 0x00000B28 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass32_0::<Rewrite>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass32_0_U3CRewriteU3Eb__0_mC7463FEA453B97A8BAB165A4A6E760119BF9DC29 (void);
// 0x00000B29 System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass::Run(Unity.Barracuda.Model&)
extern void PreserveLayersPass_Run_m6162DD47C3E60A57092C0C690C342B16201F3BE4 (void);
// 0x00000B2A System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass::.ctor()
extern void PreserveLayersPass__ctor_mF73D229E060A40030F743A124612603174D8E62A (void);
// 0x00000B2B System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.cctor()
extern void U3CU3Ec__cctor_mFCD5A70D1C8B7DD6F1EC25FE24BC814956CAF0A3 (void);
// 0x00000B2C System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m27CF523CD339F84D76CF075D8C20D30E37C40A46 (void);
// 0x00000B2D System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_0_mFC701361FA33160F8FB42F427C46B781B4284931 (void);
// 0x00000B2E System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_1_mBB86AA70BF40D65C1D9D35093CAC7C3C224F228B (void);
// 0x00000B2F System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass::Run(Unity.Barracuda.Model&)
extern void ShapeContractionPass_Run_m5E9FAD828CE511C2305270D8E8EB8CF1E42B8072 (void);
// 0x00000B30 System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass::.ctor()
extern void ShapeContractionPass__ctor_mA24E4A129C6589E1FED0D19E87DC0B2A68397439 (void);
// 0x00000B31 System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mB8AE091F96ED52352C832B38AC7335AF7B832FCE (void);
// 0x00000B32 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m3F89DDC09099E36317751DB635BDDA3C23D0B911 (void);
// 0x00000B33 System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_m735389F02AB2D707C6EE245D9FC9B2A82FB2F336 (void);
// 0x00000B34 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__1_m40B7889C0235DEF7590D0923F05147C5D9D944A9 (void);
// 0x00000B35 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::Run(Unity.Barracuda.Model&)
extern void ShapeGatherReshapeToNHWCRemovePass_Run_m38E4EC3A35E8EE7B4B4B0545294493C5208D2917 (void);
// 0x00000B36 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::IsGather1DAndConvertingToChannelLast(Unity.Barracuda.Layer,Unity.Barracuda.Model)
extern void ShapeGatherReshapeToNHWCRemovePass_IsGather1DAndConvertingToChannelLast_mCA1FDA661F95D112A9B2DD14154DDB171A10C9FE (void);
// 0x00000B37 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::CanLayerBeRemoved(Unity.Barracuda.Layer,Unity.Barracuda.Layer,Unity.Barracuda.Model)
extern void ShapeGatherReshapeToNHWCRemovePass_CanLayerBeRemoved_mF40340D94BED127E457F12CB5FE62262B2A314BA (void);
// 0x00000B38 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::.ctor()
extern void ShapeGatherReshapeToNHWCRemovePass__ctor_mD4190DDD794139D83D932808B6B9824629FFD38C (void);
// 0x00000B39 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mC21562FB50A74B8E3FA9DB6A528B913EB091F553 (void);
// 0x00000B3A System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m07968019720434ABFAF3FB95A5A258F411A0AA64 (void);
// 0x00000B3B System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m79873A8265594C6DA327CF250C7CD06F4A197CFB (void);
// 0x00000B3C System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::<IsGather1DAndConvertingToChannelLast>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CIsGather1DAndConvertingToChannelLastU3Eb__0_m76D624FC38ABD67BD47FDAF578065D4F28B54B02 (void);
// 0x00000B3D System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mE97EA7E3942F08F3CEDC61B0DE54D464C0AF7410 (void);
// 0x00000B3E System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__0_mDF5AC4F56E0B01A1EFF8B5E9A204871959F4B705 (void);
// 0x00000B3F System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__1_mDD21D058307AE8CEE46C7AA9BF006C4329D9F4E1 (void);
// 0x00000B40 System.Void Unity.Barracuda.Compiler.Passes.ValidationHelper::AppendWarning(System.Boolean,System.String,System.String,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&,Unity.Barracuda.Compiler.Passes.MessageType)
extern void ValidationHelper_AppendWarning_m51C2123EB5C162F43B278D8CDCFC45BC0AF8F6C6 (void);
// 0x00000B41 System.Void Unity.Barracuda.Compiler.Passes.ValidationHelper::.ctor()
extern void ValidationHelper__ctor_m6E0A4C4F35F6B427C1D040CB069314F48A4C7AAE (void);
// 0x00000B42 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNCHWShapesPass_Run_mBEF6307B9D66FCCA6579C1B09627415D9755BF04 (void);
// 0x00000B43 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass::.ctor()
extern void ValidateNCHWShapesPass__ctor_mCE5379B45EBAA04FA080EB8621E506343FE313B7 (void);
// 0x00000B44 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.cctor()
extern void U3CU3Ec__cctor_mAB0BC639D167C1D591290A169031173CB948A154 (void);
// 0x00000B45 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.ctor()
extern void U3CU3Ec__ctor_mC8F3FD9B84FC074B1671C609EE297D8DC160B999 (void);
// 0x00000B46 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_0(System.Nullable`1<System.Int32>)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m378A7ADB1533F7131A3719C13691DF33B703C3BF (void);
// 0x00000B47 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>)
extern void U3CU3Ec_U3CRunU3Eb__0_1_m24B93684535C6DF8749CC9F03D1CF70B6A85DEBA (void);
// 0x00000B48 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>)
extern void U3CU3Ec_U3CRunU3Eb__0_2_m755D3B4F0E7FADFD013F189D972EF53A35654228 (void);
// 0x00000B49 System.Void Unity.Barracuda.Compiler.Passes.ValidateIntermediateNCHWModelLayers::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateIntermediateNCHWModelLayers_Run_mF45FC00F327DD0F7E7CF2C5C8CFFCF16F14F3758 (void);
// 0x00000B4A System.Void Unity.Barracuda.Compiler.Passes.ValidateIntermediateNCHWModelLayers::.ctor()
extern void ValidateIntermediateNCHWModelLayers__ctor_m7D70C1847D006C989BEB045A321D8A2F3C2EE3DE (void);
// 0x00000B4B System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ValidateBrokenLinksPass_FindBrokenLinks_mD1D4DD6D61943D33CC48BAE17243B947809F8312 (void);
// 0x00000B4C System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ValidateBrokenLinksPass_FindBrokenLinks_m35EE1803718B28D013E7CA95E3430025A479FF59 (void);
// 0x00000B4D System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model)
extern void ValidateBrokenLinksPass_FindBrokenLinks_mC381581E45B2A2D49B053E1630779AA7C346DD62 (void);
// 0x00000B4E System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateBrokenLinksPass_Run_m57263C8F8B3FEB736BDA5C1223008FBB278EF40B (void);
// 0x00000B4F System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::.ctor()
extern void ValidateBrokenLinksPass__ctor_m114BC22B0CEBC49F1AFA2F39EF094A0FA0F44D60 (void);
// 0x00000B50 System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m100C84B126DF932B2813C2EF9E2BFF5F48BA045F (void);
// 0x00000B51 System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m0064C245AEA55D91F8799A4AB5796BF46A5CA239 (void);
// 0x00000B52 System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_0_m51AC4F895216DCD8E935C4AE6D92E6C380630C30 (void);
// 0x00000B53 System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_1_m85C6A293411D8589FEB293061D139EE42DFD95D9 (void);
// 0x00000B54 System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_2_mD8FB104F4C4501432FC774413A026FBDB54FB75E (void);
// 0x00000B55 System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateUniqueOutputsPass_Run_m428533AD40AC0AFAB51E5F927F3DA7075E0BDC42 (void);
// 0x00000B56 System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass::.ctor()
extern void ValidateUniqueOutputsPass__ctor_m7FB794D76035BD18E5B0F213CE6A16F85F955123 (void);
// 0x00000B57 System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m932E1BFFF67D391DE2A7D60C8E79B7B41B202298 (void);
// 0x00000B58 System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m1EBD1B290E851F36532FE94CB176690D9E8227DF (void);
// 0x00000B59 System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_0(System.String)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m2A3B54AD76F26CA12687FAFA58DA4E5FD5C8BFBA (void);
// 0x00000B5A System.Boolean Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CRunU3Eb__0_1_m28C11AA32C7E27FF5E5BAEEEB7EBC4EDB9A7C834 (void);
// 0x00000B5B System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CRunU3Eb__0_2_m82DACBB65FC6033609FD12AF6DC151F91C9EA544 (void);
// 0x00000B5C System.Void Unity.Barracuda.Compiler.Passes.ValidateUnconectedLayersPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateUnconectedLayersPass_Run_m14724B209586859B3AADC38FC7B11F312C4C36FC (void);
// 0x00000B5D System.Void Unity.Barracuda.Compiler.Passes.ValidateUnconectedLayersPass::.ctor()
extern void ValidateUnconectedLayersPass__ctor_m9A4723265C9E59C0758D2423D9CC5452C4112E6F (void);
// 0x00000B5E System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNCHWPass_Run_m724BF697DC071DB0CB97405A1AFABE4BE0C2AADF (void);
// 0x00000B5F System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWPass::.ctor()
extern void ValidateNCHWPass__ctor_mC2EB5BA1D34CBA9ADF2D39542F67BFB2B273B27B (void);
// 0x00000B60 System.Void Unity.Barracuda.Compiler.Passes.ValidateNHWCPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNHWCPass_Run_mBD2A7C0778084739CF55A47B656287CBCF2EEE31 (void);
// 0x00000B61 System.Void Unity.Barracuda.Compiler.Passes.ValidateNHWCPass::.ctor()
extern void ValidateNHWCPass__ctor_mB642CB94ABA0B6AE46A526A6BD043B909C17F805 (void);
// 0x00000B62 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::Run(Unity.Barracuda.Model&)
extern void RemoveNoOpsPass_Run_mDE15DF9148AB4932C01014D0D7DA8E809B3DE038 (void);
// 0x00000B63 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::IsPermutationNoop(System.Int32[])
extern void RemoveNoOpsPass_IsPermutationNoop_m4B62A28D83E593AFA2C8BD9F25EA4C8FDA7B3533 (void);
// 0x00000B64 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::IsLayerNoop(Unity.Barracuda.Layer)
extern void RemoveNoOpsPass_IsLayerNoop_mF6B6B0F6521A40DBC3B1019D68DED6655CF70A95 (void);
// 0x00000B65 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::.ctor()
extern void RemoveNoOpsPass__ctor_m0DC4746B77C3841E1951248B62B4157F6E0B8E9A (void);
// 0x00000B66 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m49BCBBCF2D5903BFCF40860304C6F1197993E722 (void);
// 0x00000B67 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mCC556148204E81F23DA67CB93B7387FC06C86912 (void);
// 0x00000B68 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c__DisplayClass0_0::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m7E9F044E4104BC14D0E5216C432332E248C23965 (void);
// 0x00000B69 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m70282A5AD17AC2ADA7F64B67F61680711ACD0EDD (void);
// 0x00000B6A System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m0D10E5AB8B90C085D01D8C5B3731504C5CA06523 (void);
// 0x00000B6B System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_0(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_0_mECD3F492F5832DD19397FE5DF51A2915333BAC7D (void);
// 0x00000B6C System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_1(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_1_mE995210A9898FA8E7D22AD645A4DFC9660133AB4 (void);
// 0x00000B6D System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_2(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_2_m858B6FFA89982EA0CD99C6DDA05FDCBE0EE6D3B1 (void);
// 0x00000B6E System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_3(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_3_m959F9D9C8B4E91EC3136A02CE2BEAAD96E7F4C34 (void);
// 0x00000B6F System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass::Run(Unity.Barracuda.Model&)
extern void RemoveUnusedLayersPass_Run_m3E7AAFD50A56A003964C468BA392164A25764065 (void);
// 0x00000B70 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass::.ctor()
extern void RemoveUnusedLayersPass__ctor_m66ADA328E944335CE0A1594A633879CF0E990D99 (void);
// 0x00000B71 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m8F7B38EB80C1BBD54749D889075521892E489594 (void);
// 0x00000B72 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m1B1F8D617974391D837A290C562FB4B56BD5A123 (void);
// 0x00000B73 System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::Run(Unity.Barracuda.Model&)
extern void ConcatenateTransposesPass_Run_m897A441F1054087C77E477679A810457B6B4A6CC (void);
// 0x00000B74 System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::ConcatenateTransposes(Unity.Barracuda.Model&)
extern void ConcatenateTransposesPass_ConcatenateTransposes_m27E413AE368D2A2F36CF818199E3E58174D03395 (void);
// 0x00000B75 System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::.ctor()
extern void ConcatenateTransposesPass__ctor_mC4452EFC63CC4699468BB35BB87CCBE1F92012AC (void);
// 0x00000B76 System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m67160D7E32BD2596CD490722E1CF888A3E207F5A (void);
// 0x00000B77 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass/<>c__DisplayClass1_0::<ConcatenateTransposes>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CConcatenateTransposesU3Eb__0_mAB903E31543BC3E03EBE9669AE65C90BC7D346FF (void);
// 0x00000B78 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::Run(Unity.Barracuda.Model&)
extern void FuseActivationPass_Run_m066930F124B209DE8652E9A83B9DE7C3A1C45A1B (void);
// 0x00000B79 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer/Type)
extern void FuseActivationPass_IsLayerSupportingActivationFusing_mADF0993FD047A86EAADF86F87381CB6750E0C40A (void);
// 0x00000B7A System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::IsActivationFusable(Unity.Barracuda.Layer/Activation)
extern void FuseActivationPass_IsActivationFusable_m7D77C4F9D43328B26810FEB15681474C61EFAA20 (void);
// 0x00000B7B System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::FuseActivation(Unity.Barracuda.Model&,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseActivationPass_FuseActivation_mC00F8F69417DCE01053C9187530B4B15CBBF496B (void);
// 0x00000B7C System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::.ctor()
extern void FuseActivationPass__ctor_m7C9D4A1C0997D97421C4867D8244C1482824EB60 (void);
// 0x00000B7D System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mF2126AC70627E328AE7A28EA0A9E44CF84C9954F (void);
// 0x00000B7E System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_0::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_mFD990F842B74F0B83BE05E3610C9917C121AFCB8 (void);
// 0x00000B7F System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_mF8BDE78310820A90CCF4BA7BA535AC34511B5DE1 (void);
// 0x00000B80 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::<Run>b__2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__2_mD1BA5FEE94160DBF433660CD4C0CA8A9D4BDD06E (void);
// 0x00000B81 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::<Run>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__3_m89997959411D0673ABBA8C85183379CE63B25143 (void);
// 0x00000B82 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::.cctor()
extern void U3CU3Ec__cctor_mA5F7B334C568FFC4A92CE4EA9016CC7FD899CAEB (void);
// 0x00000B83 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m0B92DE3CD5F23C5FC85FAFC0AD1FB77299BFD840 (void);
// 0x00000B84 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::<Run>b__0_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m67741E55C73D6FED34048B85616FF9EC220BDF52 (void);
// 0x00000B85 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m391A5B8DD49877ACC41390AD4CF378F5C0F8A915 (void);
// 0x00000B86 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass3_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m7EFC8946DAF10EA78FADFF85245A3F4FF035C6D4 (void);
// 0x00000B87 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::Run(Unity.Barracuda.Model&)
extern void FuseConstantsPass_Run_mDDEAC01D76534D58995A4EDF4730B8AAF4055585 (void);
// 0x00000B88 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::FuseConstants(Unity.Barracuda.Model&)
extern void FuseConstantsPass_FuseConstants_mC672C83DA3CE985F7198A14C5A57E391DC231275 (void);
// 0x00000B89 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::.ctor()
extern void FuseConstantsPass__ctor_m10FE8289EA7A1567F960C42A6E96C35E12F77B38 (void);
// 0x00000B8A System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m90AF2E8B793479D8AB4C91B55EC15F2807C2EB9F (void);
// 0x00000B8B System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass/<>c__DisplayClass1_0::<FuseConstants>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CFuseConstantsU3Eb__0_m4BFBB6FF3C31FC2B212B3AEDBA46B7C1800D3190 (void);
// 0x00000B8C System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass::Run(Unity.Barracuda.Model&)
extern void FuseDense3Pass_Run_m6BA52F91657AD441E294609E175378B93F94BF11 (void);
// 0x00000B8D System.Collections.Generic.List`1<Unity.Barracuda.Layer> Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass::GetDownStreamLayers(Unity.Barracuda.Model,System.String)
extern void FuseDense3Pass_GetDownStreamLayers_m9184FE0BC1580B589D7B7E193A8D321B9272C81D (void);
// 0x00000B8E System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass::IsLayerDense3(Unity.Barracuda.Layer,System.Collections.Generic.List`1<Unity.Barracuda.Layer>,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void FuseDense3Pass_IsLayerDense3_m522672BE3C2B12A31EB690924CA6A756B65B0893 (void);
// 0x00000B8F System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass::.ctor()
extern void FuseDense3Pass__ctor_m5BFFFF44712396B91F69B4956BC2238066607EE5 (void);
// 0x00000B90 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m7C16FCB714FEC19A7FF2C5DFCC0A2F9437BFE2B1 (void);
// 0x00000B91 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_0::<Run>b__3(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_m22FDC6BA20F0350FE69578F04BAD85533BC7937B (void);
// 0x00000B92 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_0::<Run>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_mC0726FF81E5981767B99E86516CF105DCCA9DBB5 (void);
// 0x00000B93 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_m07E5DE95F8CC6678CF96110E9CB8DEB2C60A0202 (void);
// 0x00000B94 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_1::<Run>b__4(System.String)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mB96AA87E8998DEB961DA0FAF2166190AACA60BFB (void);
// 0x00000B95 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass0_1::<Run>b__5(System.String)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_mAA7803E9D4A7D7E390BB8687CBDA14B2356E7FEB (void);
// 0x00000B96 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c::.cctor()
extern void U3CU3Ec__cctor_m0BEFAFECE565F17B167261DB48E7D737626F1B85 (void);
// 0x00000B97 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c::.ctor()
extern void U3CU3Ec__ctor_m2652CB6D889136846F701601FB2F97978522AF72 (void);
// 0x00000B98 System.String Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c::<Run>b__0_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_0_mE02EBC6CABFA7EE5DBF943F34CF1DA0E17D4376C (void);
// 0x00000B99 System.String Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c::<Run>b__0_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_1_m3CDDF4A4AF5B7E6CB29BA9F003BFA7496D09057F (void);
// 0x00000B9A System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m36774B4E060428B61643D90BB5CFEDC6D7A197C8 (void);
// 0x00000B9B System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass1_0::<GetDownStreamLayers>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CGetDownStreamLayersU3Eb__0_m5AB38C65D51ADB28A85C1D979C3FD846E605DAA3 (void);
// 0x00000B9C System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mFEA534735892C927293294AA40A16C801B5E670D (void);
// 0x00000B9D System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseDense3Pass/<>c__DisplayClass2_0::<IsLayerDense3>b__0(System.String)
extern void U3CU3Ec__DisplayClass2_0_U3CIsLayerDense3U3Eb__0_m407EEC604966DC00CA4E8A2979AFE51C645C481A (void);
// 0x00000B9E System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::Run(Unity.Barracuda.Model&)
extern void FuseLinearLayersPass_Run_mB920D582C5307860E215CBA274E258B1A04E145A (void);
// 0x00000B9F System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::IsLayerConstant(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_IsLayerConstant_mE999C42ABDBC3FB60B74BCB8E55FF05DCF4D497E (void);
// 0x00000BA0 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::IsLayerFusedActivation(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_IsLayerFusedActivation_mD0821FB5DFCB33311E7DA2642E07FEF939E905D6 (void);
// 0x00000BA1 System.Int64 Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::LayerComplextity(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_LayerComplextity_m7640CE18315F1486740A0E1078130C5563E0797D (void);
// 0x00000BA2 Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::FuseConsecutiveLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_FuseConsecutiveLayers_m3CD57F848B8BCDBFC40DEF778AB8AFBDD093B881 (void);
// 0x00000BA3 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_AreLayersFusable_m5175171672DFD2293E600007F9451ADE8346C6A5 (void);
// 0x00000BA4 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::PackConstantsForMathOps(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void FuseLinearLayersPass_PackConstantsForMathOps_m9F7EB305FD45D655BF2DAE05208DAB5E5E6D0DA7 (void);
// 0x00000BA5 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::UnpackConstantsForMathOps(Unity.Barracuda.Model)
extern void FuseLinearLayersPass_UnpackConstantsForMathOps_mF336ED5483D375291E17C03EB3581A3859BC7A35 (void);
// 0x00000BA6 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::.ctor()
extern void FuseLinearLayersPass__ctor_mC8B399734E7175F4D95BF1752AFA21C875242DAE (void);
// 0x00000BA7 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::.cctor()
extern void FuseLinearLayersPass__cctor_m7795B1852810612D366442C0426CF85B85C25415 (void);
// 0x00000BA8 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mD2EE470B9AF481EDE5F7ED0E6C1AA243416E181A (void);
// 0x00000BA9 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__2(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_mBF764F3144D3EF460AAB99626056E1E70892F431 (void);
// 0x00000BAA System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__3(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_mFAC7688E23E13AA32F2530022099FD7AF0388031 (void);
// 0x00000BAB System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m346066CAAD3925C235C9316D1FB1DBBB532C6052 (void);
// 0x00000BAC System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m5D898BFC3064DDE8C8BEB17A079D4613FAF1E48D (void);
// 0x00000BAD System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_m94A6494EA665AB056B0DE3614080F98AF8E019BD (void);
// 0x00000BAE System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::<Run>b__4(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mA36974DD5A5B941C1AA6EBEC481C78B519F8E0C0 (void);
// 0x00000BAF System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::<Run>b__5(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_m6335E9C9D33023B0BA31055BE0B03978DD969F59 (void);
// 0x00000BB0 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m0D20C184A021BF982E3D9F1CD3AB78AC9B8F8334 (void);
// 0x00000BB1 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__0(System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__0_m0D62F333832EFAA7DBB633FCA8177A0A3B0DF0FF (void);
// 0x00000BB2 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__1(System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__1_m96B4545FFC0BAD0F3966DEB7C6EA1EF3AE0CFB6C (void);
// 0x00000BB3 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::.ctor()
extern void U3CU3Ec__DisplayClass8_1__ctor_mD65214C205DE91BF78F1E01E5DE2F4223A073884 (void);
// 0x00000BB4 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::<PackConstantsForMathOps>b__2(System.String)
extern void U3CU3Ec__DisplayClass8_1_U3CPackConstantsForMathOpsU3Eb__2_mB3C231B9E782CE4FE9FB4915BDCA589E6DB5D755 (void);
static Il2CppMethodPointer s_methodPointers[2996] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BarracudaBackendsFactory_ResolveAutoType_mB99085007A2797DBD42FE7E96A3D608B5B51D406,
	BarracudaBackendsFactory_GetBestTypeForDevice_m4BDE8B2C9F4D32079C6B8A1A054E6E048970193E,
	BarracudaBackendsFactory_ValidateType_mF959E27AD5627FD4BA527349265CC12039709C13,
	BarracudaBackendsFactory_CreateOps_mEADBD8110B839E39B7F6ABE002FAA513953A1228,
	BarracudaBackendsFactory_CreateWorker_mCC655DF168FB47B651C3C7BC1E9451600FB8658C,
	BarracudaBackendsFactory_PatchModel_m3E2C1A4B98C14577A1B7F40F94C562CE5A9F5947,
	BarracudaBackendsFactory_ValidateModel_m4A5C06B4DEC5E6318B68517AEDBDCAC9BD4E072C,
	BarracudaBackendsFactory__ctor_m71518906F1A8155062E1E40F807CAF6062081BA0,
	U3CU3Ec__cctor_mCBA5328D2756A2722E91B86C0ED1E8CDB79B84E8,
	U3CU3Ec__ctor_mFCE029B744E57833DCB5B95153CBCD4715F0DD96,
	U3CU3Ec_U3CPatchModelU3Eb__5_1_mCB58218B62F387BE941C984D838982855B39EB7B,
	U3CU3Ec_U3CPatchModelU3Eb__5_0_m42C6E6EE51836DEA79511C0831A3AED0DCE66007,
	U3CU3Ec_U3CValidateModelU3Eb__6_0_mDE2AD9C87F3BFF5AFE4094C4B7045C5FFAAE4414,
	U3CU3Ec_U3CValidateModelU3Eb__6_1_mA951A6618F6A7806753BAD2FB74DB7F58D672132,
	U3CU3Ec_U3CValidateModelU3Eb__6_2_m190B5CE3A6AD1F822173A06BA7C3232D2D4CB0A8,
	BurstTensorData_get_fence_mC3D9E63AA4AFFF179AFF6A2C4B41F37407D21A61,
	BurstTensorData_set_fence_mC3659EABA95361A88BBE3F1BD3F37B756123A2C1,
	BurstTensorData_get_reuse_m57FACC88A8C0DA6A1310EC8BE6EFB89CC094DD79,
	BurstTensorData_set_reuse_mBA1AF6D094F0D10F94F3426F7075750DA000FBC5,
	BurstTensorData__ctor_m987AEAC777C3B636CF92DB9E03A9E01D827C8A00,
	BurstTensorData__ctor_m1DA7DDF23D19E627D81147B42CAB19E704B038A0,
	BurstTensorData__ctor_mCF8747FA82C8F83B5DBCFE897AC819E47B9BC429,
	BurstTensorData__ctor_mBE7403D3F254812945395D44252B4E9B8341FFCE,
	BurstTensorData__ctor_m4D279F67B93AE91297866DEB8A27C643B1D7C723,
	BurstTensorData_Finalize_m9F5FA0B97BBBDE03783F651AB14EF498DDED0985,
	BurstTensorData_Dispose_m2FED6F50CF4FD1CA58EE51DAAA5877E0B975FCDE,
	BurstTensorData_CompleteAllPendingOperations_m0B5F070376FA3C9B4917B73FAB09E96C459EED37,
	BurstTensorData_Reserve_m3CDD7850C46054EBC6569963A2F7222C39E1A969,
	BurstTensorData_Upload_m6D6C4BDA7F6E50C73C5164324752DB0B41B03081,
	BurstTensorData_Download_m6722B17CE47D50CDD37E0DAF0FE55FB3D5757FDF,
	BurstTensorData_SharedAccess_m125A4D2AE973D675D7E247D8C4BE7F85061A0B98,
	BurstTensorData_ScheduleAsyncDownload_mBF682E4E86221F9E602F3EDA10CB76F1C5288559,
	BurstTensorData_ToString_mE2652ACC848A0A4F89073DEE36C8D4167582BDB2,
	BurstCPUOps__ctor_m4D04ECFA465AF35D86469C3B31F2707F2437BE3A,
	BurstCPUOps_Pin_mBE5673A2D37E3DDD4F559F97329EA33144A2B875,
	BurstCPUOps_Prepare_m569787773C7E194046DB3CF84C719A3164461B94,
	BurstCPUOps_Dependencies_m1B514B461A8797B3D5B990E1FC0CBADBE71F63EF,
	BurstCPUOps_Dependencies_m7289BD9C37E8271F8C49AE39B474CE7FE08B7FA5,
	BurstCPUOps_Dependencies_mC6D6937738A1696F5FFEE1A95D2DED7114277445,
	BurstCPUOps_MatMul_mB2B6FC95CF2C43EFE0377A5FC2A5ABEAC085B97A,
	BurstCPUOps_ScheduleSGEMM_m6641F7818648BCEDF3C74586185B0BCEACC0D348,
	BurstCPUOps_MatMul_mFFE22F8F6106A4CF7E001931190A00458A84FB03,
	BurstCPUOps_MatMul3x2_mE765A16E553B8361835B566AB06875B4D18A5A27,
	BurstCPUOps_MatMul4x4_mA20F721BECDA21CDAA9C97A5CA8A19CF821F69E0,
	BurstCPUOps_Dense3_mAC9EFC2CCE4739957CE71816F0EEB402D1626F9F,
	BurstCPUOps_Dense_m875624184931776692BAA55BB8D7BA48E4578350,
	BurstCPUOps_Conv2D_m375EBCE2E41EEF65A78AE28F69EEBA7BCCEBE00F,
	BurstCPUOps_Conv2DUsingIm2ColSliced_m46BDBBB094CE79351FB20F9557D07EF5E192F8D2,
	BurstCPUOps_MaxPool2D_mCD62FD3D1DF404108222BFD6F0B65798990DE8B5,
	BurstCPUOps_AvgPool2D_mD0F771699B7A9CF464ED1764D2895D10DD998426,
	BurstCPUOps_GlobalMaxPool2D_m551872951329EEA5A8B450233E839A0BD1C1AFAA,
	BurstCPUOps_GlobalAvgPool2D_mDF439ECAD6688682FBDB121DB1BF78F0D1853E93,
	BurstCPUOps_DepthwiseConv2D_mF20A05AB7BAADA61BD27900E6829EEA804A48F48,
	BurstCPUOps_ScaleBias_mBC80692691688C7BC4E5EB94B563D094E55B04C9,
	BurstCPUOps_Relu_m90AC2BCED635E1D444A25B68E7A8ED415C90171F,
	BurstCPUOps_Relu6_m82AD9BAED11E8072DCEF9DC6EDB0F9E9BA873549,
	BurstCPUOps_LeakyRelu_m1A4BC41C08E0338252BF2E4AB0FF3D93D4697CF0,
	BurstCPUOps_Tanh_m172B6651F9DCABD178E14D991AD41B30EE145D89,
	BurstCPUOps_Softplus_m2B5E2C86B6DE27536D4655883DDD1AF4EDC9D758,
	BurstCPUOps_Sigmoid_m4DF3294747F7A84D6C5AABED85EDB5F5825DE00C,
	BurstCPUOps_Elu_m502B79612CCFC0C3567C950CBDC1AC9B24785910,
	BurstCPUOps_Selu_mEB3684D67F06E3ACAAD7D3CE2E2F449AF0A60221,
	BurstCPUOps_Swish_mE3AC0A3AB6DB9A784C0490FA5CF09590207F684E,
	BurstCPUOps_PRelu_mC060D728CB68BD89386326E42B04B5881A5E8C3A,
	BurstCPUOps_Softmax_m6F87789D3DF81D069BE1D9ACF377C304F9398008,
	BurstCPUOps_LogSoftmax_m888BA8F808F9C6F93F3EA174A0B559D26FC525D5,
	BurstCPUOps_Abs_mEE2EE8C333B81956FB289EE474F2BB12FCAB5219,
	BurstCPUOps_Neg_mA4594CF0DD9BA7091CB33790BCFD34A8301002D9,
	BurstCPUOps_Ceil_m32E5264B14ACAC765B58B999E9FCAB09BBDE1BD2,
	BurstCPUOps_Clip_m624B3E2C2D2FFC9252903C8AB8DF9FF8AB71AA32,
	BurstCPUOps_Floor_m28021F5C10F89A3620A22F22FA38D404AE6FCB58,
	BurstCPUOps_Round_m4E86D7680357A0760D6E8B3F5680CDCE21FA4D65,
	BurstCPUOps_Reciprocal_m39CDB1E680DF4BC1530FAD7415F035E7BF494DA6,
	BurstCPUOps_Pow_m21B8D70CFEA39AD1690AD872169D1A96209F0C33,
	BurstCPUOps_Exp_mF7111D38B7A80479291FF0DADBF1E3CAFF3F1049,
	BurstCPUOps_Log_m2BF8BE21FBCF743EDBAB719AC7446BD3396CD8CE,
	BurstCPUOps_Sqrt_m31CE648E4A28CA0FD44951FBDD680288726A1A37,
	BurstCPUOps_Acos_m70A84FCAE43DA6D33C366174FE9B9B7CF81BFE01,
	BurstCPUOps_Acosh_mC02C4A1C68DBF670048E427D8913460DC862ABED,
	BurstCPUOps_Asin_m624DB57BF0D4C47C2C4150A693AA014D6939F2DD,
	BurstCPUOps_Asinh_m05CD65D6CF0841FCDC3990C342D545FCA68FE23B,
	BurstCPUOps_Atan_m1B2967686ECE8EFFAF9B12956B55856055BF14C7,
	BurstCPUOps_Atanh_m20DB593C732564EF6B2ADE6F5CA43D77445DB263,
	BurstCPUOps_Cos_mE9EF5C3E12C53E6A224C4C24B0245A0AA234C690,
	BurstCPUOps_Cosh_m2243BC794B8F95E0FD72CEE431C3F959A69F1E6E,
	BurstCPUOps_Sin_m030E7E2F4BC18A077B45E9AF4DFE38AF704BC8F9,
	BurstCPUOps_Sinh_m5787A48261C326B8E69DF6FAA82452E8D8965B4F,
	BurstCPUOps_Tan_mF2E50225A05D276E67F154894C1C1451980814DD,
	BurstCPUOps_AssignTensorStrides8D_m957DFF3EC1DE8DAF048D7792C70A55AC2F862A87,
	BurstCPUOps_BroadcastAdd_mFA215A55518C832F4F5ADDA790E2945F685860CF,
	BurstCPUOps_BroadcastSub_m54CA82BBC714DFFEB81F682E0EA3CF65FC90C3FA,
	BurstCPUOps_BroadcastMul_m53AD399DFB84668B4960EE666CE1FA104E7B2530,
	BurstCPUOps_BroadcastDiv_m20C59A97D9BE2075F3FB4680BE15972593006B04,
	BurstCPUOps_BroadcastPow_m3EC0EE63C463830F77C53B878A193B3E102ABD70,
	BurstCPUOps_BroadcastMin_m2FFE8EE13A6F6CF0041CFC8CDA42C002F3399C74,
	BurstCPUOps_BroadcastMax_m8ADCC7BF5FC43448F01B2A56558EB170E22C5A48,
	BurstCPUOps_Add_m41418BCC36359359BFD4CA7EB297E7759B7845B8,
	BurstCPUOps_Sub_m11F284D0C992BE98EBBD2036D3E052F57DCB59BD,
	BurstCPUOps_Mul_mF453D60FE34C29104A41727DAED0C750B54EE8C3,
	BurstCPUOps_Div_m9BB34ACD68B3D3156E82A9AC68AC163BB44B12C0,
	BurstCPUOps_Pow_mD0D037414371F4148D08905248DB5E8680693588,
	BurstCPUOps_Min_m37583D352316B91B9A793D2ACFB196C8D5188F68,
	BurstCPUOps_Max_m1E99EC40D299A55BFD5E9175B1F177D5445D93D7,
	BurstCPUOps_CopyAndReshape_m7F0860E2FB2B0F6954F60980AE4C73DE6851B4EB,
	BurstCPUOps_Concat_m18125E86A737F5772D8D057006FDEFD307D6CFDD,
	BurstCPUOps_StridedSlice_m69C26E17C22F0B50513EE7CF992EA932198672B5,
	BurstCPUOps_ApplyBorderPadding_m149C660BBD073F39A79054027648A16DB5F54022,
	BurstCPUOps_Border2D_m91FC76823AD16B3B722384B86580EA9EA8FFA8C4,
	BurstCPUOps_Transpose_m81E59DE8F1441E5E8A221487E1DB4425FFAF53B4,
	BurstCPUOps_ReduceMean_m649E6313B74CCC82AD087727A445BC85894E2E95,
	BurstCPUOps_ReduceSum_m17CE7EFA22A58D2E96A47A476D32B3629ED05000,
	BurstCPUOps_Tile_m415810882379AC433D33CED3486E8FF89AFA0DE4,
	BurstCPUOps_Gather_mC1A2CC20CAE43A8B566BC4EDCB03C8CF576E9FC6,
	BurstCPUOps_OneHot_m49BB9344AC329FF4FC7AA50520CE29954B45C46E,
	BurstCPUOps__cctor_m2C7D8BA413E758B72B26E779840DDE99F6A5C6D8,
	ReadOnlyMemResource__ctor_mC48374D2B97C6CCE5FCE6A4D94CA8E399564F518,
	ReadWriteMemResource__ctor_m0FB7EF4C938F6A8B0DE628FEFB01EDBD4E105178,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MatrixMultiplyJob_Schedule_mDF462F5A4B0F8F30ABD8568AC9308ECA61B7828B,
	MatrixMultiplyJob_Schedule_m271B6960533177BDECB107061756B18091240364,
	MatrixMultiplyJob_Execute_mE9A39BD2F3DBB268ACE7B47FC07960C997C6E8F5,
	MatrixMultiplyJob_AllocBlock_m306BFE4C04487C3CE9565B1B6AF067FB4AEA47D1,
	MatrixMultiplyJob_FreeBlock_m09B00454A3F1E339B91EF2006EED34E005F5B993,
	MatrixMultiplyJob_MultiplyBlockUnroll16xh_m6718AB74B15A760459C3C2B0DB51C781ED51B0DA,
	MatrixMultiply3x2Job_Schedule_m1E7D0AC0E4CB5FEE06FD639F6C002F44F164B2A4,
	MatrixMultiply3x2Job_Schedule_mE2748076029917FCDE7F1BA873A7D7B79F6EF527,
	MatrixMultiply3x2Job_Execute_mCF658002C9D1791520A6A0EBE9C70D5E43C0AC45,
	MatrixMultiply3x2Job_AllocBlock_mEAA6DDA8040E7A8866E7CFB0A960BE90B0C181E8,
	MatrixMultiply3x2Job_FreeBlock_mD8F69BCDD9096126B02F10D6A6A3861578294167,
	MatrixMultiply3x2Job_MultiplyBlockUnroll16xh_m251D689C841084795CC4167792422F5C0E55A343,
	MatrixMultiply4x4Job_Schedule_m0F182AE984F7BEEEE26D8C007CF61E11BB7A4752,
	MatrixMultiply4x4Job_Schedule_mFB52A63FB168E200B0C4EF21A94E14FD4E02C585,
	MatrixMultiply4x4Job_Execute_mAC6E0433C00BF5D232458ED6D03CFCEC77231BAD,
	MatrixMultiply4x4Job_AllocBlock_m8492DBA53281A4F07D0FF53BAFB9235670BCD1F5,
	MatrixMultiply4x4Job_FreeBlock_m6C38BC9740EC16695F3491B271036CBFAE1B1225,
	MatrixMultiply4x4Job_MultiplyBlockUnroll16xh_mAFB73CDE5EAB3F564B620FDA37E40ACED2A41F46,
	Dense3Job_Schedule_mE676A954E4DB439543C98CADF4E1F48CFFB8C9A2,
	Dense3Job_Schedule_m89B0278B2678764E5013BE4E19DA3B7ABB89BA86,
	Dense3Job_Execute_mE96E18CF546A186411103892E208FE283ABF4316,
	Dense3Job_AllocBlock_m07E37AC31AB1047656D08E9F6DA2307C37814223,
	Dense3Job_FreeBlock_m47755BA423E17B49E6D611650295A49ACFA05235,
	Dense3Job_MultiplyBlockUnroll16xh_mA3D5BA105811B70203DA3B20BE72B886BA531A9B,
	Im2ColSliceJob_get_X_m0DA0DE6B74CF53C156203158BF7186655E024A57,
	Im2ColSliceJob_set_X_mAC7FBC47B3ADA3D969D7F2C97A63B99A7C35AA31,
	Im2ColSliceJob_get_O_mF1F69C610396ACD0CBC19EE2C78DC293C96F068D,
	Im2ColSliceJob_set_O_mCB4D5FED83F8FDA0ED4E647BE0BCF4EC165B8D1C,
	Im2ColSliceJob_Execute_m04B26169EB6668195927B2B1C69140FDD29D0D62,
	MaxPool2DJob_get_X_m13BFCC0E1448D3E5CE1C5076BB2D267CEFB4D0B8,
	MaxPool2DJob_set_X_mD04E1B51CF7A4CF25F817FFBB710DA93F1C25BBC,
	MaxPool2DJob_get_O_m51DA9B5C004742B6A7940D365E7707800C4CF220,
	MaxPool2DJob_set_O_m81448FAC6E03CAB22C2ECEC5F4B9E14F46AF1EFB,
	MaxPool2DJob_Execute_m580DD6093ED112BFF9BC46F8EB283D55DFC67AEC,
	AvgPool2DJob_get_X_m7D5D4BAE24832FD25CC6C377C0FD7255468E5234,
	AvgPool2DJob_set_X_m7FF63B501D5A464C01297BD715FB7AE0C0D6C2A7,
	AvgPool2DJob_get_O_m75EEF8C136FDF2EDDAC46A6EB9C267AB078676D4,
	AvgPool2DJob_set_O_m32F02174FBC96B340688B64B03CE4656AF635F0B,
	AvgPool2DJob_Execute_mEC6AE2C040C7AAC14229E32B31359982DD70B93F,
	DepthwiseConv2DJob_get_X_mBF4239B770D064168073249FD9112039B1F1D6BE,
	DepthwiseConv2DJob_set_X_m6E851B6CFC9370731A9E93CEBF2BF6799EA7968D,
	DepthwiseConv2DJob_get_S_m2D7EC74801FAB774197D8EC3EEFF49B7A32F5743,
	DepthwiseConv2DJob_set_S_m321C9D5E2C150A3F719B5F999B62A3B3893866DE,
	DepthwiseConv2DJob_get_B_mB87620DE1FA161DEAB645B51F44E05D9CA5656FB,
	DepthwiseConv2DJob_set_B_m2E0091E0192610606B082F7E706F0A504A3CAA3E,
	DepthwiseConv2DJob_get_O_mB26F34762E2F9736A2527E33E44317E94155CBDE,
	DepthwiseConv2DJob_set_O_mC465D79D457E289C98F1C577DE42B62670346A02,
	DepthwiseConv2DJob_Execute_m9328EE2AAAD43988BF3BA856D3DE63DA04C40389,
	PReluJob_get_X_m34F01B3DB521A581A342FAEA875A36B2EBADA4EF,
	PReluJob_set_X_m1B9F64B6352A265767276B7A50038D8D85DCCBAB,
	PReluJob_get_B_m04428B6DC1C5112076B89B1F463786677AE614B8,
	PReluJob_set_B_m9F8356B4C478CB59B08A1D12CD6C13D86F376C81,
	PReluJob_get_O_mF018055161B7AFB0AA4ABACDBD392EE8BBA81E5B,
	PReluJob_set_O_m57853415DFAFCA2534C1116D394618560CB217EC,
	PReluJob_Execute_mA3B6D7DF53C9016910BCF82DB949362842210B8C,
	PReluJob_PRelu_m49CE44DB4A936AEAF28BD445835AA75BBCBAC5E0,
	ReluJob_get_X_m341ADC6743E8C686684CD3CE43B4F46947A38D3D,
	ReluJob_set_X_m1CAF8DC890E936672F00287C42791956BB45A489,
	ReluJob_get_O_m16186E4D006DA6908A08C5221DC4B5DCC6CF20D5,
	ReluJob_set_O_mF4248072A1969FA7AE5B5EE49EA7F5C5FBF26501,
	ReluJob_Execute_mE54A0858EAB957EECA3C81A2BF48F141D2E9D73E,
	Relu6Job_get_X_m4094D938E1026E3690AF645F63ED07DAEEA288B6,
	Relu6Job_set_X_m5396292DF59E6F6A3F74669BAFCABE9F3D1515FD,
	Relu6Job_get_O_mF5F052BCEA690E896CF9E440AC1192E12EBFB8F2,
	Relu6Job_set_O_m6A2BC96CA09F1FE5C1D02FAE5446C22ACFE0D95D,
	Relu6Job_Execute_m3FD3AD1BF129901194BA5D1748F5BDD462FE4129,
	LeakyReluJob_get_X_mF11C5DA07744B1721A11AC5E16D5FA208FB8CC84,
	LeakyReluJob_set_X_mBF95CFF1222750DF720A0EC742743F0FC527EE5F,
	LeakyReluJob_get_O_m3438499EF5527F24DBFA386602BD3C8954AB57ED,
	LeakyReluJob_set_O_m06851D2102CC6F974D00F5819EF0F3CFEBCAA5A0,
	LeakyReluJob_get_alpha_mD1806EEEF6B6E608E69A975C0594C12784B685CA,
	LeakyReluJob_set_alpha_m50775D0539A9D4DE60D14DCF0040D424929EDC3D,
	LeakyReluJob_Execute_m1DD708C8C0282DD65E30665A7B003CD9D9D25CB0,
	TanhJob_get_X_mA538835782EE99ACE911216219A64333CEB0354D,
	TanhJob_set_X_m9D5B8744250E776D498D4BFFA751048A23497D6E,
	TanhJob_get_O_m893076F87428F8E917BD25DD78B903A89B503E49,
	TanhJob_set_O_mE658A12C2EAD4534BCCCF3E82F84A3D1C73F3AD1,
	TanhJob_Execute_mC148942BA69193BBAB1FD364D9DB4D3FA552DFF7,
	SoftplusJob_get_X_m715A941DD9DEABA6C5F8C94AD047C98E4DAA7C83,
	SoftplusJob_set_X_m75FED1F7BC6D28913A5E614AFB57E60466E3879C,
	SoftplusJob_get_O_m4B5446F98ADD7AAC88541D21C9B71DCC5E493283,
	SoftplusJob_set_O_m88EF87B9BD848B99EE9B528EFEDCED790C4FBE1E,
	SoftplusJob_Execute_m20162B8B288264D6531E07C8289CE3641EFA97B3,
	SigmoidJob_get_X_mD23EF0BD310E794FA1B3674C9C6DAB92F850A0F1,
	SigmoidJob_set_X_m6B330B1903A4B1C98DD8C5DD73B5311ADD0B7EB5,
	SigmoidJob_get_O_mDF22771B505E47B3AD956FC75AD03C49BE0485D9,
	SigmoidJob_set_O_mE0D4D945ACC6A1E4A334F2ADB70D3CB983F457C4,
	SigmoidJob_Execute_m3181646D37A37C23036A748398091EE987752D26,
	EluJob_get_X_mE8F14D40E42272F3B605EBF8672D448C5760C41D,
	EluJob_set_X_m1E37FA3AFF1CAFC8A27D56676EA67D3B3AE477F9,
	EluJob_get_O_m34B77E09C7F3C65D71DA150B46CC6CF58AF96BA6,
	EluJob_set_O_m7A2453DED1B316C83191E58A299AC877AA710877,
	EluJob_Execute_m542D1F8E0526448F088A239690D716358208AA08,
	SeluJob_get_X_mEA3AFADD1A7347A964580746D809A30E1EF95A6B,
	SeluJob_set_X_m327E3F13CC5CAAFB2B45108592C888F999F941E6,
	SeluJob_get_O_m53FF8241EB27D3738757245D069DF2C8318FE662,
	SeluJob_set_O_m85F0B048568564755C051E8E20A11DBF84B83D8A,
	SeluJob_Execute_m059F68D5649F08D16CCBB3D15E5D3B850BB38EE5,
	SwishJob_get_X_m983C75EE5CA53EF53F7DDA648DB793E5CB732335,
	SwishJob_set_X_m8952CCCA3B37B206463073C97D2E30FA91D59967,
	SwishJob_get_O_m365876877089126183CB9321FE113E19B109A82D,
	SwishJob_set_O_m2DC6C9614FE1DE635618E980A342E494E45B0969,
	SwishJob_Execute_m249E8553A89A15C55A9DCC2734224990340AFB86,
	ExpBiasReduceJob_get_X_m35C5FB8911BB8FC51EB464ABC2C3BEA82C4DA694,
	ExpBiasReduceJob_set_X_m7D8E4223E1FDF14DC86F8D5A4FFCD5CCBE55918D,
	ExpBiasReduceJob_get_B_m78499E47C15E6A59EB01A9878239A31DF122742B,
	ExpBiasReduceJob_set_B_m0CA84CEAE7F5BB17D28F9CD837B4BE7BE44B00E8,
	ExpBiasReduceJob_get_O_mA7F7688ABEA6C97CA5D6DFF6C07ED5FDB5E3A848,
	ExpBiasReduceJob_set_O_m111B670F154B61572BC7DE4E3002341E617EFB9F,
	ExpBiasReduceJob_Execute_m9AF1674E3CE059153AF2A668BB27E407300C2686,
	SoftmaxEndJob_get_X_m7E57BE1757F9FC8C7AA3B7E74EE29BAC41AE898B,
	SoftmaxEndJob_set_X_m15352FF2E769078F02EC5960D8D931ECAD97B855,
	SoftmaxEndJob_get_S_mD2CA8ACD6AAAC756C294D992083A9750EF341A03,
	SoftmaxEndJob_set_S_m6042D67E59D30CF1FA9E47CA31F6E1D58C74C4C6,
	SoftmaxEndJob_get_B_mD5FA9405F2D50B8E231BB79DBAE28F46A21FDCF6,
	SoftmaxEndJob_set_B_mB5F03CB2B8BC08A53D6D4E8CCF72309D97819B10,
	SoftmaxEndJob_get_O_mB11056F8DE55CBF2B13A3BB4C8352116A95CF3A5,
	SoftmaxEndJob_set_O_m7E3583C5D9F7A3F27E062102241A32760434FBB5,
	SoftmaxEndJob_Execute_mD3F031975B5F57B584C417CEBAE2DF1DDDB7A73E,
	LogSoftmaxEndJob_get_X_m27E5182DCDAE61C1FDD7A3D14AB0951529198514,
	LogSoftmaxEndJob_set_X_mEB4B2745DD328ADDC025B9E49ABEA2DB7C1BB63E,
	LogSoftmaxEndJob_get_S_m6EAACC3847C2CD0C754E4B2B4360A78FA9B05F20,
	LogSoftmaxEndJob_set_S_m70EDC74A9810EEDE2F6D1EF0CF927A51ABD4568A,
	LogSoftmaxEndJob_get_B_m8EA13B276C5C014F7E9A5CAF27B7BE035A3AFA7F,
	LogSoftmaxEndJob_set_B_m12505EBB14D292216929E61604F69EBA1912B643,
	LogSoftmaxEndJob_get_O_m6A418FE1EBBB9B4A453BAF6D866A65E9AF95C12D,
	LogSoftmaxEndJob_set_O_m5808D1A55B242CE8D5BCE16A9BFAC98FF370D0FC,
	LogSoftmaxEndJob_Execute_m0C8E325A86ECF16B27434846FFF68812148AE319,
	AbsJob_get_X_m334D68A2C8EAECA9D965710F5AC97BA6D5CAE454,
	AbsJob_set_X_m93EA90E9B760015D9AA7AD89D879DAFD5DE0FB2B,
	AbsJob_get_O_mEACA538B8D68DD0BEB8665BF6CB40339F07171DA,
	AbsJob_set_O_m392E2DB760B23F0956905F5AB3861B4118D7F421,
	AbsJob_Execute_mC9E702070CFB124AB2BA751C50D81D93C22C4938,
	NegJob_get_X_mD2FD8626D4C7AFCE4E8E1C3D4B24283CD93F34F1,
	NegJob_set_X_m17391FA0EF7389709FF7882A8179E5F37DA028B2,
	NegJob_get_O_mFF0BD0C196D2D39438780677AF102852E55F1F2C,
	NegJob_set_O_m3C04B46A229B15F83F05F9B2BC1CFBEAB277BC0C,
	NegJob_Execute_mBCF6937BAE0E450FB75C536CD6C2387D4F4B11A8,
	CeilJob_get_X_m3DA595A266405F102D6DA9711673352C74B17326,
	CeilJob_set_X_mFEAF467CE49BD29853E6A6614196880B5531D391,
	CeilJob_get_O_mE069A8E97E1F9C01F8F33B9DE61593868E689B27,
	CeilJob_set_O_mE0C76AEB46A1789E6BE5FC82771DCEA76280DD88,
	CeilJob_Execute_mA9B7C6396A148E2199719E8C2F575FD163D473D9,
	ClipJob_get_X_mDBF96CE5EABC07C3C4631D23DE79D7A3F6DFDAE4,
	ClipJob_set_X_m0E918558BCA0C60AD427A2C990C3CB7B6F896593,
	ClipJob_get_O_m8FF52A8C8218874E8A2E129465EB37CE2FE39897,
	ClipJob_set_O_m95CCA1ADB860945E6E3E7EF46F5850F8F1EA2AC2,
	ClipJob_Execute_m9D2B7772DEB5B8209BCE795F0FD0C02BF8C02A24,
	FloorJob_get_X_mA9D58F1AA5BDEE15DE265D82B2AAA089CA5EC67D,
	FloorJob_set_X_m9120E16DB2EFC2CD0DDF4E0676688F5E8137AEE8,
	FloorJob_get_O_m1D01FA2D48FFB7E235297080D4C26CD5273C063F,
	FloorJob_set_O_m362AEA5EAD1C05CE7E25382B1DE70905C42EEBF5,
	FloorJob_Execute_m386E9A00BF9424C50FFBD0B3F7FFF462E6CB8729,
	RoundJob_get_X_m0B61ACEA49F7A711DFD3453E4BB5FBFCB954A1AB,
	RoundJob_set_X_mDCE59C717F4004CB6DF8B8533E63035A6436FF2B,
	RoundJob_get_O_m9761A243013B4EF4C4ACC2C574E8DCFE52EF2075,
	RoundJob_set_O_mD2CD308CB6C731C4FBB683C19549E301986DCCB1,
	RoundJob_Execute_m7CA8A8C7A9BF695F1F57364609A0F3DB94BB5F69,
	ReciprocalJob_get_X_m96304AFBDB5C258D3C5815382D7FC6C92CF5E0A7,
	ReciprocalJob_set_X_mFA3062C9E49F3100AE9525C9BB95AAFBE9EFB2F9,
	ReciprocalJob_get_O_m4358C4FB0ECC572CDE77C3FA0F21C0E868FDF094,
	ReciprocalJob_set_O_mABDF756762465842DEBC7FE984B066D7A0AA8FD5,
	ReciprocalJob_Execute_mE52D2BB420CB95D632F0B6C44CD09544903FEAA0,
	PowJob_get_X_mBE33CA79F448DEF71CCE2020E12D7DA69DBABBB6,
	PowJob_set_X_m4152D1652AD55EE839C4D125B59F025D0A7F8FE8,
	PowJob_get_O_m7FD64F414F03A51E1F40B85656A7806D7D6178EC,
	PowJob_set_O_mA67A0A36783EEDA1C6E5943E85F8DDD768D6C148,
	PowJob_Execute_m94044E5A8F0B024BA6B81895549F4EE3D0EFD7E2,
	ExpJob_get_X_mE0C1184C832C24AF291F18DF7FA19A216A5F0E83,
	ExpJob_set_X_m3248EEEBC03C9C4B08666EAE30F68997FE71A579,
	ExpJob_get_O_m9D050460BF8A5F5601D79F3EDD9533C1B743C0AF,
	ExpJob_set_O_mD703D98B4D46F116EE5D6865F6E3BD9EA5CFD30D,
	ExpJob_Execute_mF0D94BDC093DEA6364F44569702A47D2A98FFE15,
	LogJob_get_X_mDDC56BA2692F31E26238020B2E89BD2A5499A479,
	LogJob_set_X_m9DFCA8400C37264E0C0BE84014B183EBE02FAD4D,
	LogJob_get_O_m364859EAD02E6D688AD275E6A576AF46D736B40D,
	LogJob_set_O_m4D7E3509573C657E8C4B99858F9BD50A7DB43A0F,
	LogJob_Execute_mD97D7DF75DF44CF7E8D15E60C3A4F2CAD96EA9E6,
	SqrtJob_get_X_mC65AE9821E066F6695702E79C76AE8506E19479E,
	SqrtJob_set_X_mE126B9ADEC0F0FA9AA1FA14D0D52666408A8B120,
	SqrtJob_get_O_m0D28FD4C89B2D017B251A119BA20704977492A2A,
	SqrtJob_set_O_m3F5898EDEC2E67E9A7F68FB3A3A785A465DAB1A9,
	SqrtJob_Execute_m2B47F9B88C83FF8254BE076C403DA830DB4C5090,
	AcosJob_get_X_m66DCFFC34AF0CE681F1BF9CE2A56DE10161EB933,
	AcosJob_set_X_mCB21343095AE32C501CB596DD8EE0355832B45AC,
	AcosJob_get_O_mEFF967B98705C7FCBEB08B29D1CD442B2A17559E,
	AcosJob_set_O_m9CCB412F00913862FF72171209633F78689FD567,
	AcosJob_Execute_mDA4C175B7716073508AC1722C1CC9213CAEC8D94,
	AcoshJob_get_X_mDCA4D84B84743BA6BCF5CE6911104AA32F8AF775,
	AcoshJob_set_X_m352949D3F8040241039B5D0EDCD18914745AE429,
	AcoshJob_get_O_mAF2C45A4E0DDE4D96AEBCD42BB75230109C81DDB,
	AcoshJob_set_O_m7AD55CFD0A48B9711B28CD1059B42067E4281FF9,
	AcoshJob_Execute_mFAC3096AE97DDBA238B3F599F7E0D33CB581F520,
	AsinJob_get_X_mCF04557A9A5F880F639E66878CCF34FC1CF3CB32,
	AsinJob_set_X_m1D45DB3FE9378D209AA6B5ED5B6FAF8491C96C69,
	AsinJob_get_O_mA8A321C2823891C64B8B9D911CD33E057178DB74,
	AsinJob_set_O_m60CCEDBEE3724A17F75A59A7B352299EA92ECBC4,
	AsinJob_Execute_m31CD035468B0BBA44E0D47B0D79A227BAF0B2195,
	AsinhJob_get_X_m446F0300152A709722053F9406AE0648F4D8181E,
	AsinhJob_set_X_mFACC3A9063BC15B6FD46F6287819AF7960246E59,
	AsinhJob_get_O_m78B6DF783426B9345D2FE740C83C4F484334B3E1,
	AsinhJob_set_O_mEF7AF6B218E9D0AAAF53153D85027281A5470CF0,
	AsinhJob_Execute_mE09A2A08C82704B6D6E30876E672219F1EAFB5E9,
	AtanJob_get_X_m569E122902DAB31F47EE0E71EFE79DB2C43A103B,
	AtanJob_set_X_mC19DFFA02AC14D40AD631179CE8E67CD185FFF42,
	AtanJob_get_O_m34E06A558A26C2678048821448F85B1D857FAC60,
	AtanJob_set_O_m8387D0F47DC26B0479B222F99B2E47F9EF23319D,
	AtanJob_Execute_mA8A5B0E790174C428C987DB2819E5D4D00350136,
	AtanhJob_get_X_mCEDBDDB5EA369A65C1E5AC0E8DC3F6711962CDDD,
	AtanhJob_set_X_m8A990E803D95DF351B0EBA31873EBA260E717313,
	AtanhJob_get_O_mD7E5A6C0D8D80EAAC77F7617CDAD4891F61BCE64,
	AtanhJob_set_O_m90CD06BA94D9AB200BBB532332439FF44A2545F2,
	AtanhJob_Execute_m3AF220A4BBF3D22E88444F1E8E9B1D6171965534,
	CosJob_get_X_mBFC90A36BDE341151B629D5152B4CF225C3855A0,
	CosJob_set_X_mF469CD1C84E5C0AA20D2DA154DE614596C3F1EEF,
	CosJob_get_O_m916F32E35CF0271638569291DBDFA9D1D45C8B17,
	CosJob_set_O_mA098E7C682CEA97FD2BEFC10CD99DC9679709294,
	CosJob_Execute_m2F08411327FE7724D3BE5199B31DE47AF1C7F0DA,
	CoshJob_get_X_mF12DB1A1B16922AA3B3F062B18B922DCC93517C2,
	CoshJob_set_X_m4F3F31B1601412397557F04081EC37714E0034DB,
	CoshJob_get_O_m36D90B0DF04A6325BB2554863FF0659A46F009B5,
	CoshJob_set_O_m060A830FF6B7EAE86F0AA8F71996C380A308574A,
	CoshJob_Execute_m02E60B2C5493C00CEBB37296D09D122F90CD8EAB,
	SinJob_get_X_mB7893AAC3A1A0134D7E496408377346B4D78D17B,
	SinJob_set_X_mA9FD9F54D72F90D8FA2AB5824CBF04A57D6A8983,
	SinJob_get_O_m8F23A4DA3473322D82A71E4AE941FEFDB7C3E412,
	SinJob_set_O_mCDDD97F88466357636FEF925B354D2C0D88BCB77,
	SinJob_Execute_m71964BC65C5920C5FA97EC0108558DC528B6C744,
	SinhJob_get_X_mF75DC100E0A0F57DCE4A8FB4E8BFB95767B7D251,
	SinhJob_set_X_m65E3EE42078289D65833ADDC705582ECE43A254F,
	SinhJob_get_O_mADEE98AF883D70C72ABA10BA1F08E450D314A953,
	SinhJob_set_O_mD5F969DA6086CF5B483AF05F99BC2CEC9450E2BF,
	SinhJob_Execute_m2CECED4DC6D99D70E65730093F407CD2710C7F50,
	TanJob_get_X_m08EAB669B71BF45E36F36D6F3AA495B2FDA5928C,
	TanJob_set_X_mE792C3DC72801925F297475E09E42DA864DCAAD3,
	TanJob_get_O_m9834484B10830585CF5F44A3289D7FE39F3C94F3,
	TanJob_set_O_m276CE9DFAAC2CB7E967F47AA4FA21F71545CE2AE,
	TanJob_Execute_mBDA81B0D2C0F6ECF9C6A1A1C8B00CBD7C019C018,
	ElementwiseAddJob_get_X_mA3ED14F38734359A8014F8058C951FBE6B4B15D1,
	ElementwiseAddJob_set_X_m25F7F20743523F8EFD968BA649A53BD43813DBDA,
	ElementwiseAddJob_get_B_mAAAED3F2E340683A24E4AB7377BA20423C5C509B,
	ElementwiseAddJob_set_B_mD43C6A86C90E394B8C835520C84840DC4FCACE1E,
	ElementwiseAddJob_get_O_mBD67B0E5EAAEE85C8592961668EDBC7DCE0A248C,
	ElementwiseAddJob_set_O_mD99F855B00311908474D5754D184C10B0A67E02F,
	ElementwiseAddJob_Execute_m39D1A15119B46A924F0AEE95E53525365D0128DC,
	ElementwiseMulJob_get_X_m38EB29960584BD596AC4E45F862113FAB4E90655,
	ElementwiseMulJob_set_X_m93715CF41E1E74BF4B4F76CA0D984856733553D0,
	ElementwiseMulJob_get_B_m5A53FE0C65B23D9567466B04BF3674F1B0109804,
	ElementwiseMulJob_set_B_m18116CEC2FC8E19A4D8D164020D81C8753C608A9,
	ElementwiseMulJob_get_O_m170D33EC5893BFB584D37982B03DFDDA8DBA9D32,
	ElementwiseMulJob_set_O_mFF6F6B70C0F54D8DABC151C745C3D8B181E12624,
	ElementwiseMulJob_Execute_mE878B9908E76DCEF78F2F4B12B8D378EA7CD5E84,
	ElementwiseDivJob_get_X_mD1A5351B0C68B0D522D35A84B17C1893F14B80C6,
	ElementwiseDivJob_set_X_mC3853D87F76D9F0F0A2B1ED46170CDCB5DC4FE0C,
	ElementwiseDivJob_get_B_m73740B6B35D1A44C90DE3EA407BC7A75CF78A3BA,
	ElementwiseDivJob_set_B_mF51F080B0BCE1BD0AB6BDE2F88CBFBA0B4100EAC,
	ElementwiseDivJob_get_O_m47BDA0819BBADE1890A2CD034F340F0DE4B71A55,
	ElementwiseDivJob_set_O_mF83FA23A95CA00CBC56F56605285FD39978F4E65,
	ElementwiseDivJob_Execute_mE84A527765E4E129DB9914B9155968FD755625A5,
	ElementwisePowJob_get_X_m07FE079B4926C4F271D4408E88AB519819AC516A,
	ElementwisePowJob_set_X_m87E634406CB8AC2A3476216FA726C063B82203F8,
	ElementwisePowJob_get_B_m644F0686960DDAEC772ADFDBD66218E466CC0206,
	ElementwisePowJob_set_B_mEAAD5540D4827F4B1AD14F527D24BBC9DB0C361B,
	ElementwisePowJob_get_O_mAC08853A9B5D87EEE51CC55758ED940016940065,
	ElementwisePowJob_set_O_mB258341F8190FD68345D6ADE974BAC6660E48913,
	ElementwisePowJob_Execute_mF1CC6859CE7AA501A1F809BCC0100BB6B71DB2EA,
	ElementwiseMaxJob_get_X_mF57E05C251E90F97E40A3AE9871698D92708CC91,
	ElementwiseMaxJob_set_X_mF3AC913E2F1158D0D59521353680D5C712103FC5,
	ElementwiseMaxJob_get_B_m763E07BD9C15090160808A0FB6BDBF9F296DE3F4,
	ElementwiseMaxJob_set_B_m58E7268BF82B4F65467312FAAF49F99C5A53C511,
	ElementwiseMaxJob_get_O_m2DF9A02058483619E5A0C7C289FF18FC275EFD4B,
	ElementwiseMaxJob_set_O_mC7B8496B4F23BDF5CE6DF34C4BFB138F7CE4483D,
	ElementwiseMaxJob_Execute_m74F7F0E6ECFAC9AB44E6C52174D4D3045F579457,
	ElementwiseMinJob_get_X_m131A79A6F386A12D3BE4C6202C1533843263FE75,
	ElementwiseMinJob_set_X_mADAB55E0E82AB17872DFB86EE4D7B481512600FB,
	ElementwiseMinJob_get_B_mDF4881B23237B3276F21DC7D02313504EEBE3FDA,
	ElementwiseMinJob_set_B_mDCC01207483AC5C42F83EDF6A5041BC21DB98863,
	ElementwiseMinJob_get_O_m51926A897B31A72E0545120BD9F65531D62E3E28,
	ElementwiseMinJob_set_O_mD09F35ABFB5E1152104B5CC0B77846CCB2E668D4,
	ElementwiseMinJob_Execute_m8F1AD69702EBDBBA2DBBC40F763AD6EB6F26D40E,
	SetConstantPaddingJob_get_O_m429F04D1565369DC8A92C56A8A3F7BDF8E160793,
	SetConstantPaddingJob_set_O_mB2728CACA980C9317197F59C8F7D583C4F94AB60,
	SetConstantPaddingJob_Execute_m33D4842DB0ECD839739915A70277EBB7D479B67D,
	SetConstantPaddingWithStrideJob_get_O_m9D04B58FB922492F5CFA0F081466DA4C11FB67A8,
	SetConstantPaddingWithStrideJob_set_O_m73C46E89A0A7C9E15D20A941855C84CA67572A1F,
	SetConstantPaddingWithStrideJob_Execute_mF8FF2F177682E73208A18B28DD9359D11197E3FF,
	ZeroBroadcastJob_get_O_m80EBF053EEF3510467D32A981FBD5B6A1FBDAF02,
	ZeroBroadcastJob_set_O_m9F254990E077C41C7E69C411E9F721CFA9054C4F,
	ZeroBroadcastJob_Execute_m2DC38B85112A1BB8B313C1AF7239284EC6CCF990,
	CopyJob_get_X_mAF0CF362316C875D50B6BECF1274D628A179CC7C,
	CopyJob_set_X_m53604813C91ECEC681DBACFC67D026C7A51C5A58,
	CopyJob_get_O_m3A5FE4E7678815BB9489726FD2C4201B547BFA04,
	CopyJob_set_O_m2260259E5BAF0F04604C4B5271BE47CF793B1E49,
	CopyJob_Execute_mE5D45E422768502C8AE6B8EF2ECFD01B1DEEDE41,
	CopyStrideJob_get_X_m91FFE7411E433397342D1B48B198D64C11A8DEF1,
	CopyStrideJob_set_X_m64A7A3CADB3D27324C8BF86FBDE2E029112A9B00,
	CopyStrideJob_get_O_mEA69CDEB88293AFEFA7427EACAD5CB8AC72EC2D9,
	CopyStrideJob_set_O_m25EAEE33D79111B55485D8621E320CF95CC5A9CD,
	CopyStrideJob_Execute_m7C1642B0EA7FD5D1BDE18ABDD14E51C210A91C16,
	VectorBroadcastJob_get_X_mF9DC27A72B485BA01A3424EEE12625BC6E182876,
	VectorBroadcastJob_set_X_mF1445A332850A939C8B09B0C22ECEFABFA7490F0,
	VectorBroadcastJob_get_O_m6D2793416B631B08FD69725B1C79353CE3CFDC84,
	VectorBroadcastJob_set_O_m9C59763E7A1A9BA294F16DC6C49158A8B8F9608B,
	VectorBroadcastJob_Execute_mBEA427E04083C3455BE3BA1C30A74A37156F09F7,
	GenericSliceJob_get_X_m5B6357955D9464D6F9E410A3406EAD15A1984842,
	GenericSliceJob_set_X_mF540A2162A178735356F1290EFDF6735C7C8B1F3,
	GenericSliceJob_get_O_m2405E6CB4FAE2FA6FBA34B54C4523E9915B7631F,
	GenericSliceJob_set_O_mAAC9631DDB4E95D7804960F152B6CC6C7E87F427,
	GenericSliceJob_Execute_mFF288119AA381D66E3090E247FB624FD64F73695,
	GenericStridedSliceJob_get_X_m5B90A58F10A3B7C0299B529518FFE9025F7420F7,
	GenericStridedSliceJob_set_X_mF47DEF41B16E85C7014B31C12D620945E6EFCA11,
	GenericStridedSliceJob_get_O_m9C4F012528B5162983A95C7E91F1FE433F5E1EE4,
	GenericStridedSliceJob_set_O_mA45196365935D13F7A8247F17C449A8A412EAB74,
	GenericStridedSliceJob_Execute_m6A9B66FA12AFD524DEE71F4D6EA4B33E674CCFF2,
	ScalarBroadcastAddJob_get_X_mD58E9E286DF48B6454B6D613FB340DE492CD4CCB,
	ScalarBroadcastAddJob_set_X_m076617C3853DBAA189342E34A1FD521CD5E356CC,
	ScalarBroadcastAddJob_get_B_m1117AC67E085E2449D7CF0AD2E50149605F3594D,
	ScalarBroadcastAddJob_set_B_m43157B3EE4D33AC766D9AAC4614B738DC6DD96CA,
	ScalarBroadcastAddJob_get_O_mEF38A4F067FCF4112A062CF9032396C2992644B1,
	ScalarBroadcastAddJob_set_O_m8CEBBB7FA55802CB79C7EAAE8C3C6A677FDBC5BA,
	ScalarBroadcastAddJob_Execute_mEFF1D419F09B956F01013F8D09C4676EFE2C63D5,
	BroadcastAddJob_get_X_mBD62E8AD2B85859D5B0EB29175E56297861C15E2,
	BroadcastAddJob_set_X_m3ED27D8C6F31C4743CD43C2F83471F36762BF264,
	BroadcastAddJob_get_B_m61EB097DBF53E606DC3289016864803CF6670F6D,
	BroadcastAddJob_set_B_m69F9770C14E20E62929715FF274528D97F596ABF,
	BroadcastAddJob_get_O_m3352D0A992F5BA575A6E5A8673C9944864D51B4D,
	BroadcastAddJob_set_O_m765A60D1F512088319C9A7F550987D3BC792AC54,
	BroadcastAddJob_Execute_m79A6322A7FCC5F1487F933FC9F34CF152D66D576,
	ScalarBroadcastMulJob_get_X_m18C0B739A174A142390499A01E5D94D12F4639D0,
	ScalarBroadcastMulJob_set_X_m08FA50A843FDD9938BB4AB3DB16F0C505DA025A2,
	ScalarBroadcastMulJob_get_B_m973C3DE7E731BB5CC18637BD56B2FCE9DC72441B,
	ScalarBroadcastMulJob_set_B_m2C713932F9647D16E8D34F744F1D3F5C3030BAF2,
	ScalarBroadcastMulJob_get_O_mF770FCF169D1C43BA2C97A349BFBD7588384A1F6,
	ScalarBroadcastMulJob_set_O_m022B0A7FD1E26B6B83F2A4EBFE3E7791C1135203,
	ScalarBroadcastMulJob_Execute_mF6BF0CF0E8814EEEB6347E3E013FE03AA68D185C,
	BroadcastMulJob_get_X_m998CB30985610131DD486928CF468C97AEDFAF74,
	BroadcastMulJob_set_X_mFF8163331F04D07CC4EA7D2A5257380FF69DEF70,
	BroadcastMulJob_get_B_m4AA74760888C99069C9E2EBAFCE26C3603F3E94A,
	BroadcastMulJob_set_B_mCA1A3DE666AEFB76540FDC848B26BB17353630A1,
	BroadcastMulJob_get_O_mEE4F75350BC325A236D25F8EF4EABC08C8AF1BD2,
	BroadcastMulJob_set_O_mBA34D31B8083CEF02CA9C120908AEB15FC3C15DA,
	BroadcastMulJob_Execute_mA396102B2E230E228B9C8363BD5B4C4D1684B7CF,
	ScalarBroadcastDivJob_get_X_m7A172C4BE7E7D85D911E8733E43485AB938C29D3,
	ScalarBroadcastDivJob_set_X_mA9EEADA68FB442D2F6CB8FA5AB9EA5252B9706B5,
	ScalarBroadcastDivJob_get_B_mEB3F293C6FF054633854E7B2D77BA9688F75C7B3,
	ScalarBroadcastDivJob_set_B_mF04E312761DDC01FEF04C57505EF4D194AD4F7A1,
	ScalarBroadcastDivJob_get_O_mDCFE76686C3014D753AC025F205C037131B5577D,
	ScalarBroadcastDivJob_set_O_mFC6E02E6D134E79157AF525D8B4EA5D8738C56DF,
	ScalarBroadcastDivJob_Execute_m9A81C0E882C04BBE211BD77B01982B90887359B8,
	BroadcastDivJob_get_X_m0526B8C0790EA82FB9AD603824B9AA39BD1F8729,
	BroadcastDivJob_set_X_mB288A0C09C0B871CE0A4BC6A21BB2677A4ADA69C,
	BroadcastDivJob_get_B_m4D8E810B8C10E0440B176FD1F673E4131B814D2C,
	BroadcastDivJob_set_B_m6F8C8A08608CCF5120797B8B829AA5525CEECE6B,
	BroadcastDivJob_get_O_m6D86E3FBF5515C14B41B0A0FA200877CDC4481C3,
	BroadcastDivJob_set_O_m7A36DD3A4E14F2DEF4D538397DCA6440B474CD5C,
	BroadcastDivJob_Execute_m3120C9A5CAFA7A30C9E0F196DE4D8C189CB9C71E,
	ScalarBroadcastMinJob_get_X_mB19B1E24DC55758DD93EA97E03CB9C375969ADCF,
	ScalarBroadcastMinJob_set_X_m5F319B3C5371B9E58BB2781AC8CE0C5FD3AE64E3,
	ScalarBroadcastMinJob_get_B_mB2B5B5F57F269AF688549089E4D8E65F4D0F7FAB,
	ScalarBroadcastMinJob_set_B_m9DA46F4F3420FCA502759917FF1AD06E1348D2FF,
	ScalarBroadcastMinJob_get_O_mBC7145899540B3B59B3F92E71B686E92533E5256,
	ScalarBroadcastMinJob_set_O_m41CDC3253296D228EF4D9E70B4551485E95EC0B6,
	ScalarBroadcastMinJob_Execute_m75C7D352E453A5956BE221BFE6E61D9E2E3D1AB6,
	BroadcastMinJob_get_X_m8F14C267F098E7B057F8F2242C82BE3E7F075CB8,
	BroadcastMinJob_set_X_m2DD1C9518BA11ECD26BB7E8137B89A9258A9EEA3,
	BroadcastMinJob_get_B_m1C7414699137AF2757DE983B800529F11A206A66,
	BroadcastMinJob_set_B_m0165B16FBA886FF6963E86943E4CAC3630B88D57,
	BroadcastMinJob_get_O_mB0F477D451AD7ED15F5C3598EBEB01349A562672,
	BroadcastMinJob_set_O_mA87C3E074FA16B1027B19E3C004400F947849A14,
	BroadcastMinJob_Execute_mFD53E52D3E85FB18C40529781A2A42F5D9D25259,
	ScalarBroadcastMaxJob_get_X_mB03897C83EE83CE9DAB0D6FBC546DFBD5A55FFD1,
	ScalarBroadcastMaxJob_set_X_m4F573C2879E534F213DA462244C77DD3D6D3C216,
	ScalarBroadcastMaxJob_get_B_mA55376A561C77FB7BB134642E11D62C1CACA375F,
	ScalarBroadcastMaxJob_set_B_m5706991ADF7747F44E2CE05DD15433034BCEC726,
	ScalarBroadcastMaxJob_get_O_m96CDE9415299DEA5527CFC6C7D3936504EFCB02C,
	ScalarBroadcastMaxJob_set_O_m99E542829357E2F576250B96B388958212E7A9C9,
	ScalarBroadcastMaxJob_Execute_mE2DD3C89473DF9151039A3FA00E7309F5881EF59,
	BroadcastMaxJob_get_X_mE112390CF4F39FC1F291210B6E3923153392AC07,
	BroadcastMaxJob_set_X_m30D3D86AE41BC6349675C0D2C5AE481B849B4202,
	BroadcastMaxJob_get_B_m19D290038F6E4C118C458071DA21FD922AF4906A,
	BroadcastMaxJob_set_B_m709F67C37BBF63E70F8FF9A469B0F54534482474,
	BroadcastMaxJob_get_O_m9DCE652D097AB49A43E3AB10641B40A383DA2151,
	BroadcastMaxJob_set_O_m79EEBFF2F5E042E52B723AC02445060F6A513B8C,
	BroadcastMaxJob_Execute_m8DC8118BD0928AFBF4EBF3681D140CDC4CCB1C49,
	ScalarBroadcastPowJob_get_X_mCF84D203329D36D2CBD681904B231DBFCB7E40B7,
	ScalarBroadcastPowJob_set_X_mB9687FA1B2DC82470D7FB3E761D3A9E0BA6229A5,
	ScalarBroadcastPowJob_get_B_m516FC85F7C33C3023A0673890785EFECFB580D58,
	ScalarBroadcastPowJob_set_B_m5592061D2944D7E9F6927654DE3651B678673DAD,
	ScalarBroadcastPowJob_get_O_mA3301C69058A236A87E70BDF974386205296FDF6,
	ScalarBroadcastPowJob_set_O_m1A3EC363436323D838E4E8541E4DA5D89DC32FCC,
	ScalarBroadcastPowJob_Execute_m1425FE1C8EACEFAF29381D5954E0A6289F42806B,
	BroadcastPowJob_get_X_m4299B3817FC52B1771B13D4ED98535BCD0645FFD,
	BroadcastPowJob_set_X_mC458A32F1F53DB21C706DDA994B704A4320ED929,
	BroadcastPowJob_get_B_m616860938F9BEC9B98D00C2B103F6798A13472F8,
	BroadcastPowJob_set_B_m25E7CBF030B6E4BE9C25EDF94CFEC151FD237876,
	BroadcastPowJob_get_O_m44945A0C427DD8A33A2F4381757E2A297F8E91CB,
	BroadcastPowJob_set_O_mB5A149B4786E4E63092739AF7C09039B523160FA,
	BroadcastPowJob_Execute_m82DCAE15AB3ADABA699A15AC877C1874E537C6C1,
	VectorBroadcastScaleBiasJob_get_X_mA829BD7C72C706E4F956DA0AFDA112C7CC0D6FC7,
	VectorBroadcastScaleBiasJob_set_X_m7A907D8DFFB30E84C9C685A17C168E7EFA3352EE,
	VectorBroadcastScaleBiasJob_get_S_m5339A676E60DBA6C0DD221DFD43D8D0096CD8CB5,
	VectorBroadcastScaleBiasJob_set_S_mEE2C7334652DCCD68C6882FD6233C130CEF130EC,
	VectorBroadcastScaleBiasJob_get_B_m72A956A5340C3DAA0DA3CA4A764B700244E65728,
	VectorBroadcastScaleBiasJob_set_B_mC2CBA3703B8152885BA18779C880930DB0AAE959,
	VectorBroadcastScaleBiasJob_get_O_m13514A94D5D7321746181E6B4EE21F0B09160D87,
	VectorBroadcastScaleBiasJob_set_O_mB2BD6437DE1DFF4E25769F61056D517289D81877,
	VectorBroadcastScaleBiasJob_Execute_m2FDD7613AAC8474DB673DA91D48441A16F0BE06E,
	ReduceMeanJob_get_X_m51D97E42085FB008C04585967FD927013CFACEC0,
	ReduceMeanJob_set_X_m8AC52D68FF0174342E5D56F68EC5115E62CF2D85,
	ReduceMeanJob_get_O_m6D63FA6E2B745C864BFD3441BD826E32B8CF593E,
	ReduceMeanJob_set_O_m1A40D330D18A9C54AA60B4E95B1169D5CD047340,
	ReduceMeanJob_Execute_m06FAE7BCA810265000C05F3A3169F6AABDA03235,
	ReduceSumJob_get_X_m6A08B6988CE91BE87E95ABF4F5F121808D97B07A,
	ReduceSumJob_set_X_mB0CD3EF7A8914F3D940765BB1F9037B403246CF5,
	ReduceSumJob_get_O_mDB45B9BD51EAD5298C8963A75151B4CA53CB6272,
	ReduceSumJob_set_O_mE625F47397481E39519673AAC56F36E7CE9194F2,
	ReduceSumJob_Execute_m74E8E0C0483D92C6F4D87DA862DB46A1A2E4E1AC,
	ReduceMaxJob_get_X_m3DE1CC24E37367C21E5929E4F410BE37DC0B2401,
	ReduceMaxJob_set_X_mE141E7120DC547BE4004308652DC2E835E2BD6AA,
	ReduceMaxJob_get_O_m5FD264AD858D8C836BEEB4EF5A584B731614E5A9,
	ReduceMaxJob_set_O_m390B17D26859FBCEAA87DD3B5D120967D0E547B8,
	ReduceMaxJob_Execute_mE1CF797A3BE95745E8227A81CE87B6E491C0B47A,
	TransposeJob_get_X_mDAD8E2AEA70EC0CB63D40296C74EA173E958CA92,
	TransposeJob_set_X_mD4B5CB5FF6CD043B6C6DBEDE8E412E5B434DCC27,
	TransposeJob_get_O_m98BC8A0626FF1F4892718F80D49C33CE97DA7898,
	TransposeJob_set_O_m23E3E64AD214B621127A76BDA7A33349BD5B6F51,
	TransposeJob_Execute_m866E5BF20FE7805ECA170773B98F0E749A0751A5,
	MemFreeJob_Execute_mADCEFF2DB4C24909980D969765390987CD1A98E9,
	TileJob_get_X_m8607B859F66CB277330C9813562856569DCE755E,
	TileJob_set_X_mA5A69AE5895F84099E825453BBEAB4140F3E0066,
	TileJob_get_O_mBCB776311E84A2CE15E2CD2B9D8A0CFF67DFC18C,
	TileJob_set_O_m53BEC9C6A869FBB46DBE51F0F418497B2FA5FD56,
	TileJob_Execute_m732B7A21E1562ED328FD532087DEAB6CC27A97C1,
	GatherJob_get_X_m47E1B8F9D24248326C5187CA8C58DAA254075203,
	GatherJob_set_X_m60B84789434A6E9A4E7C7EC9E90DE7356ED71CE9,
	GatherJob_get_B_m30C768057FA0E66D117771ADBEF60CFE3F7FE799,
	GatherJob_set_B_mC362DADDF299C2E8DA4704375DDB3C8BF6F37FD6,
	GatherJob_get_O_m09FC304CC961BD1538655ECB1756DC274A91D9A4,
	GatherJob_set_O_m31E6F0701BB4EFEA5372F3F29837F954E14D9850,
	GatherJob_Execute_m026DEF192E3ECAA07F39FD90AFAAD4E4AB460196,
	OneHotJob_get_X_m4EC184952989CBA6BD12E3FAF978272D1888281B,
	OneHotJob_set_X_m31A0DFCFC2A1B2FC5D8B105C44F6BFA69A2D2879,
	OneHotJob_get_O_mF19094B05828B84E86952138DE97FFFABF02CCD7,
	OneHotJob_set_O_m7A725AD6304F5D7F3D0D33974BF4403596171306,
	OneHotJob_Execute_m0C9803DD526147F9EAB2DBD9A2AAFAC3A1D37B29,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BurstSchedulingHelper_GetFenceBeforeJobStartXSBO_m228C1C32F3C6E1F84CA68F49747065A2F32F66C0,
	BurstSchedulingHelper_GetFenceBeforeJobStartXBO_m137E99EC1E84E4F7DDD7307811E3E3D97ECCDE78,
	BurstSchedulingHelper_GetFenceBeforeJobStartXO_m624A770902D01307C2479B30F6E409C70C15155A,
	BurstSchedulingHelper_SetXSBOFences_m2210B439F4117CAA9D7A0E3B4E705D12080D5C59,
	BurstSchedulingHelper_SetXBOFences_mFBC5B9E1BD908DEA188C742D905443BFF310830E,
	BurstSchedulingHelper_SetXOFences_m74AF4DFB20FCE0B9D9F8BE411489F70B14E786D3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ParallelJobsContext__ctor_mEA527D17947603C9746F367A556E9985E25F588A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ParallelJobsContext_AddJobDependencyToOutputFence_mE5EA0F4A4303246CDAD44F69F58037DE1F8777D7,
	ParallelJobsContext_TrackJobReadDependencies_m219583685F53BED9D1839003E5C30603B6116431,
	ParallelJobsContext_Dispose_mBA9DB35702E5A5ADA5711469FCA3454D044FBA7E,
	ParallelJobsContext__cctor_m6BAD8A79A81D8F2F4F210F13E54C7DA761A88095,
	FencedMemoryAlloc_get_fence_mB5F7DEA9F2C2DAD9B91D890BBF45A0EF76966AC7,
	FencedMemoryAlloc_set_fence_mB492C5B6161E5A5A89DF980E8DE9ED678C769C7A,
	FencedMemoryAlloc_get_reuse_mAE7906B256F586392E08B363AEBEC88C6E104202,
	FencedMemoryAlloc_set_reuse_m18EF2CE26AEDC159CC433EAF47570D657E8C923C,
	FencedMemoryAlloc_Malloc_m4D73683DD0A788B85258ADDB1AE9A583B227C83D,
	FencedMemoryAlloc_ClearState_m2305C33DE7D993DD31C9EDE63EEB5959B20546D3,
	FencedMemoryAlloc__ctor_m4FC153A1B98AB3741EA6D8D0FC7AB7028428874A,
	FencedMemoryAlloc__ctor_mCF6646205ED1CB4F3EAE1566196E4F305A4C01EC,
	ComputeKernelLibrary_Dense_m285F2A250225EFC111C70E6A1ABE1D13DB78BABB,
	ComputeKernelLibrary_MultidimMatMul_m2EC635F794539AF77E1E5111A99471043536BFA3,
	ComputeKernelLibrary_Dense3_mCA8D371D4328024701663CE0BD00E85CF25FC8A5,
	ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m45EDDBDB4D851E85E6B64A981734CE0A1432F05C,
	ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mAF34251D5B6658328B3C71BA8E73D3AE5E61AA08,
	ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m5679D0D6C003CF45BD81C7EBCC31BD60C05E23F3,
	ComputeKernelLibrary_Conv3D_m2B3D9286AAE8A5BF1DEEAE937D53B4C28538C276,
	ComputeKernelLibrary_Conv2D_mA95FB5CD08F5AA8B59E880BAB0A6798D46D98EF1,
	ComputeKernelLibrary_DepthwiseConv2D_m0FA34628FC924A59BFCCEA97180410AA3AA31C04,
	ComputeKernelLibrary_Conv2DTrans_mCA42FEC13825FB7C8F5225745E888C78FE543F47,
	ComputeKernelLibrary_Activation_mED1912B62E40242C05658C821462C1D83C3163C7,
	ComputeKernelLibrary_PRelu_m970F75DE1B936A37342B9FD15728005AAD3202E6,
	ComputeKernelLibrary_Softmax_m3874A70E332D45D858FD2D678D0C4533203794E0,
	ComputeKernelLibrary_LogSoftmax_mA0667EB7E4CFDF2345F08830F8F6259E6A0FF2C3,
	ComputeKernelLibrary_ScaleBias_m239DD800B263C5154AFBAEA1C3B87C6A7E5638E6,
	ComputeKernelLibrary_Upsample2D_m6903E67D5EC083F98AEE1AEE35EDDB523DD8D44B,
	ComputeKernelLibrary_Pool2DReduce_m971F12E38E23C3B78B235E2271D5B4935B9EAD04,
	ComputeKernelLibrary_Pool2D_m0E276C4E7031E3C33824744EC13E98DE42E3EF5F,
	ComputeKernelLibrary_PoolAvgVar2D_mA788B9BD0BA8EB693003B88CF5A41015C3F079A1,
	ComputeKernelLibrary_GlobalPool2D_m34561F01AE4A02FD65468758415F0410DAADE0CF,
	ComputeKernelLibrary_PartialReduce_m3ADF03E78085670122A747E3D7640B76E94D039E,
	ComputeKernelLibrary_GlobalReduce_m5D10414E6B2ED0A0127EF2FCB6B5B145B8AC4845,
	ComputeKernelLibrary_NormalizationTail_mBD852A9CEFEEAC16BE3CE3F846E0E65F15DA1312,
	ComputeKernelLibrary_Copy_mC58BCEFAA5EF96148A3C45EFE5A488DAFEAD9109,
	ComputeKernelLibrary_TransposeToChannelFirst_m9E33058A84D72E51189513BB317747DCF7E6B846,
	ComputeKernelLibrary_Transpose_mCF4C49AC28BDA7D611CC1EB04A2EF21E4DA6A5D0,
	ComputeKernelLibrary_Transpose8D_mEA7911B571CF8CB6AD908F1F3D21ECFB02E3AF70,
	ComputeKernelLibrary_Transpose2D_mA0A6A97160267502F9A6C4A2ACBF327F7AC2A533,
	ComputeKernelLibrary_ReshapeFromNHWCModel_m220CC1418233EF8DA653D95D1D2E987F4F27101B,
	ComputeKernelLibrary_Padding_mFE7B6D2EA4BD8D738231CE8AFEB970033429C0EC,
	ComputeKernelLibrary_Broadcast_mB36F0B3D765838B16932A6F51FA5E289CC820637,
	ComputeKernelLibrary_Int3_m7CE10529DA6A1FCA40D4EE06A4E3EFBA83F0B80C,
	ComputeKernelLibrary_BigO_m0A0F78C58A903CE77460BA17BB2BEF69209BF3A6,
	ComputeKernelLibrary_StrictAnd_mA55820840E492FE3884F84F19D85658784E88CAC,
	ComputeKernelLibrary_Strict_m1B69FE36CE898CB1F6C0CB00346A2820CB5258DB,
	ComputeKernelLibrary__ctor_mBE52A7506053A9945980170293C89779DF72896D,
	ComputeKernelLibrary__cctor_m44D05893DB8EAD56FBAC7FA73F3E0E91B06F27AF,
	Entry__ctor_m62B7545FB61CD780AF3F02D85797BEE5DEDC4502,
	Entry__ctor_m49A1371632874C2899989C9A17CEB2DCDF027962,
	Entry__ctor_m99C084E6E8D6005F9458BC70AE082358B894FB10,
	Entry__ctor_m3298497CCE5943296FC81FA2FB92F2E6C913D657,
	ComputeKernel_get_shader_m4F6DA0414CBF03894C8C58310A4CF1989E3A9EDC,
	ComputeKernel__ctor_m5A375BA00D1E51ED9C45212012758212653F353E,
	ComputeKernel_SetTensor_mCA21BACFD13D5ADCC9B98753237A8B8A9B1F1122,
	ComputeKernel_SetTensor_m901E8388023E712D9AD800554656EF77C8F5C10D,
	ComputeKernel_SetTensorDecl_mCFEB0E982CAD745E23F7290BB22A826CF8B0075B,
	ComputeKernel_SetTensorDecl_m4F85E8C759DAB1E48108A29900F3FA26CD326ED9,
	ComputeKernel_SetTensorBuffer_m27EE4FC4C17D38B95BBA1418BD71DF83AC9112EB,
	ComputeKernel_SetTensorBuffer_m445651305CBCA0E484D2E5420FB984ABCE897F7B,
	ComputeKernel_Dispatch_m0D1A205E955511500B5A6AA581EAE917511553BE,
	ComputeKernel_CalculateEntryScore_m7CF018F9D16ED2F7658F27E6F5553C3E5A84E7FE,
	ComputeKernel_BestKernel_m663F14E029177854FAB7AF5B1709F533E676CE54,
	ComputeOps__ctor_mFF740E1BB62FCF0434618D146D5154AB29C110CA,
	ComputeOps_BestKernel_m3702144A8DE965CF914C05DD279DD41913E3EB63,
	ComputeOps_CompileKernel_m1127ADB0847E0C5517EFC2171148D92EBF8B66C6,
	ComputeOps_MatMul_m00D03CF52997183DE44BC332193C0A13496AC19B,
	ComputeOps_MatMul_m4C75A5581582836DCB538E058B4812916B79E098,
	ComputeOps_Dense3_mF26B40263E6D3CEFF319ED647B0B2CF1C5706A92,
	ComputeOps_Dense_mFF2861D454DDA25570B82CAEFBD08B9217BBB852,
	ComputeOps_Conv2DWinograd_mC5B048799C604EFEEAEB8C0AF0A4C27043B642E1,
	ComputeOps_Conv3D_m508B6CC8F34FEB76ED05593CF9553DA81EDDFD23,
	ComputeOps_Conv2D_mEEDB8DC32DE7B2C401CBB742602DDA1BF84F9CEB,
	ComputeOps_DepthwiseConv2D_mDB8785938B92100E4F313F53B2E5502B3B779E55,
	ComputeOps_Conv2DTrans_m2A12BC80BC91ED6E01F9758C4F2B9188F345C5F4,
	ComputeOps_Upsample2D_m1AB629094D553D0B02A3A1B823290E86AE480379,
	ComputeOps_Pool2D_m02A81A18B723DD537B801863673AA1378F2647B1,
	ComputeOps_GlobalMaxPool2D_m8EA10EBCB66CF19C727B6FAD3C65CAF5E4051B78,
	ComputeOps_GlobalAvgPool2D_m7A9563ECF86C2C27C525CF26CDCF889A9E661FB4,
	ComputeOps_GlobalAvgVariancePool2DReduce_mF0025B829FC13451334C6AF4DAECD5A10C72CDD1,
	ComputeOps_GlobalAvgVariancePool2D_m4D6027DE636CAD122340245660A264857B354CA4,
	ComputeOps_GlobalPool2DReduce_m9ECFEF7EB88576A890135B9D0CB886E8749C8315,
	ComputeOps_GlobalPool2D_m985E8363D5C2421360BADB73D1B5A76D693E6DF9,
	ComputeOps_ScaleBias_mBCE24CC7D9F549492FB22D09C324A8AA8B0A5543,
	ComputeOps_Normalization_mCB01921D108C1AAC750ECDE19A5EBB2E7A792E3C,
	ComputeOps_ComputeReduceDispatchDim_mB0D8C5F5398D7BC7DC098D0F529CC911512EA7F3,
	ComputeOps_ReducePartial_m5E3080FB81A40D744EABAA0F214615AFFD67A1D3,
	ComputeOps_Reduce_m872CEA6A0BC660463362522441AEDF7151CCD075,
	ComputeOps_ReduceSlow_m48A8233A954641CFAD70CA4623987686DAC10F2C,
	ComputeOps_ArgMax_m4F3D3EAD02C50C89B095CE50F8F5C0B6E10A949E,
	ComputeOps_ArgMin_m84EF84EC984621DD3AD309A3A6B6A721A08BB028,
	ComputeOps_Activation_mB48879B9C48F38DBF74C365CADAF3E4639C2C8BB,
	ComputeOps_PRelu_m16D75F6D7CB9C5DFA9BC281F356CDFAA946451AF,
	ComputeOps_Softmax_mBEC8F7EB9AD268DF056413808441FF0EDD7B9E79,
	ComputeOps_LogSoftmax_mCF4975458C7EAB71FF83AECCE5FA9BFB351256A4,
	ComputeOps_TransposeToChannelFirst_mE688EFBECE65AFE3ED8B62F81555E9B36AEAD070,
	ComputeOps_Transpose_m957FB971832823FB62168DD11837ED5A016E3AB0,
	ComputeOps_Transpose_m1AA619649E88DD09BD0C00425C134C7691E49556,
	ComputeOps_Transpose8D_mA534DA2007715AC63480D049209A4A1732D9B1DD,
	ComputeOps_Concat_mB8F0F1B87A531CB9DFE3035667C7F831E5F59ABE,
	ComputeOps_GetInputTensorStridesOnDevice_m4D4778A9B1BED0A0B8763B2B716D5DC12CAD378E,
	ComputeOps_ElementwiseWithBroadcast_mCD01E743C1A69D8F00108118C301F53942CA89D4,
	ComputeOps_ApplyPadding_mED4EC5A4EEF1686B0872EB1282304172F25B97C3,
	ComputeOps_LogicalNot_m4CBA8B30A607ACFF9017F651DA49DA3D0E2D527F,
	ComputeOps_Sign_mACC9733FBF14815F8307DB6AB51D8593771C5CBF,
	ComputeOps_Where_m3E97D5A63AFF1DF42107A0E7BFC6D28FFEA7359C,
	ComputeOps_CopyAndReshape_NCHW_mC2085E9B9E2DBF9B1056CAB058076F7978003FA0,
	ComputeOps_CopyAndReshape_m208915CE3D3CB16A3AA6D18CEA046C8B5C22A9EC,
	ComputeOps__cctor_m9B5E6EA75C58615C944B5EC230D845AA5C49D375,
	ComputeVarsWithSharedModel_Dispose_mACC2A093F0C233B2B869AC275CDD8167B62771DD,
	ComputeVarsWithSharedModel_PrepareLayerInputTensors_m03ACB4AA1E7FF1C3EBB11F56B8CB2DA6282EED07,
	ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mC882EC526F71137B891A6195D62CF0E41B3CB5DC,
	ComputeVarsWithSharedModel__ctor_m9B720B288B6617FFEC3D014AAEDA4CA186373BD6,
	ComputeDebugUtils__cctor_mB641911DE7F9A4B76975087800B1FC969713E2CA,
	ComputeDebugUtils_LogAssertion_mF4E4B31AA4D6BB690DCDE6DB1C4F362640D0B044,
	ComputeDebugUtils_PrepareDispatch_mD926F5397D52EC24FAB278FF0DE8FCD6ABE1717C,
	ComputeDebugUtils_VerifyDispatch_mC5D3B98C3A288404B1604AB2E67D32D89D044F0D,
	ComputeDebugUtils__ctor_m5A590DE573BCC85FA0A8DCD96E9AECBC4003244A,
	KernelAssertInfo__ctor_mBE1CF4C9892759F5644A1BA692DE4D6FEB3131F7,
	PrecompiledComputeOps__ctor_m33327666E6F9AF4B4F0E5C351727242B50872ABA,
	PrecompiledComputeOps_NewComputeBuffer_mB5341C6BCADB5A4C9A470DB879C958288404C1FD,
	PrecompiledComputeOps_ResetAllocator_m6DFC6A7977C2F84040A8168156A2350912243584,
	PrecompiledComputeOps_CalcModelWithInputsHashCode_m667040F875A8B4A80E237D2A9983DF0CF72AFD33,
	PrecompiledComputeOps_PrepareConv2dWinograd_m15416751274A42992F23E80D639EA193215161F1,
	PrecompiledComputeOps_PrepareConv2DTrans_m3E5F601ACCEE7AA2263405E0D2D8A18FFF3456F4,
	PrecompiledComputeOps_PrepareModel_m17EE86F2034824D27609E71B266D352637F2BE56,
	PrecompiledComputeOps_PreExecuteLayer_mACCE1BBC3973830F50FC192A5007C881FD5D78AE,
	PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m2E073C5606AFDF5080AB0DDE222234006A8AF7C4,
	PrecompiledComputeOps_Dense_m23E29239C2B3031691CEB427C92F6B2D41A144BC,
	PrecompiledComputeOps_Dense3_mB531B75C63B8D2F220CB2DAB3BED31001E0AE8EF,
	PrecompiledComputeOps_Conv2D_m90C74A5A1AE92E10F2D0231B3E8F785F636FA1DB,
	PrecompiledComputeOps_DepthwiseConv2D_mBC735B8F4FD299903B2D5E4E2E7973BC3158851B,
	PrecompiledComputeOps_Conv2DTrans_m947EB0A26AE27177ABB1B178AA9350CAEAD24445,
	PrecompiledComputeOps_Upsample2D_mA2A6B29115933F3E83D7CB966129F961989F3E1D,
	PrecompiledComputeOps_Pool2D_m82A6FF22D2A0CDB00F3C09306EA0260FFD03E3F1,
	PrecompiledComputeOps_ScaleBias_m3A9A21E372B630F3687E0441AAFEA613E4721C48,
	PrecompiledComputeOps_GlobalPool2D_mD4F1ED25BA720810CAF24908B2B49A0DC65C7013,
	PrecompiledComputeOps_GlobalMaxPool2D_m2991940F1D5FACA73F0359DD03B5C5F4D40338FC,
	PrecompiledComputeOps_GlobalAvgPool2D_m133CBFDDAD62D83E04D11654349558F68745441D,
	PrecompiledComputeOps_Normalization_mF87573A005A4D63060A300D0ADA2DA88A8E9B1D4,
	PrecompiledComputeOps_Reduce_m2B52BE1E10BAB1DFF8B87C0450FEA46105C9EB86,
	PrecompiledComputeOps_Activation_m628C6BE477390BF85DAE65F81B56C1BDB8BBC36D,
	PrecompiledComputeOps_PRelu_m97C393E822D40A2B0335324B9B3F2633BB942CB4,
	PrecompiledComputeOps_Softmax_m513DE43F75EF59FBA4C41F3D3B29EF46524EF088,
	PrecompiledComputeOps_LogSoftmax_m045827F16708ED658F882F541BAF967FF5636171,
	PrecompiledComputeOps_ElementwiseWithBroadcast_m92C5FD8A2919FA869425DC8C4B1E3C3114F80AC3,
	PrecompiledComputeOps_Concat_m1474E88EBFB836E6CFE2E3BB2893BEDAD0C5FAAC,
	PrecompiledComputeOps__cctor_mC254CF7B7DF6D5FC5385276B7BFAFBDBF8693169,
	CompiledLayer_get_kernel_m315FD8120BA417A507C66CABABF320476B26B317,
	ArrayTensorData_get_array_m1CF65586DD00BEA1E64D4A3A4DD9D5EB9B7C8CD0,
	ArrayTensorData__ctor_m42441B3246773B20CB8933A11648939C6958B272,
	ArrayTensorData__ctor_m48A393DC81649CB718BFEEF2B57AD2888A3B9E23,
	ArrayTensorData_Finalize_m6DF616D67A259B66622EBA751F85C4EB810D1BE6,
	ArrayTensorData_Dispose_m623EEE367C4F26696FD5CB33CA98F54841E5C4A3,
	ArrayTensorData_Reserve_m93FD701D4147CBBD447A84DDF95E1167A8DBEB2B,
	ArrayTensorData_Upload_mAA7F96E57C56DAD5F587874F8BD91D7FA3C268B3,
	ArrayTensorData_ScheduleAsyncDownload_m3D078783F94748BF70D734C7422B25836AC505A3,
	ArrayTensorData_Download_m6D0629053FC83476B9E231586202FA910B79DEEA,
	ArrayTensorData_SharedAccess_m9DD57EAC85F381FF059A6DF31214A96BCAD21DF7,
	ArrayTensorData_get_maxCapacity_m28218106617182489E2FE0D021F60DB57B61E2C8,
	ArrayTensorData_ToString_m8DBB8159517E3949E0F4ACD77B2F8486CC7F0318,
	SharedArrayTensorData_get_array_m8B7F7C4A4251519B765D52645164075BFC6390B7,
	SharedArrayTensorData_get_offset_m8652093F7AF2A7ABE0EF73256D69F48471E3F310,
	SharedArrayTensorData_get_count_mB4D874AD158DE1E96054EB3FB692340A11DD592E,
	SharedArrayTensorData__ctor_mB7252973F94169C840C9CC74D3DCFD611B3BDBD6,
	SharedArrayTensorData_Finalize_m39E1C86E110073A445CD7D4171B9E49400C78DA4,
	SharedArrayTensorData_Dispose_m6145069527D666238EBCE0EF64D922F5BFA3B1F0,
	SharedArrayTensorData_Reserve_m95AFE76EE2AE9DDC469C1D3D0C003B1EB375D859,
	SharedArrayTensorData_Upload_m846C9CEDB8AD2FBC07E4609F9645EF221309AF4E,
	SharedArrayTensorData_ScheduleAsyncDownload_m5E2447FCDD97D5560069E490E42C5F4AB972900C,
	SharedArrayTensorData_Download_mBEAA363A8FE81FE1D5A80D36E1A90B289BCBFB39,
	SharedArrayTensorData_SharedAccess_m41EEB41DFCC41920406349738B1C386CE4F10196,
	SharedArrayTensorData_get_maxCapacity_m06465B0FDB78A5D12F13ABB91BD41A3551F16F5D,
	SharedArrayTensorData_ToString_m30B355448360D2C122D591576C2979B2BC07CB1A,
	ReferenceCPUOps__ctor_m13597D3914B0A23CFE8E64D1C42D1D340EE6E343,
	ReferenceCPUOps_NewTensor_m25BE9D95850535BA33120B922EC247B3CA8ECE56,
	ReferenceCPUOps_NewTensorLike_mE3067F6087FA22E7A01E136887210735B6DAE00D,
	ReferenceCPUOps_NewTensorLike_mDC503EFAFB5BE73310EFD78825FB4460D9E0940B,
	ReferenceCPUOps_NewTensor_m53F9E9E4B63D0CDC4E3FFCDB9FEA85A8D6061C32,
	ReferenceCPUOps_NewTensor_m05E63B9AE6E91B4FDBBD2BCAEF27241840A3EEC2,
	ReferenceCPUOps_ResetAllocator_mB621F302929233F8F37AAAB69998D0F10FB987C2,
	ReferenceCPUOps_ApplyFusedActivation_m3FD39FDE56BAEDC8AAE8C3FD36ED451648419621,
	ReferenceCPUOps_Dense3_m585F2596E37186291F2CA7EBA04D4D7CF874421A,
	ReferenceCPUOps_MatMul_mAC91310A9B5666FBC61E88A367ABA73CD084E96E,
	ReferenceCPUOps_MatMul_m719F9854263BA82BE0921EDC31AE777277E71C2A,
	ReferenceCPUOps_Dense_mD5C687C286F68F124F9F182282D6B29A0E4C1729,
	ReferenceCPUOps_Conv2D_m0E1492FCC7B8A1B89E3C64F0D3FA0D6F85BA5B4B,
	ReferenceCPUOps_Conv3D_mA7019FDC30E49E853562F98F2030475D2A7E389F,
	ReferenceCPUOps_DepthwiseConv2D_m269D0974A20B97FEFBC3144169FDB7F7BE7542E7,
	ReferenceCPUOps_Conv2DTrans_m189698C33407582BD45D63A2AF634E02FA0DD8FF,
	ReferenceCPUOps_BilinearInterpolation_m97D4EC60D8E977855B34E62AF8CDD1752D9DC193,
	ReferenceCPUOps_Upsample3D_m0C88A49BAD26E31B2F30E502D41EAF0B4D7972BA,
	ReferenceCPUOps_Upsample2D_mEF861CC7080635D67E86D3CFAE8403E02ED51A50,
	ReferenceCPUOps_Resample2D_m6B9D82B49E3D86D63CF5FC92B172BA8FDA0551D6,
	ReferenceCPUOps_DepthToSpace_m1DB560938D30B79AC219F1CEA59CC48801930B97,
	ReferenceCPUOps_SpaceToDepth_mAA0FBCACEF5FA5ECFF0099D7A55DAC034248DF28,
	ReferenceCPUOps_MaxPool2D_mAD55807B2F5440D592924C3CAE0782403267DF92,
	ReferenceCPUOps_AvgPool2D_mCA5C24141AC04D43CAA8E16264BF6ADC544420FB,
	ReferenceCPUOps_GlobalMaxPool2D_m3650ACFADCDDDE9492F0CFE4E99C0950CD46319C,
	ReferenceCPUOps_GlobalAvgPool2D_m1482525A95FF13FF03989651499BA3E0E95F2931,
	ReferenceCPUOps_GlobalAvgVariancePool2D_m34447A037F37712855F22CBF55B31F33796C1889,
	ReferenceCPUOps_ApplyPadding_m525EE4A58B6DA3FCEF352C51BAB3DDF47ABEA64C,
	ReferenceCPUOps_Border2D_m51D74B8557618EC6291FBCBE81AF7A79E5547AFD,
	ReferenceCPUOps_Border3D_m6B232ED9FA9B293D886A64C6F88542E33D9FB243,
	ReferenceCPUOps_ClampHWToTensorShape_mAA51F50FE22B098A3918185001CDAD32AD5706CD,
	ReferenceCPUOps_Pad2DReflect_m6AC84F261342D4B153B7D5CC6B7A003121E9081B,
	ReferenceCPUOps_Pad2DSymmetric_mC5DD920A5F53645B39CBD32E0BACC4B659E770AB,
	ReferenceCPUOps_Pad2DEdge_m1C58897DA5D03A3E735DB496E8911A7643FCA6AC,
	ReferenceCPUOps_ScaleBias_m2E0211C7CE819D728150AC4C8978C57CCDCB24CF,
	ReferenceCPUOps_LRN_m4C4B6F33A1AE8FE2CFDD40FB3AB6C503B9487EFC,
	ReferenceCPUOps_Normalization_m4E07EA578ACD1808C19330488EAD0F0B9F25E567,
	ReferenceCPUOps_Bernoulli_m07BF2EF3475E0023F7C88725E69E974FBBB1F9BC,
	ReferenceCPUOps_Gaussian_m9B0078341A66CF8EE9E4D239E44B6EC00C4D525D,
	ReferenceCPUOps_Dropout_mA98DBD70B560C7FAF51E6383F65093EA1C215261,
	ReferenceCPUOps_RandomNormal_m9BD27EDFBF6FBE9EBD8649C856633446F237A01B,
	ReferenceCPUOps_RandomUniform_mDC4A32F76EE83D116956B20F17C39384B04ABD49,
	ReferenceCPUOps_Multinomial_m22633BF7C23989C6E84290D1841BF58255E63FF4,
	ReferenceCPUOps_OneHot_mB2F31AE83E85A93113A47E8E42DC370F211273DD,
	ReferenceCPUOps_TopKIndices_m56C2E731868D216FD87B5AB7E8E6996E62ACDEA6,
	ReferenceCPUOps_NonZero_mEDA250C1C790914D94CCF738688D679C90C2268A,
	ReferenceCPUOps_TopKValues_m13BF79A919F3446B55691F9794CE5FEA76F29386,
	ReferenceCPUOps_Relu_m9F16A4BCF3F669C0212E1B1A9A37B05C5C6ED281,
	ReferenceCPUOps_PRelu_mD66A33739F40728092AD8785B9CBBE1361C6E5F5,
	ReferenceCPUOps_Softmax_mB7AAE486546649CC2DE3180A6B528936145B0009,
	ReferenceCPUOps_LogSoftmax_m2AE5DEF7FAC8161D88003BA6CC995AA7362C0515,
	ReferenceCPUOps_Tanh_mD03873E686348879CED3A1C1353163E96902A498,
	ReferenceCPUOps_Softplus_mA40C1354AA7D856DFC786849206AB063E50925B5,
	ReferenceCPUOps_Sigmoid_mF4F9DF029D6C5A955CAA34828EDA05CF4AB76524,
	ReferenceCPUOps_Relu6_m7E9C001DBCECE473CEB7DD4E11AE4ACC8118E59E,
	ReferenceCPUOps_Elu_m78390E2FB4A096B5B8E0EEF60AFCDFF8129BDA12,
	ReferenceCPUOps_LeakyRelu_mB2CF2E89A5FA4945E69F714852EF3B9685EABCB0,
	ReferenceCPUOps_Selu_m2EA87D9FF861C9D83F871BDAD1F4DD236236DB26,
	ReferenceCPUOps_Swish_m9CB9C463C72B67D3652F1EE19763028B21BF8AD9,
	ReferenceCPUOps_Abs_m6040C63A1B0982F2D4969C04E9AE98AD1548B408,
	ReferenceCPUOps_Neg_m71B20F96A3761A424754E43F246026E26304B386,
	ReferenceCPUOps_Ceil_m89B535BBC1B751DBF8AE264DAB18095E8BDF8292,
	ReferenceCPUOps_Clip_m70F2BF95312DC80359B1C01A336ECFF03354B66B,
	ReferenceCPUOps_Floor_m643432B1B7DB877B354F1537281872D6D9300BA1,
	ReferenceCPUOps_Round_m9195EE82C2B02539D5F8FD178FBAF3F4FF416A33,
	ReferenceCPUOps_Reciprocal_mD0D819E231BBCC121D98C0C5A7EFF0EDFEA2458D,
	ReferenceCPUOps_Pow_mA198056A26762880727FDE3D38E9070E9CDF3A1E,
	ReferenceCPUOps_Exp_m03A6B0CB8B636F5A301968683195E04ABAD74C2A,
	ReferenceCPUOps_Log_mC8E947FCE61355F03646286CEC3A75E060597C47,
	ReferenceCPUOps_Sqrt_m9FE461D2700CF2B498587926627CF89A709BC8A9,
	ReferenceCPUOps_Acos_mB9938A250EB504ED35D293A37A42130DC9144060,
	ReferenceCPUOps_Acosh_m9B03BDF09AA939DA3B7C65E4A81FF6A1BA14C826,
	ReferenceCPUOps_Asin_mCC86505AA3550D7693C322329ED6535EB0336749,
	ReferenceCPUOps_Asinh_m03F3368DBE67DD1CB46F6989E03C72FB91BCE9E7,
	ReferenceCPUOps_Atan_m69A60172462260656DA2E2DCF590E086F1690D0F,
	ReferenceCPUOps_Atanh_mED920167218BD4D71FEFBF4C62673366FC3F7A44,
	ReferenceCPUOps_Cos_mFD16261C9F4ED5875C0C37992C28FFCF09952C43,
	ReferenceCPUOps_Cosh_m4FD826E1D2379F09563F4218366C560F91BBA825,
	ReferenceCPUOps_Sin_m9A04FE2D7A3CD79E8ED864D9266A45D85A7C8127,
	ReferenceCPUOps_Sinh_m5113C4C0B7EF376A0B1152925712EE01B35C5305,
	ReferenceCPUOps_Tan_m04D12768E5FF3F0EC4FF0CD42AADBC34FD634902,
	ReferenceCPUOps_GetAggregatedDimLength_mFC6A2CF70A4D19E8E3ED72B7CE6A5AD20F325BD8,
	ReferenceCPUOps_Concat_mF5E102F6C04B89D9F47075978AB44D212F85FC11,
	ReferenceCPUOps_StridedSlice_m36E2A848556CFA62A8444DCD1979468A34BD8874,
	ReferenceCPUOps_Tile_m3042A060A796DEEBC610ECD2657F59701EDC87CD,
	ReferenceCPUOps_ConstantOfShape_m9FF3EE4606E010D9684A88F5A7966F907A586C0E,
	ReferenceCPUOps_Shape_mA0B2C93A9B0D7250A395DD38438346239240BB07,
	ReferenceCPUOps_ApplyElementwiseWithBroadcast_mDE4B2864B1CCDAF5C25F38D03EDD3B2F2EB6A0B0,
	ReferenceCPUOps_Add_m7E20D8BFCA5269B881CD8C677E6389F3C71E8044,
	ReferenceCPUOps_Sub_m9CA89DCB43FA325A28A344E39DD3C0B482EE56BD,
	ReferenceCPUOps_Mul_mCBEF13680A4DB2BDF37E76F7D4A4AD82881D0A29,
	ReferenceCPUOps_Div_mBC6C9C293BA89993C528D4FF748317D6492801EB,
	ReferenceCPUOps_Pow_m8D6EBA259F5E4CDDC711E4E54B0E35306A973ECC,
	ReferenceCPUOps_Min_mA10514622D59DA380E252C5FC0BCD3B3591AE17D,
	ReferenceCPUOps_Max_mFF458489F145E41FB903BE4C798EB77F09619320,
	ReferenceCPUOps_Mean_mAF0FB7BBA8A048FA5BC9AAFC4023067277E72BF2,
	ReferenceCPUOps_ReduceMin_mE4A2FDF71425AC3BC1D5A8B7C717B5D36E06FC97,
	ReferenceCPUOps_ReduceMax_m41945722DDACCDB9293AD5B3EBB3CA0AC5F4FB7B,
	ReferenceCPUOps_ArgMax_m07D0E7E6593FE7252B6F907D7AAAC83549B4E6BE,
	ReferenceCPUOps_ArgMin_m2FD54FFF4BBB8216C2B7E13CDAA290EE7D0D734B,
	ReferenceCPUOps_ReduceSum_mC3C26EE2935ACE5CBA6C6F501FB29CCB62FA52A7,
	ReferenceCPUOps_ReduceMean_m522E9355B441283ACCE5924C5C1E3DFF03C37291,
	ReferenceCPUOps_ReduceProd_mBCAD632C99EFF393D1640930EC72AE4E9C28E9E9,
	ReferenceCPUOps_ApplyLogicalOperator_mEAD34540E2E1E45B67B8E7CA1EF132C62D2DD4DC,
	ReferenceCPUOps_Greater_m1FDCE19F53ED4D8AFFF08CE61806289242011E05,
	ReferenceCPUOps_GreaterEqual_mBF5842368F5780649D120856EA396D3938C0017A,
	ReferenceCPUOps_Less_mB91B406F1377F6F39C4F30C14E37D3926FE82528,
	ReferenceCPUOps_LessEqual_m93BDA253150A27CC933A00082FFECEE953DAFAF7,
	ReferenceCPUOps_Equal_m2D16728B3A7AC24209E111DAB1C63FB86861E69D,
	ReferenceCPUOps_LogicalOr_m913F5D7A49AAA2D4755319EF617FC626E3E87D92,
	ReferenceCPUOps_LogicalAnd_m1B221CFDA7DB934561CDEDE9B3D0C58FEDAC6C9C,
	ReferenceCPUOps_LogicalXor_m8C82A444020054F5A445109C1B0D9D640435C4F4,
	ReferenceCPUOps_LogicalNot_mFAA75A49EBE730F81A4B862D47F076D0AD87E546,
	ReferenceCPUOps_Sign_mB482588A184E4E44EC5C74036A81D9C6F7F0C463,
	ReferenceCPUOps_Where_m8248201EE4728ADB559F4BBAA27B6A6836B75BB2,
	ReferenceCPUOps_CopyAndReshape_mB3BC9D1C8C85F13291CE0D557836920310AE835C,
	ReferenceCPUOps_Copy_mB909BF48C5BB1A0B6DC45EFED08188183D0266F8,
	ReferenceCPUOps_Flatten_m9CB3A8A10306D254AFE2A0BD3D6E233D7A65FD71,
	ReferenceCPUOps_Reshape_mE52E1BEBE4D5A008CF2D76D4ADE38ABA72696F98,
	ReferenceCPUOps_Expand_m00577D390D4CDD4ADAC5657C04B05C8075DA8CAA,
	ReferenceCPUOps_Gather_m8514EE1410EEA405CC97D716BDBE5F7BC624ED66,
	ReferenceCPUOps_NonMaxSuppression_mE9E39D3F80D2FEBD4934550BDBB61D99940FFE0D,
	ReferenceCPUOps_LSTM_m3DFFBD495AA5E73FB061164BC667B3BBEDE1E462,
	ReferenceCPUOps_Transpose_m984AEE6B18B22C7CCFC631F425C363E4264719FA,
	ReferenceCPUOps_Transpose_m6AE5DEED3A3CC4A8DCBA49E4EBEBCD3368C5B015,
	ReferenceCPUOps_Prepare_m5EC4B6A0CF7E4FEDA2960E9809D8DD987450DA4E,
	ReferenceCPUOps_U3CPad2DReflectU3Eg__GetReflectPaddingU7C33_0_m9CB7D37118FB71AF3236BC0732350AD21109AFFF,
	ReferenceCPUOps_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C34_0_m6AD912B55E378DD38E225001574C566CE79261CF,
	ReferenceCPUOps_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C35_0_m5D272D2F63E7221B188C8F95C8B4160EB1BDC689,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C128_0_m2E1ADE6AA2438B79C2FBDE2824B7AF2E26885B27,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C128_1_m968C7F67F89296B3511A8CD9FB1AB5C89706B61B,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C128_2_m89F9D7F193913012B8CCE5D03350DDBA12BCFD44,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C128_3_mBD5A1211AD73BD3AEEA92724AC86A00A6CBF918D,
	Seed__ctor_m5074B5C4B837D374E1EE716B55027B3C5008BAC2,
	Seed_Dispose_m4762924B33317D7C967DF253D5BD61E946062D5F,
	U3CU3Ec__DisplayClass30_0__ctor_mFC242E2FA565763F4A038D743871D685E42347CA,
	U3CU3Ec__DisplayClass30_0_U3CBorder2DU3Eb__0_m63AB2651EADB8A1A4DEF6F0F5D944AB71BF6E7B6,
	U3CU3Ec__DisplayClass31_0__ctor_m30F1033E90763F55BC1DF0DA397BFAEBEA19C5B6,
	U3CU3Ec__DisplayClass31_0_U3CBorder3DU3Eb__0_mDC67CF47D71C760CADF157DB4A07504F3F0B2C16,
	U3CU3Ec__cctor_m90C79CD90FD98ABBBA5FAFFF01356EBE621013CC,
	U3CU3Ec__ctor_mB660F9829CA32758F455779D54BC414EC3E45734,
	U3CU3Ec_U3CAddU3Eb__95_0_mF6241D8EF00E9E67874C0ECC058D6B62E2F6FFFB,
	U3CU3Ec_U3CSubU3Eb__96_0_mB405B029E39F49B71C4EFE71CDA04E7E6603C2A1,
	U3CU3Ec_U3CMulU3Eb__97_0_mFFCB0FD31A22BBF341CBC174382E4F752D684856,
	U3CU3Ec_U3CDivU3Eb__98_0_m8A527ECA0C82147DAF92A8201EA60D24EB44CBAF,
	U3CU3Ec_U3CPowU3Eb__99_0_m78E7CFD11448BE1722FF200585A616BDC59FF33C,
	U3CU3Ec_U3CMinU3Eb__100_0_m30621CE45E1460581D0965C52CC802C7C5AD0C54,
	U3CU3Ec_U3CMaxU3Eb__101_0_m2F8FDB3B9ECBD8526AA01DC787D9A3BC9D7F4EFF,
	U3CU3Ec_U3CMeanU3Eb__102_0_m4B0B3BA76C0686F7CB647F9F08566817D34CD0F9,
	U3CU3Ec_U3CGreaterU3Eb__111_0_mB546C8CFA9FE152B9EE88A8157B52B60965BB43E,
	U3CU3Ec_U3CGreaterEqualU3Eb__112_0_m82ABEADFABA799785EA1C3FA98FB5E41F095D312,
	U3CU3Ec_U3CLessU3Eb__113_0_m3385338A85B6B0FBCE999D2133E78BC25F535098,
	U3CU3Ec_U3CLessEqualU3Eb__114_0_m42C55CB471C0DE4225B2FA5ABE2B810C621BEB75,
	U3CU3Ec_U3CEqualU3Eb__115_0_m30671C3FA9F1E55118A1511E4BE1D0D20CAE7170,
	U3CU3Ec_U3CLogicalOrU3Eb__116_0_m120ED7D367A0ABA0C7F64E46A739189BC6586349,
	U3CU3Ec_U3CLogicalAndU3Eb__117_0_mD0519FE0740B2CCC0EE109586A9918BA6754CF86,
	U3CU3Ec_U3CLogicalXorU3Eb__118_0_mCE28F56E333A67EE92D47CFA31B5D3DE33EF6AA3,
	MathfEx_Tanh_mD886F38E2C989739750E15250B733E3D72A0F3E9,
	MathfEx__ctor_mB9E6381F67ECD7438F611CA3065738ABBE32CC74,
	ComputeHelper_IDivC_m68B82F5E6E277DE57A010E9EF30459C02309CEF9,
	ComputeTensorData_get_buffer_m871D4B1FCDF042BCC6F15CA88CFD61FEF5D2AEE5,
	ComputeTensorData_get_offset_m97FE30EACCBC9D157348956B3151775B4D9745B1,
	ComputeTensorData_get_channelsOrder_m0EB81830CF353AD02ECF1B766BD7E3643954137D,
	ComputeTensorData__ctor_mA4E49ADFA38BB811ACA331E6C82400B948A944E1,
	ComputeTensorData__ctor_m136DAC864CD5F4DB4E9C62DEFD8CA8C962336DF7,
	ComputeTensorData_Finalize_m177D03DD9E85D4CDCAC625D93E613084983DDC59,
	ComputeTensorData_Dispose_mAC6FB78501C3EC067EE35BC57FD4A595A4843AB2,
	ComputeTensorData_Reserve_mB1D0AD8397FD623F3BEC403C5B011AA8D24435AB,
	ComputeTensorData_Upload_m76DA3E80B151FC0C7BE0AFBD8D4A75E770071D65,
	ComputeTensorData_ScheduleAsyncDownload_m0273C40ACF1B7863DB538C284FC46996E9556B5E,
	ComputeTensorData_WaitFor3Frames_mCA7A7C79B341FB288A427664FF467679E2237C7E,
	ComputeTensorData_WaitForAsyncReadback_m0D2332108C99212DC2AA6C61224A0B72E6B3C500,
	ComputeTensorData_ConvertFromOnDeviceFormat_mDB89A6D0EEBB45BD082E1B515916834D7023318D,
	ComputeTensorData_Download_m12AD5F68D1C6303823E2498215EBB9545E96CF28,
	ComputeTensorData_SharedAccess_m86911C933F1F15B9C6123CC57C886FDD918AE1BC,
	ComputeTensorData_get_maxCapacity_mED9B6E52F7297717E3FE3E7D085A94C25F5D8E6A,
	ComputeTensorData_ToString_mCD85CD059EAE8FFE51423AE869EC7F29CD976117,
	ConvertFromOnDeviceFormatHelper__ctor_mF1E18421E5A5FFF50DD9790BC585DF497DCD3D92,
	ConvertFromOnDeviceFormatHelper_GetNHWCData_mE166A18B568EB3AE627B9AEE80D9D948051F3491,
	ConvertFromOnDeviceFormatHelper_ApplyConversion_m92DEE2B697791C03E7AFD04EA20412B33126CBDA,
	ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_m91BCBB27D8CC06D50512F0E1525920244F8412D1,
	SharedComputeTensorData__ctor_m58DB646DB237AC2F0EFE352B9F5906CA433B787A,
	TextureFormatUtils_IsRedOnly_m0755E0FD3A8457EAE0A81E1AA4F7F78BA1E98D8D,
	TextureFormatUtils_IsRedOnly_m61431F2BCE86BA6F954DFF073FAC30870951F54D,
	TextureFormatUtils_IsRedGreen_m39341BE6E10E0166CFFF1B43AFE8CAF476892BFC,
	TextureFormatUtils_IsRedGreen_m69D7403951A01E1C4ED4F14074795A0EEECF4B28,
	TextureFormatUtils_IsRedGreenBlue_m4E3CE78E194C28F56CEFFBF002641D93D7C59766,
	TextureFormatUtils_IsRedGreenBlue_m9E4C5DE62E98DCC6107F76945CC7DB5313D2055E,
	TextureFormatUtils_IsAlphaOnly_m5C0F6DD14ED7D874044A4218C5866D24DC33F77E,
	TextureFormatUtils_IsRedOnly_m6E00B22CB7C221CBE65344F35D71144E1FE9EE23,
	TextureFormatUtils_IsRedGreen_mA13CD2F4B368FDBB5247D5FBE1090E439EDA1CBA,
	TextureFormatUtils_IsRedGreenBlue_m33B973CB8D76A988B32F3EBD45CAC5EF3DCD4680,
	TextureFormatUtils_FormatToChannelCount_mA92B545E17C09479B2A73239989A93BBA3333BC2,
	TextureFormatUtils_FormatToChannelMask_m2E4DB85A60D8222406D00E11B944680051E17F5B,
	TextureFormatUtils_FormatToChannelReadMap_m22BB248DD5B78F5964724A54D20965A7C9FB0494,
	TextureFormatUtils__ctor_mD2522F8F2FB792701D5BDF32644371CADDF5BC25,
	TextureAsTensorData_get_shape_m22A73B556E4C5BC1DB117B235F487D1F6309F58F,
	TextureAsTensorData_get_textures_m96995EA6DCBE3C28C6E277BBD35ECA1D64BC3154,
	TextureAsTensorData_get_interpretPixelAsChannels_mC1C6EB79A2F80320369200EDF44A44FC771DCD35,
	TextureAsTensorData_get_interpretDepthAs_m25137D7B5FA41230E6AF4A43D1BF0CCC39FD7226,
	TextureAsTensorData_get_interpretColorAs_m02AD2AEA6851CB03098C480070528D0F4FB60679,
	TextureAsTensorData_get_flip_m03F3BF9A9D1FA0433BA0A9576B0E5A92450EFF5F,
	TextureAsTensorData__ctor_m65BE35D1DE6599C677C877EC66031E1D3CB811A7,
	TextureAsTensorData__ctor_mA0A0FCCF598E205DE5EC0109E17FB6834DCD516F,
	TextureAsTensorData_Reserve_mE0575F51FE11E0BB8509B411F561161C73345F97,
	TextureAsTensorData_Upload_m26B8684C866E9C84FBC7DC5B91B5CDA39AF7CED7,
	TextureAsTensorData_ScheduleAsyncDownload_m768DB3A2B4FB6DABA25EDFB196BC4E8C21125576,
	TextureAsTensorData_Download_m396D05BFBBBA7B66CF94565391491122A1A0AB78,
	TextureAsTensorData_SharedAccess_m7E8C172E7B091C538275B861C9BAADEAE6A3168C,
	TextureAsTensorData_get_maxCapacity_m8D60A425300B7E1BA88217951B20EA1E17F67C66,
	TextureAsTensorData_Dispose_m1D21E36E0EDA7DDFB9798A2569EA69A1306A9232,
	ReferenceComputeOps__ctor_m7015EB8D61F337EBEC35CABE416DC3FD53177265,
	ReferenceComputeOps_Pin_m0761F8645DF407639DD554652C4582AAE7FF28D3,
	ReferenceComputeOps_SetTensor_m7B3AC10D8F993FDACB658D8CEC947809E5876254,
	ReferenceComputeOps_NewTensor_m978193634554359F463A71266CBE434D6E20301A,
	ReferenceComputeOps_Dispatch_m993BB64FFF3C27BC5C3F42665128427B1D16488D,
	ReferenceComputeOps_TextureToTensorData_m0CD7274F1A0DDA45EC7E67396AA0E7433FFBB90F,
	ReferenceComputeOps_TensorToRenderTexture_m484756EBAB9E23D8EB386A330A4BD05CBCFA1EFB,
	ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m4EDF683FE3C75191361208F4431C5757B58477B0,
	ReferenceComputeOps_IsFusedActivationSupported_m2753689069A769A4ED07AF670743E7C272003923,
	ReferenceComputeOps_MatMul_m72D42E7B617541203028189C745EAE329B20B202,
	ReferenceComputeOps_MatMul_m5BF289412CADB8954257DF895033D382D3BE29D6,
	ReferenceComputeOps_Dense_m855B7D0BC03A8DF5FFAC334753DE368253DE3564,
	ReferenceComputeOps_Dense3_m5088E29C8D7CB43F208E8F25239CB5E0BC8137DA,
	ReferenceComputeOps_Conv2DWinograd_m19FBF00F9189DCF6F885A0BFC5FBFAA009606CFF,
	ReferenceComputeOps_Conv3D_m0EEDD1FB8B5196198AFCA60D3C616B6E70C11CAB,
	ReferenceComputeOps_Conv2D_m8C395F718A39D198CE9D5F49F15BB683D56737BA,
	ReferenceComputeOps_DepthwiseConv2D_m7055927965C9822D1F9101499CCAC36F4FCEE23B,
	ReferenceComputeOps_Conv2DTrans_mDAFCFDA35A921B380CF62BC36D1682A4899D5D94,
	ReferenceComputeOps_Upsample2D_m2B52DDABC617A684DE01BFB6804ACA1A082B8DB4,
	ReferenceComputeOps_Upsample3D_mC3C0124EBF6720F3019A5819F7A954D295FF4DB3,
	ReferenceComputeOps_Resample2D_mAE51608B8FD0B9CDFEF311792A0568C8FA790E4D,
	ReferenceComputeOps_DepthToSpace_m2E7132C0E924DF4107B62C6C2D1B82C19795211D,
	ReferenceComputeOps_SpaceToDepth_m49AD31C10C175D75DEDD157B834C04D4CC6E251C,
	ReferenceComputeOps_Pool2D_mF9EFF757A80B0BF58ACA039520759C2090612C5D,
	ReferenceComputeOps_MaxPool2D_m57635074B58E5BEFF315ABAA8476B8D6A8AA18B3,
	ReferenceComputeOps_AvgPool2D_m3B8F45528B5A3E4405A87A9703AD982278E738CD,
	ReferenceComputeOps_GlobalPool2D_mC9CE5D474C72C3720DE8E7AD8FA0392B52F4F126,
	ReferenceComputeOps_GlobalMaxPool2D_m7D668FF9C15C1A628DDB87F473D0F5717CF8A11A,
	ReferenceComputeOps_GlobalAvgPool2D_m37E0491FFDEE78F5B073B3DDBFB1E69244BEADC5,
	ReferenceComputeOps_GlobalAvgVariancePool2D_m96F51F5D263DA49FE8C6C5E6AA5EF42739123ACF,
	ReferenceComputeOps_ApplyPadding_m208B39A8B5E298C1256AC7076F52CEF138113EFD,
	ReferenceComputeOps_ApplyPadding3D_m108F1CE7CFF3C05EB6C5A202995102B970AFC889,
	ReferenceComputeOps_Border2D_m4B827531007267E3928CD6063BE31C2F42D2208E,
	ReferenceComputeOps_Border3D_m714B7B913885093905CC138DCBDB084EDFF4B0A9,
	ReferenceComputeOps_Pad2DReflect_m2ECFED62550A6E4C9B708213F2184773A940CD94,
	ReferenceComputeOps_Pad2DSymmetric_mFE0EB011F598CA1D57FE8A1B2D19676BB771C4AB,
	ReferenceComputeOps_Pad2DEdge_m604B942D8CCA04565FD12D0C5544F5CD5878B93F,
	ReferenceComputeOps_ScaleBias_mBBD7DC87CA0C1B792E73178DF4C2039FCC407EE0,
	ReferenceComputeOps_Normalization_m1684FEAB081AF5ED2DA9674E23D13E4B6859F551,
	ReferenceComputeOps_LRN_m01F5B129B1313A546709486B553BF705D37B5C3A,
	ReferenceComputeOps_Dropout_m4DF43285D85F7C36673BF9D4BADFCB4B9C3E239B,
	ReferenceComputeOps_Activation_m072F67AA142BBE0AB38ABAA43DA8F086BE45622B,
	ReferenceComputeOps_Relu_m58AD0876DBA6DD05F3BF8A291F8B1A7230D20587,
	ReferenceComputeOps_PRelu_mF4C5381A27FCDB91E4C36966DF870E788CD0BA12,
	ReferenceComputeOps_Softmax_m6D53888D61D3FAB09932F5F4889D309AF04C6F1A,
	ReferenceComputeOps_LogSoftmax_m13C4261EDB14C62A960B04D7027CB6D3536D885B,
	ReferenceComputeOps_Tanh_m834623EA5F3FA8F3F3DF71F90230AFFDA56607E5,
	ReferenceComputeOps_Softplus_m2259E5A43ABB5698DED9C4103D791E459C0EC709,
	ReferenceComputeOps_Sigmoid_m7E83A158030433AB695E780C1A76DC3F12054887,
	ReferenceComputeOps_Relu6_m627AEAD673B09EE8B379D125C3C0EFA96D7DB6AC,
	ReferenceComputeOps_Elu_mACD372AAF9FE14080972F5867BCD4B0B7938CC13,
	ReferenceComputeOps_LeakyRelu_m43C0A24CACFD56AFF8A5D856C1007089313FFE30,
	ReferenceComputeOps_Selu_mD1BCE72FC90AE9B6E8797672899FF2B774A7A49B,
	ReferenceComputeOps_Swish_mC505B9F4429EEA6A404D46077AA053D466CFEE39,
	ReferenceComputeOps_Abs_mFDBAD3275867FCDB19E6B78C5ED21FED63A693B8,
	ReferenceComputeOps_Neg_m7283CB2E6375BEDC545E45C83D1EAA4B197A777B,
	ReferenceComputeOps_Ceil_mB3A6E4E85CFAAE110F003B2AA3A19F250DE15446,
	ReferenceComputeOps_Clip_m3EE29DCDB4DD62D50FBC65425C19E8BD0CCED361,
	ReferenceComputeOps_Floor_mD6A2C28B84B28EE6F0A823D8164C0F69052359BC,
	ReferenceComputeOps_Round_m9143BFBE3B899B94CF0BE4AB5E73D0A94FC4161C,
	ReferenceComputeOps_Reciprocal_m686A123FA15748B9022446B4652CBE9259554934,
	ReferenceComputeOps_Pow_m229351D3968ED09F3BA4827DE9CC9CDC9A7D8676,
	ReferenceComputeOps_Exp_mDEC04E5CE8BD51EE6F7A5E9E4A2F10FE757FE974,
	ReferenceComputeOps_Log_m6FB98230F78F6487327C166D3EE4ED5A29007C12,
	ReferenceComputeOps_Sqrt_m846DE0C2FE7F4DDF2EE7B8E93A0ECDCAF34F5679,
	ReferenceComputeOps_Acos_m4C87C0EC0737F50923B3D1266422FD81E8B65DAB,
	ReferenceComputeOps_Acosh_m1E280D79A32D641EFCFCE573B6B0B5B38F079D32,
	ReferenceComputeOps_Asin_m7957F375356127782A28F1EB399E8C2CAB97504D,
	ReferenceComputeOps_Asinh_m79760FBA90B7E5B0455AA9CC08F03304E8AE5D1B,
	ReferenceComputeOps_Atan_m92D87BE083D9C8BBCD0FBECF91C668A69F3F98ED,
	ReferenceComputeOps_Atanh_m3515ED5E2F49262FCDB9936B774C4CFDA4F30C90,
	ReferenceComputeOps_Cos_m2BBEE5D7364F038C175F50147DB5C38818800735,
	ReferenceComputeOps_Cosh_m7D844C8462DAE6D0A58E773EBE68060509A24738,
	ReferenceComputeOps_Sin_mE2173E8B087346DB0C4E7260C1AC1B51E5D4D272,
	ReferenceComputeOps_Sinh_m2FF71210D8F20EDC7369972C23C2087F4E110259,
	ReferenceComputeOps_Tan_mE745FFC785E54FBEC089ADD7B0508AC53825593F,
	ReferenceComputeOps_Expand_mA073F6F9C3B75865FE16FC6CD532BAD8333A49F5,
	ReferenceComputeOps_ElementwiseWithBroadcast_m21C92CF1EB027B927975315E0D955FB2A66BAB2B,
	ReferenceComputeOps_Add_m89103D015ADA20B87CC1498A4DE9FE5B2BE459DB,
	ReferenceComputeOps_Sub_m8E439F89C1698E2C7B6EE0CC4DDC8D0E8E09E778,
	ReferenceComputeOps_Mul_mCF27AF6011F95B5DEC76E45D26D8A474B1EF6192,
	ReferenceComputeOps_Div_m12654E5CE8ACD0EC04F229C8838E4312262426B4,
	ReferenceComputeOps_Pow_m404C8E200A50CC31E40DBBE6161859302FB75E2F,
	ReferenceComputeOps_Min_m7D5CB28E5506DC42B7C2ABE56F0E7FFC25D3F727,
	ReferenceComputeOps_Max_m7B435B1EDE01A15D7F8AC467BE1D6C7A424DF492,
	ReferenceComputeOps_Mean_mE0623E979ED4F4B82FB1512EC586C2DA5CD062CA,
	ReferenceComputeOps_FillReducePermute_mD8ED2661B19366FA903221EF6B73EAAFFE9A0387,
	ReferenceComputeOps_Reduce_mF78EA7C2E36826F145ECF41670C74334A6BD558E,
	ReferenceComputeOps_ArgMax_m162A9E292C0098F3A90BD855CD1FD20CC8A32A2A,
	ReferenceComputeOps_ArgMin_m3BAAC2ED2F9BB2D396B9330601AC1D9770442BA6,
	ReferenceComputeOps_ReduceMin_m9B28CFE4396661EFC463EF7ED6B3235CC292B878,
	ReferenceComputeOps_ReduceMax_m7D7511D33D7276539678F6B3D990774AB7B4ABEE,
	ReferenceComputeOps_ReduceSum_m3EF0B5221FAF15E68EC2C49DDFD949AAAE548CA8,
	ReferenceComputeOps_ReduceMean_m57A374630D6C5FFC73F8B33A8A001618F7CFD9E5,
	ReferenceComputeOps_ReduceProd_m6436A6291861EBA286787DCB40410FAFEA4AFD2B,
	ReferenceComputeOps_Greater_m47A06B2EA88A3DC28FE0320931ECE793A2A7E9F8,
	ReferenceComputeOps_GreaterEqual_mB73659554E2E7FF6A9E2DC804507074925CBF399,
	ReferenceComputeOps_Less_mAD45BFFF656158E4052BC0E2F95A6D8FDBF338CE,
	ReferenceComputeOps_LessEqual_m00A9B1E66BB2B99B6E26A3B0D23AC92B8B4A995C,
	ReferenceComputeOps_Equal_mC266A2909A7C15BBB3264B0DBF51451E911FC738,
	ReferenceComputeOps_LogicalOr_mB91503CFCBD5C8209E1717A3BDB4EAF73B5CE8BC,
	ReferenceComputeOps_LogicalAnd_m52E7D7D7599565FDD24F3F9C079359632AC361E8,
	ReferenceComputeOps_LogicalXor_m0F7D08FED2C01BEA69BE622DBC62A3B4329DEB92,
	ReferenceComputeOps_LogicalNot_m98AB6EADD8C2F5D2EC2774802AFC719044B25F2B,
	ReferenceComputeOps_Sign_mA98804879A4F14F00AF70B43ED4A4ED7FE38238A,
	ReferenceComputeOps_Where_mB4E292A051673B571C13940A2AE0113A4515B3A7,
	ReferenceComputeOps_OneHot_m73A829E5811A7BA8EE3CE62917D5F8FEA3450530,
	ReferenceComputeOps_CopyAndReshape_NCHW_m92BE0B60520B356F17F52885CA77E7F3055D0279,
	ReferenceComputeOps_CopyAndReshape_mF6EB780C38B1938BCA139A33097141886997A8D7,
	ReferenceComputeOps_Flatten_m1889DD3B9D7EF058FBAE736E6C030E24B5D2C318,
	ReferenceComputeOps_Reshape_mF4EFC3B7D99526AA111ED8060D4B1CCEC447254C,
	ReferenceComputeOps_Transpose_m2D3640F935205FD218FC1D02593355C94467D927,
	ReferenceComputeOps_GetOnDeviceShape_mEA02DAD8515B92AE92CD4CD6F61532A53281145E,
	ReferenceComputeOps_ConvertPermutationToDeviceLayout_mF0FB4D08EFEEBAA5636CA9ACA3080E8842109F44,
	ReferenceComputeOps_Transpose8D_m34273C627D2602E362EB7E7D9F9F4C4664A038EB,
	ReferenceComputeOps_Transpose_m2DA0BA39D4948CD67DC4E1191C06610CD07B0F6F,
	ReferenceComputeOps_GetTensorInCurrentMemoryLayout_m41B9A378AB8CF7C1A9C98DC4EE61E006AEAF2ED5,
	ReferenceComputeOps_TransposeToChannelFirst_mEE097A9D1D0CAB4B2DFAF80BDFA489B4D1A30F40,
	ReferenceComputeOps_Concat_m52F38FB853513F52F2F2EB9348027E24E8DBC6A3,
	ReferenceComputeOps_Set8DParamsForShader_m03228CAAB648DD7FE5780B5B512F86B8DEB0EF4A,
	ReferenceComputeOps_Set8DParamsForShader_m802176414520F3DA1BA60F62A97F45EB7CDBDAE6,
	ReferenceComputeOps_StridedSlice_mF38ECEB036A0FF257064501C50FBA3E9DD1328B4,
	ReferenceComputeOps_Tile_m43B959019023B6F085B8694F28C456E68473AC1B,
	ReferenceComputeOps_Gather_m853C4BAA2874EA13380F866955AC61C80B5E0174,
	ReferenceComputeOps_Copy_mFDB097EE0A824EA2015E8069713464E406C43390,
	ReferenceComputeOps_Prepare_m49ACD3A62F871AC44AB630B5E019BF6E83B336DB,
	ReferenceComputeOps__cctor_m03D36AAC00E0328E863A5F4ACACAE2E520906CB3,
	ComputeFunc_get_threadGroupSize_m2F7E9003C06C3EC3BE1356303ADD0662A2C0FD40,
	ComputeFunc_get_width_m025759585897ECD467C6E73686BCDA8A20BD11D5,
	ComputeFunc_get_height_m174A3D762763192F67CF141CEB53D83D165933FD,
	ComputeFunc_get_depth_m27A7A2A0E50FD3F450AD01CA9A5F85E8505BB8FA,
	ComputeFunc_GetTensorDecl_m4042E73E1E6CDE3514B1462AD5AB3ABDE38DCC06,
	ComputeFunc_GetTensorData_mE4BBF9E8623D2B731D3FCAD8C742838B08201456,
	ComputeFunc_get_dummyTexture2D_m07A372AD52019E40CDF0B228C0A58C17B13A25CE,
	ComputeFunc_get_dummyTexture3D_m4B1F4811745A0A6C9A5028AD5801FAF7574571ED,
	ComputeFunc_get_dummyTexture2DArray_m363E218CD132AB75A0253A16FA4BAE76055E8689,
	ComputeFunc__ctor_mB18BD7FE3A993830F933080E40209C5C9EF38302,
	ComputeFunc__ctor_mE72583BEE682EFE80CBAEF2226B000C2704B66EC,
	ComputeFunc_SetTensor_m5240B86B2C6218E7B4427AEC1A0DCC0B1D2F7E7F,
	ComputeFunc_SetTensor_m75809DABD3AA12B2933EF33C614F40508786AC48,
	ComputeFunc_SetTensor_m3D89C87997B98979986F8D4A163053C629454B54,
	ComputeFunc_SetTensorDecl_mDC6003202B8C90927F51C564C14EA7D85ECEE7B6,
	ComputeFunc_SetTensorDecl_m7683508ED3D2C10AA27E80A6B74A76984986E355,
	ComputeFunc_SetTensorBuffer_m63A49270BA6566DECB62C92542339251CDBE30C4,
	ComputeFunc_SetTensorBuffer_m52CCC193D62126AA027E316D3826474424B77DD3,
	ComputeFunc_SetTexture_m14B449AED78E27755422090DF51AADA1AC08F1CC,
	ComputeFunc_Dispatch_m3BD6D194D7D2BD47623441CFAD23F2EE6315B237,
	ComputeFunc_Dispatch_mF129519DCEA1F6A773119ED7DC809DE5372D02AE,
	ComputeFunc_IntDivCeil_m421B6ABD1D4AD6BA43791FBDC4663502D21E0038,
	ComputeFunc_FindBestKernelMatchingDimensions_mDCCAAC69FACC3DCA110B10197EBFA255E44E15AE,
	ComputeFunc__cctor_m33A512979C61E778498A141D2CDE8ABFF712BD2F,
	TensorDecl_get_ShapeId_mDB726E90755857F4257DC21F865F3DA31D557B32,
	TensorDecl_get_ShapeId8D_mBA6B0FE1E9C5A6BE07A714D3A874535F0D37A4B9,
	TensorDecl_get_InfoId_m18E2715CD57BF6BEA5A49DE1FFFBAE242820C14F,
	TensorDecl__ctor_m23281FFEF10C87E30BD42ACAD57EA74F2BCFF9B1,
	UnsafeArrayTensorData__ctor_m955268E825A4B8177CBDCBCA26102EB3124B7424,
	UnsafeArrayTensorData__ctor_mC6881E0867F1B3C964415CF7424CD153E25FED9D,
	UnsafeArrayTensorData__ctor_m9B6294FA53404A7BFF0FE590AE793435C05A977A,
	UnsafeArrayTensorData__ctor_m189B873E2573966D526BD0CB31EE177A55E7470D,
	UnsafeArrayTensorData__ctor_m19166D554FA4B8B9585238329CB4101129CAAFC6,
	UnsafeArrayTensorData_Finalize_mC142B3E7625111506420FD23EC6BFAA4F6092C09,
	UnsafeArrayTensorData_Dispose_m60E8E3BBB2FE24F201866530151EC269F04BEAB5,
	UnsafeArrayTensorData_Reserve_m8825259F134624C6C88EA64008D916C0DD431CFF,
	UnsafeArrayTensorData_Upload_mDD0CA115D8E615D235F24C0F45F95BA8DFEECB8D,
	UnsafeArrayTensorData_Download_m19C4EACD453004DB02D2E9F40E8E6D630AA0610A,
	UnsafeArrayTensorData_ToString_mF0E3661D824AA87BA33264D69C0552E475490786,
	UnsafeArrayCPUOps_get_blas_m3401971DAC22E49F2A2B2BC1F126113DA2D8B5DF,
	UnsafeArrayCPUOps__ctor_m0BF919A3BC4B0937D1A775E3AB5B9355DE69B805,
	UnsafeArrayCPUOps_Pin_mC5843B2D7D3C0315D00E85F781FC75D941AA7126,
	UnsafeArrayCPUOps_Parallel_For_m90569504ADD71A54ACBA00EF741F6C3F829060FE,
	UnsafeArrayCPUOps_Neg_m99A1D720ADB7329F5D0FF18BE7FF65F83D9FD91E,
	UnsafeArrayCPUOps_NegInnerLoop_mB452B296DA9B6FBFC51426159F1F8D6AA0B2A417,
	UnsafeArrayCPUOps_Relu_m79E07759152CF73DD16EBC6F2ED9FA17F7B71B41,
	UnsafeArrayCPUOps_ReluInnerLoop_m8926CC01FF9F0F826DEE774D400AA9060B509243,
	UnsafeArrayCPUOps_Relu6_m9B2B7A696EF6C7163FD3C62FDAA46C810C4C7534,
	UnsafeArrayCPUOps_Relu6InnerLoop_mB91C862D3F908B56CC0BCA4A0CC01F467C7104BD,
	UnsafeArrayCPUOps_LeakyRelu_m8225200C4BE96B07B22165A50B8D4184E23B670F,
	UnsafeArrayCPUOps_LeakyReluInnerLoop_mB969037F1073A30B92982E792E54577F7E20E7D4,
	UnsafeArrayCPUOps_Elu_mCDECDD426C8B83A49170818B4EFB8D030F0F812C,
	UnsafeArrayCPUOps_EluInnerLoop_m3719DE842DE081740D38DEA029EB4E73E4909F97,
	UnsafeArrayCPUOps_PRelu_mE059AA816743D882A7D72C8DB865487BEF0DEEA3,
	UnsafeArrayCPUOps_PReluInnerLoop_m107AC085189F2C84703F7A3FD2012A479F20FB32,
	UnsafeArrayCPUOps_Softplus_mD9524DFFDA70FB49A8CA6DDF06762EA2CCDD59EF,
	UnsafeArrayCPUOps_SoftplusInnerLoop_mF9727282620E2519EC5DA1FDB602FC86B73C5392,
	UnsafeArrayCPUOps_Sigmoid_mF269C9DE55C9F27CBC00130DC67BE3A164562712,
	UnsafeArrayCPUOps_SigmoidInnerLoop_mEFC296328B24299AD191859F4C3CD9F61A426AA4,
	UnsafeArrayCPUOps_Swish_m13D9859E7AE4DCE3F46D40FD9586231B823C8602,
	UnsafeArrayCPUOps_SwishInnerLoop_m817D50E2BFB96172218BAC3FBA1B43B40F226B77,
	UnsafeArrayCPUOps_Exp_mC1D9BF196B2A7DAC0A8492E5D6D6879C5A87507F,
	UnsafeArrayCPUOps_ExpInnerLoop_m4DDA6E59F4E0DF4F287079491663CFA9FBD6E754,
	UnsafeArrayCPUOps_Sqrt_m0A2670B0FF2ABB47C532C55B2CCA15149B45442F,
	UnsafeArrayCPUOps_SqrtInnerLoop_mF8505429B1D27CA6BF136FB4FAC8D0B531064FD5,
	UnsafeArrayCPUOps_Tanh_m1F12592FDB7297AF9AB7C5917B51769C4BF4DC7A,
	UnsafeArrayCPUOps_TanhInnerLoop_m1838E3009DA4BAE3743538BE797790AA85C5FF57,
	UnsafeArrayCPUOps_Acos_m3B09AB759428CE0D02C5610BE18FC109247D86DC,
	UnsafeArrayCPUOps_AcosInnerLoop_mEC8BFA293E80FE641569EA041C6D31E57D3EB9F0,
	UnsafeArrayCPUOps_Acosh_mF5F7491F29D1A7A8BE73699B2BEFC50E0F320291,
	UnsafeArrayCPUOps_AcoshInnerLoop_mF57A6832809EE4224BF7A69188B07B3309B51487,
	UnsafeArrayCPUOps_Asin_mFF9A622286E193D964F12C91B68D570C87B7F4BE,
	UnsafeArrayCPUOps_AsinInnerLoop_mCFFF3D8736AB676017A07EB31C7DD1BAF99592A2,
	UnsafeArrayCPUOps_Asinh_m11C503668CA94822BA79EDDEF169F70839FC68A7,
	UnsafeArrayCPUOps_AsinhInnerLoop_m51AB4B256197E4739BDDDE8BF714781D8DAA8F26,
	UnsafeArrayCPUOps_Atan_m7B7908C1C2186B3C09172BADE459B40DCBF36DA8,
	UnsafeArrayCPUOps_AtanInnerLoop_m6422F5CC06D0F14B35A5A6555E5DC54F67697E8A,
	UnsafeArrayCPUOps_Atanh_m9F7383CFE82638EECB2AFD51C2C6D14CCC96CA71,
	UnsafeArrayCPUOps_AtanhInnerLoop_mD7953D92A7259B6CA029BD6B685A58F8CF1D59AD,
	UnsafeArrayCPUOps_Cos_m0E75BFAA38BA939F3BA3E54BADF4D9118EC85100,
	UnsafeArrayCPUOps_CosInnerLoop_m6853D4A42E3C0AC2A59A8DDA4A184E81FFCAA3BC,
	UnsafeArrayCPUOps_Cosh_m7A5D4B88F171A31428DB3429DA1E4A6EBC57EAD2,
	UnsafeArrayCPUOps_CoshInnerLoop_m40EC8D7A314BB0C78E6E1047460EC0DF32A73AFD,
	UnsafeArrayCPUOps_Sin_m8C82F58FE17C2A2A935CB838B9D185807D3DA165,
	UnsafeArrayCPUOps_SinInnerLoop_m441441D5892996F1995E62804BEB783CE980913D,
	UnsafeArrayCPUOps_Sinh_m06BD6A47C5B3946C39E3B70AA0E81CEDB6F833C6,
	UnsafeArrayCPUOps_SinhInnerLoop_m5C2CAFEC3615962ED82300027C018D824D47082C,
	UnsafeArrayCPUOps_Tan_m99F7F1F17AF3884A8E026124AD3E7C2BBF0A3E8D,
	UnsafeArrayCPUOps_TanInnerLoop_m9C0D9CB1AECE2E098AFDA66B86D6FE0980CC2E7C,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mCCCAE5A44C9EAC4CD0068A8A2AA24829D3EC0B05,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m0B5D360BD977B7277326CC4CC4AE70B97854F660,
	UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m43A5E4FB601947C8F71E5A349870E54F4D3964E8,
	UnsafeArrayCPUOps_Add_m9A8982047953ABFEFB99A54A0B71666DE228CBBE,
	UnsafeArrayCPUOps_Sub_m1C0F8972946DC09B4F4EA5329F92CFD2EDCCC56B,
	UnsafeArrayCPUOps_Mul_m41BB7C107F19EFBF7F613BD22D338909DF9F6990,
	UnsafeArrayCPUOps_Div_m4452143F74476BAF5C2AF7D5689A09972D56D9CA,
	UnsafeArrayCPUOps_Min_m7F449E02903D9F023D48C741F0087CAA6A59DCA0,
	UnsafeArrayCPUOps_Max_mAB75F6D6FFBD1CCF6A492160D0FC9F9A62AE81CE,
	UnsafeArrayCPUOps_Greater_mC1954375D843DB8C6D28D5D62F1B4BFD48B3E794,
	UnsafeArrayCPUOps_GreaterEqual_mA82D21F588C836FD1DE3AA44BC3CC851E8D19FCD,
	UnsafeArrayCPUOps_Less_m046561FC4AC154BBF86D4036B7DBB9AA6E6FEDA9,
	UnsafeArrayCPUOps_LessEqual_mF9A6A04EA0E4D965EDF0D5921EECB2161FDFBEC6,
	UnsafeArrayCPUOps_Equal_m20299ECE854C9472B5C5CD7D3196D0EAD6A36021,
	UnsafeArrayCPUOps_LogicalOr_mC9E72F12DD8D2C027B2C2B73C3BF88968F78D9E3,
	UnsafeArrayCPUOps_LogicalAnd_m841645B010C2C72224B4C1115F2F8B0A9476A07C,
	UnsafeArrayCPUOps_LogicalXor_m9D195BFDFE9CA261E26501D8909E3F949DEB8DEF,
	UnsafeArrayCPUOps_LogicalNot_mE88189F4B6F512DCEFDC457D3B53B6B441BBE409,
	UnsafeArrayCPUOps_Sign_mBB458262B9E54AB8A3A289FA769A89BC860AD2E6,
	UnsafeArrayCPUOps_Where_mFDCBD958A08E7F9A29A13EBDB5D346F99D50D0A8,
	UnsafeArrayCPUOps_ApplyLogicalOperator_m4225B6B598B7A207593E9DB6933E6584B742AB82,
	UnsafeArrayCPUOps_MatMul_mF2AE9E87C0EB5961519B6DED517DF56B2D60F724,
	UnsafeArrayCPUOps_Dense_mCD60928A9654C5EC259FBB925A6E3209CFA0FB0B,
	UnsafeArrayCPUOps_ApplyFusedActivation_m14D65E5CF00D5BF3549FA223D3A56948D65A9E57,
	UnsafeArrayCPUOps_MaxPool2D_mD2508D0ACE40D4072DB8E652F6A03ADC49EFB35D,
	UnsafeArrayCPUOps_MaxPool2DInnerLoop_mF8AF0B7716D9F8C116B127B83BD233ED29A8834B,
	UnsafeArrayCPUOps_AvgPool2D_mE4DF4E5B3AFCB1E7FC0EBE6AA6E9FDDAEFDFABCF,
	UnsafeArrayCPUOps_AvgPool2DInnerLoop_m4D889C6790C03386C9AA544AA031797EFEEF4040,
	UnsafeArrayCPUOps_GlobalMaxPool2D_mA1984969D7A46CE5174997B615FF1F02BD5AE46C,
	UnsafeArrayCPUOps_GlobalAvgPool2D_mF2F572296CAB2616EB2D6C6FB06C959A4357B431,
	UnsafeArrayCPUOps_Conv2D_m85DEEAAF1FEAD9BEDAFCF912ECF568F75149AED8,
	UnsafeArrayCPUOps_Conv2DUsingIm2Col_m4CE0BE19058A3838A0407CEEAFEA5DF3AA537D6A,
	UnsafeArrayCPUOps_Im2ColInnerLoop_m51D863F02576049846F65C2BF0F4890A365F7F4E,
	UnsafeArrayCPUOps_SafeIntDivCeil_m92F3535AFC7A55D2FE201692F1560FA35E7A3D4E,
	UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m233D817EC376E93F8B445F4C1D1A2305C5BE4835,
	UnsafeArrayCPUOps_DepthwiseConv2D_m1B5D0735CD6BC364B43B746F216F3916D89870DE,
	UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mED061C960649ACFD67BBA85A4C531F88D3A5E917,
	UnsafeArrayCPUOps_ApplyPadding_mFE57C2C0BC1B4AC21FBCE1700E084E40F7EF58DA,
	UnsafeArrayCPUOps_Border2D_m7B1B0B362DFC5F357137F02480A3816092F8B475,
	UnsafeArrayCPUOps_Pad2DEdge_m8948F1F6934B4D11CBA5449E401B3664691DCC3A,
	UnsafeArrayCPUOps_Pad2DReflect_mE37DBAE20BF3F20057829A4EA7D7674182079F74,
	UnsafeArrayCPUOps_Pad2DSymmetric_m3CE4FE78C7F7B2E4F942A4FECC714C07442454DF,
	UnsafeArrayCPUOps_CopyAndReshape_m68A6948132EE02B5AC6EEFEE02973349A1F86293,
	UnsafeArrayCPUOps_ScaleBias_m3B17445E0E004518D87C3817AC0A277917269E46,
	UnsafeArrayCPUOps_ScaleBiasInnerLoop_m164E99B8CAD8C3AC1251950E0BC5E2BC40593405,
	UnsafeArrayCPUOps_Prepare_m880BF8665E2FC582802236E5523EF3E8878662B9,
	U3CU3Ec__DisplayClass78_0__ctor_m4A2E4A4863E709E8FE483B2AFA3B58AD17C86AA1,
	U3CU3Ec__DisplayClass78_0_U3CMaxPool2DInnerLoopU3Eb__0_m5F837706A695C04BE632EDFE7054D92CC5689496,
	U3CU3Ec__DisplayClass80_0__ctor_m77DA6A58DAB32C10A016A20C12330449E1B165C1,
	U3CU3Ec__DisplayClass80_0_U3CAvgPool2DInnerLoopU3Eb__0_mE937FD44EC8FBC298F43741D73DAACC7EE28B5CF,
	U3CU3Ec__DisplayClass85_0__ctor_mD305039E2C6872521507966C2E3BC1B5F90DA15E,
	U3CU3Ec__DisplayClass85_0_U3CIm2ColInnerLoopU3Eb__0_mCAAD3595A18692037D4F255E6C2752F9C58019F4,
	U3CU3Ec__DisplayClass89_0__ctor_m884464EC4FB755CF52B19D2E0E1B66B4E963AAAF,
	U3CU3Ec__DisplayClass89_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_m5CF479F5B9BD84C4C351AF413311766A4F9DD294,
	U3CU3Ec__DisplayClass90_0__ctor_m823476DD25DA460E917AD4FE6336C751ABFCAF45,
	U3CU3Ec__DisplayClass90_1__ctor_m87CE5E963CEA56C03F2FCF100D680EBAA607FB93,
	U3CU3Ec__DisplayClass90_2__ctor_mB32B729737113898CEF252D20032F2D6AB3AF4AF,
	U3CU3Ec__DisplayClass90_2_U3CApplyPaddingU3Eb__0_m4CA1041B4DC775CED37330C99D5ABC52CA115D07,
	InnerLoop__ctor_m1AB2AF63F6F6769DF47B8A0B04C3DC3D641AFA80,
	InnerLoop_SetState_mDA30A635BAACDC626320CD7C0901B4AFEED790BA,
	InnerLoop_SetState_m6D22A9AD25255838C932E9AA10A6345D78219040,
	InnerLoop_SetState_mDF5B031649C59202991505B77BC577BB6D66563D,
	InnerLoop_SetState_mEC1944C93803639FE2C65B77E34815583DFD1A0C,
	InnerLoop_SetState_m78FC56ECD45BD57B808F4E475CFFE5741A736083,
	InnerLoop_SetState_m82069F9440C68C17268DF970EA3209CC6DEB916F,
	InnerLoop_SetState_mFE205F29E49D17CE4C1B4626F946FD91B88A8C26,
	InnerLoop_SetState_mEFFCDC5C3129A9973B2FDDF048CFE0979128EF11,
	InnerLoop_SetState_mEEFA711EB5EE7CA53C2BE7476499514716766E9B,
	InnerLoop_NegInnerLoop_m45491AC3915C3E90DDE64E02FA0417B08592E34C,
	InnerLoop_ReluInnerLoop_mF7BDCC89835CE37283EA786029BAF8683318248A,
	InnerLoop_Relu6InnerLoop_m169CC432927660996E564773BC2A8CD10F196C65,
	InnerLoop_LeakyReluInnerLoop_mB5F05B5C23B5839FB26A4C02C3D8A0E04EDDD727,
	InnerLoop_EluInnerLoop_m0A09C9F3C7D3D44DEC22E9A9B0B1902554230BF1,
	InnerLoop_PReluInnerLoop_m8A9698F9E0C75E68C5564844C249C563487D43A2,
	InnerLoop_SoftplusInnerLoop_mA1B3A9715A66B1154CFF43C17C90DCA298E49E6D,
	InnerLoop_SigmoidInnerLoop_mAB609F410BFAC96DC174D1ECDAB841A708BD996D,
	InnerLoop_SwishInnerLoop_m964C374AC29A190E8A31886ABEF5CDD13A55C9A0,
	InnerLoop_ExpInnerLoop_mFD386947E4395FE2C0E879E76E8B1BC5975A0F40,
	InnerLoop_SqrtInnerLoop_m086753CFA692BB23FEB25F7DDD38888AE055ECE7,
	InnerLoop_TanhInnerLoop_m0D56C152887D8D9BAF112C50ACEEFD1761219EE6,
	InnerLoop_AcosInnerLoop_mF96105E71AE4FA12223B8C1C82949CE1FF92773D,
	InnerLoop_AcoshInnerLoop_mE94B143127DF97A4C935D60662BE05417344E6C0,
	InnerLoop_AsinInnerLoop_m1C1BB2866B4F214A852A9C90DDD4079071A91F43,
	InnerLoop_AsinhInnerLoop_mD81680641E181101116C5594EE858CE0BD8DCDEF,
	InnerLoop_AtanInnerLoop_mF6E508D6BA48144E971A001D01B7526866A0D3B3,
	InnerLoop_AtanhInnerLoop_m9300673FD5A4F6A5AAC30B6CD174920D90768573,
	InnerLoop_CosInnerLoop_m6CAE1D4F94BE2AE573F6A446D7646107044DF8CF,
	InnerLoop_CoshInnerLoop_m05D1506CE337DF77B7BFD912E146BE1C169AE3C8,
	InnerLoop_SinInnerLoop_m7A501D0ECEB76DE5EE6225C4709BA1F08A468A08,
	InnerLoop_SinhInnerLoop_mB4DB53A79BA6342F3EE6708D87F2C18CB5E74B30,
	InnerLoop_TanInnerLoop_mACE98CAB67E00E64A0E14AD8235F18EBBC54EB9B,
	InnerLoop_AddInnerLoop_mC479060A1ED168053CAA88FDFB4320DF78BDB9EF,
	InnerLoop_SubInnerLoop_mF21AC71BCBF0CD5E2112C0AA5DD5CC056BC1406A,
	InnerLoop_MulInnerLoop_mFCBE29EE61D871D525323CEB836F5426D8B2D002,
	InnerLoop_DivInnerLoop_m02287A5F66AEDA414A2711B814EAA71908F56721,
	InnerLoop_MinInnerLoop_mD2D73D892F6E75C1C7A50380187CF779EB138B0F,
	InnerLoop_MaxInnerLoop_m6F79433322657D03743D5B697974DC09C7E723B7,
	InnerLoop_GreaterInnerLoop_m4DC2C25DB401809319F554E0C4AE8BB2DEF46B50,
	InnerLoop_GreaterEqualInnerLoop_m49BC091FC03F5445386537292358C19CFDF52675,
	InnerLoop_LessInnerLoop_m039F298CE0B70491259DAA302ECDC77C28C19E27,
	InnerLoop_LessEqualInnerLoop_mCFA1573E64F382EFE677691AC6A55DF8F6A8C34C,
	InnerLoop_EqualInnerLoop_m2D2449C92C7BFA70183D75FF3D26BAB6ABFF070B,
	InnerLoop_LogicalOrInnerLoop_mFDEC71FF187C5F3463B710149AB861E6DCB5E839,
	InnerLoop_LogicalAndInnerLoop_mDBEF77B91629E4C1AE8395AF56EE6A50C71EE452,
	InnerLoop_LogicalXorInnerLoop_m3B35595C542643F38D139757B5AD91265F6E86C4,
	InnerLoop_WhereInnerLoop_mC48C618D7A947C09CA1719DD9D57BE5D7864D368,
	InnerLoop_AddInnerLoopNoBroadcast_mAA7A18BED681A414DDBE239AEA10ECF4C346F10F,
	InnerLoop_SubInnerLoopNoBroadcast_m8CF3B904AB1385E33DEE7DF22053156B25E33EDF,
	InnerLoop_MulInnerLoopNoBroadcast_mEA66B1D7A6A9CAFED67D68EF888D344094CE0CDF,
	InnerLoop_DivInnerLoopNoBroadcast_mC23AD221C4F2AC2F22546831FF130831C7166518,
	InnerLoop_MinInnerLoopNoBroadcast_m329DD12256F1365ACC2799E83159844D1C853052,
	InnerLoop_MaxInnerLoopNoBroadcast_m3348CE843E7B986A576E27D29DA1B883EB1F3C59,
	InnerLoop_GreaterInnerLoopNoBroadcast_mC894A8870982E65838D5C48BBBE0BA26AFCE0ED0,
	InnerLoop_GreaterEqualInnerLoopNoBroadcast_m460D3FD4F8739D888D68845041F18FABF908E9A4,
	InnerLoop_LessInnerLoopNoBroadcast_m2A48616328CD30480561BEE91940F59334E6A6DC,
	InnerLoop_LessEqualInnerLoopNoBroadcast_mDCE01BB92966F3A2B1B4CDF2280E239791841EB9,
	InnerLoop_EqualInnerLoopNoBroadcast_mB6976BBEA4834766E6A99A7D606DBE0A22144938,
	InnerLoop_LogicalOrInnerLoopNoBroadcast_m45772BFFB3F3D464C3F7A01D2CEF3FB393B60861,
	InnerLoop_LogicalAndInnerLoopNoBroadcast_mEAD2210215ED8918E532BCB25D7E806F35E9877C,
	InnerLoop_LogicalXorInnerLoopNoBroadcast_m3DD9D1248B0D8E5A31F7457551E82D7E1372F921,
	InnerLoop_LogicalNotInnerLoop_m5C87B75C7037617F1A15ED5A6528E3DDB85E1D32,
	InnerLoop_SignInnerLoop_mE426CB0382284C48BDD712980279EE79727367C2,
	InnerLoop_WhereInnerLoopNoBroadcast_m2C758DD2ACF85E987A2F5311D46BE39E05827142,
	InnerLoop_ClampHWToTensorShape_m88567F80C73EDC7F39F161842A3C9118D6F0E84F,
	InnerLoop_Border2DInnerLoop_m8941B14D72A850132F0CDBE6A8527142D8422733,
	InnerLoop_Pad2DEdgeInnerLoop_m909FED83F8FCEA33A6BD8D54E4B7C2383BA5AAC3,
	InnerLoop_Pad2DReflectInnerLoop_mB0CE090F99E7A2842ECCC17DF8C80290E10F0405,
	InnerLoop_Pad2DSymmetricInnerLoop_m06783D95EE38187F1E63819433B5C6F222CA9FCD,
	InnerLoop_ScaleBiasInnerLoop_m9508FFF8DF776FFA6C8CBDE57DB0B92062B6DD39,
	InnerLoop_Add_mFBF4055DF41BBA000D072DC2DFF886475E1F3341,
	InnerLoop_Sub_m08770E92DFD455C4CBE024A498E1B7A681684E69,
	InnerLoop_Mul_m2F6DA7D6904F23725577E89C14A7ACF36838C3BC,
	InnerLoop_Div_m7D6EF86A90A77173D8D68F24924AEB41906D6FE4,
	InnerLoop_Min_m89A830737D3CBDA6AAF82CE0B13ED1C39E75A295,
	InnerLoop_Max_m94CA610A4E7BCD0A612285FE2D4E463057243A87,
	InnerLoop_Greater_m3A2183E520A5393A89A3B4C9468B622BECF95C53,
	InnerLoop_GreaterEqual_m60DD45BA74E86A840BDE8C9C0C02A327540B6667,
	InnerLoop_Less_mA2E6E70BE31AAEDD99E21A05F51CF9C94D71C808,
	InnerLoop_LessEqual_m78AFB7B59C117AC044A23E47C5F16BC3F3A5F37A,
	InnerLoop_Equal_m88EE25274E8ED1A154D76D394D3FD09DC5279987,
	InnerLoop_LogicalOr_mE74B33176A5621815ADD66ACAC4697E5254975E9,
	InnerLoop_LogicalAnd_m74367C538813013A5DCD833CB9A8FD3C91D84B50,
	InnerLoop_LogicalXor_mBACB1D32A66454A7136FB08B8489DF8E8A0CE801,
	InnerLoop_LogicalNot_mC7C725DB8E1828C1EC14F9A6882FA3A6B1CB5A4F,
	InnerLoop_Sign_m15079258CAAC202DD37F0B9028B4B1C9AA128592,
	InnerLoop_Where_m1DBCACF02E311F5DF26B6A5037620639F5057ACC,
	CompareOps__ctor_mD3A189957CBB8EC7928DCB9CFD86857FC0288221,
	CompareOps_PrepareModel_m6E67839DC225E0DE387A7D580244AEF79CBD637C,
	CompareOps_PreExecuteLayer_m6F93D26B4F79DE59B0A87B8A7E9674D185D69543,
	CompareOps_Unity_Barracuda_IOps_MatMul_mCD56B3D878C1274BF66EA7ACF719DA95D0648E9A,
	CompareOps_Unity_Barracuda_IOps_MatMul_m6D34EE18B8B85CB02AA6F3A5AAB031F1A7567669,
	CompareOps_Unity_Barracuda_IOps_Dense_mE60132EB7CCF37848B63E1DF20529A8791210AF0,
	CompareOps_Unity_Barracuda_IOps_Dense3_m1B20AA50AEF24D3371D4AE66547000F4E635114C,
	CompareOps_Unity_Barracuda_IOps_Conv2D_m8B22546AD0C30B9D7DBFE202A805FF19CBA156E7,
	CompareOps_Unity_Barracuda_IOps_Conv3D_mBF56D87379888E0AA8F3DBA7CAF69984E2480950,
	CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_mA839693A02F5A253E1A9EB2BAB14456F371F2032,
	CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mD0F0108CAA3E2D26F677B5BF7249A9290939212E,
	CompareOps_Unity_Barracuda_IOps_Upsample2D_m8E44FC950524AC5697D54D52CDD74E16A6BDEC74,
	CompareOps_Unity_Barracuda_IOps_Upsample3D_m17835CC074D1AE989EB1C48EED9FB1483069D24A,
	CompareOps_Unity_Barracuda_IOps_Resample2D_mBDBA2B080AE6D1021800DDF20546A0E3EE612D1B,
	CompareOps_Unity_Barracuda_IOps_DepthToSpace_m17AE4710D443CC4FCC09649B427545AA687C4F9A,
	CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m068BA415E2924812C943007D2A2C9AD361D52BB7,
	CompareOps_Unity_Barracuda_IOps_MaxPool2D_mCE74864F93B81B27E5FA030C53EBBFA21B7B103D,
	CompareOps_Unity_Barracuda_IOps_AvgPool2D_mF95036836FE90A22DE570B8207867648AA1031D7,
	CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m0810E3C063802321BE1B5D64F29CCA3E3141FFA2,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m5855F4EEE2D3EAD15DEA845DE1394C61C06F0ABF,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m36BA9AF243F72FEC2DD916565F6B590BA254D4A2,
	CompareOps_Unity_Barracuda_IOps_Border2D_m800F82DC62249DBC0249D1E1C7774FBA8C915F27,
	CompareOps_Unity_Barracuda_IOps_Border3D_m6D7DCDE5C4D4EE52A0BF799477DBE1E19C63BE7F,
	CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m855C31BE649F918172460BC7A5CEE230D9167C79,
	CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_mB9426BFAFD4D5CF8333A1208BF0B056D9B566A50,
	CompareOps_Unity_Barracuda_IOps_Pad2DEdge_mD8F479F582B4E33DC9667C4E2DF66C4402C2146A,
	CompareOps_Unity_Barracuda_IOps_ScaleBias_m24FD8A722F2EB4F79DEA559D3ABE35BD39665111,
	CompareOps_Unity_Barracuda_IOps_Normalization_m96D04A27533ED159DE572ECA1FF46D4A6B6C34A5,
	CompareOps_Unity_Barracuda_IOps_LRN_m6436B9E0B5C821D1FCDCCDF400ACF159E19E71EE,
	CompareOps_Unity_Barracuda_IOps_Dropout_mE29D6C881B25AF2AC3C47CC626CA01B5715079C0,
	CompareOps_Unity_Barracuda_IOps_RandomNormal_m5B9EAFEDEA86E1B40C19094A0C655CB5D53EA14B,
	CompareOps_Unity_Barracuda_IOps_RandomUniform_m0C33FE9E338A6F2E503E0708124303CB9B246C67,
	CompareOps_Unity_Barracuda_IOps_Multinomial_mE52A2588988D46CB4A3A1C87EB281295602B23FC,
	CompareOps_Unity_Barracuda_IOps_OneHot_m94DF3CB33A4B03BB6E430FBCE47EABC68D52D175,
	CompareOps_Unity_Barracuda_IOps_TopKIndices_mA41800137AF92C0574CABDF92E636DE38ED4AEAF,
	CompareOps_TopKValues_mA897DA9E0C9583907F08D4F2C1F3D002D2AAE281,
	CompareOps_NonZero_m45768529C9BFE75105D221A504AB9E24EB559D8A,
	CompareOps_Unity_Barracuda_IOps_Relu_m7C15D61CAEF5026FF8D98C877036541D34DF9FB7,
	CompareOps_Unity_Barracuda_IOps_Softmax_m7DCA80332B16E3EC6ED670392A25D4F3B3156BEF,
	CompareOps_Unity_Barracuda_IOps_LogSoftmax_m97339F3A5C059C21B36A71B3D9E485FDBC2A801F,
	CompareOps_Unity_Barracuda_IOps_Tanh_mB7743B25816BB5654D1CF25B9B4EEEA87BFC726D,
	CompareOps_Unity_Barracuda_IOps_Softplus_m1E8A4D861A3AC1318959241FB81D73552B16CDF7,
	CompareOps_Unity_Barracuda_IOps_Sigmoid_m56D2889DC5C21E7360D30CDF18E4448F1B2C0C5B,
	CompareOps_Unity_Barracuda_IOps_Elu_m34862BCE8054B4438D74DAE038B3ABDC7C05DE0D,
	CompareOps_Unity_Barracuda_IOps_Relu6_m750FE77D57EFDF9E37C481562FC102BFF5130BE5,
	CompareOps_Unity_Barracuda_IOps_LeakyRelu_m7B8DEBBCE67974B7841D402B309F26093C53F083,
	CompareOps_Unity_Barracuda_IOps_Selu_m8B545D41DAC171C8BFDDAF3FAF9D6DFA2678EDAA,
	CompareOps_Unity_Barracuda_IOps_PRelu_m4B9BFEF2FF7F75D66BBA42B41EAEF660D569DC5B,
	CompareOps_Unity_Barracuda_IOps_Swish_m3808EFEA0F4AC9FDBE18C53D84B19709066C2267,
	CompareOps_Unity_Barracuda_IOps_Abs_m01995C2F99C1A26650C65A15C5E049909C6073D6,
	CompareOps_Unity_Barracuda_IOps_Neg_mD192722D178AE989F50AD3EE7AD0ACA34316F7C4,
	CompareOps_Unity_Barracuda_IOps_Ceil_m8242431D9F00A39EC4FA9EF868DB3F7D4BFCE549,
	CompareOps_Unity_Barracuda_IOps_Clip_m73A78B133CD5E1E767F530F854EA0C5AA33AECF5,
	CompareOps_Unity_Barracuda_IOps_Floor_m8BEF15B375028455A6FCBD003E1E8F080DAAED7C,
	CompareOps_Unity_Barracuda_IOps_Round_mA13988709B6FB171CB7065D57391A3DA65620284,
	CompareOps_Unity_Barracuda_IOps_Reciprocal_mB23D7FDEF92A5893776E11D458517F7BB60A1A35,
	CompareOps_Unity_Barracuda_IOps_Pow_mBECD0E6029992707F2B10D1CF869D56E5D920470,
	CompareOps_Unity_Barracuda_IOps_Exp_mA512F652EB003AD27048599C953902E1F6CC4A2D,
	CompareOps_Unity_Barracuda_IOps_Log_m5CCC2F134AF5384473D343D010535CB79BE3982C,
	CompareOps_Unity_Barracuda_IOps_Sqrt_mC20DB9FCDBF3236CE3BE885D2813969063BA0EEF,
	CompareOps_Unity_Barracuda_IOps_Acos_mE0E41A2463E7353D2175B94F1FADDD6A31F3A17C,
	CompareOps_Unity_Barracuda_IOps_Acosh_m9200B2F9C5AE8E8FAE5ABF03B280B68743789590,
	CompareOps_Unity_Barracuda_IOps_Asin_m14B8D50F7E4FF33372354E4A6139FC5566B837BD,
	CompareOps_Unity_Barracuda_IOps_Asinh_m936D634258BCC60F7C3E9FAB0EAB3C7D0BDEB894,
	CompareOps_Unity_Barracuda_IOps_Atan_m229CCE4AD0B327CDEDA79A7282681069CF387D01,
	CompareOps_Unity_Barracuda_IOps_Atanh_mF235361A1D20E7461A61DB19B6EE28DD4E0714DB,
	CompareOps_Unity_Barracuda_IOps_Cos_m444531C765E1D13D4C6D360F8829475E190E201F,
	CompareOps_Unity_Barracuda_IOps_Cosh_mF5CF73C65EA9A97F7AE981868BC909310F850BE2,
	CompareOps_Unity_Barracuda_IOps_Sin_m85C5ADB70F518B570F9FF087A5BEB508242FE766,
	CompareOps_Unity_Barracuda_IOps_Sinh_m837BFE5C4928BCE8F0F4748DFEEAC9D1B2C4B5CA,
	CompareOps_Unity_Barracuda_IOps_Tan_m354257C3ECAB2ADC0983E9A21E7DA8D144BF0515,
	CompareOps_Unity_Barracuda_IOps_Add_m5717585972772C457767D8EA5D4AFC3FECC661C5,
	CompareOps_Unity_Barracuda_IOps_Sub_mE2F006131350A6E024422C116E0829DBAB80CC25,
	CompareOps_Unity_Barracuda_IOps_Mul_mA8008590C7CA0DBB6CE18AFBD91C154D10C4FD51,
	CompareOps_Unity_Barracuda_IOps_Div_m906838AD284E611DE951C6FF2906A0A1146146E6,
	CompareOps_Unity_Barracuda_IOps_Pow_m119DF0D5774D601D3ED9CF1873509EA914751821,
	CompareOps_Unity_Barracuda_IOps_Min_m4DCB388C77E401E73838DF03591A74CB29339B45,
	CompareOps_Unity_Barracuda_IOps_Max_m629EE5005FEF9A1AB177E8E3FE4FAF8D5CBBA97E,
	CompareOps_Unity_Barracuda_IOps_Mean_m507904B6E8558FE1D495A6716C8A660DA74611AD,
	CompareOps_Unity_Barracuda_IOps_ArgMax_m18AE2827F5794060B8CF517B2EF6B93758E03D74,
	CompareOps_Unity_Barracuda_IOps_ArgMin_mA25CBD73C04D575AAD503E7CDB8A9CA7F0960E8C,
	CompareOps_Unity_Barracuda_IOps_ReduceMax_m42F0BDFCA479353C78354D485E2F6F33A33DB105,
	CompareOps_Unity_Barracuda_IOps_ReduceMean_mEFED96DB22399195C381866D1FBE12BD18A2F972,
	CompareOps_Unity_Barracuda_IOps_ReduceMin_mF125C7CAE5598925AF21634E0AEC763B086FF430,
	CompareOps_Unity_Barracuda_IOps_ReduceProd_mD4269C546344EA8DD0CE716E8A6FC88352B5F2F6,
	CompareOps_Unity_Barracuda_IOps_ReduceSum_m559615B283EF73F9516CC20286B83F56BD874AAF,
	CompareOps_Unity_Barracuda_IOps_Greater_mFF29C7E3C19C2FE2FD63AA18D2B636E4EE0D6858,
	CompareOps_Unity_Barracuda_IOps_GreaterEqual_m002E838DFCCF2C385A553E5776E80C7B6B6D8949,
	CompareOps_Unity_Barracuda_IOps_Less_mE600F93647AA838B2D89AE3C17B0E000A46CB1FE,
	CompareOps_Unity_Barracuda_IOps_LessEqual_mDFF43213B7AD959C32ADBB2B010BA9B0C497233C,
	CompareOps_Unity_Barracuda_IOps_Equal_mAF3A7B1373935977ACA2C2CC3B6B6AFA48C273BA,
	CompareOps_Unity_Barracuda_IOps_LogicalOr_m13AB65F743B389DC4926C0707C564C30CC780A12,
	CompareOps_Unity_Barracuda_IOps_LogicalAnd_m3C13A687E25E07B615ECCFBDDA480C44BE1398A4,
	CompareOps_Unity_Barracuda_IOps_LogicalXor_m18419D40570DB4809C92233752EFEDC559113270,
	CompareOps_Unity_Barracuda_IOps_LogicalNot_mEB42A273EF0929FF4FCD4EABD98960F63200B8FA,
	CompareOps_Unity_Barracuda_IOps_Sign_m9CFBF04FC350B6BB221246AFA243B59D89C92D29,
	CompareOps_Unity_Barracuda_IOps_Where_m866F211C6A81E36C961CC44240F533F1B4EF1FC8,
	CompareOps_Unity_Barracuda_IOps_Flatten_m53AF19169824080B0BE6402F4418067CC2B0A749,
	CompareOps_Unity_Barracuda_IOps_Reshape_m3727C92180DCADFE7EA0B62D63A4FBB17DBD6EAD,
	CompareOps_Unity_Barracuda_IOps_Expand_mA41CDCA1CA570C9606FBD9F77A807BCA2113A5A4,
	CompareOps_Unity_Barracuda_IOps_Transpose_m104BF7B6E640D00BCFE3BA9853FE5DC5A094F7BB,
	CompareOps_Unity_Barracuda_IOps_Transpose_mC31E1308BE95778079DA78AF6532294FA6C6B4CE,
	CompareOps_Unity_Barracuda_IOps_Gather_mE7429641CF310BECBDA3240CB1812F21FE1A02F4,
	CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_m8AA4E78D2F5FBB1CA98211C7183E20B860E21E0B,
	CompareOps_LSTM_mB17C70A503A459A854E599C00B55AF1831C185E0,
	CompareOps_Unity_Barracuda_IOps_Concat_m3D2BDD042C6F654D84AF95515C48FCAF69E01A32,
	CompareOps_Unity_Barracuda_IOps_StridedSlice_m415D59332668050E90BF9A286C410989DB0E0704,
	CompareOps_Unity_Barracuda_IOps_Tile_m8D0B30F7B5740148F9E08E03B53351842ED9EC1F,
	CompareOps_Unity_Barracuda_IOps_Shape_m5029C008A6E0FEE1A87DFAAB8A87C4F04870AA0C,
	CompareOps_Unity_Barracuda_IOps_ConstantOfShape_mFDB7526FC28E187BB903C6130E18F3E5F461653C,
	CompareOps_Unity_Barracuda_IOps_Copy_m9A0D1ED06447FD9AC5ABDE2235FAF4206F8B12DF,
	CompareOps_Unity_Barracuda_IOps_Prepare_mBE146A4EB5FC22888001EB73E689CFB51A11C160,
	CompareOps_Unity_Barracuda_IOps_ResetAllocator_m9C83B90A20EAAF09DEB50B8DC105C542B12DD431,
	CompareOps_CheckSame_m4760BAAAB45F680564C124F83F9F365EE3046D9D,
	CompareOps_CheckSame_m975D9072194E4A010C2C18C0DC3169E207C30BF6,
	CompareOpsUtils_CheckSame_m1AD529C6C3A26D919DA9DB34C723AB42DB31A97D,
	CompareOpsUtils_CheckSame_mD3CDA81991FF3D3AF85FED728997F21D3B98613B,
	CompareOpsUtils_CheckApproximately_m5ACCDB0CCC0338ABCC1618E3F020476D7B0E7ACD,
	CompareOpsUtils_CheckApproximately_m73BF7D16FC7D0C09961D805B24CF86065045EC6E,
	CompareOpsUtils__ctor_m7BEA5D05407C7ABC47946B8396A4D03E19183623,
	ComputeInfo__cctor_mE8262C1890EA8B5238A404A286577412B2F81772,
	ComputeInfo__ctor_m18CD556160B7E93EC4358546278C014559AA70F5,
	ComputeShaderSingleton__ctor_mBD3FE0314C5205F909FA11EEBC1990367D3CF413,
	ComputeShaderSingleton_RegisterKernels_m653A187AFF3CFDAAF6F536AA988492BAC0402D20,
	ComputeShaderSingleton_FindComputeShader_mDFA452E6261C50A8B5C471DF55BB2D0D34F7E961,
	ComputeShaderSingleton_FindReferenceComputeShader_m57EBEA07FAFFA649C261AEF49CD590DB57D1614B,
	ComputeShaderSingleton_FindOptimizedComputeShader_m9ED545E478A1C41C3E6D5626D161C185C685C8AB,
	ComputeShaderSingleton_FindComputeShader_m3ADD0EFF359B394C5A66D7E8899F3417EE53214B,
	ComputeShaderSingleton_WarmupReferenceKernels_mDA26ADBE11D7EA659E23A3B65F44BD7D298F101E,
	ComputeShaderSingleton_WarmupOptimizedKernels_m513238F9AE568427073AEEA81B20183E7B45C086,
	ComputeShaderSingleton_GetUsedReferenceKernels_m9442FE0AE21BB869EED6C45452EAA8DF59468858,
	ComputeShaderSingleton_GetUsedOptimizedKernels_mE3DD827D009E9C414F76F4E0F29EF48457384A49,
	ComputeShaderSingleton_get_Instance_m7A4B10E778915736DA154984A058670DEEE833F2,
	ComputeShaderSingleton_get_supported_m4F31E131A15E870559F25154867411E281FED56B,
	ComputeShaderSingleton__cctor_mCE797C9491CB1F310549B2144F55203F9105ECA0,
	U3CWarmupReferenceKernelsU3Ed__12__ctor_mBD6DF2A96082FAC9812ACF0121330C8069EEE848,
	U3CWarmupReferenceKernelsU3Ed__12_System_IDisposable_Dispose_m064FB6C44DB335FB0061BD1BCCE5FBDCBD8B5D0A,
	U3CWarmupReferenceKernelsU3Ed__12_MoveNext_m41EAB3C5BFAC5B5FEC41F72BF8394F50C8A20BCA,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43363E9411CBAE5F37483EF79752CCE5B5FBD4FD,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_Reset_mC8F9C75EDD4A3F8C37926F92ECC05B49614F7AD3,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_get_Current_mB4256A460E611B738B018FBA48A526233EBD9DAF,
	U3CWarmupOptimizedKernelsU3Ed__13__ctor_mA6B1D997050490528B7388B236F9292BC1E84BBB,
	U3CWarmupOptimizedKernelsU3Ed__13_System_IDisposable_Dispose_mA4E8C4672CD58AE5CC8BDFCB6A53981BBD95F9AA,
	U3CWarmupOptimizedKernelsU3Ed__13_MoveNext_mE6CF0F3F5D1E8FDC8EACB3C84C3A878E3D6392CC,
	U3CWarmupOptimizedKernelsU3Ed__13_U3CU3Em__Finally1_m9ED4E3ECD9C85C2DBB7C5FE4E2AFCFFE7292D502,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53FCC8464B0B49A25FD531F28052B105A251E262,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_Reset_m1E14A9E826C97E6CCB438AB0C98CF312FA4D1E1C,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_get_Current_mAB519E4AEC4800C7364DDE78B303B2FF26EEB453,
	GenericWorker__ctor_mABFADD1573C4EAD435727FB02A73B3AE326306B1,
	GenericWorker_Finalize_mA8A52CA55821A5A08F0A47FC8D0FE5E7AC12A625,
	GenericWorker_OccupyAllocator_mC808499E33FC2DF20293DCF0C4382916D19539E8,
	GenericWorker_ResetAllocatorIfStale_m02D23F932C34BFA2A73F3D36F35536F8887F6B6B,
	GenericWorker_ResetAllocatorIfStaleAndNotOccupied_m7B00481E3EB9AC9C733E14890A093E0C466B93F1,
	GenericWorker_Dispose_m4988A63DDCB3BA438B4814C99289C3A137876CAF,
	GenericWorker_PrepareForInput_m07159902BB31BC2806EB8D1DA660CE8E89E0743F,
	GenericWorker_SetInput_mAEE0BE4B6C4C234292410620C476DBB88B8A6CAB,
	GenericWorker_SetInput_m4E58347C4D1EE71D904635A6AF65F8E839762A5F,
	GenericWorker_Execute_m32211EA25228978C89B2DF4B937349C5F2598413,
	GenericWorker_Execute_m11E94F654ACFEDF4E7C44D4FB5873C0A83388548,
	GenericWorker_Execute_mA476C7AFDB85C21557A41E7CB64868EADF07086A,
	GenericWorker_StartManualSchedule_mED32F2823CDC202B58538C0A5D14B1008B156EC7,
	GenericWorker_FlushSchedule_m54FADDA6598AB7709D5EC739208DF7E0E7890590,
	GenericWorker_StartManualSchedule_m74DE7996138C7A2D97CE5F5B8260E3111E33B635,
	GenericWorker_get_scheduleProgress_m2379CC7A658E6B40BB8C6DFAB7E47CC2F3497C2E,
	GenericWorker_GetAndVerifyFusedActivation_m68A0947993F1D534550D31537CC2F31B3F9719C8,
	GenericWorker_StartManualSchedule_mE8EB02F076769BEA39B3AFA2B9C200CB9CBEAC48,
	GenericWorker_PeekOutput_m91C5184C7AFE45CAC38720E8178E4E0E49A29FDC,
	GenericWorker_PeekOutput_m7411C5908AF4BE8015597DFDCBC7AB28C8DEA523,
	GenericWorker_PeekConstants_m7BFD9165B1DBD64C22BA49BFBA8A7EA7D20EB618,
	GenericWorker_Summary_m043814D87856EEA56E6D196E189686F470779E06,
	U3CU3Ec__cctor_mB6530380EC4C73073865EC315E0DD83A214C3F6F,
	U3CU3Ec__ctor_m0AB36E61DADBCCDB316C823AA87D20296F4444DD,
	U3CU3Ec_U3CStartManualScheduleU3Eb__33_0_mEBE28EFBC4595ADE5797AE5CF97D4CF695ECFAA3,
	U3CU3Ec_U3CStartManualScheduleU3Eb__33_1_m72DA38A2D90C298AFE65BEF110ABC8D17F6E52F5,
	U3CU3Ec_U3CStartManualScheduleU3Eb__33_2_m28B54A88F1B25CB960BB31F77B64E2386D7821EA,
	U3CStartManualScheduleU3Ed__33__ctor_m6094162C9BF524000117DE73E0FA88D5FCDBB026,
	U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m7AABA5418C1144B04C86D158BF6AE2F8B9501987,
	U3CStartManualScheduleU3Ed__33_MoveNext_mF62BEBBC3A876B1A8F856D99B73557F5E920D08D,
	U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_m93146170D99DC92068AB67E512C2E3BAF8422ACF,
	U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF099AFC425CF15FBF2C64C78B5E5CBF99791E1AB,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_m637F032CAAA2CDD40F20A49677286A30D85FD4D7,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_m8119BACBAEFADA8C725322C182AA7254EDF0384F,
	GenericVars__ctor_m39718FBE56DFDA7673BD8C2714EA4FF075C21606,
	GenericVars_Finalize_mC805CF039738909B752397355117269B5A8C0ED0,
	GenericVars_Dispose_m168CB0487672223146BDF285921E631725DDC84C,
	GenericVars_GetAllocator_m82EB86CBE76D82739D074797D68EE09774BB8F66,
	GenericVars_IsTensorOwnedByInternalAllocator_m142ECB0C6C5C39176153AD75F84D1D04085B0E40,
	GenericVars_ValidateGlobalInputs_m55FE6DA85409E34C418AE8480DB08FC2E2E8DC18,
	GenericVars_PrepareLayerInputTensors_m99E5B22BBAC091DD52615B4BF47787038305342C,
	GenericVars_SetInput_m4A804409D1D685E1182A19164CA5C115E2116C42,
	GenericVars_PrepareStorage_mCCFC0B10FDDB7C3700808514C144CD79BCFEA3C2,
	GenericVars_GatherInputs_mCFB42AE10E29289C85C5730CCD003EDE22A98424,
	GenericVars_PrepareStorage_mDFC896C562770147C1C3F0DCD7E0352D8E630928,
	GenericVars_DisposeAfterLayer_m916027299D4C97E5F3B68F18A164B556588FF2F9,
	GenericVars_Store_mA528990B672AB18845FF6CBBA904212E86A7B2A5,
	GenericVars_PeekOutput_mE942C84402B6C4D42ADB7E7A23F67B394CB7888C,
	GenericVars_PeekConstants_mCAC2F7ABDCBBA6FA8D56EB84198AE752AEB34038,
	U3CU3Ec__cctor_mFEDEE438FF96DB4DA8761F0969AA69353BCCF427,
	U3CU3Ec__ctor_m1A7F16C781B89DA9B3287CD8386D80C8D9F55A03,
	U3CU3Ec_U3CPrepareStorageU3Eb__16_0_m39F6D4DC39F214C6A8A895DB95B0E97DDD4E64AA,
	U3CU3Ec_U3CPrepareStorageU3Eb__16_1_m9786452D078BA2E8E1302F8B98161FE2B37E5E38,
	U3CU3Ec_U3CPrepareStorageU3Eb__16_2_m82C2EEAEDB6C7C5BD13A4C4DD3E90A5305B8FC54,
	GenericVarsWithReuse_get_layerRequiresStorage_mCF1E6873474FCD0F4E808771A1B9E7FC06B6E7A6,
	GenericVarsWithReuse_get_temporary_mDB821C4D5BDF25C07602C21D555CC6CF4DBE3F78,
	GenericVarsWithReuse_ReleaseTemporary_mC309FE4B34BF7DC887A42A48C5F4D0B77A8AE91D,
	GenericVarsWithReuse_PrepareStorage_m18DEEA89E9A9757D0BF072A29525219BD9EBC568,
	GenericVarsWithReuse_PrepareStorage_m4465A180A91089E3383C5D7B6E3053B3948678AE,
	GenericVarsWithReuse_Store_mE0681C8164BAD07EEAB992DE32C0FC20E21B003B,
	GenericVarsWithReuse_PeekOutput_m101BADDB2C4F1311B9216E7DB3E4477C102D49D1,
	GenericVarsWithReuse__ctor_mB166D90DE4F6CA70AB9C6BDF7EB96D54F8826E02,
	GenericVarsWithPreallocation_PrepareStorage_mE70E9403BC85CAB707B373DFA1C660D99C5DBBAF,
	GenericVarsWithPreallocation_GetAllocator_m0BC6F52F963CC9901B275A7FC1B0A5FFB2920D12,
	GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_m5BC0727D7750198F51D4736EE78B0D730ED263C0,
	GenericVarsWithPreallocation_Alloc_m965976D3BEE07BEB7C56CF70551DB5E2E115EAE1,
	GenericVarsWithPreallocation_Alloc_mF71ABF2FA59707A4D0808CD33C3F570EE7A8D9A2,
	GenericVarsWithPreallocation_MoveToDevice_m25AB2F7D2D984D4F4DCAD71219734B603C03ADC0,
	GenericVarsWithPreallocation_Release_mF5A90F98BFC372A0070AF80E188706A3B88214A7,
	GenericVarsWithPreallocation_WaiveOwnership_m529F8707461C5340F1F6137BD4A6FB7F040EA2FA,
	GenericVarsWithPreallocation_Reset_mE19C00E2DAE6959AFDD1AEC6E9DE1428BBCB5118,
	GenericVarsWithPreallocation_Dispose_mB96FCAE81800F3EC5CBA641174EF2E0FD4EB6A6C,
	GenericVarsWithPreallocation_get_busyBytes_m3E03ECF0A26ABCE689A77523AE86DA5D69E1DCC3,
	GenericVarsWithPreallocation_get_freeBytes_mB8AD77B532D3CDF022A606300AED83A45956A394,
	GenericVarsWithPreallocation_get_totalBytes_mDBA093B2D5B85B8D9FD2E603CFE07EBC710401B3,
	GenericVarsWithPreallocation_ToString_m32E1D1075B3787C657F4645D3F9A3DFE3076D44F,
	GenericVarsWithPreallocation__ctor_mCC16E60C13046246471111418C7E82AC9542996C,
	DefaultTensorAllocator__ctor_m9B4AF562AC76CED2BDA9A67D1D11285A16E489CC,
	DefaultVars__ctor_m00870199CAAFF78AF38F1A4EFF52E54155BB6457,
	LinearLayerFusing_IsLayerLinear_m8363A823284AC9382DA5BA03F93EEA4EB15DB734,
	LinearLayerFusing_IsLayerLinearMathOp_m8021B6B050635E2171260D41EDD7DDD8009735B9,
	LinearLayerFusing_AreLayersFusable_m1303E4265F3EC9A71B848BF669751DDD7E65A6AF,
	LinearLayerFusing_Add_m8DEE311927BF6EB4D96F19E2B6DD09BB24F5D6E3,
	LinearLayerFusing__ctor_mE7939480091C9D3D502A8BA9577AC3A169872D70,
	LinearLayerFusing_FuseLayers_mAD1B4D3FABD01F577D2201CFA853F952182CC6A2,
	LinearLayerFusing_U3C_ctorU3Eb__6_0_m32E68294A7F89CE062CC777EE8AB64A42B7C86F3,
	LinearLayerFusing_U3C_ctorU3Eb__6_1_m56E53D55B5EBE0DB9EDEE65CAF64DA092A39D59F,
	LinearLayerFusing_U3C_ctorU3Eb__6_2_m76B1CE4EE7EE7B55CB3AEAA7FAEA353E3AB373A5,
	LinearLayerFusing_U3C_ctorU3Eb__6_3_m04832DCBDC7345D3865CBDDC19FAB0E57DFA4E24,
	LinearLayerFusing_U3C_ctorU3Eb__6_4_m0D1B0DDE2C3CACBB0232C5E12A92C1276BDBA78E,
	LinearLayerFusing_U3C_ctorU3Eb__6_6_m85D27C80F3331E001762685EB37131F4784A7C5B,
	LinearLayerFusing_U3C_ctorU3Eb__6_8_m784521027348A17B219CCFD630D547DFC99AABEC,
	LinearLayerFusing_U3C_ctorU3Eb__6_9_m968B20E6C021DC1AAD697BC367016476D02258D5,
	LinearLayerFusing_U3C_ctorU3Eb__6_11_m364E27C905FEA62C7A5D11BBC68615ACD689A572,
	LinearLayerFusing_U3C_ctorU3Eb__6_13_m5E9852B2E8924BB0BC5CA551905762939D0993C1,
	LinearLayerFusing_U3C_ctorU3Eb__6_14_m4C43E47184C5E4904CBF1B9EFD4F15E14E9A62B5,
	U3CU3Ec__DisplayClass0_0__ctor_mC53840D35453F66D180E9F5936472E30F7A6A6AB,
	U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_mBDCA676F2B59CA0033A3E322830507CF022E9428,
	U3CU3Ec__cctor_mC84D4E5E0112EC86C399C1B4F004250367265E17,
	U3CU3Ec__ctor_m09F5D9C5B18F1F7EDF31E9A0F7656E4EB6E57361,
	U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_mD19939C9AE076D5F84600DE3087C859C6E9A25D1,
	U3CU3Ec_U3C_ctorU3Eb__6_5_m95829947FF0D25A0C061EB1878CBC863433D340B,
	U3CU3Ec_U3C_ctorU3Eb__6_7_mA51861579CB69AB0C0F2664C3C043EAC612CA338,
	U3CU3Ec_U3C_ctorU3Eb__6_10_m91AA25CA8C59E83BD03B768DFB4AE497317BCAA3,
	U3CU3Ec_U3C_ctorU3Eb__6_12_m65CE0CC6B0840A7EAB7847DC5D4DC546233B218A,
	CSharpBLAS_IsNative_m3B29CAE2D7D7BC97A18594EEA0BC731BA96DA899,
	CSharpBLAS_IsCurrentPlatformSupported_m7979F46AE8D147343D562331B5E16C3785FC45C2,
	CSharpBLAS_SGEMM_mFD02775FAACA6FE5247577DD8A1C433B921DAD45,
	CSharpBLAS_ScheduleSGEMM_m300E24074D506054E3DC8D3B8CC6FFF53A66DEB1,
	CSharpBLAS__ctor_m6235D5A8E0634F6079475E8F66FE6BECF0D1E04B,
	SGEMMJob_Execute_m75C2F62F0911B708F35FA2C3249541F4AC74DDF0,
	MatrixUtils_CopyBlockWithPadding_m2CAD9B7375432DAD05F1F6C72DEE5105C6AC7062,
	MatrixUtils_ClearFloatArray_m8C70B1DF2AB1C273F164ACB9752E374557884596,
	MatrixUtils_CopyFloatArray_m20BB01A8CA8D33A7AAFB8958F16F89D07E2DCD81,
	MatrixUtils_CopyBlockWithPadding_m57E9FF4174465FFB20CFCB2122E27BE9A1CCE5A6,
	MatrixUtils_CopyBlockWithPadding_m00B253C71C910D09E31B427C3A7ED290F62265DE,
	MatrixUtils_CopyBlockWithPadding_m26087782CA57039972F464704ACEC1A4A0EE89B3,
	MatrixUtils_MultiplyBlockUnroll8xhPadded_m94E4CFC5B957B006314D0F72D0AC5BEDBF17A288,
	MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_mE6F66B1A86BFC59FFC94C3A18A09CD614206C85F,
	MatrixUtils__ctor_m5BA4B34632FF179ADA03479E7D1D96B20D95D1E0,
	U3CU3Ec__DisplayClass7_0__ctor_mC443A8667D8C1FB04050D69FE06F5DD7E4118F0E,
	U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_m08D0BE62888DEEAA8182CDC2B192FC0BF953009D,
	ModelAnalyzer_GetDefaultInputName_m2222DCDB46AB58251DE236CDD81EEFD1FEED29F9,
	ModelAnalyzer_GetDefaultOutputName_m243EE07633D78E7126A5A250531AC40278EF0F4A,
	ModelAnalyzer_ListTemporaryTensorShapes_m5000ED15B7314A0D777A7C21DF377B24BE04AFDE,
	ModelAnalyzer_ListTemporaryTensorShapes_mDD9AF26F0FB745125A758BE5B166E37321E717E9,
	ModelAnalyzer_LegacyGetXYRanks_m4BDF7765F65AAD2117886609E3B9CA3F60D9FB16,
	ModelAnalyzer_TryGetOutputTensorShape_mBF2C86B45DE749B2D77C977D65292E8D505FD813,
	ModelAnalyzer_TryGetOutputTensorShape_m742843234766C2A85BE0AC0F7BD05E71F51E2507,
	ModelAnalyzer_FindLayerByName_m08CE91AA8817E867780540195450DFEB4D8DE719,
	ModelAnalyzer_FindLayersThatRequireStorage_mEC3817CBCC969E31A873FEDA99C2CF8E98B1AE56,
	ModelAnalyzer_FindUpstreamLayers_m84C4E75016638FC3F42179ACB12A6837FCEE8DAA,
	ModelAnalyzer_FindLargestNecessaryTensorShape_m802B505615D341831229BC2DF4801129094B02FE,
	ModelAnalyzer_FindLargestArgumentTensorShape_mC34F621D25FDCC2A6C4C401C149F943CB7E2AF63,
	ModelAnalyzer_FindUnusedLayers_m7B5FB6091223CAC0AB96111BCF9D1544E223D587,
	ModelAnalyzer_FindBrokenLinks_m2888514EC548D9B028035CA74A1F3BFDFC8FAC52,
	ModelAnalyzer_FindBrokenLinks_m6D03728FCAD25FD7CB0F267701E9C0BEA8B5D443,
	ModelAnalyzer_FindBrokenLinks_m79EFDD5C12949C18ABDFC554EF58FF582DF5E32F,
	ModelAnalyzer_FindUnconnectedInputs_mF19DCB7E332E29D87B2B947D9503E433459F0031,
	ModelAnalyzer_FindLayerOutputs_mF44AF56B52327AC8AAAD8C5DBF3AA54C86BA35DC,
	ModelAnalyzer_FindUnconnectedOutputs_m142F1CCC53C532D6DFD5E59B51B90C77F326494E,
	ModelAnalyzer_IsLayerBroacastable_mCFFB0646EC5049D54F3DC08D2C565B820EF7CF4B,
	ModelAnalyzer_IsInputShapeAcceptablyKnowForShapeInference_m954F11FAFAD4250847A43FEF0175DC4B696AA123,
	ModelAnalyzer__ctor_m83B2E95F03C2D3E2F24F03AC79679BDCE8F58358,
	U3CU3Ec__cctor_m9376C4F72590B217C9060278215391C733B1325F,
	U3CU3Ec__ctor_mA78F21A653700AF04B8F3CA7F1CFDED117F1206B,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_0_m4E014833242318F1FEF269B196800C1A771F1654,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_1_mB5DADB44AEC3CFE1ECDB32ABE172FC45B57FB5EE,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_2_mEFD499942AD09CB68DEFDA7ACCEB72F218F8837F,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_3_mDBB19AC3F7191B78BDE0D72228FB9E02B38A9591,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_0_mFBE3635F47300AAC9DAE6ACC28F2C09E1063A49A,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_1_m9E7EDBFDE299279DDA7EDB616F65835CD7BFAF0F,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_2_m9445E0A238D125A303144810D9DD259C5CC93912,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_0_m86521ACC6DA024F9880B219FD1425A1FEA2EBE61,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_1_m52683035516E05D89CBC238DEBBEC95D31B75BA9,
	U3CU3Ec_U3CFindLayerOutputsU3Eb__17_1_m579A8839FF15DA486C761CE9F2EC4441DDA683EF,
	U3CU3Ec__DisplayClass17_0__ctor_m49FCBDBB33507DF44E33DA0B2A4A5ABF99837A9B,
	U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__0_m05E38812EC1F9C1708C25A2783E77AE84FCF879C,
	U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__2_m8FA1B8A4DFB5405997AD97D2B53A6CDCAB1A390D,
	ModelOptimizer_Optimize_m04437DC75EECCCF263EB06C93C9D894CDFDAF094,
	ModelOptimizer_RemoveUnused_mF64280C2A98D609F8A7CDA0E3BB99D7EC1DEE1EB,
	ModelOptimizer_IsLayerSupportingActivationFusing_mA2F51D2F325DF560255A5FC082F5A6DC538B56B9,
	ModelOptimizer_IsActivationFusable_mF4BC0995BFC12E9C21A134DA6EDD80DB67DFCED6,
	ModelOptimizer_FuseActivation_m677B74D258108CEBDA9ADCCABE3341F2983B8858,
	ModelOptimizer_FuseActivations_m4A1E36FA36BCBDF56A2A6381F52AE3A2F3D9EE83,
	ModelOptimizer_IsPermutationNoop_mD23084AF77E83DEA2872D38B18FDAEAB20CDD080,
	ModelOptimizer_IsLayerNoop_mD30A718BEE5D4AC1D8F730887FDFC593E389B2BC,
	ModelOptimizer_RemoveNoop_mEBCE1B972E73564784976F821BEFC5B5E19EA189,
	ModelOptimizer_IsLayerConstant_m772513F17D792970CD2FBC4D4ABB940805919A27,
	ModelOptimizer_IsLayerFusedActivation_m21E71E557BD54F6BF27F61645A3E8C49D3400488,
	ModelOptimizer_LayerComplextity_m37B3F1DA50DDA59C3A3C4485A32F18E6BC4BC835,
	ModelOptimizer_FuseConsecutiveLayers_m5495018E466D5CEE8124C5FF9BB5DFADAEBFE02C,
	ModelOptimizer_AreLayersFusable_m571C8EC99E8E48370DC251C2F9349E4C086167C2,
	ModelOptimizer_PackConstants_m175627848E8A4F02C7631487A5EF57EA2764A8D2,
	ModelOptimizer_UnpackConstants_mBFF0130AA2E5C74215538A1A80F0D787757EAEFF,
	ModelOptimizer_FuseLinear_mC1612AC0008CAB2EE7AB763663352B89431223F5,
	ModelOptimizer__ctor_m198627FD12249135866FAB55F8CAD89A20772B56,
	ModelOptimizer__cctor_m338C1D632382A8DD8C328022AAB2032CC973F162,
	U3CU3Ec__DisplayClass1_0__ctor_m41D0C4D128F8850F8D4BB0C3AAC312A1B5EA3617,
	U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mF8BA8E89A30A186A22ED3C10C41D2651D7558AED,
	U3CU3Ec__cctor_m1954BDCFB2739215AAA053B8B96DB3E0A68A78F9,
	U3CU3Ec__ctor_m853AAB6E0A17715A0C012589988979148C1E9F1D,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_mFB2AF7F0E1F7C44C2968773980B3C2ED10C88018,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_m4D6DAB1CC99F7FB35112602416E8044E37439725,
	U3CU3Ec_U3CFuseActivationsU3Eb__5_0_m152761A805B761F79F98DE7E0CC23456CAE66E19,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m933ECBFE698A9A54F26AE2A19E4CA186B313D676,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_m210DC7EE7DD5EF139A986B9A875627E1EEFFFF2D,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mB3A6AAC630CF6240A2C62B3B1500053BDCE21456,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mDC691CC75D6B8858D90AC645EA9EC25CA8D8F9E2,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m8A6E84ADFBC612818F74B618602C76B01C795A65,
	U3CU3Ec_U3CFuseLinearU3Eb__18_0_m6141AAD897EEC8AAFAE3B76C6B91E1596B0D87E6,
	U3CU3Ec_U3CFuseLinearU3Eb__18_1_m72EE8042B01C910B4F212C88A30FA6A89ECA8434,
	U3CU3Ec__DisplayClass4_0__ctor_m3E4AB071D90BBC06F0088A4D4DC1B6BC5F177F81,
	U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_m62BF0A3012A45C396BCA671E2784CECF748EAB77,
	U3CU3Ec__DisplayClass5_0__ctor_m0EA6D19F6AF3D1753CEF4D54D7CFA4A696A65907,
	U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_m1F27ABFEA3C12DC54821D8ADF10ADE3C243572F0,
	U3CU3Ec__DisplayClass5_1__ctor_mCD1DBF5496A40110C4A7ECA08512E5B4687B8083,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_m455CBBD9B542DA4DFBD7C35C5C11CBBB63BEAA4A,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m353674D1961ABBEC16983FDADA042CD91E4A1020,
	U3CU3Ec__DisplayClass8_0__ctor_mD5FBEB774930B1DFFCB6098E6D2120C26D2284E9,
	U3CU3Ec__DisplayClass8_0_U3CRemoveNoopU3Eb__2_m5D20333E788D2F6909AB667BAB7C1AD7C285D03B,
	U3CU3Ec__DisplayClass8_0_U3CRemoveNoopU3Eb__3_m789394A8A6601096060EDE53FEE1F097029D59FD,
	U3CU3Ec__DisplayClass16_0__ctor_mD95BE00428B553300E7234704BC34F25F8A52D14,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_m8936C65AE0F073F556416DC27467F440DBDBDDC7,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_m91824B1B9D3758B31515E81A91660AB5FCE03553,
	U3CU3Ec__DisplayClass16_1__ctor_mAA89F44745F8E270500B6878AEC3AB51D891861F,
	U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m7D5AAEE6F6687A44CD77EEA58A8073AF2053FF56,
	U3CU3Ec__DisplayClass18_0__ctor_m93BE8F96470F1680B112DAC52A3AA51FE45FD2DE,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_mFAE5FBAC3F35591CF532F4BEF0DAA78AA6088CE7,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_m0B00B239AB4C61EA477123874403150A55C10E1E,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_m09A08C3C7324C722778086971039FD588FEC336C,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_m3E6D4CA581E79F5926C77EE1EC6B91FCE49E5569,
	U3CU3Ec__DisplayClass18_1__ctor_mDDB88F759D920050BD1939A0B5F967FEAA8C191A,
	U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_mC75CBF942DB8665FBBA445DE5C3DAF28F4034960,
	OpsUtils_SplitWRBForLSTM_m3189E209CE8A4C769331757075481CCB39A42DD1,
	OpsUtils_BakeConstantWRBIntoLSTMLayer_m664733113F32ABDFA73402AF79C2267212F593EA,
	OpsUtils__ctor_mE33DBAEA150B0FD7D28362845C3382EA9DBC356E,
	OpsUtils_U3CBakeConstantWRBIntoLSTMLayerU3Eg__AddDatasetU7C1_0_m0FDE4B5CFCBA21B1984845DF52EC93F6A385F933,
	StaticLayerOppComplexity_Add_m1892D68D5C4972CBD0DE50045E03EADC49068F34,
	StaticLayerOppComplexity__ctor_m38C50A0FA2E5F62CEA45391B53CF4B8820F5B2B7,
	StaticLayerOppComplexity_LayerComplextity_mBDD73DB2D420C65941F12D02DE0507EF43CDA160,
	U3CU3Ec__cctor_m4EC2B822E4479F341248B3F05118303C7A0F2774,
	U3CU3Ec__ctor_m16A8F2F86E954E15DA9147BE142C7EFA93EA54D6,
	U3CU3Ec_U3C_ctorU3Eb__2_0_mE9228ECC9A0D3CEB79B8D34E7B0935C469FA428B,
	U3CU3Ec_U3C_ctorU3Eb__2_1_m91A55E685C2881E9D90B473826925A9D00D1758B,
	U3CU3Ec_U3C_ctorU3Eb__2_2_m847F4965C1E6874D19D86BD90E40C78DFD7D9828,
	U3CU3Ec_U3C_ctorU3Eb__2_3_m8CEDDB9300D2791E68BB9E2917D3FA8F32B0B5C0,
	U3CU3Ec_U3C_ctorU3Eb__2_4_m499933611976892DD9451EB4CD44BE7A3AF96C39,
	U3CU3Ec_U3C_ctorU3Eb__2_5_m878246701B2EEA888B88C27FBC7C54810E2E3153,
	U3CU3Ec_U3C_ctorU3Eb__2_6_m982BD9A86E152F593DED1496B72E5B61827C2822,
	StatsOps__ctor_mBF5CEACAC814415F5BB6EC27EA60E53444475E06,
	StatsOps_PrepareModel_m65D037B78BD9569AE09F6F9F27745E1EECBE5EB9,
	StatsOps_PreExecuteLayer_m5A345EB729F399D3DC3EF445D890DFCFE461FFE4,
	StatsOps_Unity_Barracuda_IOps_MatMul_mB9B135DB3DCE2F1C8A2B092A2DC1D6E72AA542A0,
	StatsOps_Unity_Barracuda_IOps_MatMul_m1C0FDA32F73C8193CAD73FA2691DE33EB11DF020,
	StatsOps_Unity_Barracuda_IOps_Dense_m7374754DE365438CD4B5558CF29F0F1B0613FCA6,
	StatsOps_Unity_Barracuda_IOps_Dense3_mB749A500E39B108BDD2F3F4E60A3EC1B64D8E752,
	StatsOps_Unity_Barracuda_IOps_Conv2D_m0D17E16D0036C7FA6A28CCE7423C550A4AAAB4B9,
	StatsOps_Unity_Barracuda_IOps_Conv3D_m5327D9483A8EA8BF32945F42B59681471B45F12D,
	StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_mD753E90633471B7B389BB828C25DE030522B5B77,
	StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mF73254F3400E9624E096C1929CB2CAFA1C0CD619,
	StatsOps_Unity_Barracuda_IOps_Upsample2D_m87724A5BA5394DC758A9D80FFA6576E1F0913FB9,
	StatsOps_Unity_Barracuda_IOps_Upsample3D_m8D22AB073301733013F4E201FBF6FCB55C89AF65,
	StatsOps_Unity_Barracuda_IOps_Resample2D_m1508ECE2EAD38D373138073C0736DCB37D107EDE,
	StatsOps_Unity_Barracuda_IOps_DepthToSpace_m5CD4D6578AB46DA97A668DC23F139DAFD0654E05,
	StatsOps_Unity_Barracuda_IOps_SpaceToDepth_mCCB874481F6E0A9C7E56167C63744B72C0B9D5C4,
	StatsOps_Unity_Barracuda_IOps_MaxPool2D_m5D750BD3459B18484B83E45539E14D51A5AC4CC3,
	StatsOps_Unity_Barracuda_IOps_AvgPool2D_m779B834A6901AB3C79F03EB1EFB72BD5919FB7A5,
	StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m6852934353878B0514207BBA1ADD1F7805F2A02D,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m755CA32B765ACD1AB36C24DED07FCF6AAD2BA44F,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m9E22DBC525A83942010C0962D474742AA79C35D1,
	StatsOps_Unity_Barracuda_IOps_Border2D_m947B576143A4A41A923DE96F8D2FB6991507F8DE,
	StatsOps_Unity_Barracuda_IOps_Border3D_mB6C69F7628994E80A9B5C5F880D42C1FBA55FA6C,
	StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m77C339AB327BDFF8E87DF156BB4C5CC66122A611,
	StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m29D5FA69E8DD6F00D5F0B1EAA417DC6DEF6CFAEA,
	StatsOps_Unity_Barracuda_IOps_Pad2DEdge_mA40DBAD76B14F107DEF1547DEA926129D6B21880,
	StatsOps_Unity_Barracuda_IOps_ScaleBias_mEB176AE8CED884CFB602BC4DC11CB4C406AD736C,
	StatsOps_Unity_Barracuda_IOps_Normalization_m820E888CBC82A9020E9217066E188E5494883631,
	StatsOps_Unity_Barracuda_IOps_LRN_m2BCB6D1040F3D3DC1B8902DFF32A0158A77C39AD,
	StatsOps_Unity_Barracuda_IOps_Dropout_m62457FBF8BF8F19EA58D3C84B43EA74696716776,
	StatsOps_Unity_Barracuda_IOps_RandomNormal_mC602EFCC7146E863A23FCC97773A93FC8C5CA01F,
	StatsOps_Unity_Barracuda_IOps_RandomUniform_mA15D0A02444709A966AF70257E48E39F46B8354F,
	StatsOps_Unity_Barracuda_IOps_Multinomial_m43B31ED45E48DE0919CF33E945B33750022D0862,
	StatsOps_Unity_Barracuda_IOps_OneHot_m022398B02777B2995663B771F1427B578D685EAB,
	StatsOps_Unity_Barracuda_IOps_TopKIndices_mFA19D093407E85B875E4244EC939DF134129740A,
	StatsOps_TopKValues_mD25143CF9ABE91149D5443F93140FEE7A452B7D8,
	StatsOps_NonZero_mFF208B9AF83F4068EAC74BD051C1BBBA772ED309,
	StatsOps_Unity_Barracuda_IOps_Relu_mC0273C53D03C2F4F5A225131F68C9A92EBDC73B5,
	StatsOps_Unity_Barracuda_IOps_Softmax_m2331CD13B27D3561DD1D1A2F49B8D0AFBC19679F,
	StatsOps_Unity_Barracuda_IOps_LogSoftmax_mE0D1860B63BA337202FED15F66E96AA658E53B62,
	StatsOps_Unity_Barracuda_IOps_Tanh_mD93D72BABB13CBE1348C9F91ACF76F76BDA2E104,
	StatsOps_Unity_Barracuda_IOps_Softplus_mA9E7590FA409472060C18EC4DCA173E36F72E6E8,
	StatsOps_Unity_Barracuda_IOps_Sigmoid_m3C0A5F6CC6C0E747B27E30555E547A65B2B625D2,
	StatsOps_Unity_Barracuda_IOps_Relu6_m2D5229F7E1124A3E2316AD323EB09A2F869423CF,
	StatsOps_Unity_Barracuda_IOps_Elu_mCC36A131C61F9A749785C8D367D70C693D344F8B,
	StatsOps_Unity_Barracuda_IOps_LeakyRelu_m63DCA80F4FAB30E545C793D84F46D4A7525467A8,
	StatsOps_Unity_Barracuda_IOps_Selu_m85B154E134142452695829CCC744A2861A66B81D,
	StatsOps_Unity_Barracuda_IOps_PRelu_m152DC5297A152704B825ECEF84925FD49B8CDBD7,
	StatsOps_Unity_Barracuda_IOps_Swish_mDDBD197674FF505F2A0CA65D9C6562B7EFC8FF8F,
	StatsOps_Unity_Barracuda_IOps_Abs_m359B76F384B27E09019AC9A973CDA008E852E777,
	StatsOps_Unity_Barracuda_IOps_Neg_mCEE8853E5B8A500B9291A0D648ADB0AE90992D64,
	StatsOps_Unity_Barracuda_IOps_Ceil_mDD3531ABF192B850F3B15D6AE4C8C07A74A4C42B,
	StatsOps_Unity_Barracuda_IOps_Clip_mB494C647D8A0D8D9229CFE7783A2E2679EE25645,
	StatsOps_Unity_Barracuda_IOps_Floor_m31E5EFE9057A9D6D61948B753DCE0F5B77691483,
	StatsOps_Unity_Barracuda_IOps_Round_mBC61A104C6C8F0575251B078C3D1D4E538192E3A,
	StatsOps_Unity_Barracuda_IOps_Reciprocal_m4F6F27B19115A52819AB89D7FECF072BC86DDFEF,
	StatsOps_Unity_Barracuda_IOps_Pow_m14F695C84EA9A2A28CE9181085D8AB837005F44D,
	StatsOps_Unity_Barracuda_IOps_Exp_mB906D901D5745FE389CD4091CCC8D110AF8F88AB,
	StatsOps_Unity_Barracuda_IOps_Log_m5A196337FBA103BAF9233A8798E1A1EAE7D27AA2,
	StatsOps_Unity_Barracuda_IOps_Sqrt_mDAAF9802FC26F7D11CB171F8BC35162564244207,
	StatsOps_Unity_Barracuda_IOps_Acos_mA8E02756CF29FD53A6536EAA6002E0CEB5713204,
	StatsOps_Unity_Barracuda_IOps_Acosh_mF43AA8A715EFF61CBC306101F46BE97C835D189F,
	StatsOps_Unity_Barracuda_IOps_Asin_m820252F24D6750F4DF30FB95F8E91FD231169186,
	StatsOps_Unity_Barracuda_IOps_Asinh_mA0299A97295BC1731B5ABA2B53B55B4421892942,
	StatsOps_Unity_Barracuda_IOps_Atan_mE7C54DE32C0B4A3F355B62BFE2FC50A4F499FA30,
	StatsOps_Unity_Barracuda_IOps_Atanh_m4B9C771C5D7C602109E58EC20AFC099F057BEB01,
	StatsOps_Unity_Barracuda_IOps_Cos_mE90E2533E802FB053A3D0F51D5CBCB69B0407C78,
	StatsOps_Unity_Barracuda_IOps_Cosh_m9246C2692C2507FC0627A5BB03029A168256F9FE,
	StatsOps_Unity_Barracuda_IOps_Sin_mBE499DEF07BF9986F741AD4983096DFBBA8DB677,
	StatsOps_Unity_Barracuda_IOps_Sinh_mDECC94D6FD75EB255532C636C89FFC8C9BEF50BD,
	StatsOps_Unity_Barracuda_IOps_Tan_m2E0AB326F7610A7702F7F7150DDBCDC3C1FEB0CC,
	StatsOps_Unity_Barracuda_IOps_Add_mE4D846DF9EB1C9FA5041D437F2D854A192A2CC82,
	StatsOps_Unity_Barracuda_IOps_Sub_m099E8600D96F475908111CF807775A1310533B16,
	StatsOps_Unity_Barracuda_IOps_Mul_m902476A7E594F45446D9DB0D9AF7A342DCDF7B66,
	StatsOps_Unity_Barracuda_IOps_Div_m2E22DBB1846799D229FC50A1F8C1B840E41F236B,
	StatsOps_Unity_Barracuda_IOps_Pow_mD47D66DC5047233AB5474EA229B5A9B79373A657,
	StatsOps_Unity_Barracuda_IOps_Min_m04D6504B1C862CFEF935DE1AB10383B28353428A,
	StatsOps_Unity_Barracuda_IOps_Max_mF6C6A4207E39333A36D1BFA3C89573FE9A859605,
	StatsOps_Unity_Barracuda_IOps_Mean_mC40097726F3EA035DEC43A192C8966B53EE9712F,
	StatsOps_Unity_Barracuda_IOps_ArgMax_m6EDFB3462B5C5B7E2865634ACF3B87C853DBEA44,
	StatsOps_Unity_Barracuda_IOps_ArgMin_m1C69C1844C6F2A6893B5730AAF027F965B3E77B4,
	StatsOps_Unity_Barracuda_IOps_ReduceMax_m1EB9C2768E2C23B51DF0112F054FC65CA759A2EE,
	StatsOps_Unity_Barracuda_IOps_ReduceMean_m564A2932BFE22D708BC13C795EA73EFAE2C4586A,
	StatsOps_Unity_Barracuda_IOps_ReduceMin_m769956F9EB5FCE5C781048073C70F912E0469E7D,
	StatsOps_Unity_Barracuda_IOps_ReduceProd_m0CD573C08696A2421868F34BB8BFCF8C47B35D66,
	StatsOps_Unity_Barracuda_IOps_ReduceSum_mE3B17299DF341664904BC0C6CD228E1F6BAA0AC6,
	StatsOps_Unity_Barracuda_IOps_Greater_mCC9AFE5527F65677959A9AE962DCD584AE9583A6,
	StatsOps_Unity_Barracuda_IOps_GreaterEqual_mF743BB3559852C7F2AEE11E7BF3B0E76C7630D54,
	StatsOps_Unity_Barracuda_IOps_Less_mCAB3258623E5F81F9A4443AF85A2DE5946A56EE0,
	StatsOps_Unity_Barracuda_IOps_LessEqual_mE1949682885BC03CFC3F3FE90C91884BC12A24D6,
	StatsOps_Unity_Barracuda_IOps_Equal_m116DEA0CE3FBE90B07BFE4119B87413E050BBF3D,
	StatsOps_Unity_Barracuda_IOps_LogicalOr_m45802609506DBE3A7C77E3E0C877D09249C220E3,
	StatsOps_Unity_Barracuda_IOps_LogicalAnd_mAB05D1935267402BE85B88AD825D6E32BB261FA4,
	StatsOps_Unity_Barracuda_IOps_LogicalXor_mCF9456524052BA2ADD6D088290362B28EA5869FB,
	StatsOps_Unity_Barracuda_IOps_LogicalNot_mB4680B5AE0F1D204789476ED8F7FDFA506B12164,
	StatsOps_Unity_Barracuda_IOps_Sign_m15FDFA8DBB243AC500FD17BCB5D26868882C31DF,
	StatsOps_Unity_Barracuda_IOps_Where_mC30261D7A9AC37D8576C385D0B3A53C0ED542CD7,
	StatsOps_Unity_Barracuda_IOps_Flatten_m43CA37F6AA7EA2B1206CF77D06F323C92B0FDCC5,
	StatsOps_Unity_Barracuda_IOps_Reshape_mEC78A21C4D972CBDE14A8C79B2DFFA6E1211BAB3,
	StatsOps_Unity_Barracuda_IOps_Expand_m3A60D3E430D76B0D52A94DE4D2EBB7AB07AF6D00,
	StatsOps_Unity_Barracuda_IOps_Transpose_mF58DAD9C48E20912408ACC89BD4BAE6C3A6F86E8,
	StatsOps_Unity_Barracuda_IOps_Transpose_m0AD53B8345EB7002B21829CD806389384402FBB9,
	StatsOps_Unity_Barracuda_IOps_Gather_m033A8865436311FA0AE32D068DFEF4E460BB6A4C,
	StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_mCFEAEBE56207EECD5593D89913AB1311318DB945,
	StatsOps_LSTM_m5EC64C8A10DA90D95766FB58C6C61A3274C92815,
	StatsOps_Unity_Barracuda_IOps_Concat_m3EC695B440FF03584BC5C82DDE03C58964FF47C7,
	StatsOps_Unity_Barracuda_IOps_StridedSlice_mA09287C15D8A8DD6EF7E94BC615D654BB9C7CE40,
	StatsOps_Unity_Barracuda_IOps_Tile_m6B755ADC47B85E0D55C47C55050F6EBB4180D5D1,
	StatsOps_Unity_Barracuda_IOps_Shape_m916F2EDD1FA12FDD1C70AF763ED5D4701B9926D3,
	StatsOps_Unity_Barracuda_IOps_ConstantOfShape_m2FA25611438634D21B8A8A86061548ABFA049DE9,
	StatsOps_Unity_Barracuda_IOps_Copy_m47B3215D1BD0C7E95F8A430497E16B1D6C3F626E,
	StatsOps_Unity_Barracuda_IOps_Prepare_m95DF44B05D5FBF7C01E05E47A56CD2EC55CA6DB6,
	StatsOps_Unity_Barracuda_IOps_ResetAllocator_mA6C10B0EA0254CC9B45493F2A2BE2B596AF90737,
	StatsOps_ToString_mD3A343CAC1E090FFAB9FC15D081AFB25FEBE36C0,
	StatsOps_Elementwise_mAC0660B0D7DB17B6DABF6492D44D9420C2CB663E,
	StatsOps_ElementwiseBroadcast_m7733A0DAE25A937E33EFA61D36D141906C8B04D0,
	StatsOps_Reduce_mEC604FA374CE6EEE23F1C4CA61DAB6A6AFCCCFBC,
	Transcendental__ctor_m8B9ADA5BE078015D55F1EA884EB0459D332C9BCE,
	TensorOperatorNewAllocator__ctor_m3F2A16EF5878DAABE70F961386A91FCAF82F5342,
	TensorOperatorNewAllocator_Finalize_m72DF5354218A3069AE228CA64FC991220D4B7DAC,
	TensorOperatorNewAllocator_Alloc_mD451FF807D5AD65177667E319FC674419ED480C4,
	TensorOperatorNewAllocator_Alloc_m7D40E463B4F9002ACF8E8240B8E3BE14CA96F825,
	TensorOperatorNewAllocator_Release_m3062090C18586D6703C4F3CDB17B8972EF340EEE,
	TensorOperatorNewAllocator_MoveToDevice_mB374A542B2880AA67C87DD2FAAC884EF163C0D9D,
	TensorOperatorNewAllocator_Reset_mA6D5941AE2DBD2874063B67C6EAE9A198BF234FE,
	TensorOperatorNewAllocator_WaiveOwnership_m730DA5BFB7E87C4907EDA7C47DCF5AB4497853E4,
	TensorOperatorNewAllocator_Dispose_m8E81045860B903D090F04FCC8F8708EECB1DD5FF,
	TensorOperatorNewAllocator_get_busyBytes_mB93AC8167EA593284285FB03EB4907B616608D01,
	TensorOperatorNewAllocator_get_freeBytes_m6E2F9BF34068275839AB2C143A4356934EE12A5D,
	TensorOperatorNewAllocator_get_totalBytes_m13B2C36FDEB368272D1F3D86F2532C0D0BB2EACA,
	TensorOperatorNewAllocator_ToString_m945649EFF8FE347854057355AF4590CD70F40627,
	TensorCachingByShapeAllocator__ctor_m3B5930576FEC7B517CEF5E6033FAF2719468CC34,
	TensorCachingByShapeAllocator_Finalize_m2E75289CB442983CE9EB4EF251D3BCB69CA8D243,
	TensorCachingByShapeAllocator_AddRef_m44612830EDE9CEC7FAC33A4782CB9A22C2862D40,
	TensorCachingByShapeAllocator_DecRef_m46FB59F36F78CFA4ACDB9879B1DC1EBDEB748CD0,
	TensorCachingByShapeAllocator_AdoptFreeBuffer_m633C336E7C23E76CCA00D4255F62D6F4257972E0,
	TensorCachingByShapeAllocator_Alloc_mDF867A2FFE0551448F73877298392DCCEA156F12,
	TensorCachingByShapeAllocator_Alloc_m7007AC713E3E6D80341FDBD3C79BC89A30AB11D7,
	TensorCachingByShapeAllocator_Release_mD39AA0E7F5A1A673600F39C32B0CF00EBD5D9372,
	TensorCachingByShapeAllocator_MoveToDevice_m3007663AC9354803FFD7512CFBB299828CC47772,
	TensorCachingByShapeAllocator_Cast_m79A462A1B34015F5F0DF97F0BCB6FD4CA7805DC3,
	TensorCachingByShapeAllocator_Reset_mF2F260DEF21E64F77C0F2502B19CFA4EC825FF9E,
	TensorCachingByShapeAllocator_WaiveOwnership_m06CC242014B42851B8507A7A39BFE2E9C623CF0B,
	TensorCachingByShapeAllocator_Dispose_m3EB7CC7412FC88EF068A3F150CE659CB879D4E43,
	TensorCachingByShapeAllocator_get_busyBytes_m39C112FDF7E6CB59D090969C54E7EB4E39240B86,
	TensorCachingByShapeAllocator_get_freeBytes_m6039AE6222DA8506D8A5C4E46B14162A9433535C,
	TensorCachingByShapeAllocator_get_totalBytes_m17AA987221A958BCC2C91B74E5FBFD2F687D3A57,
	TensorCachingByShapeAllocator_ToString_m7760D702F11BDEA3CDCEFD08A141FFF562A8BECA,
	U3CU3Ec__DisplayClass13_0__ctor_mE005ACE374F58249FAFE8B1948E306EA71BE50A9,
	U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m3BE3ADFB2FD990695C8FFC79958B6B2EE3118578,
	TensorCachingAllocator__ctor_m6E9648282E6945F8791073B3F4E35252199F29E4,
	TensorCachingAllocator_Finalize_mCD77734661EA552E7365BE6B0D9234A6AEDB5717,
	TensorCachingAllocator_GetAllocationMaxCount_m8E112C18FDD1EA16B1C17BDF4767D21F34792586,
	TensorCachingAllocator_AddRef_m10D42BEF652EF5FEB973B06170A7F514E55A5F77,
	TensorCachingAllocator_DecRef_m6EF79ECA6C328A5EC1D2BF8A55D6A0AD5FA3409C,
	TensorCachingAllocator_AdoptFreeBuffer_m808301B80A9EF597F5D8D64B358540CFFB93F358,
	TensorCachingAllocator_DisposeAllocatedBuffer_m2E240C2E3501EC8ADB4A4213ACE4460BEE0551BA,
	TensorCachingAllocator_Alloc_mF03B33C623218258ED694393D12740C6678EAA4A,
	TensorCachingAllocator_Alloc_mDBBB4CA09B0D0ACFB785FAD51B9778E645A97AEC,
	TensorCachingAllocator_Release_mE68B863B43666C7B128CABD956166EB0DDAB523F,
	TensorCachingAllocator_MoveToDevice_mC601B312A3B7A49E79C1C873607AFB8ED791EF3B,
	TensorCachingAllocator_Cast_mBE38958EA8C000AE509854729C1A487FE4856DE3,
	TensorCachingAllocator_Reset_m76BB93623EB8887AE6D7B1BFB3FF4618DADF232F,
	TensorCachingAllocator_WaiveOwnership_m08884259A9478CA5F306086F143E43EAC32341BC,
	TensorCachingAllocator_Dispose_m9274ABC517A9B98CDC85899B76D5BC53C3C50F9F,
	TensorCachingAllocator_get_busyBytes_m92C5D72331E550A77FD62A8D183A15B1D0583313,
	TensorCachingAllocator_get_freeBytes_mF1762EA857953669200CABC0B559DF15D0B3DDBC,
	TensorCachingAllocator_get_totalBytes_mED25FB2C5E3829389DC3AA9F3B1A40EE0FB8FBD7,
	TensorCachingAllocator_ToString_mEA909C6818303DAE4350EABEF095D75A4B4F74C8,
	TensorScope___m1C05DF203215BAC9784F5C565FD7E6BE30C264CF,
	TensorScope_Remove_mD3FE671BC3ADAC74C69AB0D89D22F35352246867,
	TensorScope_DependentOn_m3189E8F49DBA545F47276D5584BD83F022092536,
	TensorScope_DependentDispose_m3D6DC3687CF12F69BFC9EFFB212361776233DBB9,
	TensorScope_Dispose_m26B8AA3CBDA5E5BA486BD65A3138F0FBCA0353EB,
	TensorScope__ctor_m5516EC2F851AF1E31A6E6FCB028C0D2EBDEEF8E6,
	F__ctor_m1C57D66ADFD855B49F57835986CEE5DA18C27122,
	F_Invoke_mF9DE40521BFEBDFCA0F615EECF518CBDD6F3B581,
	F_BeginInvoke_m30212E748BAF2A38BAE751325C3A6A1A52CF4602,
	F_EndInvoke_m3157BBE33AC60E05422245FC0105419821DCE01E,
	VerboseOps__ctor_mF8B929079BD5F1B5C387F08392E01638C83963AB,
	VerboseOps_PrepareModel_m4F341172CF66B035F9F1DF841369C4E62010B77E,
	VerboseOps_PreExecuteLayer_m9E79B34C65EFD12A741257CE77E5ADF82B489ACC,
	VerboseOps_Unity_Barracuda_IOps_MatMul_mEDD93F00C31F420AAC6F2B0FC8F2532C144C058B,
	VerboseOps_Unity_Barracuda_IOps_MatMul_m5621C4F6A0F4CF06D46361133D338E0B37551892,
	VerboseOps_Unity_Barracuda_IOps_Dense_m2D791C10F8F15E8A9BE3A1D33891D75B87EC7652,
	VerboseOps_Unity_Barracuda_IOps_Dense3_m1DF67178250A4DA905684F5C8F479F310B2C823E,
	VerboseOps_Unity_Barracuda_IOps_Conv2D_mEB61143AA26D61DE73FF6D531CBA265D1F9A5C91,
	VerboseOps_Unity_Barracuda_IOps_Conv3D_m340385E57D8D1F43A97AB4D60BBAD4BE1D8DDCE8,
	VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m03259FDA4B23EE31EFB5C2C7C8FDBD0DBC4F1B49,
	VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mC32E01214424D48F428DA15B789D900F43719BED,
	VerboseOps_Unity_Barracuda_IOps_Upsample2D_m74FFF29867F785B785C4BB00A65C7C539F08CDC0,
	VerboseOps_Unity_Barracuda_IOps_Upsample3D_m71A75A35045380E7FD15540247079C6FA8925FD0,
	VerboseOps_Unity_Barracuda_IOps_Resample2D_mB8A42961AA1854206690BE1C9662993BE834C038,
	VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m9F8102812788822C067233B1E56BE792A06F87A5,
	VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_mFBE091478FE37FDE516810A1F23CB04D0CFC8CE2,
	VerboseOps_Unity_Barracuda_IOps_MaxPool2D_m5DCA0C40A53362964B3EACA43F855AA29DC70AEF,
	VerboseOps_Unity_Barracuda_IOps_AvgPool2D_mC498B6A463CAB443A6E360C20FE60CCBD05E6FD3,
	VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m1E256C07918E7494A10DC46DE7A89C815E56DC93,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m75DB7F2160AF955012FE6A0E779BAA2B849B2B2A,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mD87136ACE2CE16DC6A08F9259A1EAC7293475877,
	VerboseOps_Unity_Barracuda_IOps_Border2D_m076EE76361F370A7F95DF82ABACDEB5E730CAD90,
	VerboseOps_Unity_Barracuda_IOps_Border3D_m4A52E674B342A29EB70D266A6EA34E6AE49FDADC,
	VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m76C95E9258BE296CE5C06F9E0D1DA63B1EBA1CE9,
	VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m328D656CFF4AFE1D2A4FE0F21E53C9F8FAEE55F6,
	VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_mF9204ECE85A72C1F6E77E2C97054B482A1C90CB3,
	VerboseOps_Unity_Barracuda_IOps_ScaleBias_m7994B92205657D30EDE8CDA86DAFF5EF36139B61,
	VerboseOps_Unity_Barracuda_IOps_Normalization_mE5C57CB24EA80D5DC887BD98A156D60FA491A077,
	VerboseOps_Unity_Barracuda_IOps_LRN_m395EEB99D3450F383D8FD5CA20068B9AE2B0A8CE,
	VerboseOps_Unity_Barracuda_IOps_Dropout_m07EFC7BF9056D5FFF1053F2F87884523EB3976E3,
	VerboseOps_Unity_Barracuda_IOps_RandomNormal_mE2A1391A510820D2295FAFCCA26C8BE342FAF631,
	VerboseOps_Unity_Barracuda_IOps_RandomUniform_m67F493BA5CBAFFB80599E33F41D287EAEAACD5ED,
	VerboseOps_Unity_Barracuda_IOps_Multinomial_mDF87CB2A1CA25505EC69F6E63B51759C2449FBB4,
	VerboseOps_Unity_Barracuda_IOps_OneHot_m24A6676E2B25184D6DB32ED68706A53D5D9CBBB8,
	VerboseOps_Unity_Barracuda_IOps_TopKIndices_mE40A6A418A5B3CF0B5D38C93B5B9B4EB9F5DA39D,
	VerboseOps_TopKValues_m6E1DF40BD573C370A7FD2058AEAB8194236A399F,
	VerboseOps_NonZero_mE66EB38C0654E1C0D78BF3924A9B0F4AF3FDC4C7,
	VerboseOps_Unity_Barracuda_IOps_Relu_m365731856C99E039FE6ED61E7310933169FD4277,
	VerboseOps_Unity_Barracuda_IOps_Softmax_m14EF4A4986448809F354E137B465FAA8B7C4F2A0,
	VerboseOps_Unity_Barracuda_IOps_LogSoftmax_mD6B719AB0944075D607BBA9ED769833350747C9A,
	VerboseOps_Unity_Barracuda_IOps_Tanh_m4D29788958D293CB71BC8C6F1C0F0187B3C5608C,
	VerboseOps_Unity_Barracuda_IOps_Softplus_m5F2280DAD9F8E4C4FF0C9828AB0FB217D6D30EAB,
	VerboseOps_Unity_Barracuda_IOps_Sigmoid_m9EB190CA8B94B3BFE7562172F99849C11280D4FD,
	VerboseOps_Unity_Barracuda_IOps_Relu6_mA26390A7C467D26848F62FB86BF6BB998A3A431F,
	VerboseOps_Unity_Barracuda_IOps_Elu_mE778380C26A440335B3E3F1249890CA2FF24F455,
	VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m220150CF781DAE64065A39389F7417C147664D58,
	VerboseOps_Unity_Barracuda_IOps_Selu_m3A7F76828B9BB5C08FA46B825D5BCAC6D7091F03,
	VerboseOps_Unity_Barracuda_IOps_PRelu_mC8ADD05124ADFD4CF846DA34AC0D92337E136DF4,
	VerboseOps_Unity_Barracuda_IOps_Swish_mA9B790C2475695CD0AD152B5DDC95A122675B66C,
	VerboseOps_Unity_Barracuda_IOps_Abs_m6D0D2900921F8CBEFD3D439DA0FF28878A07CEDC,
	VerboseOps_Unity_Barracuda_IOps_Neg_m3C436D642E8D71B1403111E0736F7F38A1055B05,
	VerboseOps_Unity_Barracuda_IOps_Ceil_m00364CD4E5E9A91D7114A75176FA98F1C52C0B5C,
	VerboseOps_Unity_Barracuda_IOps_Clip_mD0662FDD745CDD9A7B00669BE1E25198F5B79975,
	VerboseOps_Unity_Barracuda_IOps_Floor_m0AB946360FF2E49EF8898C9C8D9AFC8B0F422D05,
	VerboseOps_Unity_Barracuda_IOps_Round_mB1AEC9F071AFDE9B9E634F66EA3947706432A64A,
	VerboseOps_Unity_Barracuda_IOps_Reciprocal_mA4EA404A8340BABE7240C2A8B334E0E1CB297C99,
	VerboseOps_Unity_Barracuda_IOps_Pow_mE58DB332A7207EF1083CE1588E50372D8125D005,
	VerboseOps_Unity_Barracuda_IOps_Exp_mB78FBA9B652D3EE43A5AD43C084074A414279295,
	VerboseOps_Unity_Barracuda_IOps_Log_m4A7C90FC5F87171456508381BD4E0A58102450F2,
	VerboseOps_Unity_Barracuda_IOps_Sqrt_m7F990DF93CB3FEB70F64E9452839AD3D130389A3,
	VerboseOps_Unity_Barracuda_IOps_Acos_m337F7997B486437331D4DD00052E853481B29ED3,
	VerboseOps_Unity_Barracuda_IOps_Acosh_mE53C5C90A8DC7230236750F4BFD5E257F9B0940C,
	VerboseOps_Unity_Barracuda_IOps_Asin_mE7629EF686033B90E2B03D9164B6AFE12732ED38,
	VerboseOps_Unity_Barracuda_IOps_Asinh_m2CAA123657EAEA1149B94E5F5F7F0C27E56791EC,
	VerboseOps_Unity_Barracuda_IOps_Atan_mB2EB0D57EAEEAC86B873B21ED62D45C14B2C5EC1,
	VerboseOps_Unity_Barracuda_IOps_Atanh_m0EC93C0E35DD5FBF90ED69DBDAC4CC60A4F81DCE,
	VerboseOps_Unity_Barracuda_IOps_Cos_mE7479A837F23134D6E0F76FEFAB72293F98F5E87,
	VerboseOps_Unity_Barracuda_IOps_Cosh_m69AC12E01287AB123B3DDB3DC5151FDC757CE622,
	VerboseOps_Unity_Barracuda_IOps_Sin_m7ADC6F3CC3CEE8DA017921C1286DAD4E469AB2F4,
	VerboseOps_Unity_Barracuda_IOps_Sinh_m6C380678162579DC86015193052DE0F0830D7BFB,
	VerboseOps_Unity_Barracuda_IOps_Tan_m2F5F2F9A936E31C8A6FD84120F81CA1372E11A13,
	VerboseOps_Unity_Barracuda_IOps_Add_m407951A4786C0CD0557DFB72320DC8F9ADC9CA98,
	VerboseOps_Unity_Barracuda_IOps_Sub_m0D2112CFD42E76EB166BC57E0C39010192D0CCD5,
	VerboseOps_Unity_Barracuda_IOps_Mul_m9048E4B71E953AB4344D06C68FEA32A7B1EB9A23,
	VerboseOps_Unity_Barracuda_IOps_Div_mE8AABD81F62B66FAECEC9E5F574332F6D59288F8,
	VerboseOps_Unity_Barracuda_IOps_Pow_m699DC1CABC907B183259F18016FD8602A88A6BA1,
	VerboseOps_Unity_Barracuda_IOps_Min_mA21CDBE5D21CD84F24A46C4AC4F4458572BDC0D7,
	VerboseOps_Unity_Barracuda_IOps_Max_mF8F37BC07BB6B40FFFDE6493550C9453342BF714,
	VerboseOps_Unity_Barracuda_IOps_Mean_m2A0505342B8485385971EDB00A7D9E92049A794B,
	VerboseOps_Unity_Barracuda_IOps_ReduceMax_mB83906038719DD2FFD5EC8378015D354EDFD5A4F,
	VerboseOps_Unity_Barracuda_IOps_ReduceMean_mC901370A2377C55110A70EAAFD548D9A357EFFCB,
	VerboseOps_Unity_Barracuda_IOps_ReduceMin_m7134B187C3C72A2016DE5035E648CCC3D0FEE8E8,
	VerboseOps_Unity_Barracuda_IOps_ReduceProd_m05E65EE3F70E7EA62C7454EC223D861A9DFAB7A8,
	VerboseOps_Unity_Barracuda_IOps_ReduceSum_m1F2D7A57A50DDFBD2E9F3F5E870A6E20D057015E,
	VerboseOps_Unity_Barracuda_IOps_ArgMax_m38F96CAFFD4F45E5A50C8C098489A68BE08DFD8F,
	VerboseOps_Unity_Barracuda_IOps_ArgMin_m536A9F98312ABA534ABC1390804755EDD9076ADF,
	VerboseOps_Unity_Barracuda_IOps_Greater_mF5E9587AE336D38D701F172CA6386956B9FCC340,
	VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mD71129FADE713665C687D2FC9AF3B3F41062A4DA,
	VerboseOps_Unity_Barracuda_IOps_Less_mA2CA98B56009F4DE4E0FB405B26697E718BA006A,
	VerboseOps_Unity_Barracuda_IOps_LessEqual_mD8F47637567022CC90A1194AD7C9F81ED740A159,
	VerboseOps_Unity_Barracuda_IOps_Equal_m35AC0F2B044138A0878B7FCF55CC675F4226A017,
	VerboseOps_Unity_Barracuda_IOps_LogicalOr_m1E44B6316451D62597CF2CE2791E86BFF14E6BCC,
	VerboseOps_Unity_Barracuda_IOps_LogicalAnd_m53D3854E84BAE1E60D9B4DC22CFC80A6C08427E5,
	VerboseOps_Unity_Barracuda_IOps_LogicalXor_m539ACBF775E73BADEB96F833066C304035A71CCE,
	VerboseOps_Unity_Barracuda_IOps_LogicalNot_m0CD37988688EA6BA301C219DE5385C5BAA62A00F,
	VerboseOps_Unity_Barracuda_IOps_Sign_m26587732D56C6EFF9665BD3A914F5B10CF3982C6,
	VerboseOps_Unity_Barracuda_IOps_Where_m24AA6BADA9545D5C085672C7093E045B9968908F,
	VerboseOps_Unity_Barracuda_IOps_Flatten_m81ECAB78445A9F36F068B37147FADC5680C98FC2,
	VerboseOps_Unity_Barracuda_IOps_Reshape_mBE1AEDE5D3087EDC0DD802BAE3120BF72A7A943C,
	VerboseOps_Unity_Barracuda_IOps_Expand_mFE95D6E86A169A98CC41D278BAEA9BD529648804,
	VerboseOps_Unity_Barracuda_IOps_Transpose_mD6089433B7E93A01B195DAC26C5E843CD2D172B0,
	VerboseOps_Unity_Barracuda_IOps_Transpose_m05B9B07E8AEAA805AAA505D8352E422633480299,
	VerboseOps_Unity_Barracuda_IOps_Gather_m4D28D6AF2B1F431BF64FA70DC2D851717953926D,
	VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_m79DB64EE007296F38A874A1A6135098F9771ED01,
	VerboseOps_LSTM_m7BACC4ED7E8DCCA7BD0453D407A7457D7F852D01,
	VerboseOps_Unity_Barracuda_IOps_Concat_m892D1B129213834EA2DB89601824A0E2A59604EA,
	VerboseOps_Unity_Barracuda_IOps_StridedSlice_m1F33F84C92C163F45E8569FEBEE8C858E360241A,
	VerboseOps_Unity_Barracuda_IOps_Tile_mAFBC7C9695FD5E37FF917ECF9B78A05BB674CC67,
	VerboseOps_Unity_Barracuda_IOps_Shape_mDB89106502D81BD7C61BAF029FFA69724519EA76,
	VerboseOps_Unity_Barracuda_IOps_ConstantOfShape_m97392AE184873E866BEC7C35F2EB66FEF6424EAE,
	VerboseOps_Unity_Barracuda_IOps_Copy_m6051B247B74E646701B10206BB2A49ACC24CA933,
	VerboseOps_Unity_Barracuda_IOps_Prepare_m01C306DE27B60364CF930427AA04C9B926C7CB25,
	VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m314C4E562E49CB2525196D0A5BE08058DBD419B1,
	U3CU3Ec__cctor_m16F0EDE0047A12E9C1183EB5A47B25212135533E,
	U3CU3Ec__ctor_m844589AD1245CD726C4C001A0A5D84B91D3F4E39,
	U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__105_0_m70C905BF7A44185B7F3F5899756FA1989B84C44B,
	DeprecatedTensorExtensions_AdjustPadToPool_mF7E153782E5FDE4057122AA9AAA78B5DD7C2A0CD,
	DeprecatedTensorExtensions_AdjustPadToPool_m773070CE37D9F3FCCE9EB79ED2966F8FC3705B17,
	DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m95064344418A0CC41E3612F7EA9212004DD12D1E,
	DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m9DA4A9B447C2D52C8793B6F6EA153DD7426F55CF,
	DeprecatedTensorExtensions_Unpin_m0659D780EE05710D050DB133C524864DF3A23413,
	DeprecatedTensorExtensions_CastOnDevice_m2BEB3B0861CBB89424A40CA7ACD3EE0CB402C586,
	DeprecatedTestSetExtensions_GetInputShape_m39B4EA7C754664E51B2F906B237A3BEBF525BC78,
	DeprecatedTestSetExtensions_GetOutputShape_m5210BFAD48F2B3DFD8687C46553F3F5F83FA0241,
	DeprecatedTensorDataExtensions_GetMaxCount_m1302B23391D2AF422337CA681519A86ACB14EAA5,
	DeprecatedWorkerExtensions_AddInput_m8CE22F8C2BCF42177DC570C34B891C6EA3D1A412,
	DeprecatedWorkerExtensions_AddInput_mDFF6F93384EF99D576E3F331FDE78B722C29BA81,
	DeprecatedWorkerExtensions_Peek_mB9DA0EAF3927C2097424DA483618B97972050ACE,
	DeprecatedWorkerExtensions_Peek_m7906C48EFC000C138659A96993721D5BBF96A545,
	DeprecatedWorkerExtensions_ExecuteAsync_m52CB2796F2AD6C675ACC97AB551030B879CB3FBF,
	DeprecatedWorkerExtensions_ExecuteAsync_m484A64D2FA65AD44AF133885E8CDACF617610FF5,
	DeprecatedWorkerExtensions_ExecuteAsync_m277457CB673F0A39A293B86DE6EE60B67505802E,
	DeprecatedWorkerExtensions_WaitForCompletion_mAF349207AC48000993EE3E65FB4380B8D8CBDB14,
	DeprecatedWorkerExtensions_GetAsyncProgress_mF9C1C7FE148663036B6A8A40EFFE9F1AACA3EA9F,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m4C6AB2857A1999D2254DB51D6827C2D05D443242,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m26320628B3C0BFA9F1E4A68C40DBBBD2706CD994,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m8F62832DAC6C2FD091F758A1EC83E1DC2B10C2DA,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m3A06B082427AADEB395F1F495DB581A267C29C37,
	DeprecatedWorkerExtensions_Fetch_m8783D328228AA1766DECE3E4F9EB5A025F1F0DD2,
	DeprecatedWorkerExtensions_Fetch_m60182BA905FBA9CDF99A005FD7B39DC46D645F05,
	BarracudaWorkerFactory_IsType_m6B93FA704779A64F9996CDEAFB730C5BABD2CF57,
	BarracudaWorkerFactory__ctor_mB9BFE93864AA70793A9CFBC9E0E2E061B3C0E370,
	BarracudaTextureUtils_TensorToRenderTexture_mC68B5D23C06DE3D0A1463632E681DB8467D9FA61,
	BarracudaTextureUtils_TensorToRenderTexture_m1564C9A1B6CFB0DD7453BAB37212E9DC92B3D0B5,
	BarracudaTextureUtils__ctor_m2ED4E517FAEDC99D6C8311C4342540191514F270,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WorkerExtensions_CopyOutput_m4297C8B0AB5590C3E9B174C18D89C27856FBD1CF,
	WorkerExtensions_CopyOutput_mB99C7CA47CCC1B97536ECB20A0EEA1F33339E780,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RecurrentState_InferBatchSize_m2852ACCCCBD8E07A661D77DBC1FF054E148C8950,
	RecurrentState__ctor_m25F92F69B692CE9F95ED4CEA0CC065394A949C60,
	RecurrentState_Finalize_m9C585456045F03F972B7BB39B1C3D41FA6C0E8B0,
	RecurrentState_Dispose_mA96F04F613E5DB41644079E2CAA5C972CFFB480D,
	RecurrentState_GetBatchSize_m816512A6F9E64D8EFF9848AD4961070C294E5F3A,
	RecurrentState_BeforeExecution_mC53483C6CA1C8991033E21FA2B5120B25F366188,
	RecurrentState_AfterExecution_mE2B1FDDC8329E0E09C11FBE15FA40572492287E3,
	WorkerFactory_CreateWorker_mA4961D52618119948EF42727E5C587CBF4051720,
	WorkerFactory_CreateWorker_mD48F55FE0882A6FFDDC05B9231EBA06C3CF8E67C,
	WorkerFactory_CreateWorker_mC73D0F2088953D2D870D5C405FBBD45E5A3E2580,
	WorkerFactory_CreateWorker_m63B1AA1B82AEB351371CE5FDE6C5023EC441F392,
	WorkerFactory_CreateWorker_mE411FAEF5201B8C7C1E2F00B41EB11E28B0E1F8A,
	WorkerFactory_CreateWorker_mBAFCAC781C2885942F12765658485566D09C2489,
	WorkerFactory_CreateWorker_m5C1692901B3806693F2046C7777C9702A01A1274,
	WorkerFactory_CreateWorker_m902A31ABE9998CC1E9C40C32DB3A5F4CA1007D3D,
	WorkerFactory_CreateWorker_m24BAF96D8A1BB7FEBB53A5FB648F497F3D522325,
	WorkerFactory_CreateWorker_mD9C277F1AC92D6532A85E84C5CABFD0C35509D88,
	WorkerFactory_CreateWorker_m023A10A44B7721973EAB096B8748B8B702C4D0CE,
	WorkerFactory_CreateReferenceCPUWorker_m4468F68A883E2445E750D57BA1D3238FB02BAE63,
	WorkerFactory_CreateReferenceComputeWorker_m861FE07D8AE4914BED6FB654535D54F034A07592,
	WorkerFactory_CreateComputeWorker_m10D41286D90BD483563C017B5E48AC5984B8B998,
	WorkerFactory_IsType_m874E2127A5744F4FE3FDCFFA2AA7C04392298623,
	WorkerFactory_GetBestTypeForDevice_m1CC803A3A0FA5783DE42EA189AC0E0AED5BCFEE2,
	WorkerFactory_ValidateType_mC849DB5AEBD9693353F23A775FB7406A5A6B4709,
	WorkerFactory__ctor_m8FA14747E5AFEF27B9437886758A2979C50EAD4D,
	WorkerConfiguration__ctor_m79BFE73A37D292BB2DE12C3A1B04057802AE2061,
	WaitForCompletion_get_keepWaiting_mA66F255C6FD46763E54E219015CA4FFC896207F4,
	WaitForCompletion__ctor_m08693D2C4C595F4066A5587EEB86082BE7A6B7C0,
	ModelExtensions_CreateWorker_m84852252E47A0F0F4DE6D1510C7E6C59A64BE019,
	ModelExtensions_CreateWorker_m94487ED53EDFB963F795CE6FA9C5D845B9BE9389,
	NNModelExtensions_CreateWorker_m143F740FDEFFE7EAA3C10AF4DA27F1FAC543DCB0,
	NNModelExtensions_CreateWorker_mF825CFE1C6FB6BECC5CFFEAAB7D7B50BD33BC4D6,
	D_LogWarning_m82D89D513AC43402E47009C9F288A7225E1D57D1,
	D_LogWarning_mE66DF1BDF94BC4574E4D23E3634CCFD2322E01C6,
	D_LogError_mD01904E8CD07137CFCF0D93F876AB9AA6B80FBB5,
	D_LogError_m4DD59DD56B1A78A8F60885AB9C363BDEC413F419,
	D_Log_mBAFB6B30A6C571C94D9814E4C23C448F02739515,
	D_Log_m922B6352186EFE405D605E802C5A25AA73868737,
	D__ctor_m993DCB2D72DD1EA58747EF9EFA15130D42ADC1FD,
	D__cctor_m738A776C3A6915E9F911D130995BAD0742DAADAD,
	Debug__ctor_m3624F0CC83532C1685E646C6AA86E4326AA61980,
	NNModel__ctor_mB5F33564590F9F3B07B2136D2B0CA3345E59E865,
	NNModelData__ctor_m7EFA24BC16AD35CBB919C25F4A892AEE663CAC10,
	StringStringPair_Equals_mADB666454B85C8C9002E710886D2FD3FC2231C4B,
	StringStringPair_Equals_mA3407F90921CFA8319225E79F406AF777D20D001,
	StringStringPair_GetHashCode_m3BF40FD0CE3382CEBC43AC73E69FE25E4D00425F,
	StringStringLongTriplet_GetHashCode_m93E6DE303C0A8B182B72DBEF932659B4366DB129,
	StringStringLongTriplet_Equals_m9499B2C596B7E740682198A63C612B9424913CB6,
	StringStringLongTriplet_Equals_mDAACEF0F4C92BA18F8B0FF10AB37BC831B778213,
	StringCache_Lookup_m80EE1FF42C651AF290481EDC8A58496A14CCFFB4,
	StringCache_Lookup_m6D0EDCE98D53FFA76E2F5EDB6CEC3D8DF1562BEF,
	StringCache_Clear_m2B73944867D8020584E9696A6A452CF0C0E9E34D,
	StringCache__ctor_mEA993E7A38A48441B83987F7AA294C679D81F232,
	TestSet__ctor_m32296A1EC3734497DBB062B606EC411C6520DBE6,
	TestSet__ctor_m956DE1CA7B67330A57D52D003625EECD3EAC57F6,
	TestSet__ctor_m273D4F6BE83616884EB4C65D16A5CCE93AD6E7C1,
	TestSet_SupportsNames_m1849217A52F39E8D6F917D9B41ABF31CEF540831,
	TestSet_GetOutputCount_m0F8BD0A8A89520ACC8CDD7703D8AB8E531AB1D6B,
	TestSet_GetOutputData_m795825A6DBB46054108AA93B8181636B64B8A0D4,
	TestSet_GetOutputName_m83CC22F82A68A9D542173A427DF7CC62D306F282,
	TestSet_GetInputCount_m1C45DADAD0F9E45E90A5B0BF8C4BE81DDB72FFB7,
	TestSet_GetInputName_m77FEB57EC19E601FD57784AE50758D9DAC86A43D,
	TestSet_GetInputData_m08723AADB6B8DFE6F39DAA06518E4BD753615456,
	TestSet_GetInputShape_mA846E7888D5688254871B41A716B368B5B0B7AC8,
	TestSet_GetOutputShape_mE1A1CE83A6D752718E3BB53A67DC279F275DAF54,
	TestSet_GetInputsAsTensorDictionary_mDAE9E792C7466F0AECD5D033754AD9AAAC48E8EA,
	TestSet_GetOutputsAsTensorDictionary_m84B72806AE269A429561DD986054D139264EA37A,
	TestSet_GetInputAsTensor_m49AF14024ACEDA036985B06A3A5DB05956FED822,
	TestSet_GetOutputAsTensor_mF8176B78AE1A76979E188FAB15B20B4FF4AD1C13,
	RawTestSet__ctor_m1B408FE448433063C2CDCAAA95A2D11AF0CED892,
	JSONTestSet__ctor_mBE715552E509A339B40B2407F8389EC5512CEBEA,
	JSONTensorShape__ctor_m16C436369A54486D5EAAC75F8177F1420A76DBF5,
	JSONTensor__ctor_m2D047872AFE343EBC0BC92495B8E64F2E64FFA03,
	TestSetLoader_Load_m6B6BA679E459E86799992F057A29E549DDAD074F,
	TestSetLoader_LoadGZ_m7F44D4788C3AF4EED5ED627902ED234192E590CC,
	TestSetLoader_LoadJSON_mA2410B97A550C0292752999D26030EDFA6ACEE3F,
	TestSetLoader_LoadRaw_m0DD9852AF7CC59AA3BEFC72EBB6C7E38EE82A27B,
	TestSetLoader_LoadImage_m03303C9E1D18400CF972413C723A78775D627C4B,
	TestSetLoader_LoadFloatArray_m857E81CFB88088885C1529D4F4F84D54C1E24C4C,
	TestSetLoader_Open_m2F18F88FAEEFEC439D6C4113E17DD20045DE9351,
	TestSetLoader__ctor_mABA3F70FADBA8EE24B2B108B5B1C8D1830259850,
	Layer__ctor_m3A38999F751C16164BF21C293F72F7AE8BC70022,
	Layer__ctor_mB8E93D6E1B8E81CD769D0C33AAB886A77A912A9C,
	Layer__ctor_mCDFB28A4B21F905955A963B83DC8610FC232A8E4,
	Layer_ToString_mDA02DD3A6C293E4FE6FB23E103E71B777FED9264,
	Layer_DataSetToTensor_mF7A1BE2F23DBABCAA918E17DD5497B165CC7D53F,
	Layer_ApplyTensorToDataSet_mDB9BC83E632E0624FE2069396121BDA453AADA08,
	U3CU3Ec__cctor_mFE5B8C2C7193AAECB5413D69B1EB4A00A9D329D0,
	U3CU3Ec__ctor_m747345BF8D0BE046B85E3ED1A32B03ADBB300BB5,
	U3CU3Ec_U3CToStringU3Eb__25_0_mA9F57D6975B6DEE4F8CF045E05AA712FD25D4CBD,
	Model_get_Warnings_m92E23EA836FC6E707CA01BD6948CF3EDB78551BB,
	Model_ShallowCopy_mF7FCBD8F668CF191D95C550BA6168118C2064EA6,
	Model_ToString_mF3C8BB02E731AD196995C9988ED476FD579A9BE3,
	Model__ctor_mAD764220A761A891A5AAAC9E7C8909D29BDD56F5,
	Input_WithName_mAF604379319D2484EB7F05DD9CF167A4C5EF89B3,
	ImporterWarning_get_Message_mA8547DE77ACCA5096B83D49C3D6EBF00CCBAC025,
	ImporterWarning_get_LayerName_mEA18E769E4A045787C9CC099AB3FD1C3455F7153,
	ImporterWarning__ctor_m660F8AAE6E844FB89B3B78472B3181B508B5F408,
	U3CU3Ec__cctor_m652537AF3A9793744961E96AB541C910E9A0543B,
	U3CU3Ec__ctor_m740723A7B0060B8E09AF66A27C2B3DDBEAD6F217,
	U3CU3Ec_U3CToStringU3Eb__17_0_m26FFCEA7A825D72675E8A92A662108AEC37D1CAD,
	U3CU3Ec_U3CToStringU3Eb__17_1_mFCB4F6916A24F285EDA474C1D9FDD3DF04570FDE,
	U3CU3Ec_U3CToStringU3Eb__17_2_m385CA366DA80F79483BB58A8961E7F35D14FF0C4,
	ModelMetadataExtensions_GetTensorByName_mA9EF2C18F52E764220A1AA59DB193AF880E796B3,
	ModelMetadataExtensions_GetShapeByName_m1D4B4909D97513ACF2F4A3CC1F36D6ABE17424B0,
	ModelMetadataExtensions_GetDownStreamLayersCount_m7FF7CE213AF6C0C78855062FA9EEE96D99495EF5,
	U3CU3Ec__DisplayClass2_0__ctor_mCC886D5DD65A87400E167252617E271CAA47AF93,
	U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_mEEAA29D26D9401751DC6479E0B54F4C251FD0F82,
	ModelBuilder_get_model_mDECE31DCCA1A603118F5F0015C4E6394EC208A1F,
	ModelBuilder__ctor_mCFEBBDC2A2C1A303B2242DDAF8C4BFF494ACEB0E,
	ModelBuilder_Input_m9840AB95C393A5903010AE9D6A8C6BB72FBF1F70,
	ModelBuilder_Input_m8CD5ADD47BA4B70A9ACADA10ECD774006B0128B8,
	ModelBuilder_Input_m56C729B7B3B2B59DC304338FA553B5CAEED65E8C,
	ModelBuilder_Input_m0B55FBC0CA4A7C9F31DA7139B2F61E118AABCA31,
	ModelBuilder_Output_m3053F1F23E94F9FCE8ED7214F6A615D8AC111211,
	ModelBuilder_Memory_mD04983486E5C6187EDDD37942CE5CBEFB88D6F8F,
	ModelBuilder_ResolveInput_mE6BC6900DE0C046C4FD53D59437A289E95A4D52F,
	ModelBuilder_Const_m73E3A1AB469CDB7E2B99C43A3BA6B11823DD1232,
	ModelBuilder_ScaleBias_m9D019BAD129B20D556844289F1394513B951F407,
	ModelBuilder_LRN_mC6E12A93400A17069D69930F60CA211E6BAAF7F4,
	ModelBuilder_Shape_m1E8149B3288CDF3CC631007719F8362201C308C9,
	ModelBuilder_Normalization_m12FDA866ED4D985C6EA961704A811CAB08BBF699,
	ModelBuilder_Dense_mA9BFD06E814A96FF6D51311D6B8D01266D164192,
	ModelBuilder_Dense3_m39587A54B55258BAE9C2275AC5E6707B23A9605D,
	ModelBuilder_MatMul_m219D341499DDEC166CEB6F8E43D187E1EAD41C58,
	ModelBuilder_Conv_m49C62F3AA7B5173B7B2E484B362A4D5E6D3F43BF,
	ModelBuilder_Conv2D_m4A4546A8D0A10E4E6385E1C0810780EC8E20B49C,
	ModelBuilder_Conv3D_m773BD7950EAC1B27A47FB5073D3B2C86FE2B7D85,
	ModelBuilder_DepthwiseConv2D_m227224B300FEA951ABDA3C269FF0B9A24FEF72B3,
	ModelBuilder_Conv2DTrans_m4FE48F3A5E201B71BC44CE72CCCE44476DDE0513,
	ModelBuilder_Pool_mA34944D3A03F73B86A666CC8923F8418E9FE26F9,
	ModelBuilder_AvgPool2D_m2099E8865DAA16D36689AF041F7A67BD4E51FE90,
	ModelBuilder_MaxPool2D_mA5414CFDAE551AA93F0A9D7C5C2975F22EC6FB24,
	ModelBuilder_GlobalAvgPool2D_mE08F2AB0D4F831E2DB3C14EAD9B04DD150D0C4DF,
	ModelBuilder_GlobalMaxPool2D_m13D586F562EFE7C37DFF509C1037EA0F69EA254D,
	ModelBuilder_Upsample2D_m77F85AEE10250C3C43752FF18840327B2D7B9FCE,
	ModelBuilder_Upsample2D_mD494CFBCDAE46E7B757149BE51C596363530A700,
	ModelBuilder_Upsample3D_mA3A954A5F0AAF4092862AEFAAFC98ED7122DCA01,
	ModelBuilder_Upsample3D_m7DA814085CE6C5BAE5A097A129115EFDB15BD582,
	ModelBuilder_Resample2D_m058A7D2BF7ECB14CF0D986393D9DE0F42CFFE9C9,
	ModelBuilder_Resample2D_mCD9C6F3024E4A47192EEBB92F46CD8119FB77FF0,
	ModelBuilder_DepthToSpace_mFA0013BEAFEDADDC75ED247F89BF597981D3A282,
	ModelBuilder_SpaceToDepth_m1241522BFE891432C36B0A71F785B016E6B2CC96,
	ModelBuilder_Reshape_m7D9CDFD797FF56370E600BA2C217C6F4E27FD1C8,
	ModelBuilder_ConstantOfShape_mF266B8F31BA111BCCF8E76648F378ACA0EB1F6C9,
	ModelBuilder_Reshape_mA2470CBB907AE0CE3847C57F840A3FFCBC27D049,
	ModelBuilder_Reshape_mC6DB182060898FB09D5C4B8E6FBD463765D8C7EA,
	ModelBuilder_Expand_mDB83AAB9A7AEB8D7FC92524D5C457AB9B6802134,
	ModelBuilder_Expand_m92CAEEB9CCE669978D8AC2D3DE2A294B01F8B3D3,
	ModelBuilder_Flatten_mC2916D3B628FD99C1D230D2CAD15B04C5ECDCF34,
	ModelBuilder_Concat_m70FF68EA53236CB8E8DEE2D4651FCB60214C2612,
	ModelBuilder_StridedSlice_mB091E068E4C27D13825E852E0B6B1616F1E68D29,
	ModelBuilder_StridedSlice_mAAC58AF34F38A8D884D2E16B5497C5DB6E5F9896,
	ModelBuilder_StridedSlice_m7F54AAB4193EE2B5E4D6E251065B92F93F4A156B,
	ModelBuilder_Tile_m4012A91483BCA70398DEE93883F275EA4F46FB34,
	ModelBuilder_Tile_mAF1DFA356540C4257A7A716EAA8A345AAE697FEF,
	ModelBuilder_Copy_m29058939F138BEC8B19D65BDDC50AAC9C1A5C9A1,
	ModelBuilder_OneHot_m0A6E7527F05944FFBD4FAD6EB794DDCEA8DB2EFD,
	ModelBuilder_TopKIndices_m309908DCEC4B5EC9D291A9CDFEF7CF002D22E59C,
	ModelBuilder_TopKValues_m51334DB4430B2A5BE5315A338B06E7E5E37C4328,
	ModelBuilder_NonZero_m07DC6E62B17A83613DECD24AEF75F1FA999D0ED5,
	ModelBuilder_Transpose_m7DC1ECA3B720A37DA7DF43111A6530FA72636B84,
	ModelBuilder_Squeeze_m8B9739C937CCA62278308CFEBB3B19BA12E7B3EA,
	ModelBuilder_Unsqueeze_mE81ADFCCEFAAA803D8ADF41662C7F995ED610F6C,
	ModelBuilder_Activation_m497D00129CA56A5950027A5008AD89D229886BE9,
	ModelBuilder_Identity_m0DD1E379434A6A50E4BD96478B18933A71289401,
	ModelBuilder_Relu_m629B102D295A25906A58BC9F0AF7C3628A93498F,
	ModelBuilder_Softmax_mCD6F992899BB955AA424E4FF9CF79EF1B1C78B00,
	ModelBuilder_LogSoftmax_m2BF02EE6A5F2782691A74B652CC09BF33C63810E,
	ModelBuilder_Sqrt_m9CCC92B14F5BA454B723319A17AA1AE54F704C94,
	ModelBuilder_Tanh_m9147ED6DD9DB8F934A4851598C6E80797A6EC0E6,
	ModelBuilder_Softplus_m1E3DB070879D7EE19EA337C3EEFAB3FE54EE2716,
	ModelBuilder_Sigmoid_mC6FC69AD9F20F89BDEEAAAE551B5AC38E4679DBA,
	ModelBuilder_Elu_m1FD81F3C4926F6402C07E9D206B67582284D4CF1,
	ModelBuilder_Relu6_m315A8C696C2FC45D4927A176494C6600C1AF9F1B,
	ModelBuilder_LeakyRelu_m5940DCEAA86B0FAF21F29CD8E169A1732794648C,
	ModelBuilder_Selu_mAADEA719D7DBEE8052B44E650903EC4D82AAB6D0,
	ModelBuilder_PRelu_m34AC5FF7DDA8BCC65214C555CB45010C31DC9C8A,
	ModelBuilder_Swish_m2B8DB9BEF10CB4DA8D11EB426D52D3A27E844BF0,
	ModelBuilder_Clip_m12BEF1F91CF6604F56BC74BD60CB097320FF46BA,
	ModelBuilder_Exp_m457929F7F492B315750CFAE7485D5A515BA0F98E,
	ModelBuilder_Log_m917AE2A0E8121437F90CD13619489558B83F7400,
	ModelBuilder_Neg_m929F5824D81080AF609215F9128EFA70305659BC,
	ModelBuilder_Reciprocal_m1A5F34869143942788EFE2CE00F5E25750377AF0,
	ModelBuilder_Abs_m96DDC9A4D184356AA677FA5612B8ABDEC84F3D33,
	ModelBuilder_Ceil_m923041FFF578680761827DA6A1244A8727F8A065,
	ModelBuilder_Floor_m1B0D4117F0467EF81D47C6AFE2049E7456C51C34,
	ModelBuilder_Round_m1BFC17A745AC30E8F9F9A95805A6CF81E197C336,
	ModelBuilder_Acos_mC1BAE1026CEEF4F29D73444B351F61221F401E09,
	ModelBuilder_Acosh_mC8A7213254B3EB8E99DBEAB322FFA0F756BC4E63,
	ModelBuilder_Asin_m28C2769B5AC6159F49C8623F4D79F00392959C8C,
	ModelBuilder_Asinh_m490BD3E75AE3E2B2806B4CF87A603333ECCE0223,
	ModelBuilder_Atan_m4F6CE694990B2AE2032A24FE198616AB455DD2F3,
	ModelBuilder_Atanh_m30D725ED2F30E35D0AEA620B2A2A700FBB28B757,
	ModelBuilder_Cos_m9ECA2F4D66F2F0FFE222DE95DD0F65926F3BA6B0,
	ModelBuilder_Cosh_m305347E814EB776114A832642B5B7736EF706437,
	ModelBuilder_Sin_m529E7D546583429E7D1E0E7B6015C816AF54023E,
	ModelBuilder_Sinh_mF9E04137F0FDB118AA9F1D0DF1CA3B0F551CBB56,
	ModelBuilder_Tan_m6F2A226FBD8517076952E515F0A9FB1AE127AC38,
	ModelBuilder_Broadcast_m163DEF960733BECC0D40C9BB37765B96DBE58C2F,
	ModelBuilder_Add_m7E2DCC5724D6C6ACAEA632E7A874A8E37C1DFF2A,
	ModelBuilder_Sub_mC80569C8A969F7984E25BA02AE867E840CFE7460,
	ModelBuilder_Mul_mA1D4DA88A70BC5E970F1AC7AD9D853A2B04484DD,
	ModelBuilder_Div_m4F484249F3FDDE64B98645D6976FD00379E4E67F,
	ModelBuilder_Pow_mDFBC1AED28859206D5CF40CE1AF00843E5785E23,
	ModelBuilder_Min_mE30A386C8B6871C6F4EC1CE3D2CC66895F5E1F44,
	ModelBuilder_Max_mC33D5881EEF75E425ABFC06E7CA844D23A734EBE,
	ModelBuilder_Mean_mC29CE12ABE2F9F44E77A78390CB230370449D486,
	ModelBuilder_Greater_mD1C9426BD1421B49984C5BD5EBBE8F0F3CC2E834,
	ModelBuilder_GreaterEqual_m0968AF76C973307DD8C2B394B1E0834739D5B120,
	ModelBuilder_Less_m28AAE3409C925DB37298039973482A3A26A27B82,
	ModelBuilder_LessEqual_mBF0056C169A0EDC909D9FB221FE8840E827CEE90,
	ModelBuilder_Equal_mCBF66A243060C355E5EE49163F64665E7FAE3C78,
	ModelBuilder_LogicalAnd_m39E5CA8B3355C9960402718814E8B76EB5A70424,
	ModelBuilder_LogicalOr_mDE9AB93E04C54C3AA09F3F1788654F415435C6A9,
	ModelBuilder_LogicalXor_m873708788F6B53E99D1D61F0CDF738A66010A0CF,
	ModelBuilder_LogicalNot_mB1D071F12364597398C11865DDFB0D2F0D0ED653,
	ModelBuilder_Sign_mED72A40B67D65B9A176C31BFD455859DC53FD76E,
	ModelBuilder_Where_m6DCB902807F651A744770A0AE804793ABB26004E,
	ModelBuilder_Pad_m3AE36CF49E2645E8A384707C093EC95F649704A8,
	ModelBuilder_Pad_m1960DC51761886844F07676CC5FBB3D4B1E649B9,
	ModelBuilder_Border2D_mA71C03C5C92440435421550043C8C5ACFD52AD8D,
	ModelBuilder_Border3D_mDD59DCD072CA1A864534B06EBEBA158379614282,
	ModelBuilder_Pad2DEdge_m8637CEB9E3C2A3AC0AA26E8C813A48F48F99590B,
	ModelBuilder_Pad2DReflect_m79F1EFDB91F5D4DA65D7F676F5AA12603FFBCF85,
	ModelBuilder_Pad2Symmetric_m8C7AB132931997A6284140A98D23E36DF193A1E5,
	ModelBuilder_RandomNormal_mBFA12B9B6A0AA7608A5784477DE8BE0F91A8B867,
	ModelBuilder_RandomNormal_m509F7139D6B2297D647CE91F18ABEAA54B07B091,
	ModelBuilder_RandomUniform_m96AC441AF46DAFF64921D76931A95CA85ACE5C05,
	ModelBuilder_RandomUniform_m137E423F0751A245D7E36C4DE0D013EAAF617F38,
	ModelBuilder_Multinomial_m42DFB869987563BA47CC0DF8EB1327239DA836FF,
	ModelBuilder_Reduce_mB12C5AE4F5A595108B6715DEE4B2DC94ED215516,
	ModelBuilder_Range_m1BFDACA6F203FC815DF435E6B0ECFB9F33B7AB8E,
	ModelBuilder_Gather_mF3AF9384BD2EA32D0ED648EBADAE8EA1161E19B8,
	ModelBuilder_NonMaxSuppression_m35BE6F5295476EA32F8BFECE5999D5F0111F6338,
	ModelBuilder_LSTM_mCF5E2497C708CDC4A58EA5B5E75E64220B005F2C,
	ModelBuilder_U3CMatMulU3Eb__18_0_mBCACE5AE8E8780FE0CB60D28DB1CDF6708DC4760,
	ModelBuilder_U3CConcatU3Eb__44_0_m9D24DCEEACAC5936EE1C814DBE71CCB6DFFB89A7,
	ModelBuilder_U3CPReluU3Eb__71_0_m908A263ACA94EF0E32DED4C3DA6E701950D134BA,
	ModelBuilder_U3CBroadcastU3Eb__93_0_m6E029C5DC2D1430CA78206479FC528AB9B64CE8E,
	ModelBuilder_U3CGatherU3Eb__127_0_m5AE22266955D6B86E43E5EE89DB5278E586DEA4A,
	ModelLoader_Load_mDADBCE3F4F7F98CECFD6531B7C752ABAFBD8F0C0,
	ModelLoader_LoadFromStreamingAssets_mFD21B0ACDF3AD93BDC0B277CF5780F89702ACD38,
	ModelLoader_Load_m7A5651033CBA0EA63E418A997877855C6FA70F8C,
	ModelLoader_Load_m273B79DF8244AAF183A8EA8A3A77E07AE2E21A5F,
	ModelLoader_Load_m510953F78CDC69FA2997E7F17A03A16D364D51BB,
	ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_m9DD2AB660CE3BA8A586CD35B7BC64BAA127CF670,
	ModelLoader_Load_m539B661E19387D149D2DC5AD2AB01D28120DD5E6,
	ModelLoader_PatchLayer_mC815FF1487BA1D0AB64B680F01A001D66E76D890,
	ModelLoader_SkipLargeFloatArray_mB0D646D844EAE7F4A5D3191506B0F34237606675,
	ModelLoader_ReadLargeFloatArray_m2CBDE77FE442C0CBCA026B0B5EF46D63364959AF,
	ModelLoader_ReadInt32Array_mFDC03571059F61E423BDB1365327FE0023174576,
	ModelLoader_ReadString_m6C03E59F3DCA0020474C6C76EDD53EF3ED194ABB,
	ModelLoader_ReadStringArray_m6E950D611D3FCBECA5A09AC069F106E50EDCE97F,
	ModelLoader_Open_mB65114F56680F7E79570BEF2ECB5887F62446D30,
	ModelLoader_Open_mBD6556D9647E23CDB8DB4C662B7219050B27694A,
	ModelWriter_Save_m20C6B7481B62ACB633F872CC4F1DEF2C7F6E8619,
	ModelWriter_Save_m0AA4DFDE021AD0B347BFB9AD06A0C11E03EDC4B8,
	ModelWriter_WriteInt32Array_m7831095849F0BFC30DC0827594E044B3DADCA3FF,
	ModelWriter_WriteString_m1A3D46CC7EF230C1C5BFAD8D0AA100417447FB00,
	ModelWriter_WriteStringArray_m5AB319388810EFF473DCCC76AFB0FBAFE17B10FA,
	ModelWriter_WriteStringArray_m63B8376AAB96CAE972B82133FD5D07C91E80A0A8,
	ModelWriter__ctor_mE0F92BD68B17B1A7A1E17CE47319BE069C53829F,
	NULL,
	NULL,
	NULL,
	NULL,
	BLASPluginFactory_CreateBLASPlugin_m1E1A96505537009E442F033CD63A4A798FE96873,
	BLASPluginFactory__ctor_m6E57B9E9BFDE8A346854C4EFED825B58AD29D75C,
	TensorShape__ctor_m3D0A670E59D0D5F0D13739F5C777DED331A7DAB6,
	TensorShape__ctor_m3DFA716CA6C672282490F4FC24DD6706497E8BCF,
	TensorShape__ctor_m0318587E59DA4D042BBC786E5B6CF255C773FA57,
	TensorShape__ctor_m2BE83E834C3C8F346F054C616ACBFE4FD460C56B,
	TensorShape__ctor_m7AB7F54A3AAB95BB6BF985DD3F86B8B95B1C972D,
	TensorShape__ctor_mE83490DDD04BB7D686DEBC4F4D501AE15662CB84,
	TensorShape__ctor_m114922F0493BEF2C3312E8826CA7EF09DB73574F,
	TensorShape_get_kernelSpatialDepth_m7A492E370CA4B33FD7BE911B48059F6BFD92FD99,
	TensorShape_get_kernelHeight_m454029EE1AB966CB2B05A483BDB170FEFA5C9295,
	TensorShape_get_kernelWidth_mDE244878076A48678D8E87B4EE8A3682C3150282,
	TensorShape_get_kernelDepth_mCD57091DA16F7F2CB300B79A17F42C29FAAA9EF1,
	TensorShape_get_kernelCount_m6D82535660C620EE6C50B3CF2AA1D38BE560C258,
	TensorShape_get_flatHeight_mC3A176A1C1DC85CAB3A0C2888A25850AA946B4A6,
	TensorShape_get_flatWidth_m6A09153008C5760A0C71F84A39292C2C108E9A14,
	TensorShape_get_length_m42D935AC99F95A1C8DE6B04AEC4DB9C96EDE7608,
	TensorShape_get_rank_mB2908CA2D3737CE8801AE64047AD7E5614280628,
	TensorShape_get_dimensions_mA9A917D267B0D37A62A6B77F46B90AD5B04E7593,
	TensorShape_Axis_m9540333825C44D41F1A057AFCD2248193A1EA1D7,
	TensorShape_GetPositionsFromIndex_m1D0BFA271F02E131FD139905B80656D42BA3D3A9,
	TensorShape_GetPositionsFromIndex_mAA604C4FF06F3D72657B051D7B7D58B77A752AEE,
	TensorShape_GetPositionsFromIndexChannelFirst_mE63163877AEAD43DCDCA2E84317F8BB910800C77,
	TensorShape_GetPositionsFromIndexChannelFirst_m3C995064F5BC06455A62FC808BB5469AEC905D39,
	TensorShape_IndexWithBroadcast_m70EDA13E88E268E60B25EDF511312DEA32B26E67,
	TensorShape_IndexWithBroadcast_mA5BA19932212AA2D1D5C9904DD2FC07E5905BC15,
	TensorShape_IndexWithClamp_m73472404CD6C74C879DE9C7E91923A98AE451020,
	TensorShape_IndexWithClamp_m39177A4CAE1063920E16790D0FB0C6309B28E132,
	TensorShape_IndexWithClamp_mFCAD7CD99FB34F354BEBC9465A7E2A0665504F37,
	TensorShape_Index_m98AEF981C385B47A0EB2AB39B0FE4ACE184C9882,
	TensorShape_Index_mC3C2A1A08CCFB66E58F1A219B388EBE068531E16,
	TensorShape_Index_mBC2A1602541E21AE2919F39C2424580F06A7402E,
	TensorShape_IndexChannelFirst_mC3491649D493646FF618B64977D7BDC823955468,
	TensorShape_IndexChannelFirst_mFF23BE549579C7F4CFEAA42A3BFF883D83DBBB9E,
	TensorShape_Index_mDDF155D1995B2F241BE241EC68896BAE4CABBB02,
	TensorShape_get_Item_m046FF56D8906EA7CD9D33486F778EBBCE949B33E,
	TensorShape_set_Item_m3E04172058C8855DBEE7B00941B909FF48D824A9,
	TensorShape_ToArray_m6F504949F53EAB92C210A4B52F7F53BE104E8637,
	TensorShape_Squeeze_mAE65C663FC4D5F3CCB596C03DAA02F810C6A04C0,
	TensorShape_Flatten_m071EF526832C3614F714121763E93C1951D73D79,
	TensorShape_op_Equality_mA23F2FC794570F9576BD70A4EF6C401598DA8368,
	TensorShape_op_Inequality_mB202068F7DC56F73EB8DFE6E0B03A5B121D39C99,
	TensorShape_Equals_mC5DAE406415A5127744D06E2DF022BD7C062A58B,
	TensorShape_GetHashCode_mDF0AA9693A07A46DBDA669338F14E1E137CF76CB,
	TensorShape_ToString_mE6CA208028006BF3EE98D8D6E9F8F6B1E8534224,
	TensorShape__cctor_m13ED6B09AB9FFBC087038C5B27E51E3EE01A0905,
	TensorIterator__ctor_m155A791924246F4E780FA39C05FA2E78AE8DDFAC,
	TensorIterator__ctor_m6319470FAD9BD9F476FBCF1BB5B62700D21A0CD9,
	TensorIterator_AssignIndexAndInvalidateDimensions_m90A1DB1B133908ED5407CF228F7F00992ECE2881,
	TensorIterator_Next_m3BBE90015F10C99DBD4317583E5C8696E45865B1,
	TensorIterator_Advance_m8C0FFC9D952DA72EF2CB78C383A28839FA77F9A1,
	TensorIterator_IsValid_m35EB0AC3E815407848AFD55F95B88BF0093CC7A5,
	TensorIterator_IndexInReducedShape_mC61CB8FA82E20218BE6DB90DF92EE42F734DD260,
	TensorIterator_IndexWithReplacedAxis_m5CC893C8253AC414C1BED1B7602E85EF4A01A50C,
	TensorIterator_get_Item_m63E891C7B085A16BE0673E4A6AE6D26B08DAA97D,
	Tensor_add_tensorDisposed_mC8A08CED6BABECDD90B340EBC512C54B01E09B5A,
	Tensor_remove_tensorDisposed_m7E478235F7F238E414F291E71C89FD002CF49FA0,
	Tensor_get_disposed_m42B7B64ED13E56D0CFED223671BC45D18D59841C,
	Tensor_get_allocator_m4B48DE0DCE9B90635E95EE1C0C1056D36B653CE6,
	Tensor_get_sequenceLength_m1C35C5CE2C03196E92B31EF67193A8CF04BEF673,
	Tensor_get_numberOfDirections_m99769DBD13B00A309CA1B1EB8D0372EAACD6CAD6,
	Tensor_get_batch_m6CD93DCCD32D6A47FDEDEBFF16FF70AC9C586DD9,
	Tensor_get_extraDimension_m403425FF6897945BC25BADFF2F3BB4CF2D13CFDF,
	Tensor_get_depth_mCBD84F5F780C2550B3D41F0EE99DC72FD5D93B91,
	Tensor_get_height_m0477A83109747FF1DA788569602DA2293D762AC1,
	Tensor_get_width_m9E948C3769B41324EB12D54CE6E2E51DC18DC488,
	Tensor_get_channels_m9DA46CF71B1C47E059EA3417C6A652E1233B5D04,
	Tensor_get_kernelSpatialDepth_mBFFDA142CB543B96A8AB39819D5EFBFC415B8746,
	Tensor_get_kernelWidth_m4CA0EF3AA1795E14C8C1B11F5D658188FAF6FB73,
	Tensor_get_kernelHeight_m3BB900FD718F6156405ED93688816729B0BB80C6,
	Tensor_get_kernelDepth_mE44E66338E9291E470D4CB152E2F8F83890567E9,
	Tensor_get_kernelCount_m98E82502EEC69F11C14B0589D40710B818714722,
	Tensor_get_flatHeight_m5A8183FF5C9A9FBDE2F8080B134CA91ABA0FC50D,
	Tensor_get_flatWidth_m7B9AECCB1EF9799E625DD86147A2A3F92F440CC5,
	Tensor_get_length_m35C7DA71ED506DB11C0626A040E8A182CA25D5CA,
	Tensor_get_dimensions_mD78E14F7C96D3C7E1F47BC20BFA4352E8C52E2BB,
	Tensor__ctor_mCE818AF9B12915F09A0272529AA4F7AAD038A450,
	Tensor__ctor_m6F4A668FB0CD6ACD79447138D103F9445894BDDA,
	Tensor__ctor_m24D0DCFA4710CD2B0914573BE68EB9557AC8111B,
	Tensor__ctor_mC31FF4D386F7C17E79F1F8D6CC11FB03178C8FBF,
	Tensor__ctor_mA98BA01F5D16E474E3A0C75C2FE34844773F3DAA,
	Tensor__ctor_m9F6946F64ACBF2F5BA83DC48A0021CAA3696D598,
	Tensor__ctor_m9470DB2EDD6F540AAD3541B00485D0BC875BD004,
	Tensor__ctor_mF87C18BA2F0E460D2EBB0C659F28248A17BCBB73,
	Tensor__ctor_mBB1D6A6D452157420BD8458F8EC54861A06C7B8B,
	Tensor__ctor_m8323535232B2589707ECAE46007B0F6845B47AE5,
	Tensor__ctor_m269C4550BFEB77EEBDBAD9B867FD02F7B28F9C19,
	Tensor__ctor_m91B138AB51306D03F4F2C542D4A3EABC04E9BF76,
	Tensor__ctor_m8BB00EA367606BF3868ACFDE5D8641BB53DE7AE2,
	Tensor__ctor_mB77C9D5E31557029E8A195C797C067C4DFF5232D,
	Tensor__ctor_m5F6CB97535F85984FCFB7C0A6B097821D40F8E0C,
	Tensor__ctor_mA49EA4FBE74A08FDB9E6A8BDF68C77D6E23D813E,
	Tensor__ctor_mB4D00AEFDAE4B47D0A640FEF022E1D59608ACCDC,
	Tensor__ctor_mB77F69261F0F9D4ED858874B9A9BB6EB7CD51626,
	Tensor__ctor_m188A32A740CFE7FF2A128302D1EB9A37DB9EBF14,
	Tensor__ctor_mF7D6E1941906C22BECCC7F0CAF080DBB7887F2F9,
	Tensor__ctor_mC678B616E5EEFC447152CFBC0F0A2472CF8F61DD,
	Tensor__ctor_m8E0B03603DFD15077B9F78C66EAB90912CA49E7A,
	Tensor__ctor_m3ABF640DBBD44BF82B0403D84D136AD2E9E8B462,
	Tensor__ctor_m23E84C427FA04A5BE69F05B3212621149FF61B47,
	Tensor__ctor_mB65B72A7726DCBE09D4E6D1413C9BF4B02FFD356,
	Tensor__ctor_mA736A54CEA510E7988D552BAA70B4E6A59D844C5,
	Tensor__ctor_mFD3B6E094A0734987127D70F0AA5372F225A433D,
	Tensor__ctor_mD6EC8AA65BBB3EC22C16DDD75C8F32D60BC383BE,
	Tensor__ctor_m05A6C31EE331EFBB7BA2E1328EFCB67913A693B1,
	Tensor__ctor_m6C94FE8C85C648CCD5D6A05DD5731DE5CC8DBECC,
	Tensor__ctor_m8F1DC50935E20EC84360CC311961278486BE0C7B,
	Tensor__ctor_mD8B9A868CE449E3C73E5C42160688AC20EC3CCF1,
	Tensor__ctor_m010458E572193CFB40697B5265896B9BE416151F,
	Tensor__ctor_m3E7257EA2B19AC99FB3AEA33FC3E498180BC9AD0,
	Tensor__ctor_m369335BE7F0D49B6FB5AD9095998F088F12367B8,
	Tensor__ctor_m7B9EAF083E898A002AC5EEFC050B4CE7C854FB46,
	Tensor__ctor_m708EDFB90449C1190A0F98E7B8341F6676F43DE0,
	Tensor__ctor_m8507953F4FCC7116BDA3BF1DBD24DEE045C0B556,
	Tensor__ctor_mEF2CC1A8D6A1B1697EDB94601DF2652255AFF579,
	Tensor_Finalize_m4F1FE2ABA7D8186A312B05988DA831CE35683707,
	Tensor_PinToDevice_m4C5218CFE07A4745AC44E14BD17323931C55D8CA,
	Tensor_UploadToDevice_m36E8F4C448389B026BDEF3E819381F685A734CBA,
	Tensor_AttachToDevice_m8150036333DE4060FE6A4DB9CEDABA837FCE2CC7,
	Tensor_DetachFromDevice_m3F61896410EFCC1607F1A7995BA3A956240290D0,
	Tensor_UploadIfDirty_m05F2DC73189336FBE4000B46ABACEECB7960CFF3,
	Tensor_UploadAndInvalidateCache_mDB3D9B1365A6D63E2F960DAD12E336F358D3E7CC,
	Tensor_PrepareCacheForAccess_m0A1B607B3A671C67A30A5DACE345079BEA55C0BC,
	Tensor_FlushCache_m8E0109993C2CE8292A6F7879A5CFF6926C1916FD,
	Tensor_ShallowCopy_m9B8077F6B59C1D42EB56EB45FDEA056C9BDB73C9,
	Tensor_ShallowCopy_m13DFFFBB76E57DD9E8B57EABE6E98BEFF869BFEB,
	Tensor_Flatten_m2C87C9097269B973D3D7C759A2209B0BF55D7476,
	Tensor_Reshape_mA4BAB390E389DD469BE918BD7698107CC35C6B55,
	Tensor_DeepCopy_m383811DCFE8982FF6E4CA4E9E439FC955944C24C,
	Tensor_TakeOwnership_mC555874C3009F3848294FFAE50DC0E57AF8C708A,
	Tensor_Invalidate_m23D4171FBFFF6686EC6191593529E58C6EBD9CB2,
	Tensor_Dispose_m33A51A8841C2948229105646095CAFC39E259512,
	Tensor_ToRenderTexture_m2D7199A5E49B7E4F07509BC0AA9AAA3E1E71C354,
	Tensor_ToRenderTexture_mCE43F17713D7B1AA919DB82BEE1ABEEDD0A4B80D,
	Tensor_ToRenderTexture_m8224FA55E72324513728868383F23D8667E38357,
	Tensor_ToRenderTexture_mAB5024006BCA87BB21A8626C796CAC1589D76556,
	Tensor_Axis_m7C2ACE830F529D067CF2ACB989CB4617966678EA,
	Tensor_Index_m9B79771242BEBFD7DABE460CA621983475E1F40E,
	Tensor_Index_m0B806D9DC0AA37E742A0E0778F25CAD01E53AB7F,
	Tensor_Index_m714BBFADAD4421F9C713C1FBDF794C5A46C30D9D,
	Tensor_IndexWithClamp_m5AAE1870FAD159CC4608843CE836A1EAF8D8AE2C,
	Tensor_IndexWithClamp_mEADD5A9E50B57ADD046A28383F03C846622CED93,
	Tensor_IndexWithBroadcast_m4D1D0FF9B3BCE958C50C816CB632898B31507D46,
	Tensor_IndexWithBroadcast_m143CB5EAE64D94906777F9CA075F1FF0F83C5154,
	Tensor_Index_mE615CBBA69180CDC8A307B77660B4416D11C26F0,
	Tensor_get_Item_m5CB172D8EE24160C0733436BC50BD8B998F3754E,
	Tensor_set_Item_m825AF5D1FC078421906298C6662565DF5C64817E,
	Tensor_get_Item_mB3B371A025B020FBFB3A79C3375745EEA999829B,
	Tensor_set_Item_m3DDF7909FDDC72AE45128800669404B9A7151F87,
	Tensor_get_Item_mA53C387CBDB9F0EA0D069DD7BFC45970172290C5,
	Tensor_set_Item_m7EF9E435A07905132E0C8C33A6C5A90E1E22BF58,
	Tensor_get_Item_mA5356D6E69A9A737CAAC9469CD796413667F784C,
	Tensor_set_Item_m2DB3060AC1B6388733DCEBDBDA2FA5A27F40FB42,
	Tensor_get_Item_mEC07898861EE98ED01A447281200D4F26CEDA1A9,
	Tensor_set_Item_m1709795A52A1A1B65C7E09BFC9FCF25AE53E227C,
	Tensor_ToReadOnlyArray_mDCBBEF11F36C4B4D0B2F994C5648EA822A759D2A,
	Tensor_get_tensorOnDevice_m3869D45C1126A5C95288140B0A9705D772322E6D,
	Tensor_get_data_m02BB8F7F1185C6AF1A8192A63DFBD7CF29B3B59A,
	Tensor_ToString_mDB9E44F443373C18171D539B2B6DA0AD30F7EDBC,
	Tensor_UnpinAndDisposeTensor_m97679C72F3424B45D0BF83F56ACF39D1FE06D25C,
	Tensor_get_readonlyArray_m852FFD713FB419E52FF69A445CC12D4C52E96808,
	Tensor_get_readonlyArrayOffset_mF897D907B53D93B1FA4B78805B01BFC9C6AFD6B7,
	TensorExtensions_TestInit_mF2C7F2A3931A74468C67405D84CA66F2BAB6E378,
	TensorExtensions_TestInitCos_m08D9365BD9B68545DAE59B369D054E20F420ECC7,
	TensorExtensions_TestInitValue_m2D88E19ADC5579C0B6EC2DF496055C629F02DC02,
	TensorExtensions_AsFloats_mE2B1F672F9C735588DA37A895F7840C7326F22FC,
	TensorExtensions_AsInts_m9AD941BD2FD9F2D3E8B92258F5C2E04DD266BBAF,
	TensorExtensions_DataToString_m9B659C2E4C3F6AA5511FDE3B6BD7E357DBFE60A4,
	TensorExtensions_Print_mCA4FFD368863D90E239F3A150A56D22C926D4D96,
	TensorExtensions_PrintDataPart_m8E888788007FA282C1DF9F791DE7FF11108900ED,
	TensorExtensions_Equals_m18B89734D4E23490267B004F3084AB6E26D26FF9,
	TensorExtensions_Approximately_m2C24D6ECD72120247B51FD8D7C8342AA2AF98E0E,
	TensorExtensions_MaxDifference_m788103FC9E047B9338C3AB357E71FB481A40F41A,
	TensorExtensions_Reshape_m72BD8478CACA876E3FE0CC864922D120065E50F7,
	TensorExtensions_ArgMax_mF0B079BA6F725E64A11903AECDB2314722D49265,
	TensorExtensions_ArgSort_mC3B518BD442AF44B0A263301E416CBD4A5EE5A73,
	TensorExtensions_Fill_mFD0DC9D026783C26553D366D44203B9DE7F77056,
	TensorExtensions_Gather_m72AE168823B4343DC9D20490923B663475AD8BBA,
	TensorExtensions_Concat_m75BFAF346DDA62D560A4674C4B7DA3F0A9137F79,
	TensorExtensions_Concat_m5FEB3B53E5F37582256D261910030019D8DB92AF,
	TensorExtensions_Max_mF8D3D71BBE6BC7B67C9E4DFE88E18130AF9FD285,
	TensorExtensions_MaxShape_m53F10A75EBA8FAF5EAC4855CD5E23627FF0CF741,
	TensorExtensions_Scale_mDF164A5B110EAA93CDBD1FC1E9FB9B5CD29AD969,
	TensorExtensions_Scale_m7FD866CB7B971A1BB0E281E211C7F41AB781F73A,
	TensorExtensions_Reduce_m560987AF34398CEE85412B1B5DCE11AB22B6712F,
	TensorExtensions_Reshape_m2D1FF5C987A94B87A88690C7CA71CC32B8CC4D2B,
	TensorExtensions_ApplyBorder_m9E9BBD248EA93738E1D3C05DA0140DFCCFF5B065,
	TensorExtensions_AdjustPadToKernel_m3AE12CC63BA4015BA4E6CAE5436CDCE4AC49C7A2,
	TensorExtensions_AdjustPadToKernel_m0ADD8CEC4DCD41511243ED233D9D99F3A0FC8C7C,
	TensorExtensions_AdjustPadToPool_m0D671C8C9AD0A86A39A229F303E3417BD8458485,
	TensorExtensions_AdjustPadToPool_mCC6D257B2F7A0D8820044CE075907CC36345717B,
	TensorExtensions_AdjustPadToPool_mBBD956533BF985CC2974CB69D58E1E4FF07D6BC3,
	TensorExtensions_AdjustPadToPool_m1BE3FA1233D74E5B692717321B32C68D12EA0DD8,
	TensorExtensions_ApplyPool_mB8C886661E283C591C554E99E632E67FAF2F084D,
	TensorExtensions_ApplyPool_mBF6016D7DB1B606870F7612EF2045DC28C8D862A,
	TensorExtensions_ApplyKernel_m6D52E32ED54F6097A1E104CCB8CC7FB09F240443,
	TensorExtensions_ApplyKernelInverse_m35496E3C9A2647840F5C8B2297365F643D84701C,
	TensorExtensions_WrapIndex_m2CB48399E65FC2F88306940433EF6E260F9A31F5,
	TensorExtensions_IsNDHWC_mAE6BCD15589A659050B19303629AD7252E90A49C,
	TensorExtensions_Is4D_m1BB4A7DABDDBDB4046C16B6833336A64CD5A0C86,
	TensorExtensions_Convert4DTo8DAxis_mF1E59D0EAA74487291EAF4FB9ED1218F9FF99E8D,
	TensorExtensions_FirstNotIdentityFeatureDimensionIndex_mB86C4353A122D923B962B0D30332ECB31C4B4664,
	TensorExtensions_Is8DAxisConvertibleTo4D_mF9096FCDE2A72949B308534D27B2AB886238F09D,
	TensorExtensions_AreAllTensorsConvertibleTo4D_m84501172818BBF63827564ACA3259C023DAA3223,
	TensorExtensions_Convert8DAxisTo4D_m4B4356063BCD46AA320F6603E5CC8A14C81A39B2,
	TensorExtensions_Get8DParametersNoAlloc_m8BABE0CC703EED646CB20B460C69C30E81C1FBED,
	TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_mE45436875456051EC29BC0B4ACC19340CB806A1E,
	TensorExtensions_Get8DPermutationsForNCHWPermutationsAndShape_m6B214DEE3C60BDFB287B36DDCF8DDDB9A3E7E8EB,
	TensorExtensions_ApplyStridedSlice8DUnsafeNoAlloc_mB133DE734B3023D4D5B5C9B6E5290634EF6BC90A,
	TensorExtensions_ApplyStridedSlice_mFF24E99E52CCFC173AD4B5954372FDB018AC6E7D,
	TensorExtensions_Permute_m17FFD2B9FD93ECDD97FE0F7D621CACB443650663,
	TensorExtensions_Permute_m5B7A207CA82700EF3ECF35A5DFCB5A2EAB3DFAF0,
	TensorExtensions_CreateFromTexture_mD08C18240D6358A7BFEC750AF99E35C69B7A31E5,
	U3CU3Ec__cctor_mFC4357C23E79BB6B413A55E57A39DCFB0E344ACD,
	U3CU3Ec__ctor_m8228570C3F70BC0DE680555EF35FB6FFEC1B9461,
	U3CU3Ec_U3CAsIntsU3Eb__4_0_mED40721A335A0F8C4276652D6C58FB59C9C666B5,
	U3CU3Ec__DisplayClass13_0__ctor_m3CF3FFB8B0452F92C98D886CA72B9ECDFF2F3163,
	U3CU3Ec__DisplayClass13_1__ctor_m3B2A35DBFE8B8C86FA1F8AA8D534E1B92F8A481A,
	U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_mA377DB22C5A0D2C8214EF86CB4710C77A6832CB0,
	RankInference_InferOutputRank_mCB721FA8361E4387F6DC86221B5C0CD5ACC9C92D,
	RankInference_UpdateKnownTensorRanks_m3FB9C6C69D0BDB6E17A841E37A93DA9B192CA316,
	RankInference_ListTemporaryTensorRanks_mABDA99A4B890CA021E85FA2BA912F9A321FAFCD8,
	RankInference__ctor_mECA6AE648443E2EEF743D3507E8716D0D83D3E86,
	ShapeInference_BarracudaLayoutToTensorShapeLayout_mA4F5C66EA777FDD5A1EDBF74CC3475B1049C52E2,
	ShapeInference_BarracudaShapeToOnnxLayout_m94C60CDBF3B7CD59D0FC9539192D1E155C4E8992,
	ShapeInference_ShapeToOnnxLayout_m873C340AA2BAF90189FEED6EBBAD0D406FBF8D4A,
	ShapeInference_OnnxLayoutToTensorShapeLayout_mDAC5F424B6987D66F6A735404BE8EC47CFC9F429,
	ShapeInference_OnnxLayoutToTensorShape_m9A172096A83F84C58F187A047780F6D87401BF50,
	ShapeInference_OnnxLayoutToBarracudaTensorShape_m565AA20AD0A9C23157B896E9BBDCDD4A0AD63358,
	ShapeInference_InferOutputShapeNCHW_m3A6EB313B2823A86080DCE8EBE632A5E070FED19,
	ShapeInference_UpdateKnownTensorShapesNCHW_mF12E03009240A3EE76B1CCAE8E087A31699D1E3D,
	ShapeInference_ListTemporaryTensorShapesNCHW_mF9E7A19604FAF974800C983162C9094960CE4964,
	ShapeInference__ctor_mE6216D33B3BB4C9929F700845641DACFC504A658,
	NULL,
	IRShapeInferenceAndConstantFusing_Run_m04F6A7DE77043674A46A5ED8127E01E9EA66AD6A,
	IRShapeInferenceAndConstantFusing_ShapeToNCHWTensor_m131578DEA8CB668F0B7FB12824C91FB9566E1178,
	IRShapeInferenceAndConstantFusing_FuseShapesIntoConstants_mC32E928E9DD63CC272FC8134F044A9FBA271C9BF,
	IRShapeInferenceAndConstantFusing_InferAllShapes_m0ACF3B8DC5C14ADCA077EBAB0858F249F9304CF6,
	IRShapeInferenceAndConstantFusing_IsLayerKnown_m8ACCD392711401877F4F45939E04BA96A58A5799,
	IRShapeInferenceAndConstantFusing_FuseInputsIntoLayer_mF961675844AA84C7796E19C089376221502F157A,
	IRShapeInferenceAndConstantFusing__ctor_mF540D357DADA8A8D565269CC65146FAB5A019FB1,
	U3CU3Ec__DisplayClass2_0__ctor_m9ECF850CE2D57C9058DCF463C58542771E5B301C,
	U3CU3Ec__DisplayClass2_0_U3CFuseShapesIntoConstantsU3Eb__0_mFF5A5652B261307287D05DB2D1961D1B48D6E32F,
	U3CU3Ec__cctor_mBEFD66CB399683093A5902738B51C2CAA6A0EBE0,
	U3CU3Ec__ctor_m4BA4552BBC2203E927A96BF132A184A62CA0B106,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_0_m569922043E6B3DC72CFF713EF67CED214F02DE29,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_2_m9ECA00DCE03634A0796F645B2EDC515809C23D8F,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_1_mA11153C0C999D29009ED0B53AFDB1DFBDEF28248,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_3_m7932C2BC5A153947C533D622195203162B63B6AF,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_4_mEDC46FCAC0E2C12811BD46BC98392DC914CDD7B2,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_5_mB3A73D86AE47ADBEFEDE86CA26D665CAD87BE730,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_6_mE03A4CEAE08C65F59391CFDF3F04BD237167704A,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_7_m23BEF11F2F59B51D29C4E6319058D072A1B6F5DB,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_8_m25CA242ED6613158D80DB01DD5CA3DA63F232783,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_9_mAFC231B945FBA9C02E7E2A87DBB98DF455452CF6,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_10_mA308BD62D86D833859A7AB594F66E66CA2EF8D74,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_11_mE8408C8E7196132E94CAA45046B4939680D1D546,
	NULL,
	IntermediateToRunnableNCHWPass_Run_mEC5AA1FD5BD038C38ECF6726BA692BF0ED44F8DC,
	IntermediateToRunnableNCHWPass_AxisToBarracuda_m81E621DAB1131B07848C1CF8ECC0A8E494C713C8,
	IntermediateToRunnableNCHWPass_TransposeToBarracuda_mB206B80B19151D6C3FA4826E77D016ADDC466F3A,
	IntermediateToRunnableNCHWPass_ShapeToBarracuda_m76DB272A31374E09A6FAC52EADB6F7034472D110,
	IntermediateToRunnableNCHWPass_SqueezeAxisPermutation_m196E60D8B1BF370A302CCEFDFC82741FC978050B,
	IntermediateToRunnableNCHWPass_SliceToBarracuda_mBC2C340E021F7492EA94926B93CBA71B396E0CF6,
	IntermediateToRunnableNCHWPass_Transpose0UsingRank_m542C40DA7CA23E75ADEEC5E95FEDA987D95B70A8,
	IntermediateToRunnableNCHWPass_TransposeInput01UsingRank_m64993A94128562457F43D56908A5B49F4742F17A,
	IntermediateToRunnableNCHWPass_TransposeForBroadcast_mE224518517FAD3FC48C957B02854786DF8647AFF,
	IntermediateToRunnableNCHWPass_GetTransposeForBroadCast_m83740F7EF909B47BBB7E176F4087D51B893A0FCF,
	IntermediateToRunnableNCHWPass_TransposeInput01_m977E40FC1D6BF6A0A053C609258778CD123604EC,
	IntermediateToRunnableNCHWPass_TransposeInput0_m71EB5CD43C595F4ECE7988DA62890C4523280E88,
	IntermediateToRunnableNCHWPass_RankChangePermutationBarracuda_m69B3857415BF0AF1A28AE0A4C38AAE3F76E44F54,
	IntermediateToRunnableNCHWPass__ctor_m7C9ADD36624AEF7F38AA7BD046BA382646BA7B1E,
	U3CU3Ec__DisplayClass4_0__ctor_mAD401F5B1DC9ED8333067AB9A16BF103C3B9C990,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__0_m6803FCA8799AC4C38C318A1135F1BADFCA00CEF6,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__1_m2499BA2F2E3B39C02BDAE74549139E28A3C1CCC2,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__2_m2C3763FB67C8EC0CD081EFBB794A9E83E1164ADB,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__3_m4246D551E6B51200E409A81A895D07C32D38A03A,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__4_mD07A098408EE90C10D5C8B71889CD900AA145C34,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__5_m39D885681B6DEE78CFC23E0169F7F74BA7EAF882,
	U3CU3Ec__DisplayClass4_0_U3CRunU3Eb__6_m65D89A8E01B23C99CCB2023656E3BF42E826CA40,
	U3CU3Ec__DisplayClass4_1__ctor_m88C788F9EDC55A1C5DA483953B89CB98835C54D7,
	U3CU3Ec__DisplayClass4_1_U3CRunU3Eb__7_m1896CD7F66A5C20947E26B90DF86107BF5C9F8F7,
	U3CU3Ec__DisplayClass4_2__ctor_m22C90D907413988DFBCA08572279133D63D2D5EC,
	U3CU3Ec__DisplayClass4_2_U3CRunU3Eb__8_m359F19F23167FC0673D4C22CF16362E3FD5E1E8A,
	U3CU3Ec__DisplayClass5_0__ctor_m2243DD0AB597FB630AE665E3395ECA406DA4CD69,
	U3CU3Ec__DisplayClass5_0_U3CAxisToBarracudaU3Eb__0_m8DB21FC6211D9EE29BA305C45A012DFE7EE5F91C,
	U3CU3Ec__DisplayClass6_0__ctor_m951FB305F2A8B49D4AF6CDBAB54519E529BAD7EE,
	U3CU3Ec__DisplayClass6_0_U3CTransposeToBarracudaU3Eb__0_m2F8D4EBD901F3F9030A705167A83B250C1FD8AA7,
	U3CU3Ec__DisplayClass9_0__ctor_m48C012790900CDA4FD8BEB82D4C358861F64841F,
	U3CU3Ec__DisplayClass9_0_U3CSliceToBarracudaU3Eb__0_mA4412FAB07E4F83D80BC12FECED41D7624B4013B,
	U3CU3Ec__DisplayClass10_0__ctor_m8775C5AE4E09D1550E23C8B60E8ECB7E72C6E5C0,
	U3CU3Ec__DisplayClass10_0_U3CTranspose0UsingRankU3Eb__0_m458AA67DA4BE1C4508551908AB4BCFACC7BF3AD0,
	U3CU3Ec__DisplayClass11_0__ctor_m9052CBD6F1ECCC848BA5DFF7CACF18ADF02976E7,
	U3CU3Ec__DisplayClass11_0_U3CTransposeInput01UsingRankU3Eb__0_m8395F486C49538B2110338BBC28F4EA39A726B82,
	U3CU3Ec__DisplayClass11_0_U3CTransposeInput01UsingRankU3Eb__1_m1D4C4F644DDB7D2898B6857448FD2D4A664A62E7,
	U3CU3Ec__DisplayClass12_0__ctor_m035A9B619A75EC58A7748AD527BA592942FC6225,
	U3CU3Ec__DisplayClass12_1__ctor_m66B07E47BCD590DBCE94681F47C62798D7391EF0,
	U3CU3Ec__DisplayClass12_1_U3CTransposeForBroadcastU3Eb__0_m336419F17DB41A04259A5C3993C125FA570AE4DA,
	U3CU3Ec__DisplayClass12_2__ctor_m2BA5B1971A0F0206EC989C69DAE831DF34DD0D53,
	U3CU3Ec__DisplayClass12_2_U3CTransposeForBroadcastU3Eb__1_m25DD2B4B614D9939147FD1C66DBC20A03BC45EAE,
	IntermediateToRunnableNHWCPass_Run_m835236673BFCA3E6CF59F4C74941B0112AC8C8FC,
	IntermediateToRunnableNHWCPass__ctor_m685E3078FC46F63162ABA6891E1D16B880CE77F9,
	LayoutTransposeRemovalHelper_IsImporterLikelyNHWCLayout_mD631A536254B2AC7CED880A2719FA5CACF832955,
	LayoutTransposeRemovalHelper_IsLayerNecessarilyNCHWOnnx_m1D1D2592B5758D927F8B423EF724E8ACD3BA9DEF,
	LayoutTransposeRemovalHelper_IsLayerTranpose_mEACC25EAA2362AEF2459D07C6D3191738E10251E,
	LayoutTransposeRemovalHelper_IsLayerReshape_m16A1978A41B24AFEEF00E379A8C29CFEDFB6687D,
	LayoutTransposeRemovalHelper_IsLayerSqueeze_m8D39338A1EF0CFA0773FF7B0708A021792FF7509,
	LayoutTransposeRemovalHelper_IsLayerFlatten_mE7FAF551D59A9B94B1CA4E34B763AE9E4F469A50,
	LayoutTransposeRemovalHelper_IsLayerConst_m12CCEC87B23EC02749A790D8B7C26A6522767ADC,
	LayoutTransposeRemovalHelper_IsLayerRandom_m348ECB6BDCEFE9D657AB639C82F3F7FFAD0D3F62,
	LayoutTransposeRemovalHelper_IsReshapeTransposeToNCHW_m695EB00D8610E2AAC28BF2ACFE78D991CE29FEFE,
	LayoutTransposeRemovalHelper_IsReshapeTransposeToNHWC_mC2A1652D77980C1B01AE3206FF8097740AC5C4DF,
	LayoutTransposeRemovalHelper_IsSqueezeTransposeToNHWC_mFC9CDF5ADEEB5E51DF4F7BA01D26EDB6D9143971,
	LayoutTransposeRemovalHelper_IsFlattenTransposeToNHWC_m2628BB39AFFE54934DE8252A327851D58E5E1CB1,
	LayoutTransposeRemovalHelper_IsLayerChangingLayoutToNHWC_m54256AB8408A01FE78997C5DAD440504C8ED49D9,
	LayoutTransposeRemovalHelper_IsLayerChangingLayoutToNCHW_m3BFD4F7C42D7E56C7D629E5A5DD662922923357F,
	LayoutTransposeRemovalHelper_InferAllLayersChannelOrder_mC1AA4E905B4603B1332F69E3F555695177A5F7B5,
	LayoutTransposeRemovalHelper_RemoveAllChannelLayoutTransposes_mE303768FF211466F28A5635510C7CCD2088F62AB,
	LayoutTransposeRemovalHelper__ctor_mB2C13E175ADBDEF53947CF2D7B4FF14812387AEF,
	U3CU3Ec__DisplayClass1_0__ctor_m3F25688AC63345AFB6F0CC7D1E0327BB05467B47,
	U3CU3Ec__DisplayClass1_0_U3CIsImporterLikelyNHWCLayoutU3Eb__0_m53ECC0222CAFEE86303E3BCA9ECB292A3C16BAB0,
	NCHWToNHWCPass_GetPermutationForBroadcast_m3810969BEB84F00F951A679E19B6D0B8D951FF35,
	NCHWToNHWCPass_CorrectConstantsForBroadCast_mE88CF7F974C396ACB96AC8B1FD8032F1646751A1,
	NCHWToNHWCPass_CorrectDynamicInputsForBroadCast_m6F0F3E79784109E79AE13B34080E8FCC599C8C75,
	NCHWToNHWCPass_CorrectOutputLayoutToMatchNHWCLayout_m6FE82A3F90D3C4090D88737768304C0745AC1970,
	NCHWToNHWCPass_InstantiateRewriterNCHWToNHWC_mEB08BE185523E7C76479C22F68D2090D1CA8860F,
	NCHWToNHWCPass_GetChannelsLastPermutationsFromRank_m3B3BD2BC4BF8B0A7A940E227A40497F4E5E102AD,
	NCHWToNHWCPass_GetApproximateRankFromTensorShape_m953AC80045EDFD33EF105BE6062EFCC1C697E16D,
	NCHWToNHWCPass_ConvertDatasets_mE226A5B2BE4B0513DA1B217D682E1EBC898D37EC,
	NCHWToNHWCPass_ConvertActivation_mC7FFC1455AAFD0E46548A52CC488D622896794C5,
	NCHWToNHWCPass_ConvertNormal_mB99A520808AC27850093972C1D2429F603912921,
	NCHWToNHWCPass_ConvertShape_m7912CEEE705CD6D15CA93D61EFF7DB1BDD4EF2CD,
	NCHWToNHWCPass_ConvertAxis_m22DD1F8D7ACDB6C33608CA6E3423CD2F7D86D7FC,
	NCHWToNHWCPass_Upsample_m6C05F6089F871B3EC16E62FE71F1E316EF8B7CCF,
	NCHWToNHWCPass_Reduce_mEE8AC4ABE4344BFE06A10DE8F9359AFAF0610869,
	NCHWToNHWCPass_AxisPermutationsForMappingNCHWLayoutToBarracuda_m54EC7BE9F14CFB7E61A68D7C2F33F7B76BF64FBC,
	NCHWToNHWCPass_PermuteToBarracuda_mC31773B7744E1A0400445342BCC56C270A1E8D73,
	NCHWToNHWCPass_UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mA514BAB9FB856638C3D2A2E8D931B9E2629E36EA,
	NCHWToNHWCPass_SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mFC96060B4558B523FBB56C9FBADF71AECB496E39,
	NCHWToNHWCPass_GetPermutationToMatchReduceWithDroppedDimensionsFromONNX_m17284DB21C60AA949E158ACE5A874259B85E7AE4,
	NCHWToNHWCPass_RankChangePermutationBarracuda_m718E15E2C9D95C988960DF1CD76A5BD7E7D2F339,
	NCHWToNHWCPass_InstantiateRewriterNHWCToNHWC_m92FF7E6CE90E2FAEF6228EB387AEDE10E3F8EB7E,
	NCHWToNHWCPass_ConvertAxisNHWC_mCCDC44EA06D6FE61DE2C192575E4FAD525E1A894,
	NCHWToNHWCPass_Run_m1551B83403E73D790E48BB4A0DFDDDC1808CB277,
	NCHWToNHWCPass_Rewrite_m6398880C9294794DE8CF693080EA2FAF3CA9100F,
	NCHWToNHWCPass__ctor_m45559D9B9F5BBD9184A50CB18F5DD6BBF210F003,
	NCHWToNHWCPass__cctor_mEC585A0B0C9B586EDFDDBC433107E5AB911053D3,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_0_mF3E4D34EA76BFCC31567C8D8CB8E96CFFCB8F69A,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_1_m8AB3B23F1483860CD7F2893CDAE25124193C4479,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_2_mC85FF92D363F9E5CBA372C1876096763BAA0B8B4,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_4_mF7ABF3B563E403CB0E311FD19D6D4A3BE9BEB4CA,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_5_m582E32A3CEE6DF5109D9089B3161CC7FE8582076,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_6_mA6D0C21081E51E159DBA3D02143B66EE32CB94AB,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_7_mDF8688C8D1571CA44D5B1D46DE863111FE1D572D,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_8_mED14C4328AE18BC47919C5EC01DEE5A096BFED9A,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_9_m1492986F8B7B665DD7CBA5A7270539EC1610966A,
	NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_2_m796197BDCC2B66C2E5927AA89D25AF85FEE46CC0,
	NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_6_mB67F5BAB51DFAFF48A001BF4B51CF7D231345D6E,
	U3CU3Ec__cctor_m24AD26A782588389E4110E5F9859F547F4B13444,
	U3CU3Ec__ctor_mFF76573E7BDE0A15915331F1C6257FA6307DBD2B,
	U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_3_m04940B8E312F7855494DF8F75E37BFAB44D39685,
	U3CU3Ec_U3CPermuteToBarracudaU3Eb__15_0_m1BEAA855491460F32C4A1EC4AB8E0FE8927D4226,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_0_m0D370BB6499E1310D3702418E11D6CB0C81C7AA1,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_1_m607C9C4001036F8D00CCB6108BA58CF4EAB42B9C,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_3_m98F5ECB7B773EFBC3C6CB959A8191945FF604377,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_4_m5AFB64A538B6F92FA3ED86F9593157B0E5A14EB6,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__20_5_m753BD80A1286626B2CD9320290619BE2E6842EFB,
	U3CU3Ec__DisplayClass32_0__ctor_m1F2E683F0C62C61D361D59AF311D6A0A2C6D81A9,
	U3CU3Ec__DisplayClass32_0_U3CRewriteU3Eb__0_mC7463FEA453B97A8BAB165A4A6E760119BF9DC29,
	PreserveLayersPass_Run_m6162DD47C3E60A57092C0C690C342B16201F3BE4,
	PreserveLayersPass__ctor_mF73D229E060A40030F743A124612603174D8E62A,
	U3CU3Ec__cctor_mFCD5A70D1C8B7DD6F1EC25FE24BC814956CAF0A3,
	U3CU3Ec__ctor_m27CF523CD339F84D76CF075D8C20D30E37C40A46,
	U3CU3Ec_U3CRunU3Eb__0_0_mFC701361FA33160F8FB42F427C46B781B4284931,
	U3CU3Ec_U3CRunU3Eb__0_1_mBB86AA70BF40D65C1D9D35093CAC7C3C224F228B,
	ShapeContractionPass_Run_m5E9FAD828CE511C2305270D8E8EB8CF1E42B8072,
	ShapeContractionPass__ctor_mA24E4A129C6589E1FED0D19E87DC0B2A68397439,
	U3CU3Ec__DisplayClass0_0__ctor_mB8AE091F96ED52352C832B38AC7335AF7B832FCE,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m3F89DDC09099E36317751DB635BDDA3C23D0B911,
	U3CU3Ec__DisplayClass0_1__ctor_m735389F02AB2D707C6EE245D9FC9B2A82FB2F336,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__1_m40B7889C0235DEF7590D0923F05147C5D9D944A9,
	ShapeGatherReshapeToNHWCRemovePass_Run_m38E4EC3A35E8EE7B4B4B0545294493C5208D2917,
	ShapeGatherReshapeToNHWCRemovePass_IsGather1DAndConvertingToChannelLast_mCA1FDA661F95D112A9B2DD14154DDB171A10C9FE,
	ShapeGatherReshapeToNHWCRemovePass_CanLayerBeRemoved_mF40340D94BED127E457F12CB5FE62262B2A314BA,
	ShapeGatherReshapeToNHWCRemovePass__ctor_mD4190DDD794139D83D932808B6B9824629FFD38C,
	U3CU3Ec__DisplayClass0_0__ctor_mC21562FB50A74B8E3FA9DB6A528B913EB091F553,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m07968019720434ABFAF3FB95A5A258F411A0AA64,
	U3CU3Ec__DisplayClass1_0__ctor_m79873A8265594C6DA327CF250C7CD06F4A197CFB,
	U3CU3Ec__DisplayClass1_0_U3CIsGather1DAndConvertingToChannelLastU3Eb__0_m76D624FC38ABD67BD47FDAF578065D4F28B54B02,
	U3CU3Ec__DisplayClass2_0__ctor_mE97EA7E3942F08F3CEDC61B0DE54D464C0AF7410,
	U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__0_mDF5AC4F56E0B01A1EFF8B5E9A204871959F4B705,
	U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__1_mDD21D058307AE8CEE46C7AA9BF006C4329D9F4E1,
	ValidationHelper_AppendWarning_m51C2123EB5C162F43B278D8CDCFC45BC0AF8F6C6,
	ValidationHelper__ctor_m6E0A4C4F35F6B427C1D040CB069314F48A4C7AAE,
	ValidateNCHWShapesPass_Run_mBEF6307B9D66FCCA6579C1B09627415D9755BF04,
	ValidateNCHWShapesPass__ctor_mCE5379B45EBAA04FA080EB8621E506343FE313B7,
	U3CU3Ec__cctor_mAB0BC639D167C1D591290A169031173CB948A154,
	U3CU3Ec__ctor_mC8F3FD9B84FC074B1671C609EE297D8DC160B999,
	U3CU3Ec_U3CRunU3Eb__0_0_m378A7ADB1533F7131A3719C13691DF33B703C3BF,
	U3CU3Ec_U3CRunU3Eb__0_1_m24B93684535C6DF8749CC9F03D1CF70B6A85DEBA,
	U3CU3Ec_U3CRunU3Eb__0_2_m755D3B4F0E7FADFD013F189D972EF53A35654228,
	ValidateIntermediateNCHWModelLayers_Run_mF45FC00F327DD0F7E7CF2C5C8CFFCF16F14F3758,
	ValidateIntermediateNCHWModelLayers__ctor_m7D70C1847D006C989BEB045A321D8A2F3C2EE3DE,
	ValidateBrokenLinksPass_FindBrokenLinks_mD1D4DD6D61943D33CC48BAE17243B947809F8312,
	ValidateBrokenLinksPass_FindBrokenLinks_m35EE1803718B28D013E7CA95E3430025A479FF59,
	ValidateBrokenLinksPass_FindBrokenLinks_mC381581E45B2A2D49B053E1630779AA7C346DD62,
	ValidateBrokenLinksPass_Run_m57263C8F8B3FEB736BDA5C1223008FBB278EF40B,
	ValidateBrokenLinksPass__ctor_m114BC22B0CEBC49F1AFA2F39EF094A0FA0F44D60,
	U3CU3Ec__cctor_m100C84B126DF932B2813C2EF9E2BFF5F48BA045F,
	U3CU3Ec__ctor_m0064C245AEA55D91F8799A4AB5796BF46A5CA239,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_0_m51AC4F895216DCD8E935C4AE6D92E6C380630C30,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_1_m85C6A293411D8589FEB293061D139EE42DFD95D9,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_2_mD8FB104F4C4501432FC774413A026FBDB54FB75E,
	ValidateUniqueOutputsPass_Run_m428533AD40AC0AFAB51E5F927F3DA7075E0BDC42,
	ValidateUniqueOutputsPass__ctor_m7FB794D76035BD18E5B0F213CE6A16F85F955123,
	U3CU3Ec__cctor_m932E1BFFF67D391DE2A7D60C8E79B7B41B202298,
	U3CU3Ec__ctor_m1EBD1B290E851F36532FE94CB176690D9E8227DF,
	U3CU3Ec_U3CRunU3Eb__0_0_m2A3B54AD76F26CA12687FAFA58DA4E5FD5C8BFBA,
	U3CU3Ec_U3CRunU3Eb__0_1_m28C11AA32C7E27FF5E5BAEEEB7EBC4EDB9A7C834,
	U3CU3Ec_U3CRunU3Eb__0_2_m82DACBB65FC6033609FD12AF6DC151F91C9EA544,
	ValidateUnconectedLayersPass_Run_m14724B209586859B3AADC38FC7B11F312C4C36FC,
	ValidateUnconectedLayersPass__ctor_m9A4723265C9E59C0758D2423D9CC5452C4112E6F,
	ValidateNCHWPass_Run_m724BF697DC071DB0CB97405A1AFABE4BE0C2AADF,
	ValidateNCHWPass__ctor_mC2EB5BA1D34CBA9ADF2D39542F67BFB2B273B27B,
	ValidateNHWCPass_Run_mBD2A7C0778084739CF55A47B656287CBCF2EEE31,
	ValidateNHWCPass__ctor_mB642CB94ABA0B6AE46A526A6BD043B909C17F805,
	RemoveNoOpsPass_Run_mDE15DF9148AB4932C01014D0D7DA8E809B3DE038,
	RemoveNoOpsPass_IsPermutationNoop_m4B62A28D83E593AFA2C8BD9F25EA4C8FDA7B3533,
	RemoveNoOpsPass_IsLayerNoop_mF6B6B0F6521A40DBC3B1019D68DED6655CF70A95,
	RemoveNoOpsPass__ctor_m0DC4746B77C3841E1951248B62B4157F6E0B8E9A,
	U3CU3Ec__DisplayClass0_0__ctor_m49BCBBCF2D5903BFCF40860304C6F1197993E722,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mCC556148204E81F23DA67CB93B7387FC06C86912,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m7E9F044E4104BC14D0E5216C432332E248C23965,
	U3CU3Ec__cctor_m70282A5AD17AC2ADA7F64B67F61680711ACD0EDD,
	U3CU3Ec__ctor_m0D10E5AB8B90C085D01D8C5B3731504C5CA06523,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_0_mECD3F492F5832DD19397FE5DF51A2915333BAC7D,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_1_mE995210A9898FA8E7D22AD645A4DFC9660133AB4,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_2_m858B6FFA89982EA0CD99C6DDA05FDCBE0EE6D3B1,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_3_m959F9D9C8B4E91EC3136A02CE2BEAAD96E7F4C34,
	RemoveUnusedLayersPass_Run_m3E7AAFD50A56A003964C468BA392164A25764065,
	RemoveUnusedLayersPass__ctor_m66ADA328E944335CE0A1594A633879CF0E990D99,
	U3CU3Ec__DisplayClass0_0__ctor_m8F7B38EB80C1BBD54749D889075521892E489594,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m1B1F8D617974391D837A290C562FB4B56BD5A123,
	ConcatenateTransposesPass_Run_m897A441F1054087C77E477679A810457B6B4A6CC,
	ConcatenateTransposesPass_ConcatenateTransposes_m27E413AE368D2A2F36CF818199E3E58174D03395,
	ConcatenateTransposesPass__ctor_mC4452EFC63CC4699468BB35BB87CCBE1F92012AC,
	U3CU3Ec__DisplayClass1_0__ctor_m67160D7E32BD2596CD490722E1CF888A3E207F5A,
	U3CU3Ec__DisplayClass1_0_U3CConcatenateTransposesU3Eb__0_mAB903E31543BC3E03EBE9669AE65C90BC7D346FF,
	FuseActivationPass_Run_m066930F124B209DE8652E9A83B9DE7C3A1C45A1B,
	FuseActivationPass_IsLayerSupportingActivationFusing_mADF0993FD047A86EAADF86F87381CB6750E0C40A,
	FuseActivationPass_IsActivationFusable_m7D77C4F9D43328B26810FEB15681474C61EFAA20,
	FuseActivationPass_FuseActivation_mC00F8F69417DCE01053C9187530B4B15CBBF496B,
	FuseActivationPass__ctor_m7C9D4A1C0997D97421C4867D8244C1482824EB60,
	U3CU3Ec__DisplayClass0_0__ctor_mF2126AC70627E328AE7A28EA0A9E44CF84C9954F,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_mFD990F842B74F0B83BE05E3610C9917C121AFCB8,
	U3CU3Ec__DisplayClass0_1__ctor_mF8BDE78310820A90CCF4BA7BA535AC34511B5DE1,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__2_mD1BA5FEE94160DBF433660CD4C0CA8A9D4BDD06E,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__3_m89997959411D0673ABBA8C85183379CE63B25143,
	U3CU3Ec__cctor_mA5F7B334C568FFC4A92CE4EA9016CC7FD899CAEB,
	U3CU3Ec__ctor_m0B92DE3CD5F23C5FC85FAFC0AD1FB77299BFD840,
	U3CU3Ec_U3CRunU3Eb__0_0_m67741E55C73D6FED34048B85616FF9EC220BDF52,
	U3CU3Ec__DisplayClass3_0__ctor_m391A5B8DD49877ACC41390AD4CF378F5C0F8A915,
	U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m7EFC8946DAF10EA78FADFF85245A3F4FF035C6D4,
	FuseConstantsPass_Run_mDDEAC01D76534D58995A4EDF4730B8AAF4055585,
	FuseConstantsPass_FuseConstants_mC672C83DA3CE985F7198A14C5A57E391DC231275,
	FuseConstantsPass__ctor_m10FE8289EA7A1567F960C42A6E96C35E12F77B38,
	U3CU3Ec__DisplayClass1_0__ctor_m90AF2E8B793479D8AB4C91B55EC15F2807C2EB9F,
	U3CU3Ec__DisplayClass1_0_U3CFuseConstantsU3Eb__0_m4BFBB6FF3C31FC2B212B3AEDBA46B7C1800D3190,
	FuseDense3Pass_Run_m6BA52F91657AD441E294609E175378B93F94BF11,
	FuseDense3Pass_GetDownStreamLayers_m9184FE0BC1580B589D7B7E193A8D321B9272C81D,
	FuseDense3Pass_IsLayerDense3_m522672BE3C2B12A31EB690924CA6A756B65B0893,
	FuseDense3Pass__ctor_m5BFFFF44712396B91F69B4956BC2238066607EE5,
	U3CU3Ec__DisplayClass0_0__ctor_m7C16FCB714FEC19A7FF2C5DFCC0A2F9437BFE2B1,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_m22FDC6BA20F0350FE69578F04BAD85533BC7937B,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_mC0726FF81E5981767B99E86516CF105DCCA9DBB5,
	U3CU3Ec__DisplayClass0_1__ctor_m07E5DE95F8CC6678CF96110E9CB8DEB2C60A0202,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mB96AA87E8998DEB961DA0FAF2166190AACA60BFB,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_mAA7803E9D4A7D7E390BB8687CBDA14B2356E7FEB,
	U3CU3Ec__cctor_m0BEFAFECE565F17B167261DB48E7D737626F1B85,
	U3CU3Ec__ctor_m2652CB6D889136846F701601FB2F97978522AF72,
	U3CU3Ec_U3CRunU3Eb__0_0_mE02EBC6CABFA7EE5DBF943F34CF1DA0E17D4376C,
	U3CU3Ec_U3CRunU3Eb__0_1_m3CDDF4A4AF5B7E6CB29BA9F003BFA7496D09057F,
	U3CU3Ec__DisplayClass1_0__ctor_m36774B4E060428B61643D90BB5CFEDC6D7A197C8,
	U3CU3Ec__DisplayClass1_0_U3CGetDownStreamLayersU3Eb__0_m5AB38C65D51ADB28A85C1D979C3FD846E605DAA3,
	U3CU3Ec__DisplayClass2_0__ctor_mFEA534735892C927293294AA40A16C801B5E670D,
	U3CU3Ec__DisplayClass2_0_U3CIsLayerDense3U3Eb__0_m407EEC604966DC00CA4E8A2979AFE51C645C481A,
	FuseLinearLayersPass_Run_mB920D582C5307860E215CBA274E258B1A04E145A,
	FuseLinearLayersPass_IsLayerConstant_mE999C42ABDBC3FB60B74BCB8E55FF05DCF4D497E,
	FuseLinearLayersPass_IsLayerFusedActivation_mD0821FB5DFCB33311E7DA2642E07FEF939E905D6,
	FuseLinearLayersPass_LayerComplextity_m7640CE18315F1486740A0E1078130C5563E0797D,
	FuseLinearLayersPass_FuseConsecutiveLayers_m3CD57F848B8BCDBFC40DEF778AB8AFBDD093B881,
	FuseLinearLayersPass_AreLayersFusable_m5175171672DFD2293E600007F9451ADE8346C6A5,
	FuseLinearLayersPass_PackConstantsForMathOps_m9F7EB305FD45D655BF2DAE05208DAB5E5E6D0DA7,
	FuseLinearLayersPass_UnpackConstantsForMathOps_mF336ED5483D375291E17C03EB3581A3859BC7A35,
	FuseLinearLayersPass__ctor_mC8B399734E7175F4D95BF1752AFA21C875242DAE,
	FuseLinearLayersPass__cctor_m7795B1852810612D366442C0426CF85B85C25415,
	U3CU3Ec__DisplayClass0_0__ctor_mD2EE470B9AF481EDE5F7ED0E6C1AA243416E181A,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_mBF764F3144D3EF460AAB99626056E1E70892F431,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_mFAC7688E23E13AA32F2530022099FD7AF0388031,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m346066CAAD3925C235C9316D1FB1DBBB532C6052,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m5D898BFC3064DDE8C8BEB17A079D4613FAF1E48D,
	U3CU3Ec__DisplayClass0_1__ctor_m94A6494EA665AB056B0DE3614080F98AF8E019BD,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mA36974DD5A5B941C1AA6EBEC481C78B519F8E0C0,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_m6335E9C9D33023B0BA31055BE0B03978DD969F59,
	U3CU3Ec__DisplayClass8_0__ctor_m0D20C184A021BF982E3D9F1CD3AB78AC9B8F8334,
	U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__0_m0D62F333832EFAA7DBB633FCA8177A0A3B0DF0FF,
	U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__1_m96B4545FFC0BAD0F3966DEB7C6EA1EF3AE0CFB6C,
	U3CU3Ec__DisplayClass8_1__ctor_mD65214C205DE91BF78F1E01E5DE2F4223A073884,
	U3CU3Ec__DisplayClass8_1_U3CPackConstantsForMathOpsU3Eb__2_mB3C231B9E782CE4FE9FB4915BDCA589E6DB5D755,
};
extern void ReadOnlyMemResource__ctor_mC48374D2B97C6CCE5FCE6A4D94CA8E399564F518_AdjustorThunk (void);
extern void ReadWriteMemResource__ctor_m0FB7EF4C938F6A8B0DE628FEFB01EDBD4E105178_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_mDF462F5A4B0F8F30ABD8568AC9308ECA61B7828B_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_m271B6960533177BDECB107061756B18091240364_AdjustorThunk (void);
extern void MatrixMultiplyJob_Execute_mE9A39BD2F3DBB268ACE7B47FC07960C997C6E8F5_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Schedule_m1E7D0AC0E4CB5FEE06FD639F6C002F44F164B2A4_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Schedule_mE2748076029917FCDE7F1BA873A7D7B79F6EF527_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Execute_mCF658002C9D1791520A6A0EBE9C70D5E43C0AC45_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Schedule_m0F182AE984F7BEEEE26D8C007CF61E11BB7A4752_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Schedule_mFB52A63FB168E200B0C4EF21A94E14FD4E02C585_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Execute_mAC6E0433C00BF5D232458ED6D03CFCEC77231BAD_AdjustorThunk (void);
extern void Dense3Job_Schedule_mE676A954E4DB439543C98CADF4E1F48CFFB8C9A2_AdjustorThunk (void);
extern void Dense3Job_Schedule_m89B0278B2678764E5013BE4E19DA3B7ABB89BA86_AdjustorThunk (void);
extern void Dense3Job_Execute_mE96E18CF546A186411103892E208FE283ABF4316_AdjustorThunk (void);
extern void Im2ColSliceJob_get_X_m0DA0DE6B74CF53C156203158BF7186655E024A57_AdjustorThunk (void);
extern void Im2ColSliceJob_set_X_mAC7FBC47B3ADA3D969D7F2C97A63B99A7C35AA31_AdjustorThunk (void);
extern void Im2ColSliceJob_get_O_mF1F69C610396ACD0CBC19EE2C78DC293C96F068D_AdjustorThunk (void);
extern void Im2ColSliceJob_set_O_mCB4D5FED83F8FDA0ED4E647BE0BCF4EC165B8D1C_AdjustorThunk (void);
extern void Im2ColSliceJob_Execute_m04B26169EB6668195927B2B1C69140FDD29D0D62_AdjustorThunk (void);
extern void MaxPool2DJob_get_X_m13BFCC0E1448D3E5CE1C5076BB2D267CEFB4D0B8_AdjustorThunk (void);
extern void MaxPool2DJob_set_X_mD04E1B51CF7A4CF25F817FFBB710DA93F1C25BBC_AdjustorThunk (void);
extern void MaxPool2DJob_get_O_m51DA9B5C004742B6A7940D365E7707800C4CF220_AdjustorThunk (void);
extern void MaxPool2DJob_set_O_m81448FAC6E03CAB22C2ECEC5F4B9E14F46AF1EFB_AdjustorThunk (void);
extern void MaxPool2DJob_Execute_m580DD6093ED112BFF9BC46F8EB283D55DFC67AEC_AdjustorThunk (void);
extern void AvgPool2DJob_get_X_m7D5D4BAE24832FD25CC6C377C0FD7255468E5234_AdjustorThunk (void);
extern void AvgPool2DJob_set_X_m7FF63B501D5A464C01297BD715FB7AE0C0D6C2A7_AdjustorThunk (void);
extern void AvgPool2DJob_get_O_m75EEF8C136FDF2EDDAC46A6EB9C267AB078676D4_AdjustorThunk (void);
extern void AvgPool2DJob_set_O_m32F02174FBC96B340688B64B03CE4656AF635F0B_AdjustorThunk (void);
extern void AvgPool2DJob_Execute_mEC6AE2C040C7AAC14229E32B31359982DD70B93F_AdjustorThunk (void);
extern void DepthwiseConv2DJob_get_X_mBF4239B770D064168073249FD9112039B1F1D6BE_AdjustorThunk (void);
extern void DepthwiseConv2DJob_set_X_m6E851B6CFC9370731A9E93CEBF2BF6799EA7968D_AdjustorThunk (void);
extern void DepthwiseConv2DJob_get_S_m2D7EC74801FAB774197D8EC3EEFF49B7A32F5743_AdjustorThunk (void);
extern void DepthwiseConv2DJob_set_S_m321C9D5E2C150A3F719B5F999B62A3B3893866DE_AdjustorThunk (void);
extern void DepthwiseConv2DJob_get_B_mB87620DE1FA161DEAB645B51F44E05D9CA5656FB_AdjustorThunk (void);
extern void DepthwiseConv2DJob_set_B_m2E0091E0192610606B082F7E706F0A504A3CAA3E_AdjustorThunk (void);
extern void DepthwiseConv2DJob_get_O_mB26F34762E2F9736A2527E33E44317E94155CBDE_AdjustorThunk (void);
extern void DepthwiseConv2DJob_set_O_mC465D79D457E289C98F1C577DE42B62670346A02_AdjustorThunk (void);
extern void DepthwiseConv2DJob_Execute_m9328EE2AAAD43988BF3BA856D3DE63DA04C40389_AdjustorThunk (void);
extern void PReluJob_get_X_m34F01B3DB521A581A342FAEA875A36B2EBADA4EF_AdjustorThunk (void);
extern void PReluJob_set_X_m1B9F64B6352A265767276B7A50038D8D85DCCBAB_AdjustorThunk (void);
extern void PReluJob_get_B_m04428B6DC1C5112076B89B1F463786677AE614B8_AdjustorThunk (void);
extern void PReluJob_set_B_m9F8356B4C478CB59B08A1D12CD6C13D86F376C81_AdjustorThunk (void);
extern void PReluJob_get_O_mF018055161B7AFB0AA4ABACDBD392EE8BBA81E5B_AdjustorThunk (void);
extern void PReluJob_set_O_m57853415DFAFCA2534C1116D394618560CB217EC_AdjustorThunk (void);
extern void PReluJob_Execute_mA3B6D7DF53C9016910BCF82DB949362842210B8C_AdjustorThunk (void);
extern void ReluJob_get_X_m341ADC6743E8C686684CD3CE43B4F46947A38D3D_AdjustorThunk (void);
extern void ReluJob_set_X_m1CAF8DC890E936672F00287C42791956BB45A489_AdjustorThunk (void);
extern void ReluJob_get_O_m16186E4D006DA6908A08C5221DC4B5DCC6CF20D5_AdjustorThunk (void);
extern void ReluJob_set_O_mF4248072A1969FA7AE5B5EE49EA7F5C5FBF26501_AdjustorThunk (void);
extern void ReluJob_Execute_mE54A0858EAB957EECA3C81A2BF48F141D2E9D73E_AdjustorThunk (void);
extern void Relu6Job_get_X_m4094D938E1026E3690AF645F63ED07DAEEA288B6_AdjustorThunk (void);
extern void Relu6Job_set_X_m5396292DF59E6F6A3F74669BAFCABE9F3D1515FD_AdjustorThunk (void);
extern void Relu6Job_get_O_mF5F052BCEA690E896CF9E440AC1192E12EBFB8F2_AdjustorThunk (void);
extern void Relu6Job_set_O_m6A2BC96CA09F1FE5C1D02FAE5446C22ACFE0D95D_AdjustorThunk (void);
extern void Relu6Job_Execute_m3FD3AD1BF129901194BA5D1748F5BDD462FE4129_AdjustorThunk (void);
extern void LeakyReluJob_get_X_mF11C5DA07744B1721A11AC5E16D5FA208FB8CC84_AdjustorThunk (void);
extern void LeakyReluJob_set_X_mBF95CFF1222750DF720A0EC742743F0FC527EE5F_AdjustorThunk (void);
extern void LeakyReluJob_get_O_m3438499EF5527F24DBFA386602BD3C8954AB57ED_AdjustorThunk (void);
extern void LeakyReluJob_set_O_m06851D2102CC6F974D00F5819EF0F3CFEBCAA5A0_AdjustorThunk (void);
extern void LeakyReluJob_get_alpha_mD1806EEEF6B6E608E69A975C0594C12784B685CA_AdjustorThunk (void);
extern void LeakyReluJob_set_alpha_m50775D0539A9D4DE60D14DCF0040D424929EDC3D_AdjustorThunk (void);
extern void LeakyReluJob_Execute_m1DD708C8C0282DD65E30665A7B003CD9D9D25CB0_AdjustorThunk (void);
extern void TanhJob_get_X_mA538835782EE99ACE911216219A64333CEB0354D_AdjustorThunk (void);
extern void TanhJob_set_X_m9D5B8744250E776D498D4BFFA751048A23497D6E_AdjustorThunk (void);
extern void TanhJob_get_O_m893076F87428F8E917BD25DD78B903A89B503E49_AdjustorThunk (void);
extern void TanhJob_set_O_mE658A12C2EAD4534BCCCF3E82F84A3D1C73F3AD1_AdjustorThunk (void);
extern void TanhJob_Execute_mC148942BA69193BBAB1FD364D9DB4D3FA552DFF7_AdjustorThunk (void);
extern void SoftplusJob_get_X_m715A941DD9DEABA6C5F8C94AD047C98E4DAA7C83_AdjustorThunk (void);
extern void SoftplusJob_set_X_m75FED1F7BC6D28913A5E614AFB57E60466E3879C_AdjustorThunk (void);
extern void SoftplusJob_get_O_m4B5446F98ADD7AAC88541D21C9B71DCC5E493283_AdjustorThunk (void);
extern void SoftplusJob_set_O_m88EF87B9BD848B99EE9B528EFEDCED790C4FBE1E_AdjustorThunk (void);
extern void SoftplusJob_Execute_m20162B8B288264D6531E07C8289CE3641EFA97B3_AdjustorThunk (void);
extern void SigmoidJob_get_X_mD23EF0BD310E794FA1B3674C9C6DAB92F850A0F1_AdjustorThunk (void);
extern void SigmoidJob_set_X_m6B330B1903A4B1C98DD8C5DD73B5311ADD0B7EB5_AdjustorThunk (void);
extern void SigmoidJob_get_O_mDF22771B505E47B3AD956FC75AD03C49BE0485D9_AdjustorThunk (void);
extern void SigmoidJob_set_O_mE0D4D945ACC6A1E4A334F2ADB70D3CB983F457C4_AdjustorThunk (void);
extern void SigmoidJob_Execute_m3181646D37A37C23036A748398091EE987752D26_AdjustorThunk (void);
extern void EluJob_get_X_mE8F14D40E42272F3B605EBF8672D448C5760C41D_AdjustorThunk (void);
extern void EluJob_set_X_m1E37FA3AFF1CAFC8A27D56676EA67D3B3AE477F9_AdjustorThunk (void);
extern void EluJob_get_O_m34B77E09C7F3C65D71DA150B46CC6CF58AF96BA6_AdjustorThunk (void);
extern void EluJob_set_O_m7A2453DED1B316C83191E58A299AC877AA710877_AdjustorThunk (void);
extern void EluJob_Execute_m542D1F8E0526448F088A239690D716358208AA08_AdjustorThunk (void);
extern void SeluJob_get_X_mEA3AFADD1A7347A964580746D809A30E1EF95A6B_AdjustorThunk (void);
extern void SeluJob_set_X_m327E3F13CC5CAAFB2B45108592C888F999F941E6_AdjustorThunk (void);
extern void SeluJob_get_O_m53FF8241EB27D3738757245D069DF2C8318FE662_AdjustorThunk (void);
extern void SeluJob_set_O_m85F0B048568564755C051E8E20A11DBF84B83D8A_AdjustorThunk (void);
extern void SeluJob_Execute_m059F68D5649F08D16CCBB3D15E5D3B850BB38EE5_AdjustorThunk (void);
extern void SwishJob_get_X_m983C75EE5CA53EF53F7DDA648DB793E5CB732335_AdjustorThunk (void);
extern void SwishJob_set_X_m8952CCCA3B37B206463073C97D2E30FA91D59967_AdjustorThunk (void);
extern void SwishJob_get_O_m365876877089126183CB9321FE113E19B109A82D_AdjustorThunk (void);
extern void SwishJob_set_O_m2DC6C9614FE1DE635618E980A342E494E45B0969_AdjustorThunk (void);
extern void SwishJob_Execute_m249E8553A89A15C55A9DCC2734224990340AFB86_AdjustorThunk (void);
extern void ExpBiasReduceJob_get_X_m35C5FB8911BB8FC51EB464ABC2C3BEA82C4DA694_AdjustorThunk (void);
extern void ExpBiasReduceJob_set_X_m7D8E4223E1FDF14DC86F8D5A4FFCD5CCBE55918D_AdjustorThunk (void);
extern void ExpBiasReduceJob_get_B_m78499E47C15E6A59EB01A9878239A31DF122742B_AdjustorThunk (void);
extern void ExpBiasReduceJob_set_B_m0CA84CEAE7F5BB17D28F9CD837B4BE7BE44B00E8_AdjustorThunk (void);
extern void ExpBiasReduceJob_get_O_mA7F7688ABEA6C97CA5D6DFF6C07ED5FDB5E3A848_AdjustorThunk (void);
extern void ExpBiasReduceJob_set_O_m111B670F154B61572BC7DE4E3002341E617EFB9F_AdjustorThunk (void);
extern void ExpBiasReduceJob_Execute_m9AF1674E3CE059153AF2A668BB27E407300C2686_AdjustorThunk (void);
extern void SoftmaxEndJob_get_X_m7E57BE1757F9FC8C7AA3B7E74EE29BAC41AE898B_AdjustorThunk (void);
extern void SoftmaxEndJob_set_X_m15352FF2E769078F02EC5960D8D931ECAD97B855_AdjustorThunk (void);
extern void SoftmaxEndJob_get_S_mD2CA8ACD6AAAC756C294D992083A9750EF341A03_AdjustorThunk (void);
extern void SoftmaxEndJob_set_S_m6042D67E59D30CF1FA9E47CA31F6E1D58C74C4C6_AdjustorThunk (void);
extern void SoftmaxEndJob_get_B_mD5FA9405F2D50B8E231BB79DBAE28F46A21FDCF6_AdjustorThunk (void);
extern void SoftmaxEndJob_set_B_mB5F03CB2B8BC08A53D6D4E8CCF72309D97819B10_AdjustorThunk (void);
extern void SoftmaxEndJob_get_O_mB11056F8DE55CBF2B13A3BB4C8352116A95CF3A5_AdjustorThunk (void);
extern void SoftmaxEndJob_set_O_m7E3583C5D9F7A3F27E062102241A32760434FBB5_AdjustorThunk (void);
extern void SoftmaxEndJob_Execute_mD3F031975B5F57B584C417CEBAE2DF1DDDB7A73E_AdjustorThunk (void);
extern void LogSoftmaxEndJob_get_X_m27E5182DCDAE61C1FDD7A3D14AB0951529198514_AdjustorThunk (void);
extern void LogSoftmaxEndJob_set_X_mEB4B2745DD328ADDC025B9E49ABEA2DB7C1BB63E_AdjustorThunk (void);
extern void LogSoftmaxEndJob_get_S_m6EAACC3847C2CD0C754E4B2B4360A78FA9B05F20_AdjustorThunk (void);
extern void LogSoftmaxEndJob_set_S_m70EDC74A9810EEDE2F6D1EF0CF927A51ABD4568A_AdjustorThunk (void);
extern void LogSoftmaxEndJob_get_B_m8EA13B276C5C014F7E9A5CAF27B7BE035A3AFA7F_AdjustorThunk (void);
extern void LogSoftmaxEndJob_set_B_m12505EBB14D292216929E61604F69EBA1912B643_AdjustorThunk (void);
extern void LogSoftmaxEndJob_get_O_m6A418FE1EBBB9B4A453BAF6D866A65E9AF95C12D_AdjustorThunk (void);
extern void LogSoftmaxEndJob_set_O_m5808D1A55B242CE8D5BCE16A9BFAC98FF370D0FC_AdjustorThunk (void);
extern void LogSoftmaxEndJob_Execute_m0C8E325A86ECF16B27434846FFF68812148AE319_AdjustorThunk (void);
extern void AbsJob_get_X_m334D68A2C8EAECA9D965710F5AC97BA6D5CAE454_AdjustorThunk (void);
extern void AbsJob_set_X_m93EA90E9B760015D9AA7AD89D879DAFD5DE0FB2B_AdjustorThunk (void);
extern void AbsJob_get_O_mEACA538B8D68DD0BEB8665BF6CB40339F07171DA_AdjustorThunk (void);
extern void AbsJob_set_O_m392E2DB760B23F0956905F5AB3861B4118D7F421_AdjustorThunk (void);
extern void AbsJob_Execute_mC9E702070CFB124AB2BA751C50D81D93C22C4938_AdjustorThunk (void);
extern void NegJob_get_X_mD2FD8626D4C7AFCE4E8E1C3D4B24283CD93F34F1_AdjustorThunk (void);
extern void NegJob_set_X_m17391FA0EF7389709FF7882A8179E5F37DA028B2_AdjustorThunk (void);
extern void NegJob_get_O_mFF0BD0C196D2D39438780677AF102852E55F1F2C_AdjustorThunk (void);
extern void NegJob_set_O_m3C04B46A229B15F83F05F9B2BC1CFBEAB277BC0C_AdjustorThunk (void);
extern void NegJob_Execute_mBCF6937BAE0E450FB75C536CD6C2387D4F4B11A8_AdjustorThunk (void);
extern void CeilJob_get_X_m3DA595A266405F102D6DA9711673352C74B17326_AdjustorThunk (void);
extern void CeilJob_set_X_mFEAF467CE49BD29853E6A6614196880B5531D391_AdjustorThunk (void);
extern void CeilJob_get_O_mE069A8E97E1F9C01F8F33B9DE61593868E689B27_AdjustorThunk (void);
extern void CeilJob_set_O_mE0C76AEB46A1789E6BE5FC82771DCEA76280DD88_AdjustorThunk (void);
extern void CeilJob_Execute_mA9B7C6396A148E2199719E8C2F575FD163D473D9_AdjustorThunk (void);
extern void ClipJob_get_X_mDBF96CE5EABC07C3C4631D23DE79D7A3F6DFDAE4_AdjustorThunk (void);
extern void ClipJob_set_X_m0E918558BCA0C60AD427A2C990C3CB7B6F896593_AdjustorThunk (void);
extern void ClipJob_get_O_m8FF52A8C8218874E8A2E129465EB37CE2FE39897_AdjustorThunk (void);
extern void ClipJob_set_O_m95CCA1ADB860945E6E3E7EF46F5850F8F1EA2AC2_AdjustorThunk (void);
extern void ClipJob_Execute_m9D2B7772DEB5B8209BCE795F0FD0C02BF8C02A24_AdjustorThunk (void);
extern void FloorJob_get_X_mA9D58F1AA5BDEE15DE265D82B2AAA089CA5EC67D_AdjustorThunk (void);
extern void FloorJob_set_X_m9120E16DB2EFC2CD0DDF4E0676688F5E8137AEE8_AdjustorThunk (void);
extern void FloorJob_get_O_m1D01FA2D48FFB7E235297080D4C26CD5273C063F_AdjustorThunk (void);
extern void FloorJob_set_O_m362AEA5EAD1C05CE7E25382B1DE70905C42EEBF5_AdjustorThunk (void);
extern void FloorJob_Execute_m386E9A00BF9424C50FFBD0B3F7FFF462E6CB8729_AdjustorThunk (void);
extern void RoundJob_get_X_m0B61ACEA49F7A711DFD3453E4BB5FBFCB954A1AB_AdjustorThunk (void);
extern void RoundJob_set_X_mDCE59C717F4004CB6DF8B8533E63035A6436FF2B_AdjustorThunk (void);
extern void RoundJob_get_O_m9761A243013B4EF4C4ACC2C574E8DCFE52EF2075_AdjustorThunk (void);
extern void RoundJob_set_O_mD2CD308CB6C731C4FBB683C19549E301986DCCB1_AdjustorThunk (void);
extern void RoundJob_Execute_m7CA8A8C7A9BF695F1F57364609A0F3DB94BB5F69_AdjustorThunk (void);
extern void ReciprocalJob_get_X_m96304AFBDB5C258D3C5815382D7FC6C92CF5E0A7_AdjustorThunk (void);
extern void ReciprocalJob_set_X_mFA3062C9E49F3100AE9525C9BB95AAFBE9EFB2F9_AdjustorThunk (void);
extern void ReciprocalJob_get_O_m4358C4FB0ECC572CDE77C3FA0F21C0E868FDF094_AdjustorThunk (void);
extern void ReciprocalJob_set_O_mABDF756762465842DEBC7FE984B066D7A0AA8FD5_AdjustorThunk (void);
extern void ReciprocalJob_Execute_mE52D2BB420CB95D632F0B6C44CD09544903FEAA0_AdjustorThunk (void);
extern void PowJob_get_X_mBE33CA79F448DEF71CCE2020E12D7DA69DBABBB6_AdjustorThunk (void);
extern void PowJob_set_X_m4152D1652AD55EE839C4D125B59F025D0A7F8FE8_AdjustorThunk (void);
extern void PowJob_get_O_m7FD64F414F03A51E1F40B85656A7806D7D6178EC_AdjustorThunk (void);
extern void PowJob_set_O_mA67A0A36783EEDA1C6E5943E85F8DDD768D6C148_AdjustorThunk (void);
extern void PowJob_Execute_m94044E5A8F0B024BA6B81895549F4EE3D0EFD7E2_AdjustorThunk (void);
extern void ExpJob_get_X_mE0C1184C832C24AF291F18DF7FA19A216A5F0E83_AdjustorThunk (void);
extern void ExpJob_set_X_m3248EEEBC03C9C4B08666EAE30F68997FE71A579_AdjustorThunk (void);
extern void ExpJob_get_O_m9D050460BF8A5F5601D79F3EDD9533C1B743C0AF_AdjustorThunk (void);
extern void ExpJob_set_O_mD703D98B4D46F116EE5D6865F6E3BD9EA5CFD30D_AdjustorThunk (void);
extern void ExpJob_Execute_mF0D94BDC093DEA6364F44569702A47D2A98FFE15_AdjustorThunk (void);
extern void LogJob_get_X_mDDC56BA2692F31E26238020B2E89BD2A5499A479_AdjustorThunk (void);
extern void LogJob_set_X_m9DFCA8400C37264E0C0BE84014B183EBE02FAD4D_AdjustorThunk (void);
extern void LogJob_get_O_m364859EAD02E6D688AD275E6A576AF46D736B40D_AdjustorThunk (void);
extern void LogJob_set_O_m4D7E3509573C657E8C4B99858F9BD50A7DB43A0F_AdjustorThunk (void);
extern void LogJob_Execute_mD97D7DF75DF44CF7E8D15E60C3A4F2CAD96EA9E6_AdjustorThunk (void);
extern void SqrtJob_get_X_mC65AE9821E066F6695702E79C76AE8506E19479E_AdjustorThunk (void);
extern void SqrtJob_set_X_mE126B9ADEC0F0FA9AA1FA14D0D52666408A8B120_AdjustorThunk (void);
extern void SqrtJob_get_O_m0D28FD4C89B2D017B251A119BA20704977492A2A_AdjustorThunk (void);
extern void SqrtJob_set_O_m3F5898EDEC2E67E9A7F68FB3A3A785A465DAB1A9_AdjustorThunk (void);
extern void SqrtJob_Execute_m2B47F9B88C83FF8254BE076C403DA830DB4C5090_AdjustorThunk (void);
extern void AcosJob_get_X_m66DCFFC34AF0CE681F1BF9CE2A56DE10161EB933_AdjustorThunk (void);
extern void AcosJob_set_X_mCB21343095AE32C501CB596DD8EE0355832B45AC_AdjustorThunk (void);
extern void AcosJob_get_O_mEFF967B98705C7FCBEB08B29D1CD442B2A17559E_AdjustorThunk (void);
extern void AcosJob_set_O_m9CCB412F00913862FF72171209633F78689FD567_AdjustorThunk (void);
extern void AcosJob_Execute_mDA4C175B7716073508AC1722C1CC9213CAEC8D94_AdjustorThunk (void);
extern void AcoshJob_get_X_mDCA4D84B84743BA6BCF5CE6911104AA32F8AF775_AdjustorThunk (void);
extern void AcoshJob_set_X_m352949D3F8040241039B5D0EDCD18914745AE429_AdjustorThunk (void);
extern void AcoshJob_get_O_mAF2C45A4E0DDE4D96AEBCD42BB75230109C81DDB_AdjustorThunk (void);
extern void AcoshJob_set_O_m7AD55CFD0A48B9711B28CD1059B42067E4281FF9_AdjustorThunk (void);
extern void AcoshJob_Execute_mFAC3096AE97DDBA238B3F599F7E0D33CB581F520_AdjustorThunk (void);
extern void AsinJob_get_X_mCF04557A9A5F880F639E66878CCF34FC1CF3CB32_AdjustorThunk (void);
extern void AsinJob_set_X_m1D45DB3FE9378D209AA6B5ED5B6FAF8491C96C69_AdjustorThunk (void);
extern void AsinJob_get_O_mA8A321C2823891C64B8B9D911CD33E057178DB74_AdjustorThunk (void);
extern void AsinJob_set_O_m60CCEDBEE3724A17F75A59A7B352299EA92ECBC4_AdjustorThunk (void);
extern void AsinJob_Execute_m31CD035468B0BBA44E0D47B0D79A227BAF0B2195_AdjustorThunk (void);
extern void AsinhJob_get_X_m446F0300152A709722053F9406AE0648F4D8181E_AdjustorThunk (void);
extern void AsinhJob_set_X_mFACC3A9063BC15B6FD46F6287819AF7960246E59_AdjustorThunk (void);
extern void AsinhJob_get_O_m78B6DF783426B9345D2FE740C83C4F484334B3E1_AdjustorThunk (void);
extern void AsinhJob_set_O_mEF7AF6B218E9D0AAAF53153D85027281A5470CF0_AdjustorThunk (void);
extern void AsinhJob_Execute_mE09A2A08C82704B6D6E30876E672219F1EAFB5E9_AdjustorThunk (void);
extern void AtanJob_get_X_m569E122902DAB31F47EE0E71EFE79DB2C43A103B_AdjustorThunk (void);
extern void AtanJob_set_X_mC19DFFA02AC14D40AD631179CE8E67CD185FFF42_AdjustorThunk (void);
extern void AtanJob_get_O_m34E06A558A26C2678048821448F85B1D857FAC60_AdjustorThunk (void);
extern void AtanJob_set_O_m8387D0F47DC26B0479B222F99B2E47F9EF23319D_AdjustorThunk (void);
extern void AtanJob_Execute_mA8A5B0E790174C428C987DB2819E5D4D00350136_AdjustorThunk (void);
extern void AtanhJob_get_X_mCEDBDDB5EA369A65C1E5AC0E8DC3F6711962CDDD_AdjustorThunk (void);
extern void AtanhJob_set_X_m8A990E803D95DF351B0EBA31873EBA260E717313_AdjustorThunk (void);
extern void AtanhJob_get_O_mD7E5A6C0D8D80EAAC77F7617CDAD4891F61BCE64_AdjustorThunk (void);
extern void AtanhJob_set_O_m90CD06BA94D9AB200BBB532332439FF44A2545F2_AdjustorThunk (void);
extern void AtanhJob_Execute_m3AF220A4BBF3D22E88444F1E8E9B1D6171965534_AdjustorThunk (void);
extern void CosJob_get_X_mBFC90A36BDE341151B629D5152B4CF225C3855A0_AdjustorThunk (void);
extern void CosJob_set_X_mF469CD1C84E5C0AA20D2DA154DE614596C3F1EEF_AdjustorThunk (void);
extern void CosJob_get_O_m916F32E35CF0271638569291DBDFA9D1D45C8B17_AdjustorThunk (void);
extern void CosJob_set_O_mA098E7C682CEA97FD2BEFC10CD99DC9679709294_AdjustorThunk (void);
extern void CosJob_Execute_m2F08411327FE7724D3BE5199B31DE47AF1C7F0DA_AdjustorThunk (void);
extern void CoshJob_get_X_mF12DB1A1B16922AA3B3F062B18B922DCC93517C2_AdjustorThunk (void);
extern void CoshJob_set_X_m4F3F31B1601412397557F04081EC37714E0034DB_AdjustorThunk (void);
extern void CoshJob_get_O_m36D90B0DF04A6325BB2554863FF0659A46F009B5_AdjustorThunk (void);
extern void CoshJob_set_O_m060A830FF6B7EAE86F0AA8F71996C380A308574A_AdjustorThunk (void);
extern void CoshJob_Execute_m02E60B2C5493C00CEBB37296D09D122F90CD8EAB_AdjustorThunk (void);
extern void SinJob_get_X_mB7893AAC3A1A0134D7E496408377346B4D78D17B_AdjustorThunk (void);
extern void SinJob_set_X_mA9FD9F54D72F90D8FA2AB5824CBF04A57D6A8983_AdjustorThunk (void);
extern void SinJob_get_O_m8F23A4DA3473322D82A71E4AE941FEFDB7C3E412_AdjustorThunk (void);
extern void SinJob_set_O_mCDDD97F88466357636FEF925B354D2C0D88BCB77_AdjustorThunk (void);
extern void SinJob_Execute_m71964BC65C5920C5FA97EC0108558DC528B6C744_AdjustorThunk (void);
extern void SinhJob_get_X_mF75DC100E0A0F57DCE4A8FB4E8BFB95767B7D251_AdjustorThunk (void);
extern void SinhJob_set_X_m65E3EE42078289D65833ADDC705582ECE43A254F_AdjustorThunk (void);
extern void SinhJob_get_O_mADEE98AF883D70C72ABA10BA1F08E450D314A953_AdjustorThunk (void);
extern void SinhJob_set_O_mD5F969DA6086CF5B483AF05F99BC2CEC9450E2BF_AdjustorThunk (void);
extern void SinhJob_Execute_m2CECED4DC6D99D70E65730093F407CD2710C7F50_AdjustorThunk (void);
extern void TanJob_get_X_m08EAB669B71BF45E36F36D6F3AA495B2FDA5928C_AdjustorThunk (void);
extern void TanJob_set_X_mE792C3DC72801925F297475E09E42DA864DCAAD3_AdjustorThunk (void);
extern void TanJob_get_O_m9834484B10830585CF5F44A3289D7FE39F3C94F3_AdjustorThunk (void);
extern void TanJob_set_O_m276CE9DFAAC2CB7E967F47AA4FA21F71545CE2AE_AdjustorThunk (void);
extern void TanJob_Execute_mBDA81B0D2C0F6ECF9C6A1A1C8B00CBD7C019C018_AdjustorThunk (void);
extern void ElementwiseAddJob_get_X_mA3ED14F38734359A8014F8058C951FBE6B4B15D1_AdjustorThunk (void);
extern void ElementwiseAddJob_set_X_m25F7F20743523F8EFD968BA649A53BD43813DBDA_AdjustorThunk (void);
extern void ElementwiseAddJob_get_B_mAAAED3F2E340683A24E4AB7377BA20423C5C509B_AdjustorThunk (void);
extern void ElementwiseAddJob_set_B_mD43C6A86C90E394B8C835520C84840DC4FCACE1E_AdjustorThunk (void);
extern void ElementwiseAddJob_get_O_mBD67B0E5EAAEE85C8592961668EDBC7DCE0A248C_AdjustorThunk (void);
extern void ElementwiseAddJob_set_O_mD99F855B00311908474D5754D184C10B0A67E02F_AdjustorThunk (void);
extern void ElementwiseAddJob_Execute_m39D1A15119B46A924F0AEE95E53525365D0128DC_AdjustorThunk (void);
extern void ElementwiseMulJob_get_X_m38EB29960584BD596AC4E45F862113FAB4E90655_AdjustorThunk (void);
extern void ElementwiseMulJob_set_X_m93715CF41E1E74BF4B4F76CA0D984856733553D0_AdjustorThunk (void);
extern void ElementwiseMulJob_get_B_m5A53FE0C65B23D9567466B04BF3674F1B0109804_AdjustorThunk (void);
extern void ElementwiseMulJob_set_B_m18116CEC2FC8E19A4D8D164020D81C8753C608A9_AdjustorThunk (void);
extern void ElementwiseMulJob_get_O_m170D33EC5893BFB584D37982B03DFDDA8DBA9D32_AdjustorThunk (void);
extern void ElementwiseMulJob_set_O_mFF6F6B70C0F54D8DABC151C745C3D8B181E12624_AdjustorThunk (void);
extern void ElementwiseMulJob_Execute_mE878B9908E76DCEF78F2F4B12B8D378EA7CD5E84_AdjustorThunk (void);
extern void ElementwiseDivJob_get_X_mD1A5351B0C68B0D522D35A84B17C1893F14B80C6_AdjustorThunk (void);
extern void ElementwiseDivJob_set_X_mC3853D87F76D9F0F0A2B1ED46170CDCB5DC4FE0C_AdjustorThunk (void);
extern void ElementwiseDivJob_get_B_m73740B6B35D1A44C90DE3EA407BC7A75CF78A3BA_AdjustorThunk (void);
extern void ElementwiseDivJob_set_B_mF51F080B0BCE1BD0AB6BDE2F88CBFBA0B4100EAC_AdjustorThunk (void);
extern void ElementwiseDivJob_get_O_m47BDA0819BBADE1890A2CD034F340F0DE4B71A55_AdjustorThunk (void);
extern void ElementwiseDivJob_set_O_mF83FA23A95CA00CBC56F56605285FD39978F4E65_AdjustorThunk (void);
extern void ElementwiseDivJob_Execute_mE84A527765E4E129DB9914B9155968FD755625A5_AdjustorThunk (void);
extern void ElementwisePowJob_get_X_m07FE079B4926C4F271D4408E88AB519819AC516A_AdjustorThunk (void);
extern void ElementwisePowJob_set_X_m87E634406CB8AC2A3476216FA726C063B82203F8_AdjustorThunk (void);
extern void ElementwisePowJob_get_B_m644F0686960DDAEC772ADFDBD66218E466CC0206_AdjustorThunk (void);
extern void ElementwisePowJob_set_B_mEAAD5540D4827F4B1AD14F527D24BBC9DB0C361B_AdjustorThunk (void);
extern void ElementwisePowJob_get_O_mAC08853A9B5D87EEE51CC55758ED940016940065_AdjustorThunk (void);
extern void ElementwisePowJob_set_O_mB258341F8190FD68345D6ADE974BAC6660E48913_AdjustorThunk (void);
extern void ElementwisePowJob_Execute_mF1CC6859CE7AA501A1F809BCC0100BB6B71DB2EA_AdjustorThunk (void);
extern void ElementwiseMaxJob_get_X_mF57E05C251E90F97E40A3AE9871698D92708CC91_AdjustorThunk (void);
extern void ElementwiseMaxJob_set_X_mF3AC913E2F1158D0D59521353680D5C712103FC5_AdjustorThunk (void);
extern void ElementwiseMaxJob_get_B_m763E07BD9C15090160808A0FB6BDBF9F296DE3F4_AdjustorThunk (void);
extern void ElementwiseMaxJob_set_B_m58E7268BF82B4F65467312FAAF49F99C5A53C511_AdjustorThunk (void);
extern void ElementwiseMaxJob_get_O_m2DF9A02058483619E5A0C7C289FF18FC275EFD4B_AdjustorThunk (void);
extern void ElementwiseMaxJob_set_O_mC7B8496B4F23BDF5CE6DF34C4BFB138F7CE4483D_AdjustorThunk (void);
extern void ElementwiseMaxJob_Execute_m74F7F0E6ECFAC9AB44E6C52174D4D3045F579457_AdjustorThunk (void);
extern void ElementwiseMinJob_get_X_m131A79A6F386A12D3BE4C6202C1533843263FE75_AdjustorThunk (void);
extern void ElementwiseMinJob_set_X_mADAB55E0E82AB17872DFB86EE4D7B481512600FB_AdjustorThunk (void);
extern void ElementwiseMinJob_get_B_mDF4881B23237B3276F21DC7D02313504EEBE3FDA_AdjustorThunk (void);
extern void ElementwiseMinJob_set_B_mDCC01207483AC5C42F83EDF6A5041BC21DB98863_AdjustorThunk (void);
extern void ElementwiseMinJob_get_O_m51926A897B31A72E0545120BD9F65531D62E3E28_AdjustorThunk (void);
extern void ElementwiseMinJob_set_O_mD09F35ABFB5E1152104B5CC0B77846CCB2E668D4_AdjustorThunk (void);
extern void ElementwiseMinJob_Execute_m8F1AD69702EBDBBA2DBBC40F763AD6EB6F26D40E_AdjustorThunk (void);
extern void SetConstantPaddingJob_get_O_m429F04D1565369DC8A92C56A8A3F7BDF8E160793_AdjustorThunk (void);
extern void SetConstantPaddingJob_set_O_mB2728CACA980C9317197F59C8F7D583C4F94AB60_AdjustorThunk (void);
extern void SetConstantPaddingJob_Execute_m33D4842DB0ECD839739915A70277EBB7D479B67D_AdjustorThunk (void);
extern void SetConstantPaddingWithStrideJob_get_O_m9D04B58FB922492F5CFA0F081466DA4C11FB67A8_AdjustorThunk (void);
extern void SetConstantPaddingWithStrideJob_set_O_m73C46E89A0A7C9E15D20A941855C84CA67572A1F_AdjustorThunk (void);
extern void SetConstantPaddingWithStrideJob_Execute_mF8FF2F177682E73208A18B28DD9359D11197E3FF_AdjustorThunk (void);
extern void ZeroBroadcastJob_get_O_m80EBF053EEF3510467D32A981FBD5B6A1FBDAF02_AdjustorThunk (void);
extern void ZeroBroadcastJob_set_O_m9F254990E077C41C7E69C411E9F721CFA9054C4F_AdjustorThunk (void);
extern void ZeroBroadcastJob_Execute_m2DC38B85112A1BB8B313C1AF7239284EC6CCF990_AdjustorThunk (void);
extern void CopyJob_get_X_mAF0CF362316C875D50B6BECF1274D628A179CC7C_AdjustorThunk (void);
extern void CopyJob_set_X_m53604813C91ECEC681DBACFC67D026C7A51C5A58_AdjustorThunk (void);
extern void CopyJob_get_O_m3A5FE4E7678815BB9489726FD2C4201B547BFA04_AdjustorThunk (void);
extern void CopyJob_set_O_m2260259E5BAF0F04604C4B5271BE47CF793B1E49_AdjustorThunk (void);
extern void CopyJob_Execute_mE5D45E422768502C8AE6B8EF2ECFD01B1DEEDE41_AdjustorThunk (void);
extern void CopyStrideJob_get_X_m91FFE7411E433397342D1B48B198D64C11A8DEF1_AdjustorThunk (void);
extern void CopyStrideJob_set_X_m64A7A3CADB3D27324C8BF86FBDE2E029112A9B00_AdjustorThunk (void);
extern void CopyStrideJob_get_O_mEA69CDEB88293AFEFA7427EACAD5CB8AC72EC2D9_AdjustorThunk (void);
extern void CopyStrideJob_set_O_m25EAEE33D79111B55485D8621E320CF95CC5A9CD_AdjustorThunk (void);
extern void CopyStrideJob_Execute_m7C1642B0EA7FD5D1BDE18ABDD14E51C210A91C16_AdjustorThunk (void);
extern void VectorBroadcastJob_get_X_mF9DC27A72B485BA01A3424EEE12625BC6E182876_AdjustorThunk (void);
extern void VectorBroadcastJob_set_X_mF1445A332850A939C8B09B0C22ECEFABFA7490F0_AdjustorThunk (void);
extern void VectorBroadcastJob_get_O_m6D2793416B631B08FD69725B1C79353CE3CFDC84_AdjustorThunk (void);
extern void VectorBroadcastJob_set_O_m9C59763E7A1A9BA294F16DC6C49158A8B8F9608B_AdjustorThunk (void);
extern void VectorBroadcastJob_Execute_mBEA427E04083C3455BE3BA1C30A74A37156F09F7_AdjustorThunk (void);
extern void GenericSliceJob_get_X_m5B6357955D9464D6F9E410A3406EAD15A1984842_AdjustorThunk (void);
extern void GenericSliceJob_set_X_mF540A2162A178735356F1290EFDF6735C7C8B1F3_AdjustorThunk (void);
extern void GenericSliceJob_get_O_m2405E6CB4FAE2FA6FBA34B54C4523E9915B7631F_AdjustorThunk (void);
extern void GenericSliceJob_set_O_mAAC9631DDB4E95D7804960F152B6CC6C7E87F427_AdjustorThunk (void);
extern void GenericSliceJob_Execute_mFF288119AA381D66E3090E247FB624FD64F73695_AdjustorThunk (void);
extern void GenericStridedSliceJob_get_X_m5B90A58F10A3B7C0299B529518FFE9025F7420F7_AdjustorThunk (void);
extern void GenericStridedSliceJob_set_X_mF47DEF41B16E85C7014B31C12D620945E6EFCA11_AdjustorThunk (void);
extern void GenericStridedSliceJob_get_O_m9C4F012528B5162983A95C7E91F1FE433F5E1EE4_AdjustorThunk (void);
extern void GenericStridedSliceJob_set_O_mA45196365935D13F7A8247F17C449A8A412EAB74_AdjustorThunk (void);
extern void GenericStridedSliceJob_Execute_m6A9B66FA12AFD524DEE71F4D6EA4B33E674CCFF2_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_get_X_mD58E9E286DF48B6454B6D613FB340DE492CD4CCB_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_set_X_m076617C3853DBAA189342E34A1FD521CD5E356CC_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_get_B_m1117AC67E085E2449D7CF0AD2E50149605F3594D_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_set_B_m43157B3EE4D33AC766D9AAC4614B738DC6DD96CA_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_get_O_mEF38A4F067FCF4112A062CF9032396C2992644B1_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_set_O_m8CEBBB7FA55802CB79C7EAAE8C3C6A677FDBC5BA_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_Execute_mEFF1D419F09B956F01013F8D09C4676EFE2C63D5_AdjustorThunk (void);
extern void BroadcastAddJob_get_X_mBD62E8AD2B85859D5B0EB29175E56297861C15E2_AdjustorThunk (void);
extern void BroadcastAddJob_set_X_m3ED27D8C6F31C4743CD43C2F83471F36762BF264_AdjustorThunk (void);
extern void BroadcastAddJob_get_B_m61EB097DBF53E606DC3289016864803CF6670F6D_AdjustorThunk (void);
extern void BroadcastAddJob_set_B_m69F9770C14E20E62929715FF274528D97F596ABF_AdjustorThunk (void);
extern void BroadcastAddJob_get_O_m3352D0A992F5BA575A6E5A8673C9944864D51B4D_AdjustorThunk (void);
extern void BroadcastAddJob_set_O_m765A60D1F512088319C9A7F550987D3BC792AC54_AdjustorThunk (void);
extern void BroadcastAddJob_Execute_m79A6322A7FCC5F1487F933FC9F34CF152D66D576_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_get_X_m18C0B739A174A142390499A01E5D94D12F4639D0_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_set_X_m08FA50A843FDD9938BB4AB3DB16F0C505DA025A2_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_get_B_m973C3DE7E731BB5CC18637BD56B2FCE9DC72441B_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_set_B_m2C713932F9647D16E8D34F744F1D3F5C3030BAF2_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_get_O_mF770FCF169D1C43BA2C97A349BFBD7588384A1F6_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_set_O_m022B0A7FD1E26B6B83F2A4EBFE3E7791C1135203_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_Execute_mF6BF0CF0E8814EEEB6347E3E013FE03AA68D185C_AdjustorThunk (void);
extern void BroadcastMulJob_get_X_m998CB30985610131DD486928CF468C97AEDFAF74_AdjustorThunk (void);
extern void BroadcastMulJob_set_X_mFF8163331F04D07CC4EA7D2A5257380FF69DEF70_AdjustorThunk (void);
extern void BroadcastMulJob_get_B_m4AA74760888C99069C9E2EBAFCE26C3603F3E94A_AdjustorThunk (void);
extern void BroadcastMulJob_set_B_mCA1A3DE666AEFB76540FDC848B26BB17353630A1_AdjustorThunk (void);
extern void BroadcastMulJob_get_O_mEE4F75350BC325A236D25F8EF4EABC08C8AF1BD2_AdjustorThunk (void);
extern void BroadcastMulJob_set_O_mBA34D31B8083CEF02CA9C120908AEB15FC3C15DA_AdjustorThunk (void);
extern void BroadcastMulJob_Execute_mA396102B2E230E228B9C8363BD5B4C4D1684B7CF_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_get_X_m7A172C4BE7E7D85D911E8733E43485AB938C29D3_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_set_X_mA9EEADA68FB442D2F6CB8FA5AB9EA5252B9706B5_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_get_B_mEB3F293C6FF054633854E7B2D77BA9688F75C7B3_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_set_B_mF04E312761DDC01FEF04C57505EF4D194AD4F7A1_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_get_O_mDCFE76686C3014D753AC025F205C037131B5577D_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_set_O_mFC6E02E6D134E79157AF525D8B4EA5D8738C56DF_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_Execute_m9A81C0E882C04BBE211BD77B01982B90887359B8_AdjustorThunk (void);
extern void BroadcastDivJob_get_X_m0526B8C0790EA82FB9AD603824B9AA39BD1F8729_AdjustorThunk (void);
extern void BroadcastDivJob_set_X_mB288A0C09C0B871CE0A4BC6A21BB2677A4ADA69C_AdjustorThunk (void);
extern void BroadcastDivJob_get_B_m4D8E810B8C10E0440B176FD1F673E4131B814D2C_AdjustorThunk (void);
extern void BroadcastDivJob_set_B_m6F8C8A08608CCF5120797B8B829AA5525CEECE6B_AdjustorThunk (void);
extern void BroadcastDivJob_get_O_m6D86E3FBF5515C14B41B0A0FA200877CDC4481C3_AdjustorThunk (void);
extern void BroadcastDivJob_set_O_m7A36DD3A4E14F2DEF4D538397DCA6440B474CD5C_AdjustorThunk (void);
extern void BroadcastDivJob_Execute_m3120C9A5CAFA7A30C9E0F196DE4D8C189CB9C71E_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_get_X_mB19B1E24DC55758DD93EA97E03CB9C375969ADCF_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_set_X_m5F319B3C5371B9E58BB2781AC8CE0C5FD3AE64E3_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_get_B_mB2B5B5F57F269AF688549089E4D8E65F4D0F7FAB_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_set_B_m9DA46F4F3420FCA502759917FF1AD06E1348D2FF_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_get_O_mBC7145899540B3B59B3F92E71B686E92533E5256_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_set_O_m41CDC3253296D228EF4D9E70B4551485E95EC0B6_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_Execute_m75C7D352E453A5956BE221BFE6E61D9E2E3D1AB6_AdjustorThunk (void);
extern void BroadcastMinJob_get_X_m8F14C267F098E7B057F8F2242C82BE3E7F075CB8_AdjustorThunk (void);
extern void BroadcastMinJob_set_X_m2DD1C9518BA11ECD26BB7E8137B89A9258A9EEA3_AdjustorThunk (void);
extern void BroadcastMinJob_get_B_m1C7414699137AF2757DE983B800529F11A206A66_AdjustorThunk (void);
extern void BroadcastMinJob_set_B_m0165B16FBA886FF6963E86943E4CAC3630B88D57_AdjustorThunk (void);
extern void BroadcastMinJob_get_O_mB0F477D451AD7ED15F5C3598EBEB01349A562672_AdjustorThunk (void);
extern void BroadcastMinJob_set_O_mA87C3E074FA16B1027B19E3C004400F947849A14_AdjustorThunk (void);
extern void BroadcastMinJob_Execute_mFD53E52D3E85FB18C40529781A2A42F5D9D25259_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_get_X_mB03897C83EE83CE9DAB0D6FBC546DFBD5A55FFD1_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_set_X_m4F573C2879E534F213DA462244C77DD3D6D3C216_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_get_B_mA55376A561C77FB7BB134642E11D62C1CACA375F_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_set_B_m5706991ADF7747F44E2CE05DD15433034BCEC726_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_get_O_m96CDE9415299DEA5527CFC6C7D3936504EFCB02C_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_set_O_m99E542829357E2F576250B96B388958212E7A9C9_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_Execute_mE2DD3C89473DF9151039A3FA00E7309F5881EF59_AdjustorThunk (void);
extern void BroadcastMaxJob_get_X_mE112390CF4F39FC1F291210B6E3923153392AC07_AdjustorThunk (void);
extern void BroadcastMaxJob_set_X_m30D3D86AE41BC6349675C0D2C5AE481B849B4202_AdjustorThunk (void);
extern void BroadcastMaxJob_get_B_m19D290038F6E4C118C458071DA21FD922AF4906A_AdjustorThunk (void);
extern void BroadcastMaxJob_set_B_m709F67C37BBF63E70F8FF9A469B0F54534482474_AdjustorThunk (void);
extern void BroadcastMaxJob_get_O_m9DCE652D097AB49A43E3AB10641B40A383DA2151_AdjustorThunk (void);
extern void BroadcastMaxJob_set_O_m79EEBFF2F5E042E52B723AC02445060F6A513B8C_AdjustorThunk (void);
extern void BroadcastMaxJob_Execute_m8DC8118BD0928AFBF4EBF3681D140CDC4CCB1C49_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_get_X_mCF84D203329D36D2CBD681904B231DBFCB7E40B7_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_set_X_mB9687FA1B2DC82470D7FB3E761D3A9E0BA6229A5_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_get_B_m516FC85F7C33C3023A0673890785EFECFB580D58_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_set_B_m5592061D2944D7E9F6927654DE3651B678673DAD_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_get_O_mA3301C69058A236A87E70BDF974386205296FDF6_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_set_O_m1A3EC363436323D838E4E8541E4DA5D89DC32FCC_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_Execute_m1425FE1C8EACEFAF29381D5954E0A6289F42806B_AdjustorThunk (void);
extern void BroadcastPowJob_get_X_m4299B3817FC52B1771B13D4ED98535BCD0645FFD_AdjustorThunk (void);
extern void BroadcastPowJob_set_X_mC458A32F1F53DB21C706DDA994B704A4320ED929_AdjustorThunk (void);
extern void BroadcastPowJob_get_B_m616860938F9BEC9B98D00C2B103F6798A13472F8_AdjustorThunk (void);
extern void BroadcastPowJob_set_B_m25E7CBF030B6E4BE9C25EDF94CFEC151FD237876_AdjustorThunk (void);
extern void BroadcastPowJob_get_O_m44945A0C427DD8A33A2F4381757E2A297F8E91CB_AdjustorThunk (void);
extern void BroadcastPowJob_set_O_mB5A149B4786E4E63092739AF7C09039B523160FA_AdjustorThunk (void);
extern void BroadcastPowJob_Execute_m82DCAE15AB3ADABA699A15AC877C1874E537C6C1_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_get_X_mA829BD7C72C706E4F956DA0AFDA112C7CC0D6FC7_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_set_X_m7A907D8DFFB30E84C9C685A17C168E7EFA3352EE_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_get_S_m5339A676E60DBA6C0DD221DFD43D8D0096CD8CB5_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_set_S_mEE2C7334652DCCD68C6882FD6233C130CEF130EC_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_get_B_m72A956A5340C3DAA0DA3CA4A764B700244E65728_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_set_B_mC2CBA3703B8152885BA18779C880930DB0AAE959_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_get_O_m13514A94D5D7321746181E6B4EE21F0B09160D87_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_set_O_mB2BD6437DE1DFF4E25769F61056D517289D81877_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_Execute_m2FDD7613AAC8474DB673DA91D48441A16F0BE06E_AdjustorThunk (void);
extern void ReduceMeanJob_get_X_m51D97E42085FB008C04585967FD927013CFACEC0_AdjustorThunk (void);
extern void ReduceMeanJob_set_X_m8AC52D68FF0174342E5D56F68EC5115E62CF2D85_AdjustorThunk (void);
extern void ReduceMeanJob_get_O_m6D63FA6E2B745C864BFD3441BD826E32B8CF593E_AdjustorThunk (void);
extern void ReduceMeanJob_set_O_m1A40D330D18A9C54AA60B4E95B1169D5CD047340_AdjustorThunk (void);
extern void ReduceMeanJob_Execute_m06FAE7BCA810265000C05F3A3169F6AABDA03235_AdjustorThunk (void);
extern void ReduceSumJob_get_X_m6A08B6988CE91BE87E95ABF4F5F121808D97B07A_AdjustorThunk (void);
extern void ReduceSumJob_set_X_mB0CD3EF7A8914F3D940765BB1F9037B403246CF5_AdjustorThunk (void);
extern void ReduceSumJob_get_O_mDB45B9BD51EAD5298C8963A75151B4CA53CB6272_AdjustorThunk (void);
extern void ReduceSumJob_set_O_mE625F47397481E39519673AAC56F36E7CE9194F2_AdjustorThunk (void);
extern void ReduceSumJob_Execute_m74E8E0C0483D92C6F4D87DA862DB46A1A2E4E1AC_AdjustorThunk (void);
extern void ReduceMaxJob_get_X_m3DE1CC24E37367C21E5929E4F410BE37DC0B2401_AdjustorThunk (void);
extern void ReduceMaxJob_set_X_mE141E7120DC547BE4004308652DC2E835E2BD6AA_AdjustorThunk (void);
extern void ReduceMaxJob_get_O_m5FD264AD858D8C836BEEB4EF5A584B731614E5A9_AdjustorThunk (void);
extern void ReduceMaxJob_set_O_m390B17D26859FBCEAA87DD3B5D120967D0E547B8_AdjustorThunk (void);
extern void ReduceMaxJob_Execute_mE1CF797A3BE95745E8227A81CE87B6E491C0B47A_AdjustorThunk (void);
extern void TransposeJob_get_X_mDAD8E2AEA70EC0CB63D40296C74EA173E958CA92_AdjustorThunk (void);
extern void TransposeJob_set_X_mD4B5CB5FF6CD043B6C6DBEDE8E412E5B434DCC27_AdjustorThunk (void);
extern void TransposeJob_get_O_m98BC8A0626FF1F4892718F80D49C33CE97DA7898_AdjustorThunk (void);
extern void TransposeJob_set_O_m23E3E64AD214B621127A76BDA7A33349BD5B6F51_AdjustorThunk (void);
extern void TransposeJob_Execute_m866E5BF20FE7805ECA170773B98F0E749A0751A5_AdjustorThunk (void);
extern void MemFreeJob_Execute_mADCEFF2DB4C24909980D969765390987CD1A98E9_AdjustorThunk (void);
extern void TileJob_get_X_m8607B859F66CB277330C9813562856569DCE755E_AdjustorThunk (void);
extern void TileJob_set_X_mA5A69AE5895F84099E825453BBEAB4140F3E0066_AdjustorThunk (void);
extern void TileJob_get_O_mBCB776311E84A2CE15E2CD2B9D8A0CFF67DFC18C_AdjustorThunk (void);
extern void TileJob_set_O_m53BEC9C6A869FBB46DBE51F0F418497B2FA5FD56_AdjustorThunk (void);
extern void TileJob_Execute_m732B7A21E1562ED328FD532087DEAB6CC27A97C1_AdjustorThunk (void);
extern void GatherJob_get_X_m47E1B8F9D24248326C5187CA8C58DAA254075203_AdjustorThunk (void);
extern void GatherJob_set_X_m60B84789434A6E9A4E7C7EC9E90DE7356ED71CE9_AdjustorThunk (void);
extern void GatherJob_get_B_m30C768057FA0E66D117771ADBEF60CFE3F7FE799_AdjustorThunk (void);
extern void GatherJob_set_B_mC362DADDF299C2E8DA4704375DDB3C8BF6F37FD6_AdjustorThunk (void);
extern void GatherJob_get_O_m09FC304CC961BD1538655ECB1756DC274A91D9A4_AdjustorThunk (void);
extern void GatherJob_set_O_m31E6F0701BB4EFEA5372F3F29837F954E14D9850_AdjustorThunk (void);
extern void GatherJob_Execute_m026DEF192E3ECAA07F39FD90AFAAD4E4AB460196_AdjustorThunk (void);
extern void OneHotJob_get_X_m4EC184952989CBA6BD12E3FAF978272D1888281B_AdjustorThunk (void);
extern void OneHotJob_set_X_m31A0DFCFC2A1B2FC5D8B105C44F6BFA69A2D2879_AdjustorThunk (void);
extern void OneHotJob_get_O_mF19094B05828B84E86952138DE97FFFABF02CCD7_AdjustorThunk (void);
extern void OneHotJob_set_O_m7A725AD6304F5D7F3D0D33974BF4403596171306_AdjustorThunk (void);
extern void OneHotJob_Execute_m0C9803DD526147F9EAB2DBD9A2AAFAC3A1D37B29_AdjustorThunk (void);
extern void ParallelJobsContext__ctor_mEA527D17947603C9746F367A556E9985E25F588A_AdjustorThunk (void);
extern void ParallelJobsContext_AddJobDependencyToOutputFence_mE5EA0F4A4303246CDAD44F69F58037DE1F8777D7_AdjustorThunk (void);
extern void ParallelJobsContext_TrackJobReadDependencies_m219583685F53BED9D1839003E5C30603B6116431_AdjustorThunk (void);
extern void ParallelJobsContext_Dispose_mBA9DB35702E5A5ADA5711469FCA3454D044FBA7E_AdjustorThunk (void);
extern void Entry__ctor_m62B7545FB61CD780AF3F02D85797BEE5DEDC4502_AdjustorThunk (void);
extern void Entry__ctor_m49A1371632874C2899989C9A17CEB2DCDF027962_AdjustorThunk (void);
extern void Entry__ctor_m99C084E6E8D6005F9458BC70AE082358B894FB10_AdjustorThunk (void);
extern void Entry__ctor_m3298497CCE5943296FC81FA2FB92F2E6C913D657_AdjustorThunk (void);
extern void ComputeKernel_get_shader_m4F6DA0414CBF03894C8C58310A4CF1989E3A9EDC_AdjustorThunk (void);
extern void ComputeKernel__ctor_m5A375BA00D1E51ED9C45212012758212653F353E_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_mCA21BACFD13D5ADCC9B98753237A8B8A9B1F1122_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_m901E8388023E712D9AD800554656EF77C8F5C10D_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_mCFEB0E982CAD745E23F7290BB22A826CF8B0075B_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_m4F85E8C759DAB1E48108A29900F3FA26CD326ED9_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_m27EE4FC4C17D38B95BBA1418BD71DF83AC9112EB_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_m445651305CBCA0E484D2E5420FB984ABCE897F7B_AdjustorThunk (void);
extern void ComputeKernel_Dispatch_m0D1A205E955511500B5A6AA581EAE917511553BE_AdjustorThunk (void);
extern void KernelAssertInfo__ctor_mBE1CF4C9892759F5644A1BA692DE4D6FEB3131F7_AdjustorThunk (void);
extern void CompiledLayer_get_kernel_m315FD8120BA417A507C66CABABF320476B26B317_AdjustorThunk (void);
extern void ComputeFunc_get_threadGroupSize_m2F7E9003C06C3EC3BE1356303ADD0662A2C0FD40_AdjustorThunk (void);
extern void ComputeFunc_get_width_m025759585897ECD467C6E73686BCDA8A20BD11D5_AdjustorThunk (void);
extern void ComputeFunc_get_height_m174A3D762763192F67CF141CEB53D83D165933FD_AdjustorThunk (void);
extern void ComputeFunc_get_depth_m27A7A2A0E50FD3F450AD01CA9A5F85E8505BB8FA_AdjustorThunk (void);
extern void ComputeFunc__ctor_mB18BD7FE3A993830F933080E40209C5C9EF38302_AdjustorThunk (void);
extern void ComputeFunc__ctor_mE72583BEE682EFE80CBAEF2226B000C2704B66EC_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m5240B86B2C6218E7B4427AEC1A0DCC0B1D2F7E7F_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m75809DABD3AA12B2933EF33C614F40508786AC48_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m3D89C87997B98979986F8D4A163053C629454B54_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_mDC6003202B8C90927F51C564C14EA7D85ECEE7B6_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_m7683508ED3D2C10AA27E80A6B74A76984986E355_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_m63A49270BA6566DECB62C92542339251CDBE30C4_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_m52CCC193D62126AA027E316D3826474424B77DD3_AdjustorThunk (void);
extern void ComputeFunc_SetTexture_m14B449AED78E27755422090DF51AADA1AC08F1CC_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_m3BD6D194D7D2BD47623441CFAD23F2EE6315B237_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_mF129519DCEA1F6A773119ED7DC809DE5372D02AE_AdjustorThunk (void);
extern void TensorDecl_get_ShapeId_mDB726E90755857F4257DC21F865F3DA31D557B32_AdjustorThunk (void);
extern void TensorDecl_get_ShapeId8D_mBA6B0FE1E9C5A6BE07A714D3A874535F0D37A4B9_AdjustorThunk (void);
extern void TensorDecl_get_InfoId_m18E2715CD57BF6BEA5A49DE1FFFBAE242820C14F_AdjustorThunk (void);
extern void TensorDecl__ctor_m23281FFEF10C87E30BD42ACAD57EA74F2BCFF9B1_AdjustorThunk (void);
extern void SGEMMJob_Execute_m75C2F62F0911B708F35FA2C3249541F4AC74DDF0_AdjustorThunk (void);
extern void WorkerConfiguration__ctor_m79BFE73A37D292BB2DE12C3A1B04057802AE2061_AdjustorThunk (void);
extern void StringStringPair_Equals_mADB666454B85C8C9002E710886D2FD3FC2231C4B_AdjustorThunk (void);
extern void StringStringPair_Equals_mA3407F90921CFA8319225E79F406AF777D20D001_AdjustorThunk (void);
extern void StringStringPair_GetHashCode_m3BF40FD0CE3382CEBC43AC73E69FE25E4D00425F_AdjustorThunk (void);
extern void StringStringLongTriplet_GetHashCode_m93E6DE303C0A8B182B72DBEF932659B4366DB129_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_m9499B2C596B7E740682198A63C612B9424913CB6_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_mDAACEF0F4C92BA18F8B0FF10AB37BC831B778213_AdjustorThunk (void);
extern void Input_WithName_mAF604379319D2484EB7F05DD9CF167A4C5EF89B3_AdjustorThunk (void);
extern void TensorShape__ctor_m3D0A670E59D0D5F0D13739F5C777DED331A7DAB6_AdjustorThunk (void);
extern void TensorShape__ctor_m3DFA716CA6C672282490F4FC24DD6706497E8BCF_AdjustorThunk (void);
extern void TensorShape__ctor_m0318587E59DA4D042BBC786E5B6CF255C773FA57_AdjustorThunk (void);
extern void TensorShape__ctor_m2BE83E834C3C8F346F054C616ACBFE4FD460C56B_AdjustorThunk (void);
extern void TensorShape__ctor_m7AB7F54A3AAB95BB6BF985DD3F86B8B95B1C972D_AdjustorThunk (void);
extern void TensorShape__ctor_mE83490DDD04BB7D686DEBC4F4D501AE15662CB84_AdjustorThunk (void);
extern void TensorShape__ctor_m114922F0493BEF2C3312E8826CA7EF09DB73574F_AdjustorThunk (void);
extern void TensorShape_get_kernelSpatialDepth_m7A492E370CA4B33FD7BE911B48059F6BFD92FD99_AdjustorThunk (void);
extern void TensorShape_get_kernelHeight_m454029EE1AB966CB2B05A483BDB170FEFA5C9295_AdjustorThunk (void);
extern void TensorShape_get_kernelWidth_mDE244878076A48678D8E87B4EE8A3682C3150282_AdjustorThunk (void);
extern void TensorShape_get_kernelDepth_mCD57091DA16F7F2CB300B79A17F42C29FAAA9EF1_AdjustorThunk (void);
extern void TensorShape_get_kernelCount_m6D82535660C620EE6C50B3CF2AA1D38BE560C258_AdjustorThunk (void);
extern void TensorShape_get_flatHeight_mC3A176A1C1DC85CAB3A0C2888A25850AA946B4A6_AdjustorThunk (void);
extern void TensorShape_get_flatWidth_m6A09153008C5760A0C71F84A39292C2C108E9A14_AdjustorThunk (void);
extern void TensorShape_get_length_m42D935AC99F95A1C8DE6B04AEC4DB9C96EDE7608_AdjustorThunk (void);
extern void TensorShape_get_rank_mB2908CA2D3737CE8801AE64047AD7E5614280628_AdjustorThunk (void);
extern void TensorShape_get_dimensions_mA9A917D267B0D37A62A6B77F46B90AD5B04E7593_AdjustorThunk (void);
extern void TensorShape_Axis_m9540333825C44D41F1A057AFCD2248193A1EA1D7_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_m1D0BFA271F02E131FD139905B80656D42BA3D3A9_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_mAA604C4FF06F3D72657B051D7B7D58B77A752AEE_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_mE63163877AEAD43DCDCA2E84317F8BB910800C77_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_m3C995064F5BC06455A62FC808BB5469AEC905D39_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_m70EDA13E88E268E60B25EDF511312DEA32B26E67_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_mA5BA19932212AA2D1D5C9904DD2FC07E5905BC15_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m73472404CD6C74C879DE9C7E91923A98AE451020_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m39177A4CAE1063920E16790D0FB0C6309B28E132_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_mFCAD7CD99FB34F354BEBC9465A7E2A0665504F37_AdjustorThunk (void);
extern void TensorShape_Index_m98AEF981C385B47A0EB2AB39B0FE4ACE184C9882_AdjustorThunk (void);
extern void TensorShape_Index_mC3C2A1A08CCFB66E58F1A219B388EBE068531E16_AdjustorThunk (void);
extern void TensorShape_Index_mBC2A1602541E21AE2919F39C2424580F06A7402E_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_mC3491649D493646FF618B64977D7BDC823955468_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_mFF23BE549579C7F4CFEAA42A3BFF883D83DBBB9E_AdjustorThunk (void);
extern void TensorShape_Index_mDDF155D1995B2F241BE241EC68896BAE4CABBB02_AdjustorThunk (void);
extern void TensorShape_get_Item_m046FF56D8906EA7CD9D33486F778EBBCE949B33E_AdjustorThunk (void);
extern void TensorShape_set_Item_m3E04172058C8855DBEE7B00941B909FF48D824A9_AdjustorThunk (void);
extern void TensorShape_ToArray_m6F504949F53EAB92C210A4B52F7F53BE104E8637_AdjustorThunk (void);
extern void TensorShape_Squeeze_mAE65C663FC4D5F3CCB596C03DAA02F810C6A04C0_AdjustorThunk (void);
extern void TensorShape_Flatten_m071EF526832C3614F714121763E93C1951D73D79_AdjustorThunk (void);
extern void TensorShape_Equals_mC5DAE406415A5127744D06E2DF022BD7C062A58B_AdjustorThunk (void);
extern void TensorShape_GetHashCode_mDF0AA9693A07A46DBDA669338F14E1E137CF76CB_AdjustorThunk (void);
extern void TensorShape_ToString_mE6CA208028006BF3EE98D8D6E9F8F6B1E8534224_AdjustorThunk (void);
extern void TensorIterator__ctor_m155A791924246F4E780FA39C05FA2E78AE8DDFAC_AdjustorThunk (void);
extern void TensorIterator__ctor_m6319470FAD9BD9F476FBCF1BB5B62700D21A0CD9_AdjustorThunk (void);
extern void TensorIterator_AssignIndexAndInvalidateDimensions_m90A1DB1B133908ED5407CF228F7F00992ECE2881_AdjustorThunk (void);
extern void TensorIterator_Next_m3BBE90015F10C99DBD4317583E5C8696E45865B1_AdjustorThunk (void);
extern void TensorIterator_Advance_m8C0FFC9D952DA72EF2CB78C383A28839FA77F9A1_AdjustorThunk (void);
extern void TensorIterator_IsValid_m35EB0AC3E815407848AFD55F95B88BF0093CC7A5_AdjustorThunk (void);
extern void TensorIterator_IndexInReducedShape_mC61CB8FA82E20218BE6DB90DF92EE42F734DD260_AdjustorThunk (void);
extern void TensorIterator_IndexWithReplacedAxis_m5CC893C8253AC414C1BED1B7602E85EF4A01A50C_AdjustorThunk (void);
extern void TensorIterator_get_Item_m63E891C7B085A16BE0673E4A6AE6D26B08DAA97D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[532] = 
{
	{ 0x060000F3, ReadOnlyMemResource__ctor_mC48374D2B97C6CCE5FCE6A4D94CA8E399564F518_AdjustorThunk },
	{ 0x060000F4, ReadWriteMemResource__ctor_m0FB7EF4C938F6A8B0DE628FEFB01EDBD4E105178_AdjustorThunk },
	{ 0x06000109, MatrixMultiplyJob_Schedule_mDF462F5A4B0F8F30ABD8568AC9308ECA61B7828B_AdjustorThunk },
	{ 0x0600010A, MatrixMultiplyJob_Schedule_m271B6960533177BDECB107061756B18091240364_AdjustorThunk },
	{ 0x0600010B, MatrixMultiplyJob_Execute_mE9A39BD2F3DBB268ACE7B47FC07960C997C6E8F5_AdjustorThunk },
	{ 0x0600010F, MatrixMultiply3x2Job_Schedule_m1E7D0AC0E4CB5FEE06FD639F6C002F44F164B2A4_AdjustorThunk },
	{ 0x06000110, MatrixMultiply3x2Job_Schedule_mE2748076029917FCDE7F1BA873A7D7B79F6EF527_AdjustorThunk },
	{ 0x06000111, MatrixMultiply3x2Job_Execute_mCF658002C9D1791520A6A0EBE9C70D5E43C0AC45_AdjustorThunk },
	{ 0x06000115, MatrixMultiply4x4Job_Schedule_m0F182AE984F7BEEEE26D8C007CF61E11BB7A4752_AdjustorThunk },
	{ 0x06000116, MatrixMultiply4x4Job_Schedule_mFB52A63FB168E200B0C4EF21A94E14FD4E02C585_AdjustorThunk },
	{ 0x06000117, MatrixMultiply4x4Job_Execute_mAC6E0433C00BF5D232458ED6D03CFCEC77231BAD_AdjustorThunk },
	{ 0x0600011B, Dense3Job_Schedule_mE676A954E4DB439543C98CADF4E1F48CFFB8C9A2_AdjustorThunk },
	{ 0x0600011C, Dense3Job_Schedule_m89B0278B2678764E5013BE4E19DA3B7ABB89BA86_AdjustorThunk },
	{ 0x0600011D, Dense3Job_Execute_mE96E18CF546A186411103892E208FE283ABF4316_AdjustorThunk },
	{ 0x06000121, Im2ColSliceJob_get_X_m0DA0DE6B74CF53C156203158BF7186655E024A57_AdjustorThunk },
	{ 0x06000122, Im2ColSliceJob_set_X_mAC7FBC47B3ADA3D969D7F2C97A63B99A7C35AA31_AdjustorThunk },
	{ 0x06000123, Im2ColSliceJob_get_O_mF1F69C610396ACD0CBC19EE2C78DC293C96F068D_AdjustorThunk },
	{ 0x06000124, Im2ColSliceJob_set_O_mCB4D5FED83F8FDA0ED4E647BE0BCF4EC165B8D1C_AdjustorThunk },
	{ 0x06000125, Im2ColSliceJob_Execute_m04B26169EB6668195927B2B1C69140FDD29D0D62_AdjustorThunk },
	{ 0x06000126, MaxPool2DJob_get_X_m13BFCC0E1448D3E5CE1C5076BB2D267CEFB4D0B8_AdjustorThunk },
	{ 0x06000127, MaxPool2DJob_set_X_mD04E1B51CF7A4CF25F817FFBB710DA93F1C25BBC_AdjustorThunk },
	{ 0x06000128, MaxPool2DJob_get_O_m51DA9B5C004742B6A7940D365E7707800C4CF220_AdjustorThunk },
	{ 0x06000129, MaxPool2DJob_set_O_m81448FAC6E03CAB22C2ECEC5F4B9E14F46AF1EFB_AdjustorThunk },
	{ 0x0600012A, MaxPool2DJob_Execute_m580DD6093ED112BFF9BC46F8EB283D55DFC67AEC_AdjustorThunk },
	{ 0x0600012B, AvgPool2DJob_get_X_m7D5D4BAE24832FD25CC6C377C0FD7255468E5234_AdjustorThunk },
	{ 0x0600012C, AvgPool2DJob_set_X_m7FF63B501D5A464C01297BD715FB7AE0C0D6C2A7_AdjustorThunk },
	{ 0x0600012D, AvgPool2DJob_get_O_m75EEF8C136FDF2EDDAC46A6EB9C267AB078676D4_AdjustorThunk },
	{ 0x0600012E, AvgPool2DJob_set_O_m32F02174FBC96B340688B64B03CE4656AF635F0B_AdjustorThunk },
	{ 0x0600012F, AvgPool2DJob_Execute_mEC6AE2C040C7AAC14229E32B31359982DD70B93F_AdjustorThunk },
	{ 0x06000130, DepthwiseConv2DJob_get_X_mBF4239B770D064168073249FD9112039B1F1D6BE_AdjustorThunk },
	{ 0x06000131, DepthwiseConv2DJob_set_X_m6E851B6CFC9370731A9E93CEBF2BF6799EA7968D_AdjustorThunk },
	{ 0x06000132, DepthwiseConv2DJob_get_S_m2D7EC74801FAB774197D8EC3EEFF49B7A32F5743_AdjustorThunk },
	{ 0x06000133, DepthwiseConv2DJob_set_S_m321C9D5E2C150A3F719B5F999B62A3B3893866DE_AdjustorThunk },
	{ 0x06000134, DepthwiseConv2DJob_get_B_mB87620DE1FA161DEAB645B51F44E05D9CA5656FB_AdjustorThunk },
	{ 0x06000135, DepthwiseConv2DJob_set_B_m2E0091E0192610606B082F7E706F0A504A3CAA3E_AdjustorThunk },
	{ 0x06000136, DepthwiseConv2DJob_get_O_mB26F34762E2F9736A2527E33E44317E94155CBDE_AdjustorThunk },
	{ 0x06000137, DepthwiseConv2DJob_set_O_mC465D79D457E289C98F1C577DE42B62670346A02_AdjustorThunk },
	{ 0x06000138, DepthwiseConv2DJob_Execute_m9328EE2AAAD43988BF3BA856D3DE63DA04C40389_AdjustorThunk },
	{ 0x06000139, PReluJob_get_X_m34F01B3DB521A581A342FAEA875A36B2EBADA4EF_AdjustorThunk },
	{ 0x0600013A, PReluJob_set_X_m1B9F64B6352A265767276B7A50038D8D85DCCBAB_AdjustorThunk },
	{ 0x0600013B, PReluJob_get_B_m04428B6DC1C5112076B89B1F463786677AE614B8_AdjustorThunk },
	{ 0x0600013C, PReluJob_set_B_m9F8356B4C478CB59B08A1D12CD6C13D86F376C81_AdjustorThunk },
	{ 0x0600013D, PReluJob_get_O_mF018055161B7AFB0AA4ABACDBD392EE8BBA81E5B_AdjustorThunk },
	{ 0x0600013E, PReluJob_set_O_m57853415DFAFCA2534C1116D394618560CB217EC_AdjustorThunk },
	{ 0x0600013F, PReluJob_Execute_mA3B6D7DF53C9016910BCF82DB949362842210B8C_AdjustorThunk },
	{ 0x06000141, ReluJob_get_X_m341ADC6743E8C686684CD3CE43B4F46947A38D3D_AdjustorThunk },
	{ 0x06000142, ReluJob_set_X_m1CAF8DC890E936672F00287C42791956BB45A489_AdjustorThunk },
	{ 0x06000143, ReluJob_get_O_m16186E4D006DA6908A08C5221DC4B5DCC6CF20D5_AdjustorThunk },
	{ 0x06000144, ReluJob_set_O_mF4248072A1969FA7AE5B5EE49EA7F5C5FBF26501_AdjustorThunk },
	{ 0x06000145, ReluJob_Execute_mE54A0858EAB957EECA3C81A2BF48F141D2E9D73E_AdjustorThunk },
	{ 0x06000146, Relu6Job_get_X_m4094D938E1026E3690AF645F63ED07DAEEA288B6_AdjustorThunk },
	{ 0x06000147, Relu6Job_set_X_m5396292DF59E6F6A3F74669BAFCABE9F3D1515FD_AdjustorThunk },
	{ 0x06000148, Relu6Job_get_O_mF5F052BCEA690E896CF9E440AC1192E12EBFB8F2_AdjustorThunk },
	{ 0x06000149, Relu6Job_set_O_m6A2BC96CA09F1FE5C1D02FAE5446C22ACFE0D95D_AdjustorThunk },
	{ 0x0600014A, Relu6Job_Execute_m3FD3AD1BF129901194BA5D1748F5BDD462FE4129_AdjustorThunk },
	{ 0x0600014B, LeakyReluJob_get_X_mF11C5DA07744B1721A11AC5E16D5FA208FB8CC84_AdjustorThunk },
	{ 0x0600014C, LeakyReluJob_set_X_mBF95CFF1222750DF720A0EC742743F0FC527EE5F_AdjustorThunk },
	{ 0x0600014D, LeakyReluJob_get_O_m3438499EF5527F24DBFA386602BD3C8954AB57ED_AdjustorThunk },
	{ 0x0600014E, LeakyReluJob_set_O_m06851D2102CC6F974D00F5819EF0F3CFEBCAA5A0_AdjustorThunk },
	{ 0x0600014F, LeakyReluJob_get_alpha_mD1806EEEF6B6E608E69A975C0594C12784B685CA_AdjustorThunk },
	{ 0x06000150, LeakyReluJob_set_alpha_m50775D0539A9D4DE60D14DCF0040D424929EDC3D_AdjustorThunk },
	{ 0x06000151, LeakyReluJob_Execute_m1DD708C8C0282DD65E30665A7B003CD9D9D25CB0_AdjustorThunk },
	{ 0x06000152, TanhJob_get_X_mA538835782EE99ACE911216219A64333CEB0354D_AdjustorThunk },
	{ 0x06000153, TanhJob_set_X_m9D5B8744250E776D498D4BFFA751048A23497D6E_AdjustorThunk },
	{ 0x06000154, TanhJob_get_O_m893076F87428F8E917BD25DD78B903A89B503E49_AdjustorThunk },
	{ 0x06000155, TanhJob_set_O_mE658A12C2EAD4534BCCCF3E82F84A3D1C73F3AD1_AdjustorThunk },
	{ 0x06000156, TanhJob_Execute_mC148942BA69193BBAB1FD364D9DB4D3FA552DFF7_AdjustorThunk },
	{ 0x06000157, SoftplusJob_get_X_m715A941DD9DEABA6C5F8C94AD047C98E4DAA7C83_AdjustorThunk },
	{ 0x06000158, SoftplusJob_set_X_m75FED1F7BC6D28913A5E614AFB57E60466E3879C_AdjustorThunk },
	{ 0x06000159, SoftplusJob_get_O_m4B5446F98ADD7AAC88541D21C9B71DCC5E493283_AdjustorThunk },
	{ 0x0600015A, SoftplusJob_set_O_m88EF87B9BD848B99EE9B528EFEDCED790C4FBE1E_AdjustorThunk },
	{ 0x0600015B, SoftplusJob_Execute_m20162B8B288264D6531E07C8289CE3641EFA97B3_AdjustorThunk },
	{ 0x0600015C, SigmoidJob_get_X_mD23EF0BD310E794FA1B3674C9C6DAB92F850A0F1_AdjustorThunk },
	{ 0x0600015D, SigmoidJob_set_X_m6B330B1903A4B1C98DD8C5DD73B5311ADD0B7EB5_AdjustorThunk },
	{ 0x0600015E, SigmoidJob_get_O_mDF22771B505E47B3AD956FC75AD03C49BE0485D9_AdjustorThunk },
	{ 0x0600015F, SigmoidJob_set_O_mE0D4D945ACC6A1E4A334F2ADB70D3CB983F457C4_AdjustorThunk },
	{ 0x06000160, SigmoidJob_Execute_m3181646D37A37C23036A748398091EE987752D26_AdjustorThunk },
	{ 0x06000161, EluJob_get_X_mE8F14D40E42272F3B605EBF8672D448C5760C41D_AdjustorThunk },
	{ 0x06000162, EluJob_set_X_m1E37FA3AFF1CAFC8A27D56676EA67D3B3AE477F9_AdjustorThunk },
	{ 0x06000163, EluJob_get_O_m34B77E09C7F3C65D71DA150B46CC6CF58AF96BA6_AdjustorThunk },
	{ 0x06000164, EluJob_set_O_m7A2453DED1B316C83191E58A299AC877AA710877_AdjustorThunk },
	{ 0x06000165, EluJob_Execute_m542D1F8E0526448F088A239690D716358208AA08_AdjustorThunk },
	{ 0x06000166, SeluJob_get_X_mEA3AFADD1A7347A964580746D809A30E1EF95A6B_AdjustorThunk },
	{ 0x06000167, SeluJob_set_X_m327E3F13CC5CAAFB2B45108592C888F999F941E6_AdjustorThunk },
	{ 0x06000168, SeluJob_get_O_m53FF8241EB27D3738757245D069DF2C8318FE662_AdjustorThunk },
	{ 0x06000169, SeluJob_set_O_m85F0B048568564755C051E8E20A11DBF84B83D8A_AdjustorThunk },
	{ 0x0600016A, SeluJob_Execute_m059F68D5649F08D16CCBB3D15E5D3B850BB38EE5_AdjustorThunk },
	{ 0x0600016B, SwishJob_get_X_m983C75EE5CA53EF53F7DDA648DB793E5CB732335_AdjustorThunk },
	{ 0x0600016C, SwishJob_set_X_m8952CCCA3B37B206463073C97D2E30FA91D59967_AdjustorThunk },
	{ 0x0600016D, SwishJob_get_O_m365876877089126183CB9321FE113E19B109A82D_AdjustorThunk },
	{ 0x0600016E, SwishJob_set_O_m2DC6C9614FE1DE635618E980A342E494E45B0969_AdjustorThunk },
	{ 0x0600016F, SwishJob_Execute_m249E8553A89A15C55A9DCC2734224990340AFB86_AdjustorThunk },
	{ 0x06000170, ExpBiasReduceJob_get_X_m35C5FB8911BB8FC51EB464ABC2C3BEA82C4DA694_AdjustorThunk },
	{ 0x06000171, ExpBiasReduceJob_set_X_m7D8E4223E1FDF14DC86F8D5A4FFCD5CCBE55918D_AdjustorThunk },
	{ 0x06000172, ExpBiasReduceJob_get_B_m78499E47C15E6A59EB01A9878239A31DF122742B_AdjustorThunk },
	{ 0x06000173, ExpBiasReduceJob_set_B_m0CA84CEAE7F5BB17D28F9CD837B4BE7BE44B00E8_AdjustorThunk },
	{ 0x06000174, ExpBiasReduceJob_get_O_mA7F7688ABEA6C97CA5D6DFF6C07ED5FDB5E3A848_AdjustorThunk },
	{ 0x06000175, ExpBiasReduceJob_set_O_m111B670F154B61572BC7DE4E3002341E617EFB9F_AdjustorThunk },
	{ 0x06000176, ExpBiasReduceJob_Execute_m9AF1674E3CE059153AF2A668BB27E407300C2686_AdjustorThunk },
	{ 0x06000177, SoftmaxEndJob_get_X_m7E57BE1757F9FC8C7AA3B7E74EE29BAC41AE898B_AdjustorThunk },
	{ 0x06000178, SoftmaxEndJob_set_X_m15352FF2E769078F02EC5960D8D931ECAD97B855_AdjustorThunk },
	{ 0x06000179, SoftmaxEndJob_get_S_mD2CA8ACD6AAAC756C294D992083A9750EF341A03_AdjustorThunk },
	{ 0x0600017A, SoftmaxEndJob_set_S_m6042D67E59D30CF1FA9E47CA31F6E1D58C74C4C6_AdjustorThunk },
	{ 0x0600017B, SoftmaxEndJob_get_B_mD5FA9405F2D50B8E231BB79DBAE28F46A21FDCF6_AdjustorThunk },
	{ 0x0600017C, SoftmaxEndJob_set_B_mB5F03CB2B8BC08A53D6D4E8CCF72309D97819B10_AdjustorThunk },
	{ 0x0600017D, SoftmaxEndJob_get_O_mB11056F8DE55CBF2B13A3BB4C8352116A95CF3A5_AdjustorThunk },
	{ 0x0600017E, SoftmaxEndJob_set_O_m7E3583C5D9F7A3F27E062102241A32760434FBB5_AdjustorThunk },
	{ 0x0600017F, SoftmaxEndJob_Execute_mD3F031975B5F57B584C417CEBAE2DF1DDDB7A73E_AdjustorThunk },
	{ 0x06000180, LogSoftmaxEndJob_get_X_m27E5182DCDAE61C1FDD7A3D14AB0951529198514_AdjustorThunk },
	{ 0x06000181, LogSoftmaxEndJob_set_X_mEB4B2745DD328ADDC025B9E49ABEA2DB7C1BB63E_AdjustorThunk },
	{ 0x06000182, LogSoftmaxEndJob_get_S_m6EAACC3847C2CD0C754E4B2B4360A78FA9B05F20_AdjustorThunk },
	{ 0x06000183, LogSoftmaxEndJob_set_S_m70EDC74A9810EEDE2F6D1EF0CF927A51ABD4568A_AdjustorThunk },
	{ 0x06000184, LogSoftmaxEndJob_get_B_m8EA13B276C5C014F7E9A5CAF27B7BE035A3AFA7F_AdjustorThunk },
	{ 0x06000185, LogSoftmaxEndJob_set_B_m12505EBB14D292216929E61604F69EBA1912B643_AdjustorThunk },
	{ 0x06000186, LogSoftmaxEndJob_get_O_m6A418FE1EBBB9B4A453BAF6D866A65E9AF95C12D_AdjustorThunk },
	{ 0x06000187, LogSoftmaxEndJob_set_O_m5808D1A55B242CE8D5BCE16A9BFAC98FF370D0FC_AdjustorThunk },
	{ 0x06000188, LogSoftmaxEndJob_Execute_m0C8E325A86ECF16B27434846FFF68812148AE319_AdjustorThunk },
	{ 0x06000189, AbsJob_get_X_m334D68A2C8EAECA9D965710F5AC97BA6D5CAE454_AdjustorThunk },
	{ 0x0600018A, AbsJob_set_X_m93EA90E9B760015D9AA7AD89D879DAFD5DE0FB2B_AdjustorThunk },
	{ 0x0600018B, AbsJob_get_O_mEACA538B8D68DD0BEB8665BF6CB40339F07171DA_AdjustorThunk },
	{ 0x0600018C, AbsJob_set_O_m392E2DB760B23F0956905F5AB3861B4118D7F421_AdjustorThunk },
	{ 0x0600018D, AbsJob_Execute_mC9E702070CFB124AB2BA751C50D81D93C22C4938_AdjustorThunk },
	{ 0x0600018E, NegJob_get_X_mD2FD8626D4C7AFCE4E8E1C3D4B24283CD93F34F1_AdjustorThunk },
	{ 0x0600018F, NegJob_set_X_m17391FA0EF7389709FF7882A8179E5F37DA028B2_AdjustorThunk },
	{ 0x06000190, NegJob_get_O_mFF0BD0C196D2D39438780677AF102852E55F1F2C_AdjustorThunk },
	{ 0x06000191, NegJob_set_O_m3C04B46A229B15F83F05F9B2BC1CFBEAB277BC0C_AdjustorThunk },
	{ 0x06000192, NegJob_Execute_mBCF6937BAE0E450FB75C536CD6C2387D4F4B11A8_AdjustorThunk },
	{ 0x06000193, CeilJob_get_X_m3DA595A266405F102D6DA9711673352C74B17326_AdjustorThunk },
	{ 0x06000194, CeilJob_set_X_mFEAF467CE49BD29853E6A6614196880B5531D391_AdjustorThunk },
	{ 0x06000195, CeilJob_get_O_mE069A8E97E1F9C01F8F33B9DE61593868E689B27_AdjustorThunk },
	{ 0x06000196, CeilJob_set_O_mE0C76AEB46A1789E6BE5FC82771DCEA76280DD88_AdjustorThunk },
	{ 0x06000197, CeilJob_Execute_mA9B7C6396A148E2199719E8C2F575FD163D473D9_AdjustorThunk },
	{ 0x06000198, ClipJob_get_X_mDBF96CE5EABC07C3C4631D23DE79D7A3F6DFDAE4_AdjustorThunk },
	{ 0x06000199, ClipJob_set_X_m0E918558BCA0C60AD427A2C990C3CB7B6F896593_AdjustorThunk },
	{ 0x0600019A, ClipJob_get_O_m8FF52A8C8218874E8A2E129465EB37CE2FE39897_AdjustorThunk },
	{ 0x0600019B, ClipJob_set_O_m95CCA1ADB860945E6E3E7EF46F5850F8F1EA2AC2_AdjustorThunk },
	{ 0x0600019C, ClipJob_Execute_m9D2B7772DEB5B8209BCE795F0FD0C02BF8C02A24_AdjustorThunk },
	{ 0x0600019D, FloorJob_get_X_mA9D58F1AA5BDEE15DE265D82B2AAA089CA5EC67D_AdjustorThunk },
	{ 0x0600019E, FloorJob_set_X_m9120E16DB2EFC2CD0DDF4E0676688F5E8137AEE8_AdjustorThunk },
	{ 0x0600019F, FloorJob_get_O_m1D01FA2D48FFB7E235297080D4C26CD5273C063F_AdjustorThunk },
	{ 0x060001A0, FloorJob_set_O_m362AEA5EAD1C05CE7E25382B1DE70905C42EEBF5_AdjustorThunk },
	{ 0x060001A1, FloorJob_Execute_m386E9A00BF9424C50FFBD0B3F7FFF462E6CB8729_AdjustorThunk },
	{ 0x060001A2, RoundJob_get_X_m0B61ACEA49F7A711DFD3453E4BB5FBFCB954A1AB_AdjustorThunk },
	{ 0x060001A3, RoundJob_set_X_mDCE59C717F4004CB6DF8B8533E63035A6436FF2B_AdjustorThunk },
	{ 0x060001A4, RoundJob_get_O_m9761A243013B4EF4C4ACC2C574E8DCFE52EF2075_AdjustorThunk },
	{ 0x060001A5, RoundJob_set_O_mD2CD308CB6C731C4FBB683C19549E301986DCCB1_AdjustorThunk },
	{ 0x060001A6, RoundJob_Execute_m7CA8A8C7A9BF695F1F57364609A0F3DB94BB5F69_AdjustorThunk },
	{ 0x060001A7, ReciprocalJob_get_X_m96304AFBDB5C258D3C5815382D7FC6C92CF5E0A7_AdjustorThunk },
	{ 0x060001A8, ReciprocalJob_set_X_mFA3062C9E49F3100AE9525C9BB95AAFBE9EFB2F9_AdjustorThunk },
	{ 0x060001A9, ReciprocalJob_get_O_m4358C4FB0ECC572CDE77C3FA0F21C0E868FDF094_AdjustorThunk },
	{ 0x060001AA, ReciprocalJob_set_O_mABDF756762465842DEBC7FE984B066D7A0AA8FD5_AdjustorThunk },
	{ 0x060001AB, ReciprocalJob_Execute_mE52D2BB420CB95D632F0B6C44CD09544903FEAA0_AdjustorThunk },
	{ 0x060001AC, PowJob_get_X_mBE33CA79F448DEF71CCE2020E12D7DA69DBABBB6_AdjustorThunk },
	{ 0x060001AD, PowJob_set_X_m4152D1652AD55EE839C4D125B59F025D0A7F8FE8_AdjustorThunk },
	{ 0x060001AE, PowJob_get_O_m7FD64F414F03A51E1F40B85656A7806D7D6178EC_AdjustorThunk },
	{ 0x060001AF, PowJob_set_O_mA67A0A36783EEDA1C6E5943E85F8DDD768D6C148_AdjustorThunk },
	{ 0x060001B0, PowJob_Execute_m94044E5A8F0B024BA6B81895549F4EE3D0EFD7E2_AdjustorThunk },
	{ 0x060001B1, ExpJob_get_X_mE0C1184C832C24AF291F18DF7FA19A216A5F0E83_AdjustorThunk },
	{ 0x060001B2, ExpJob_set_X_m3248EEEBC03C9C4B08666EAE30F68997FE71A579_AdjustorThunk },
	{ 0x060001B3, ExpJob_get_O_m9D050460BF8A5F5601D79F3EDD9533C1B743C0AF_AdjustorThunk },
	{ 0x060001B4, ExpJob_set_O_mD703D98B4D46F116EE5D6865F6E3BD9EA5CFD30D_AdjustorThunk },
	{ 0x060001B5, ExpJob_Execute_mF0D94BDC093DEA6364F44569702A47D2A98FFE15_AdjustorThunk },
	{ 0x060001B6, LogJob_get_X_mDDC56BA2692F31E26238020B2E89BD2A5499A479_AdjustorThunk },
	{ 0x060001B7, LogJob_set_X_m9DFCA8400C37264E0C0BE84014B183EBE02FAD4D_AdjustorThunk },
	{ 0x060001B8, LogJob_get_O_m364859EAD02E6D688AD275E6A576AF46D736B40D_AdjustorThunk },
	{ 0x060001B9, LogJob_set_O_m4D7E3509573C657E8C4B99858F9BD50A7DB43A0F_AdjustorThunk },
	{ 0x060001BA, LogJob_Execute_mD97D7DF75DF44CF7E8D15E60C3A4F2CAD96EA9E6_AdjustorThunk },
	{ 0x060001BB, SqrtJob_get_X_mC65AE9821E066F6695702E79C76AE8506E19479E_AdjustorThunk },
	{ 0x060001BC, SqrtJob_set_X_mE126B9ADEC0F0FA9AA1FA14D0D52666408A8B120_AdjustorThunk },
	{ 0x060001BD, SqrtJob_get_O_m0D28FD4C89B2D017B251A119BA20704977492A2A_AdjustorThunk },
	{ 0x060001BE, SqrtJob_set_O_m3F5898EDEC2E67E9A7F68FB3A3A785A465DAB1A9_AdjustorThunk },
	{ 0x060001BF, SqrtJob_Execute_m2B47F9B88C83FF8254BE076C403DA830DB4C5090_AdjustorThunk },
	{ 0x060001C0, AcosJob_get_X_m66DCFFC34AF0CE681F1BF9CE2A56DE10161EB933_AdjustorThunk },
	{ 0x060001C1, AcosJob_set_X_mCB21343095AE32C501CB596DD8EE0355832B45AC_AdjustorThunk },
	{ 0x060001C2, AcosJob_get_O_mEFF967B98705C7FCBEB08B29D1CD442B2A17559E_AdjustorThunk },
	{ 0x060001C3, AcosJob_set_O_m9CCB412F00913862FF72171209633F78689FD567_AdjustorThunk },
	{ 0x060001C4, AcosJob_Execute_mDA4C175B7716073508AC1722C1CC9213CAEC8D94_AdjustorThunk },
	{ 0x060001C5, AcoshJob_get_X_mDCA4D84B84743BA6BCF5CE6911104AA32F8AF775_AdjustorThunk },
	{ 0x060001C6, AcoshJob_set_X_m352949D3F8040241039B5D0EDCD18914745AE429_AdjustorThunk },
	{ 0x060001C7, AcoshJob_get_O_mAF2C45A4E0DDE4D96AEBCD42BB75230109C81DDB_AdjustorThunk },
	{ 0x060001C8, AcoshJob_set_O_m7AD55CFD0A48B9711B28CD1059B42067E4281FF9_AdjustorThunk },
	{ 0x060001C9, AcoshJob_Execute_mFAC3096AE97DDBA238B3F599F7E0D33CB581F520_AdjustorThunk },
	{ 0x060001CA, AsinJob_get_X_mCF04557A9A5F880F639E66878CCF34FC1CF3CB32_AdjustorThunk },
	{ 0x060001CB, AsinJob_set_X_m1D45DB3FE9378D209AA6B5ED5B6FAF8491C96C69_AdjustorThunk },
	{ 0x060001CC, AsinJob_get_O_mA8A321C2823891C64B8B9D911CD33E057178DB74_AdjustorThunk },
	{ 0x060001CD, AsinJob_set_O_m60CCEDBEE3724A17F75A59A7B352299EA92ECBC4_AdjustorThunk },
	{ 0x060001CE, AsinJob_Execute_m31CD035468B0BBA44E0D47B0D79A227BAF0B2195_AdjustorThunk },
	{ 0x060001CF, AsinhJob_get_X_m446F0300152A709722053F9406AE0648F4D8181E_AdjustorThunk },
	{ 0x060001D0, AsinhJob_set_X_mFACC3A9063BC15B6FD46F6287819AF7960246E59_AdjustorThunk },
	{ 0x060001D1, AsinhJob_get_O_m78B6DF783426B9345D2FE740C83C4F484334B3E1_AdjustorThunk },
	{ 0x060001D2, AsinhJob_set_O_mEF7AF6B218E9D0AAAF53153D85027281A5470CF0_AdjustorThunk },
	{ 0x060001D3, AsinhJob_Execute_mE09A2A08C82704B6D6E30876E672219F1EAFB5E9_AdjustorThunk },
	{ 0x060001D4, AtanJob_get_X_m569E122902DAB31F47EE0E71EFE79DB2C43A103B_AdjustorThunk },
	{ 0x060001D5, AtanJob_set_X_mC19DFFA02AC14D40AD631179CE8E67CD185FFF42_AdjustorThunk },
	{ 0x060001D6, AtanJob_get_O_m34E06A558A26C2678048821448F85B1D857FAC60_AdjustorThunk },
	{ 0x060001D7, AtanJob_set_O_m8387D0F47DC26B0479B222F99B2E47F9EF23319D_AdjustorThunk },
	{ 0x060001D8, AtanJob_Execute_mA8A5B0E790174C428C987DB2819E5D4D00350136_AdjustorThunk },
	{ 0x060001D9, AtanhJob_get_X_mCEDBDDB5EA369A65C1E5AC0E8DC3F6711962CDDD_AdjustorThunk },
	{ 0x060001DA, AtanhJob_set_X_m8A990E803D95DF351B0EBA31873EBA260E717313_AdjustorThunk },
	{ 0x060001DB, AtanhJob_get_O_mD7E5A6C0D8D80EAAC77F7617CDAD4891F61BCE64_AdjustorThunk },
	{ 0x060001DC, AtanhJob_set_O_m90CD06BA94D9AB200BBB532332439FF44A2545F2_AdjustorThunk },
	{ 0x060001DD, AtanhJob_Execute_m3AF220A4BBF3D22E88444F1E8E9B1D6171965534_AdjustorThunk },
	{ 0x060001DE, CosJob_get_X_mBFC90A36BDE341151B629D5152B4CF225C3855A0_AdjustorThunk },
	{ 0x060001DF, CosJob_set_X_mF469CD1C84E5C0AA20D2DA154DE614596C3F1EEF_AdjustorThunk },
	{ 0x060001E0, CosJob_get_O_m916F32E35CF0271638569291DBDFA9D1D45C8B17_AdjustorThunk },
	{ 0x060001E1, CosJob_set_O_mA098E7C682CEA97FD2BEFC10CD99DC9679709294_AdjustorThunk },
	{ 0x060001E2, CosJob_Execute_m2F08411327FE7724D3BE5199B31DE47AF1C7F0DA_AdjustorThunk },
	{ 0x060001E3, CoshJob_get_X_mF12DB1A1B16922AA3B3F062B18B922DCC93517C2_AdjustorThunk },
	{ 0x060001E4, CoshJob_set_X_m4F3F31B1601412397557F04081EC37714E0034DB_AdjustorThunk },
	{ 0x060001E5, CoshJob_get_O_m36D90B0DF04A6325BB2554863FF0659A46F009B5_AdjustorThunk },
	{ 0x060001E6, CoshJob_set_O_m060A830FF6B7EAE86F0AA8F71996C380A308574A_AdjustorThunk },
	{ 0x060001E7, CoshJob_Execute_m02E60B2C5493C00CEBB37296D09D122F90CD8EAB_AdjustorThunk },
	{ 0x060001E8, SinJob_get_X_mB7893AAC3A1A0134D7E496408377346B4D78D17B_AdjustorThunk },
	{ 0x060001E9, SinJob_set_X_mA9FD9F54D72F90D8FA2AB5824CBF04A57D6A8983_AdjustorThunk },
	{ 0x060001EA, SinJob_get_O_m8F23A4DA3473322D82A71E4AE941FEFDB7C3E412_AdjustorThunk },
	{ 0x060001EB, SinJob_set_O_mCDDD97F88466357636FEF925B354D2C0D88BCB77_AdjustorThunk },
	{ 0x060001EC, SinJob_Execute_m71964BC65C5920C5FA97EC0108558DC528B6C744_AdjustorThunk },
	{ 0x060001ED, SinhJob_get_X_mF75DC100E0A0F57DCE4A8FB4E8BFB95767B7D251_AdjustorThunk },
	{ 0x060001EE, SinhJob_set_X_m65E3EE42078289D65833ADDC705582ECE43A254F_AdjustorThunk },
	{ 0x060001EF, SinhJob_get_O_mADEE98AF883D70C72ABA10BA1F08E450D314A953_AdjustorThunk },
	{ 0x060001F0, SinhJob_set_O_mD5F969DA6086CF5B483AF05F99BC2CEC9450E2BF_AdjustorThunk },
	{ 0x060001F1, SinhJob_Execute_m2CECED4DC6D99D70E65730093F407CD2710C7F50_AdjustorThunk },
	{ 0x060001F2, TanJob_get_X_m08EAB669B71BF45E36F36D6F3AA495B2FDA5928C_AdjustorThunk },
	{ 0x060001F3, TanJob_set_X_mE792C3DC72801925F297475E09E42DA864DCAAD3_AdjustorThunk },
	{ 0x060001F4, TanJob_get_O_m9834484B10830585CF5F44A3289D7FE39F3C94F3_AdjustorThunk },
	{ 0x060001F5, TanJob_set_O_m276CE9DFAAC2CB7E967F47AA4FA21F71545CE2AE_AdjustorThunk },
	{ 0x060001F6, TanJob_Execute_mBDA81B0D2C0F6ECF9C6A1A1C8B00CBD7C019C018_AdjustorThunk },
	{ 0x060001F7, ElementwiseAddJob_get_X_mA3ED14F38734359A8014F8058C951FBE6B4B15D1_AdjustorThunk },
	{ 0x060001F8, ElementwiseAddJob_set_X_m25F7F20743523F8EFD968BA649A53BD43813DBDA_AdjustorThunk },
	{ 0x060001F9, ElementwiseAddJob_get_B_mAAAED3F2E340683A24E4AB7377BA20423C5C509B_AdjustorThunk },
	{ 0x060001FA, ElementwiseAddJob_set_B_mD43C6A86C90E394B8C835520C84840DC4FCACE1E_AdjustorThunk },
	{ 0x060001FB, ElementwiseAddJob_get_O_mBD67B0E5EAAEE85C8592961668EDBC7DCE0A248C_AdjustorThunk },
	{ 0x060001FC, ElementwiseAddJob_set_O_mD99F855B00311908474D5754D184C10B0A67E02F_AdjustorThunk },
	{ 0x060001FD, ElementwiseAddJob_Execute_m39D1A15119B46A924F0AEE95E53525365D0128DC_AdjustorThunk },
	{ 0x060001FE, ElementwiseMulJob_get_X_m38EB29960584BD596AC4E45F862113FAB4E90655_AdjustorThunk },
	{ 0x060001FF, ElementwiseMulJob_set_X_m93715CF41E1E74BF4B4F76CA0D984856733553D0_AdjustorThunk },
	{ 0x06000200, ElementwiseMulJob_get_B_m5A53FE0C65B23D9567466B04BF3674F1B0109804_AdjustorThunk },
	{ 0x06000201, ElementwiseMulJob_set_B_m18116CEC2FC8E19A4D8D164020D81C8753C608A9_AdjustorThunk },
	{ 0x06000202, ElementwiseMulJob_get_O_m170D33EC5893BFB584D37982B03DFDDA8DBA9D32_AdjustorThunk },
	{ 0x06000203, ElementwiseMulJob_set_O_mFF6F6B70C0F54D8DABC151C745C3D8B181E12624_AdjustorThunk },
	{ 0x06000204, ElementwiseMulJob_Execute_mE878B9908E76DCEF78F2F4B12B8D378EA7CD5E84_AdjustorThunk },
	{ 0x06000205, ElementwiseDivJob_get_X_mD1A5351B0C68B0D522D35A84B17C1893F14B80C6_AdjustorThunk },
	{ 0x06000206, ElementwiseDivJob_set_X_mC3853D87F76D9F0F0A2B1ED46170CDCB5DC4FE0C_AdjustorThunk },
	{ 0x06000207, ElementwiseDivJob_get_B_m73740B6B35D1A44C90DE3EA407BC7A75CF78A3BA_AdjustorThunk },
	{ 0x06000208, ElementwiseDivJob_set_B_mF51F080B0BCE1BD0AB6BDE2F88CBFBA0B4100EAC_AdjustorThunk },
	{ 0x06000209, ElementwiseDivJob_get_O_m47BDA0819BBADE1890A2CD034F340F0DE4B71A55_AdjustorThunk },
	{ 0x0600020A, ElementwiseDivJob_set_O_mF83FA23A95CA00CBC56F56605285FD39978F4E65_AdjustorThunk },
	{ 0x0600020B, ElementwiseDivJob_Execute_mE84A527765E4E129DB9914B9155968FD755625A5_AdjustorThunk },
	{ 0x0600020C, ElementwisePowJob_get_X_m07FE079B4926C4F271D4408E88AB519819AC516A_AdjustorThunk },
	{ 0x0600020D, ElementwisePowJob_set_X_m87E634406CB8AC2A3476216FA726C063B82203F8_AdjustorThunk },
	{ 0x0600020E, ElementwisePowJob_get_B_m644F0686960DDAEC772ADFDBD66218E466CC0206_AdjustorThunk },
	{ 0x0600020F, ElementwisePowJob_set_B_mEAAD5540D4827F4B1AD14F527D24BBC9DB0C361B_AdjustorThunk },
	{ 0x06000210, ElementwisePowJob_get_O_mAC08853A9B5D87EEE51CC55758ED940016940065_AdjustorThunk },
	{ 0x06000211, ElementwisePowJob_set_O_mB258341F8190FD68345D6ADE974BAC6660E48913_AdjustorThunk },
	{ 0x06000212, ElementwisePowJob_Execute_mF1CC6859CE7AA501A1F809BCC0100BB6B71DB2EA_AdjustorThunk },
	{ 0x06000213, ElementwiseMaxJob_get_X_mF57E05C251E90F97E40A3AE9871698D92708CC91_AdjustorThunk },
	{ 0x06000214, ElementwiseMaxJob_set_X_mF3AC913E2F1158D0D59521353680D5C712103FC5_AdjustorThunk },
	{ 0x06000215, ElementwiseMaxJob_get_B_m763E07BD9C15090160808A0FB6BDBF9F296DE3F4_AdjustorThunk },
	{ 0x06000216, ElementwiseMaxJob_set_B_m58E7268BF82B4F65467312FAAF49F99C5A53C511_AdjustorThunk },
	{ 0x06000217, ElementwiseMaxJob_get_O_m2DF9A02058483619E5A0C7C289FF18FC275EFD4B_AdjustorThunk },
	{ 0x06000218, ElementwiseMaxJob_set_O_mC7B8496B4F23BDF5CE6DF34C4BFB138F7CE4483D_AdjustorThunk },
	{ 0x06000219, ElementwiseMaxJob_Execute_m74F7F0E6ECFAC9AB44E6C52174D4D3045F579457_AdjustorThunk },
	{ 0x0600021A, ElementwiseMinJob_get_X_m131A79A6F386A12D3BE4C6202C1533843263FE75_AdjustorThunk },
	{ 0x0600021B, ElementwiseMinJob_set_X_mADAB55E0E82AB17872DFB86EE4D7B481512600FB_AdjustorThunk },
	{ 0x0600021C, ElementwiseMinJob_get_B_mDF4881B23237B3276F21DC7D02313504EEBE3FDA_AdjustorThunk },
	{ 0x0600021D, ElementwiseMinJob_set_B_mDCC01207483AC5C42F83EDF6A5041BC21DB98863_AdjustorThunk },
	{ 0x0600021E, ElementwiseMinJob_get_O_m51926A897B31A72E0545120BD9F65531D62E3E28_AdjustorThunk },
	{ 0x0600021F, ElementwiseMinJob_set_O_mD09F35ABFB5E1152104B5CC0B77846CCB2E668D4_AdjustorThunk },
	{ 0x06000220, ElementwiseMinJob_Execute_m8F1AD69702EBDBBA2DBBC40F763AD6EB6F26D40E_AdjustorThunk },
	{ 0x06000221, SetConstantPaddingJob_get_O_m429F04D1565369DC8A92C56A8A3F7BDF8E160793_AdjustorThunk },
	{ 0x06000222, SetConstantPaddingJob_set_O_mB2728CACA980C9317197F59C8F7D583C4F94AB60_AdjustorThunk },
	{ 0x06000223, SetConstantPaddingJob_Execute_m33D4842DB0ECD839739915A70277EBB7D479B67D_AdjustorThunk },
	{ 0x06000224, SetConstantPaddingWithStrideJob_get_O_m9D04B58FB922492F5CFA0F081466DA4C11FB67A8_AdjustorThunk },
	{ 0x06000225, SetConstantPaddingWithStrideJob_set_O_m73C46E89A0A7C9E15D20A941855C84CA67572A1F_AdjustorThunk },
	{ 0x06000226, SetConstantPaddingWithStrideJob_Execute_mF8FF2F177682E73208A18B28DD9359D11197E3FF_AdjustorThunk },
	{ 0x06000227, ZeroBroadcastJob_get_O_m80EBF053EEF3510467D32A981FBD5B6A1FBDAF02_AdjustorThunk },
	{ 0x06000228, ZeroBroadcastJob_set_O_m9F254990E077C41C7E69C411E9F721CFA9054C4F_AdjustorThunk },
	{ 0x06000229, ZeroBroadcastJob_Execute_m2DC38B85112A1BB8B313C1AF7239284EC6CCF990_AdjustorThunk },
	{ 0x0600022A, CopyJob_get_X_mAF0CF362316C875D50B6BECF1274D628A179CC7C_AdjustorThunk },
	{ 0x0600022B, CopyJob_set_X_m53604813C91ECEC681DBACFC67D026C7A51C5A58_AdjustorThunk },
	{ 0x0600022C, CopyJob_get_O_m3A5FE4E7678815BB9489726FD2C4201B547BFA04_AdjustorThunk },
	{ 0x0600022D, CopyJob_set_O_m2260259E5BAF0F04604C4B5271BE47CF793B1E49_AdjustorThunk },
	{ 0x0600022E, CopyJob_Execute_mE5D45E422768502C8AE6B8EF2ECFD01B1DEEDE41_AdjustorThunk },
	{ 0x0600022F, CopyStrideJob_get_X_m91FFE7411E433397342D1B48B198D64C11A8DEF1_AdjustorThunk },
	{ 0x06000230, CopyStrideJob_set_X_m64A7A3CADB3D27324C8BF86FBDE2E029112A9B00_AdjustorThunk },
	{ 0x06000231, CopyStrideJob_get_O_mEA69CDEB88293AFEFA7427EACAD5CB8AC72EC2D9_AdjustorThunk },
	{ 0x06000232, CopyStrideJob_set_O_m25EAEE33D79111B55485D8621E320CF95CC5A9CD_AdjustorThunk },
	{ 0x06000233, CopyStrideJob_Execute_m7C1642B0EA7FD5D1BDE18ABDD14E51C210A91C16_AdjustorThunk },
	{ 0x06000234, VectorBroadcastJob_get_X_mF9DC27A72B485BA01A3424EEE12625BC6E182876_AdjustorThunk },
	{ 0x06000235, VectorBroadcastJob_set_X_mF1445A332850A939C8B09B0C22ECEFABFA7490F0_AdjustorThunk },
	{ 0x06000236, VectorBroadcastJob_get_O_m6D2793416B631B08FD69725B1C79353CE3CFDC84_AdjustorThunk },
	{ 0x06000237, VectorBroadcastJob_set_O_m9C59763E7A1A9BA294F16DC6C49158A8B8F9608B_AdjustorThunk },
	{ 0x06000238, VectorBroadcastJob_Execute_mBEA427E04083C3455BE3BA1C30A74A37156F09F7_AdjustorThunk },
	{ 0x06000239, GenericSliceJob_get_X_m5B6357955D9464D6F9E410A3406EAD15A1984842_AdjustorThunk },
	{ 0x0600023A, GenericSliceJob_set_X_mF540A2162A178735356F1290EFDF6735C7C8B1F3_AdjustorThunk },
	{ 0x0600023B, GenericSliceJob_get_O_m2405E6CB4FAE2FA6FBA34B54C4523E9915B7631F_AdjustorThunk },
	{ 0x0600023C, GenericSliceJob_set_O_mAAC9631DDB4E95D7804960F152B6CC6C7E87F427_AdjustorThunk },
	{ 0x0600023D, GenericSliceJob_Execute_mFF288119AA381D66E3090E247FB624FD64F73695_AdjustorThunk },
	{ 0x0600023E, GenericStridedSliceJob_get_X_m5B90A58F10A3B7C0299B529518FFE9025F7420F7_AdjustorThunk },
	{ 0x0600023F, GenericStridedSliceJob_set_X_mF47DEF41B16E85C7014B31C12D620945E6EFCA11_AdjustorThunk },
	{ 0x06000240, GenericStridedSliceJob_get_O_m9C4F012528B5162983A95C7E91F1FE433F5E1EE4_AdjustorThunk },
	{ 0x06000241, GenericStridedSliceJob_set_O_mA45196365935D13F7A8247F17C449A8A412EAB74_AdjustorThunk },
	{ 0x06000242, GenericStridedSliceJob_Execute_m6A9B66FA12AFD524DEE71F4D6EA4B33E674CCFF2_AdjustorThunk },
	{ 0x06000243, ScalarBroadcastAddJob_get_X_mD58E9E286DF48B6454B6D613FB340DE492CD4CCB_AdjustorThunk },
	{ 0x06000244, ScalarBroadcastAddJob_set_X_m076617C3853DBAA189342E34A1FD521CD5E356CC_AdjustorThunk },
	{ 0x06000245, ScalarBroadcastAddJob_get_B_m1117AC67E085E2449D7CF0AD2E50149605F3594D_AdjustorThunk },
	{ 0x06000246, ScalarBroadcastAddJob_set_B_m43157B3EE4D33AC766D9AAC4614B738DC6DD96CA_AdjustorThunk },
	{ 0x06000247, ScalarBroadcastAddJob_get_O_mEF38A4F067FCF4112A062CF9032396C2992644B1_AdjustorThunk },
	{ 0x06000248, ScalarBroadcastAddJob_set_O_m8CEBBB7FA55802CB79C7EAAE8C3C6A677FDBC5BA_AdjustorThunk },
	{ 0x06000249, ScalarBroadcastAddJob_Execute_mEFF1D419F09B956F01013F8D09C4676EFE2C63D5_AdjustorThunk },
	{ 0x0600024A, BroadcastAddJob_get_X_mBD62E8AD2B85859D5B0EB29175E56297861C15E2_AdjustorThunk },
	{ 0x0600024B, BroadcastAddJob_set_X_m3ED27D8C6F31C4743CD43C2F83471F36762BF264_AdjustorThunk },
	{ 0x0600024C, BroadcastAddJob_get_B_m61EB097DBF53E606DC3289016864803CF6670F6D_AdjustorThunk },
	{ 0x0600024D, BroadcastAddJob_set_B_m69F9770C14E20E62929715FF274528D97F596ABF_AdjustorThunk },
	{ 0x0600024E, BroadcastAddJob_get_O_m3352D0A992F5BA575A6E5A8673C9944864D51B4D_AdjustorThunk },
	{ 0x0600024F, BroadcastAddJob_set_O_m765A60D1F512088319C9A7F550987D3BC792AC54_AdjustorThunk },
	{ 0x06000250, BroadcastAddJob_Execute_m79A6322A7FCC5F1487F933FC9F34CF152D66D576_AdjustorThunk },
	{ 0x06000251, ScalarBroadcastMulJob_get_X_m18C0B739A174A142390499A01E5D94D12F4639D0_AdjustorThunk },
	{ 0x06000252, ScalarBroadcastMulJob_set_X_m08FA50A843FDD9938BB4AB3DB16F0C505DA025A2_AdjustorThunk },
	{ 0x06000253, ScalarBroadcastMulJob_get_B_m973C3DE7E731BB5CC18637BD56B2FCE9DC72441B_AdjustorThunk },
	{ 0x06000254, ScalarBroadcastMulJob_set_B_m2C713932F9647D16E8D34F744F1D3F5C3030BAF2_AdjustorThunk },
	{ 0x06000255, ScalarBroadcastMulJob_get_O_mF770FCF169D1C43BA2C97A349BFBD7588384A1F6_AdjustorThunk },
	{ 0x06000256, ScalarBroadcastMulJob_set_O_m022B0A7FD1E26B6B83F2A4EBFE3E7791C1135203_AdjustorThunk },
	{ 0x06000257, ScalarBroadcastMulJob_Execute_mF6BF0CF0E8814EEEB6347E3E013FE03AA68D185C_AdjustorThunk },
	{ 0x06000258, BroadcastMulJob_get_X_m998CB30985610131DD486928CF468C97AEDFAF74_AdjustorThunk },
	{ 0x06000259, BroadcastMulJob_set_X_mFF8163331F04D07CC4EA7D2A5257380FF69DEF70_AdjustorThunk },
	{ 0x0600025A, BroadcastMulJob_get_B_m4AA74760888C99069C9E2EBAFCE26C3603F3E94A_AdjustorThunk },
	{ 0x0600025B, BroadcastMulJob_set_B_mCA1A3DE666AEFB76540FDC848B26BB17353630A1_AdjustorThunk },
	{ 0x0600025C, BroadcastMulJob_get_O_mEE4F75350BC325A236D25F8EF4EABC08C8AF1BD2_AdjustorThunk },
	{ 0x0600025D, BroadcastMulJob_set_O_mBA34D31B8083CEF02CA9C120908AEB15FC3C15DA_AdjustorThunk },
	{ 0x0600025E, BroadcastMulJob_Execute_mA396102B2E230E228B9C8363BD5B4C4D1684B7CF_AdjustorThunk },
	{ 0x0600025F, ScalarBroadcastDivJob_get_X_m7A172C4BE7E7D85D911E8733E43485AB938C29D3_AdjustorThunk },
	{ 0x06000260, ScalarBroadcastDivJob_set_X_mA9EEADA68FB442D2F6CB8FA5AB9EA5252B9706B5_AdjustorThunk },
	{ 0x06000261, ScalarBroadcastDivJob_get_B_mEB3F293C6FF054633854E7B2D77BA9688F75C7B3_AdjustorThunk },
	{ 0x06000262, ScalarBroadcastDivJob_set_B_mF04E312761DDC01FEF04C57505EF4D194AD4F7A1_AdjustorThunk },
	{ 0x06000263, ScalarBroadcastDivJob_get_O_mDCFE76686C3014D753AC025F205C037131B5577D_AdjustorThunk },
	{ 0x06000264, ScalarBroadcastDivJob_set_O_mFC6E02E6D134E79157AF525D8B4EA5D8738C56DF_AdjustorThunk },
	{ 0x06000265, ScalarBroadcastDivJob_Execute_m9A81C0E882C04BBE211BD77B01982B90887359B8_AdjustorThunk },
	{ 0x06000266, BroadcastDivJob_get_X_m0526B8C0790EA82FB9AD603824B9AA39BD1F8729_AdjustorThunk },
	{ 0x06000267, BroadcastDivJob_set_X_mB288A0C09C0B871CE0A4BC6A21BB2677A4ADA69C_AdjustorThunk },
	{ 0x06000268, BroadcastDivJob_get_B_m4D8E810B8C10E0440B176FD1F673E4131B814D2C_AdjustorThunk },
	{ 0x06000269, BroadcastDivJob_set_B_m6F8C8A08608CCF5120797B8B829AA5525CEECE6B_AdjustorThunk },
	{ 0x0600026A, BroadcastDivJob_get_O_m6D86E3FBF5515C14B41B0A0FA200877CDC4481C3_AdjustorThunk },
	{ 0x0600026B, BroadcastDivJob_set_O_m7A36DD3A4E14F2DEF4D538397DCA6440B474CD5C_AdjustorThunk },
	{ 0x0600026C, BroadcastDivJob_Execute_m3120C9A5CAFA7A30C9E0F196DE4D8C189CB9C71E_AdjustorThunk },
	{ 0x0600026D, ScalarBroadcastMinJob_get_X_mB19B1E24DC55758DD93EA97E03CB9C375969ADCF_AdjustorThunk },
	{ 0x0600026E, ScalarBroadcastMinJob_set_X_m5F319B3C5371B9E58BB2781AC8CE0C5FD3AE64E3_AdjustorThunk },
	{ 0x0600026F, ScalarBroadcastMinJob_get_B_mB2B5B5F57F269AF688549089E4D8E65F4D0F7FAB_AdjustorThunk },
	{ 0x06000270, ScalarBroadcastMinJob_set_B_m9DA46F4F3420FCA502759917FF1AD06E1348D2FF_AdjustorThunk },
	{ 0x06000271, ScalarBroadcastMinJob_get_O_mBC7145899540B3B59B3F92E71B686E92533E5256_AdjustorThunk },
	{ 0x06000272, ScalarBroadcastMinJob_set_O_m41CDC3253296D228EF4D9E70B4551485E95EC0B6_AdjustorThunk },
	{ 0x06000273, ScalarBroadcastMinJob_Execute_m75C7D352E453A5956BE221BFE6E61D9E2E3D1AB6_AdjustorThunk },
	{ 0x06000274, BroadcastMinJob_get_X_m8F14C267F098E7B057F8F2242C82BE3E7F075CB8_AdjustorThunk },
	{ 0x06000275, BroadcastMinJob_set_X_m2DD1C9518BA11ECD26BB7E8137B89A9258A9EEA3_AdjustorThunk },
	{ 0x06000276, BroadcastMinJob_get_B_m1C7414699137AF2757DE983B800529F11A206A66_AdjustorThunk },
	{ 0x06000277, BroadcastMinJob_set_B_m0165B16FBA886FF6963E86943E4CAC3630B88D57_AdjustorThunk },
	{ 0x06000278, BroadcastMinJob_get_O_mB0F477D451AD7ED15F5C3598EBEB01349A562672_AdjustorThunk },
	{ 0x06000279, BroadcastMinJob_set_O_mA87C3E074FA16B1027B19E3C004400F947849A14_AdjustorThunk },
	{ 0x0600027A, BroadcastMinJob_Execute_mFD53E52D3E85FB18C40529781A2A42F5D9D25259_AdjustorThunk },
	{ 0x0600027B, ScalarBroadcastMaxJob_get_X_mB03897C83EE83CE9DAB0D6FBC546DFBD5A55FFD1_AdjustorThunk },
	{ 0x0600027C, ScalarBroadcastMaxJob_set_X_m4F573C2879E534F213DA462244C77DD3D6D3C216_AdjustorThunk },
	{ 0x0600027D, ScalarBroadcastMaxJob_get_B_mA55376A561C77FB7BB134642E11D62C1CACA375F_AdjustorThunk },
	{ 0x0600027E, ScalarBroadcastMaxJob_set_B_m5706991ADF7747F44E2CE05DD15433034BCEC726_AdjustorThunk },
	{ 0x0600027F, ScalarBroadcastMaxJob_get_O_m96CDE9415299DEA5527CFC6C7D3936504EFCB02C_AdjustorThunk },
	{ 0x06000280, ScalarBroadcastMaxJob_set_O_m99E542829357E2F576250B96B388958212E7A9C9_AdjustorThunk },
	{ 0x06000281, ScalarBroadcastMaxJob_Execute_mE2DD3C89473DF9151039A3FA00E7309F5881EF59_AdjustorThunk },
	{ 0x06000282, BroadcastMaxJob_get_X_mE112390CF4F39FC1F291210B6E3923153392AC07_AdjustorThunk },
	{ 0x06000283, BroadcastMaxJob_set_X_m30D3D86AE41BC6349675C0D2C5AE481B849B4202_AdjustorThunk },
	{ 0x06000284, BroadcastMaxJob_get_B_m19D290038F6E4C118C458071DA21FD922AF4906A_AdjustorThunk },
	{ 0x06000285, BroadcastMaxJob_set_B_m709F67C37BBF63E70F8FF9A469B0F54534482474_AdjustorThunk },
	{ 0x06000286, BroadcastMaxJob_get_O_m9DCE652D097AB49A43E3AB10641B40A383DA2151_AdjustorThunk },
	{ 0x06000287, BroadcastMaxJob_set_O_m79EEBFF2F5E042E52B723AC02445060F6A513B8C_AdjustorThunk },
	{ 0x06000288, BroadcastMaxJob_Execute_m8DC8118BD0928AFBF4EBF3681D140CDC4CCB1C49_AdjustorThunk },
	{ 0x06000289, ScalarBroadcastPowJob_get_X_mCF84D203329D36D2CBD681904B231DBFCB7E40B7_AdjustorThunk },
	{ 0x0600028A, ScalarBroadcastPowJob_set_X_mB9687FA1B2DC82470D7FB3E761D3A9E0BA6229A5_AdjustorThunk },
	{ 0x0600028B, ScalarBroadcastPowJob_get_B_m516FC85F7C33C3023A0673890785EFECFB580D58_AdjustorThunk },
	{ 0x0600028C, ScalarBroadcastPowJob_set_B_m5592061D2944D7E9F6927654DE3651B678673DAD_AdjustorThunk },
	{ 0x0600028D, ScalarBroadcastPowJob_get_O_mA3301C69058A236A87E70BDF974386205296FDF6_AdjustorThunk },
	{ 0x0600028E, ScalarBroadcastPowJob_set_O_m1A3EC363436323D838E4E8541E4DA5D89DC32FCC_AdjustorThunk },
	{ 0x0600028F, ScalarBroadcastPowJob_Execute_m1425FE1C8EACEFAF29381D5954E0A6289F42806B_AdjustorThunk },
	{ 0x06000290, BroadcastPowJob_get_X_m4299B3817FC52B1771B13D4ED98535BCD0645FFD_AdjustorThunk },
	{ 0x06000291, BroadcastPowJob_set_X_mC458A32F1F53DB21C706DDA994B704A4320ED929_AdjustorThunk },
	{ 0x06000292, BroadcastPowJob_get_B_m616860938F9BEC9B98D00C2B103F6798A13472F8_AdjustorThunk },
	{ 0x06000293, BroadcastPowJob_set_B_m25E7CBF030B6E4BE9C25EDF94CFEC151FD237876_AdjustorThunk },
	{ 0x06000294, BroadcastPowJob_get_O_m44945A0C427DD8A33A2F4381757E2A297F8E91CB_AdjustorThunk },
	{ 0x06000295, BroadcastPowJob_set_O_mB5A149B4786E4E63092739AF7C09039B523160FA_AdjustorThunk },
	{ 0x06000296, BroadcastPowJob_Execute_m82DCAE15AB3ADABA699A15AC877C1874E537C6C1_AdjustorThunk },
	{ 0x06000297, VectorBroadcastScaleBiasJob_get_X_mA829BD7C72C706E4F956DA0AFDA112C7CC0D6FC7_AdjustorThunk },
	{ 0x06000298, VectorBroadcastScaleBiasJob_set_X_m7A907D8DFFB30E84C9C685A17C168E7EFA3352EE_AdjustorThunk },
	{ 0x06000299, VectorBroadcastScaleBiasJob_get_S_m5339A676E60DBA6C0DD221DFD43D8D0096CD8CB5_AdjustorThunk },
	{ 0x0600029A, VectorBroadcastScaleBiasJob_set_S_mEE2C7334652DCCD68C6882FD6233C130CEF130EC_AdjustorThunk },
	{ 0x0600029B, VectorBroadcastScaleBiasJob_get_B_m72A956A5340C3DAA0DA3CA4A764B700244E65728_AdjustorThunk },
	{ 0x0600029C, VectorBroadcastScaleBiasJob_set_B_mC2CBA3703B8152885BA18779C880930DB0AAE959_AdjustorThunk },
	{ 0x0600029D, VectorBroadcastScaleBiasJob_get_O_m13514A94D5D7321746181E6B4EE21F0B09160D87_AdjustorThunk },
	{ 0x0600029E, VectorBroadcastScaleBiasJob_set_O_mB2BD6437DE1DFF4E25769F61056D517289D81877_AdjustorThunk },
	{ 0x0600029F, VectorBroadcastScaleBiasJob_Execute_m2FDD7613AAC8474DB673DA91D48441A16F0BE06E_AdjustorThunk },
	{ 0x060002A0, ReduceMeanJob_get_X_m51D97E42085FB008C04585967FD927013CFACEC0_AdjustorThunk },
	{ 0x060002A1, ReduceMeanJob_set_X_m8AC52D68FF0174342E5D56F68EC5115E62CF2D85_AdjustorThunk },
	{ 0x060002A2, ReduceMeanJob_get_O_m6D63FA6E2B745C864BFD3441BD826E32B8CF593E_AdjustorThunk },
	{ 0x060002A3, ReduceMeanJob_set_O_m1A40D330D18A9C54AA60B4E95B1169D5CD047340_AdjustorThunk },
	{ 0x060002A4, ReduceMeanJob_Execute_m06FAE7BCA810265000C05F3A3169F6AABDA03235_AdjustorThunk },
	{ 0x060002A5, ReduceSumJob_get_X_m6A08B6988CE91BE87E95ABF4F5F121808D97B07A_AdjustorThunk },
	{ 0x060002A6, ReduceSumJob_set_X_mB0CD3EF7A8914F3D940765BB1F9037B403246CF5_AdjustorThunk },
	{ 0x060002A7, ReduceSumJob_get_O_mDB45B9BD51EAD5298C8963A75151B4CA53CB6272_AdjustorThunk },
	{ 0x060002A8, ReduceSumJob_set_O_mE625F47397481E39519673AAC56F36E7CE9194F2_AdjustorThunk },
	{ 0x060002A9, ReduceSumJob_Execute_m74E8E0C0483D92C6F4D87DA862DB46A1A2E4E1AC_AdjustorThunk },
	{ 0x060002AA, ReduceMaxJob_get_X_m3DE1CC24E37367C21E5929E4F410BE37DC0B2401_AdjustorThunk },
	{ 0x060002AB, ReduceMaxJob_set_X_mE141E7120DC547BE4004308652DC2E835E2BD6AA_AdjustorThunk },
	{ 0x060002AC, ReduceMaxJob_get_O_m5FD264AD858D8C836BEEB4EF5A584B731614E5A9_AdjustorThunk },
	{ 0x060002AD, ReduceMaxJob_set_O_m390B17D26859FBCEAA87DD3B5D120967D0E547B8_AdjustorThunk },
	{ 0x060002AE, ReduceMaxJob_Execute_mE1CF797A3BE95745E8227A81CE87B6E491C0B47A_AdjustorThunk },
	{ 0x060002AF, TransposeJob_get_X_mDAD8E2AEA70EC0CB63D40296C74EA173E958CA92_AdjustorThunk },
	{ 0x060002B0, TransposeJob_set_X_mD4B5CB5FF6CD043B6C6DBEDE8E412E5B434DCC27_AdjustorThunk },
	{ 0x060002B1, TransposeJob_get_O_m98BC8A0626FF1F4892718F80D49C33CE97DA7898_AdjustorThunk },
	{ 0x060002B2, TransposeJob_set_O_m23E3E64AD214B621127A76BDA7A33349BD5B6F51_AdjustorThunk },
	{ 0x060002B3, TransposeJob_Execute_m866E5BF20FE7805ECA170773B98F0E749A0751A5_AdjustorThunk },
	{ 0x060002B4, MemFreeJob_Execute_mADCEFF2DB4C24909980D969765390987CD1A98E9_AdjustorThunk },
	{ 0x060002B5, TileJob_get_X_m8607B859F66CB277330C9813562856569DCE755E_AdjustorThunk },
	{ 0x060002B6, TileJob_set_X_mA5A69AE5895F84099E825453BBEAB4140F3E0066_AdjustorThunk },
	{ 0x060002B7, TileJob_get_O_mBCB776311E84A2CE15E2CD2B9D8A0CFF67DFC18C_AdjustorThunk },
	{ 0x060002B8, TileJob_set_O_m53BEC9C6A869FBB46DBE51F0F418497B2FA5FD56_AdjustorThunk },
	{ 0x060002B9, TileJob_Execute_m732B7A21E1562ED328FD532087DEAB6CC27A97C1_AdjustorThunk },
	{ 0x060002BA, GatherJob_get_X_m47E1B8F9D24248326C5187CA8C58DAA254075203_AdjustorThunk },
	{ 0x060002BB, GatherJob_set_X_m60B84789434A6E9A4E7C7EC9E90DE7356ED71CE9_AdjustorThunk },
	{ 0x060002BC, GatherJob_get_B_m30C768057FA0E66D117771ADBEF60CFE3F7FE799_AdjustorThunk },
	{ 0x060002BD, GatherJob_set_B_mC362DADDF299C2E8DA4704375DDB3C8BF6F37FD6_AdjustorThunk },
	{ 0x060002BE, GatherJob_get_O_m09FC304CC961BD1538655ECB1756DC274A91D9A4_AdjustorThunk },
	{ 0x060002BF, GatherJob_set_O_m31E6F0701BB4EFEA5372F3F29837F954E14D9850_AdjustorThunk },
	{ 0x060002C0, GatherJob_Execute_m026DEF192E3ECAA07F39FD90AFAAD4E4AB460196_AdjustorThunk },
	{ 0x060002C1, OneHotJob_get_X_m4EC184952989CBA6BD12E3FAF978272D1888281B_AdjustorThunk },
	{ 0x060002C2, OneHotJob_set_X_m31A0DFCFC2A1B2FC5D8B105C44F6BFA69A2D2879_AdjustorThunk },
	{ 0x060002C3, OneHotJob_get_O_mF19094B05828B84E86952138DE97FFFABF02CCD7_AdjustorThunk },
	{ 0x060002C4, OneHotJob_set_O_m7A725AD6304F5D7F3D0D33974BF4403596171306_AdjustorThunk },
	{ 0x060002C5, OneHotJob_Execute_m0C9803DD526147F9EAB2DBD9A2AAFAC3A1D37B29_AdjustorThunk },
	{ 0x060002E2, ParallelJobsContext__ctor_mEA527D17947603C9746F367A556E9985E25F588A_AdjustorThunk },
	{ 0x060002E8, ParallelJobsContext_AddJobDependencyToOutputFence_mE5EA0F4A4303246CDAD44F69F58037DE1F8777D7_AdjustorThunk },
	{ 0x060002E9, ParallelJobsContext_TrackJobReadDependencies_m219583685F53BED9D1839003E5C30603B6116431_AdjustorThunk },
	{ 0x060002EA, ParallelJobsContext_Dispose_mBA9DB35702E5A5ADA5711469FCA3454D044FBA7E_AdjustorThunk },
	{ 0x06000319, Entry__ctor_m62B7545FB61CD780AF3F02D85797BEE5DEDC4502_AdjustorThunk },
	{ 0x0600031A, Entry__ctor_m49A1371632874C2899989C9A17CEB2DCDF027962_AdjustorThunk },
	{ 0x0600031B, Entry__ctor_m99C084E6E8D6005F9458BC70AE082358B894FB10_AdjustorThunk },
	{ 0x0600031C, Entry__ctor_m3298497CCE5943296FC81FA2FB92F2E6C913D657_AdjustorThunk },
	{ 0x0600031D, ComputeKernel_get_shader_m4F6DA0414CBF03894C8C58310A4CF1989E3A9EDC_AdjustorThunk },
	{ 0x0600031E, ComputeKernel__ctor_m5A375BA00D1E51ED9C45212012758212653F353E_AdjustorThunk },
	{ 0x0600031F, ComputeKernel_SetTensor_mCA21BACFD13D5ADCC9B98753237A8B8A9B1F1122_AdjustorThunk },
	{ 0x06000320, ComputeKernel_SetTensor_m901E8388023E712D9AD800554656EF77C8F5C10D_AdjustorThunk },
	{ 0x06000321, ComputeKernel_SetTensorDecl_mCFEB0E982CAD745E23F7290BB22A826CF8B0075B_AdjustorThunk },
	{ 0x06000322, ComputeKernel_SetTensorDecl_m4F85E8C759DAB1E48108A29900F3FA26CD326ED9_AdjustorThunk },
	{ 0x06000323, ComputeKernel_SetTensorBuffer_m27EE4FC4C17D38B95BBA1418BD71DF83AC9112EB_AdjustorThunk },
	{ 0x06000324, ComputeKernel_SetTensorBuffer_m445651305CBCA0E484D2E5420FB984ABCE897F7B_AdjustorThunk },
	{ 0x06000325, ComputeKernel_Dispatch_m0D1A205E955511500B5A6AA581EAE917511553BE_AdjustorThunk },
	{ 0x0600035F, KernelAssertInfo__ctor_mBE1CF4C9892759F5644A1BA692DE4D6FEB3131F7_AdjustorThunk },
	{ 0x0600037D, CompiledLayer_get_kernel_m315FD8120BA417A507C66CABABF320476B26B317_AdjustorThunk },
	{ 0x060004E9, ComputeFunc_get_threadGroupSize_m2F7E9003C06C3EC3BE1356303ADD0662A2C0FD40_AdjustorThunk },
	{ 0x060004EA, ComputeFunc_get_width_m025759585897ECD467C6E73686BCDA8A20BD11D5_AdjustorThunk },
	{ 0x060004EB, ComputeFunc_get_height_m174A3D762763192F67CF141CEB53D83D165933FD_AdjustorThunk },
	{ 0x060004EC, ComputeFunc_get_depth_m27A7A2A0E50FD3F450AD01CA9A5F85E8505BB8FA_AdjustorThunk },
	{ 0x060004F2, ComputeFunc__ctor_mB18BD7FE3A993830F933080E40209C5C9EF38302_AdjustorThunk },
	{ 0x060004F3, ComputeFunc__ctor_mE72583BEE682EFE80CBAEF2226B000C2704B66EC_AdjustorThunk },
	{ 0x060004F4, ComputeFunc_SetTensor_m5240B86B2C6218E7B4427AEC1A0DCC0B1D2F7E7F_AdjustorThunk },
	{ 0x060004F5, ComputeFunc_SetTensor_m75809DABD3AA12B2933EF33C614F40508786AC48_AdjustorThunk },
	{ 0x060004F6, ComputeFunc_SetTensor_m3D89C87997B98979986F8D4A163053C629454B54_AdjustorThunk },
	{ 0x060004F7, ComputeFunc_SetTensorDecl_mDC6003202B8C90927F51C564C14EA7D85ECEE7B6_AdjustorThunk },
	{ 0x060004F8, ComputeFunc_SetTensorDecl_m7683508ED3D2C10AA27E80A6B74A76984986E355_AdjustorThunk },
	{ 0x060004F9, ComputeFunc_SetTensorBuffer_m63A49270BA6566DECB62C92542339251CDBE30C4_AdjustorThunk },
	{ 0x060004FA, ComputeFunc_SetTensorBuffer_m52CCC193D62126AA027E316D3826474424B77DD3_AdjustorThunk },
	{ 0x060004FB, ComputeFunc_SetTexture_m14B449AED78E27755422090DF51AADA1AC08F1CC_AdjustorThunk },
	{ 0x060004FC, ComputeFunc_Dispatch_m3BD6D194D7D2BD47623441CFAD23F2EE6315B237_AdjustorThunk },
	{ 0x060004FD, ComputeFunc_Dispatch_mF129519DCEA1F6A773119ED7DC809DE5372D02AE_AdjustorThunk },
	{ 0x06000501, TensorDecl_get_ShapeId_mDB726E90755857F4257DC21F865F3DA31D557B32_AdjustorThunk },
	{ 0x06000502, TensorDecl_get_ShapeId8D_mBA6B0FE1E9C5A6BE07A714D3A874535F0D37A4B9_AdjustorThunk },
	{ 0x06000503, TensorDecl_get_InfoId_m18E2715CD57BF6BEA5A49DE1FFFBAE242820C14F_AdjustorThunk },
	{ 0x06000504, TensorDecl__ctor_m23281FFEF10C87E30BD42ACAD57EA74F2BCFF9B1_AdjustorThunk },
	{ 0x060006D6, SGEMMJob_Execute_m75C2F62F0911B708F35FA2C3249541F4AC74DDF0_AdjustorThunk },
	{ 0x060008C6, WorkerConfiguration__ctor_m79BFE73A37D292BB2DE12C3A1B04057802AE2061_AdjustorThunk },
	{ 0x060008D8, StringStringPair_Equals_mADB666454B85C8C9002E710886D2FD3FC2231C4B_AdjustorThunk },
	{ 0x060008D9, StringStringPair_Equals_mA3407F90921CFA8319225E79F406AF777D20D001_AdjustorThunk },
	{ 0x060008DA, StringStringPair_GetHashCode_m3BF40FD0CE3382CEBC43AC73E69FE25E4D00425F_AdjustorThunk },
	{ 0x060008DB, StringStringLongTriplet_GetHashCode_m93E6DE303C0A8B182B72DBEF932659B4366DB129_AdjustorThunk },
	{ 0x060008DC, StringStringLongTriplet_Equals_m9499B2C596B7E740682198A63C612B9424913CB6_AdjustorThunk },
	{ 0x060008DD, StringStringLongTriplet_Equals_mDAACEF0F4C92BA18F8B0FF10AB37BC831B778213_AdjustorThunk },
	{ 0x0600090B, Input_WithName_mAF604379319D2484EB7F05DD9CF167A4C5EF89B3_AdjustorThunk },
	{ 0x060009BA, TensorShape__ctor_m3D0A670E59D0D5F0D13739F5C777DED331A7DAB6_AdjustorThunk },
	{ 0x060009BB, TensorShape__ctor_m3DFA716CA6C672282490F4FC24DD6706497E8BCF_AdjustorThunk },
	{ 0x060009BC, TensorShape__ctor_m0318587E59DA4D042BBC786E5B6CF255C773FA57_AdjustorThunk },
	{ 0x060009BD, TensorShape__ctor_m2BE83E834C3C8F346F054C616ACBFE4FD460C56B_AdjustorThunk },
	{ 0x060009BE, TensorShape__ctor_m7AB7F54A3AAB95BB6BF985DD3F86B8B95B1C972D_AdjustorThunk },
	{ 0x060009BF, TensorShape__ctor_mE83490DDD04BB7D686DEBC4F4D501AE15662CB84_AdjustorThunk },
	{ 0x060009C0, TensorShape__ctor_m114922F0493BEF2C3312E8826CA7EF09DB73574F_AdjustorThunk },
	{ 0x060009C1, TensorShape_get_kernelSpatialDepth_m7A492E370CA4B33FD7BE911B48059F6BFD92FD99_AdjustorThunk },
	{ 0x060009C2, TensorShape_get_kernelHeight_m454029EE1AB966CB2B05A483BDB170FEFA5C9295_AdjustorThunk },
	{ 0x060009C3, TensorShape_get_kernelWidth_mDE244878076A48678D8E87B4EE8A3682C3150282_AdjustorThunk },
	{ 0x060009C4, TensorShape_get_kernelDepth_mCD57091DA16F7F2CB300B79A17F42C29FAAA9EF1_AdjustorThunk },
	{ 0x060009C5, TensorShape_get_kernelCount_m6D82535660C620EE6C50B3CF2AA1D38BE560C258_AdjustorThunk },
	{ 0x060009C6, TensorShape_get_flatHeight_mC3A176A1C1DC85CAB3A0C2888A25850AA946B4A6_AdjustorThunk },
	{ 0x060009C7, TensorShape_get_flatWidth_m6A09153008C5760A0C71F84A39292C2C108E9A14_AdjustorThunk },
	{ 0x060009C8, TensorShape_get_length_m42D935AC99F95A1C8DE6B04AEC4DB9C96EDE7608_AdjustorThunk },
	{ 0x060009C9, TensorShape_get_rank_mB2908CA2D3737CE8801AE64047AD7E5614280628_AdjustorThunk },
	{ 0x060009CA, TensorShape_get_dimensions_mA9A917D267B0D37A62A6B77F46B90AD5B04E7593_AdjustorThunk },
	{ 0x060009CB, TensorShape_Axis_m9540333825C44D41F1A057AFCD2248193A1EA1D7_AdjustorThunk },
	{ 0x060009CC, TensorShape_GetPositionsFromIndex_m1D0BFA271F02E131FD139905B80656D42BA3D3A9_AdjustorThunk },
	{ 0x060009CD, TensorShape_GetPositionsFromIndex_mAA604C4FF06F3D72657B051D7B7D58B77A752AEE_AdjustorThunk },
	{ 0x060009CE, TensorShape_GetPositionsFromIndexChannelFirst_mE63163877AEAD43DCDCA2E84317F8BB910800C77_AdjustorThunk },
	{ 0x060009CF, TensorShape_GetPositionsFromIndexChannelFirst_m3C995064F5BC06455A62FC808BB5469AEC905D39_AdjustorThunk },
	{ 0x060009D0, TensorShape_IndexWithBroadcast_m70EDA13E88E268E60B25EDF511312DEA32B26E67_AdjustorThunk },
	{ 0x060009D1, TensorShape_IndexWithBroadcast_mA5BA19932212AA2D1D5C9904DD2FC07E5905BC15_AdjustorThunk },
	{ 0x060009D2, TensorShape_IndexWithClamp_m73472404CD6C74C879DE9C7E91923A98AE451020_AdjustorThunk },
	{ 0x060009D3, TensorShape_IndexWithClamp_m39177A4CAE1063920E16790D0FB0C6309B28E132_AdjustorThunk },
	{ 0x060009D4, TensorShape_IndexWithClamp_mFCAD7CD99FB34F354BEBC9465A7E2A0665504F37_AdjustorThunk },
	{ 0x060009D5, TensorShape_Index_m98AEF981C385B47A0EB2AB39B0FE4ACE184C9882_AdjustorThunk },
	{ 0x060009D6, TensorShape_Index_mC3C2A1A08CCFB66E58F1A219B388EBE068531E16_AdjustorThunk },
	{ 0x060009D7, TensorShape_Index_mBC2A1602541E21AE2919F39C2424580F06A7402E_AdjustorThunk },
	{ 0x060009D8, TensorShape_IndexChannelFirst_mC3491649D493646FF618B64977D7BDC823955468_AdjustorThunk },
	{ 0x060009D9, TensorShape_IndexChannelFirst_mFF23BE549579C7F4CFEAA42A3BFF883D83DBBB9E_AdjustorThunk },
	{ 0x060009DA, TensorShape_Index_mDDF155D1995B2F241BE241EC68896BAE4CABBB02_AdjustorThunk },
	{ 0x060009DB, TensorShape_get_Item_m046FF56D8906EA7CD9D33486F778EBBCE949B33E_AdjustorThunk },
	{ 0x060009DC, TensorShape_set_Item_m3E04172058C8855DBEE7B00941B909FF48D824A9_AdjustorThunk },
	{ 0x060009DD, TensorShape_ToArray_m6F504949F53EAB92C210A4B52F7F53BE104E8637_AdjustorThunk },
	{ 0x060009DE, TensorShape_Squeeze_mAE65C663FC4D5F3CCB596C03DAA02F810C6A04C0_AdjustorThunk },
	{ 0x060009DF, TensorShape_Flatten_m071EF526832C3614F714121763E93C1951D73D79_AdjustorThunk },
	{ 0x060009E2, TensorShape_Equals_mC5DAE406415A5127744D06E2DF022BD7C062A58B_AdjustorThunk },
	{ 0x060009E3, TensorShape_GetHashCode_mDF0AA9693A07A46DBDA669338F14E1E137CF76CB_AdjustorThunk },
	{ 0x060009E4, TensorShape_ToString_mE6CA208028006BF3EE98D8D6E9F8F6B1E8534224_AdjustorThunk },
	{ 0x060009E6, TensorIterator__ctor_m155A791924246F4E780FA39C05FA2E78AE8DDFAC_AdjustorThunk },
	{ 0x060009E7, TensorIterator__ctor_m6319470FAD9BD9F476FBCF1BB5B62700D21A0CD9_AdjustorThunk },
	{ 0x060009E8, TensorIterator_AssignIndexAndInvalidateDimensions_m90A1DB1B133908ED5407CF228F7F00992ECE2881_AdjustorThunk },
	{ 0x060009E9, TensorIterator_Next_m3BBE90015F10C99DBD4317583E5C8696E45865B1_AdjustorThunk },
	{ 0x060009EA, TensorIterator_Advance_m8C0FFC9D952DA72EF2CB78C383A28839FA77F9A1_AdjustorThunk },
	{ 0x060009EB, TensorIterator_IsValid_m35EB0AC3E815407848AFD55F95B88BF0093CC7A5_AdjustorThunk },
	{ 0x060009EC, TensorIterator_IndexInReducedShape_mC61CB8FA82E20218BE6DB90DF92EE42F734DD260_AdjustorThunk },
	{ 0x060009ED, TensorIterator_IndexWithReplacedAxis_m5CC893C8253AC414C1BED1B7602E85EF4A01A50C_AdjustorThunk },
	{ 0x060009EE, TensorIterator_get_Item_m63E891C7B085A16BE0673E4A6AE6D26B08DAA97D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2996] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6626,
	6626,
	6626,
	4600,
	3732,
	4629,
	6717,
	3178,
	7863,
	3178,
	2509,
	2509,
	2509,
	2203,
	2509,
	3090,
	2733,
	3090,
	2733,
	2727,
	2788,
	2738,
	2738,
	2738,
	3178,
	3178,
	3178,
	2727,
	1319,
	2519,
	2491,
	2186,
	3100,
	2738,
	6717,
	2509,
	5416,
	4574,
	4048,
	667,
	24,
	674,
	1653,
	1653,
	1107,
	688,
	267,
	441,
	689,
	689,
	2509,
	2509,
	267,
	1107,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	1654,
	1111,
	2509,
	1653,
	1650,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1849,
	740,
	1171,
	1171,
	1171,
	1171,
	1171,
	1171,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1655,
	1650,
	689,
	1109,
	1109,
	1653,
	1650,
	1650,
	1653,
	1650,
	676,
	7863,
	2674,
	2674,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2476,
	1612,
	2727,
	7771,
	7001,
	3560,
	2476,
	1612,
	2727,
	7771,
	7001,
	3560,
	2476,
	1612,
	2727,
	7771,
	7001,
	3320,
	2476,
	1612,
	2727,
	7771,
	7001,
	3560,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	5548,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	3131,
	2772,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3200,
	2885,
	2727,
	3200,
	2885,
	2727,
	3200,
	2885,
	3178,
	3199,
	2884,
	3200,
	2885,
	3178,
	3199,
	2884,
	3200,
	2885,
	3178,
	3199,
	2884,
	3200,
	2885,
	3178,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	3178,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3199,
	2884,
	3200,
	2885,
	2727,
	3199,
	2884,
	3200,
	2885,
	2727,
	0,
	0,
	0,
	0,
	0,
	0,
	4049,
	4575,
	5417,
	3821,
	4198,
	4819,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2738,
	0,
	0,
	0,
	0,
	0,
	2733,
	1866,
	3178,
	7863,
	3090,
	2733,
	3090,
	2733,
	1240,
	3178,
	3178,
	1240,
	4104,
	3764,
	4644,
	3405,
	3405,
	3405,
	3765,
	3765,
	4644,
	4644,
	4643,
	5483,
	5483,
	5483,
	5483,
	4102,
	4643,
	4643,
	4643,
	4643,
	4065,
	4065,
	5483,
	5483,
	5483,
	5483,
	4642,
	6729,
	6729,
	4643,
	4643,
	4350,
	6809,
	7726,
	7871,
	3178,
	7863,
	509,
	799,
	800,
	510,
	3100,
	1780,
	872,
	577,
	1320,
	1410,
	1870,
	1812,
	3178,
	4547,
	4437,
	1851,
	2381,
	2382,
	667,
	674,
	1107,
	688,
	82,
	267,
	267,
	267,
	154,
	1101,
	441,
	2509,
	2509,
	1101,
	2509,
	1653,
	1107,
	1107,
	153,
	3607,
	1081,
	1081,
	1103,
	1650,
	1650,
	693,
	1653,
	1650,
	2509,
	2509,
	2509,
	1653,
	1653,
	1650,
	1116,
	1653,
	690,
	2509,
	2509,
	1107,
	1655,
	1655,
	7863,
	3178,
	1107,
	1645,
	3178,
	7863,
	5761,
	7863,
	7013,
	3178,
	2738,
	1851,
	1098,
	2684,
	1575,
	1653,
	1653,
	1870,
	1870,
	1636,
	688,
	1107,
	267,
	267,
	154,
	1101,
	441,
	1107,
	2509,
	2509,
	2509,
	153,
	1081,
	693,
	1653,
	1650,
	2509,
	1653,
	1650,
	7863,
	3044,
	3100,
	2727,
	2788,
	3178,
	3178,
	2727,
	1319,
	2186,
	2519,
	2491,
	3086,
	3100,
	3100,
	3086,
	3086,
	1273,
	3178,
	3178,
	2727,
	1319,
	2186,
	2519,
	2491,
	3086,
	3100,
	2738,
	1662,
	2509,
	2509,
	1077,
	417,
	2684,
	1691,
	1107,
	674,
	667,
	688,
	267,
	267,
	267,
	154,
	3543,
	1101,
	1101,
	1101,
	1103,
	1653,
	689,
	689,
	2509,
	2509,
	2509,
	1107,
	1109,
	1109,
	4877,
	1653,
	1653,
	1653,
	1107,
	446,
	153,
	2569,
	1693,
	1654,
	700,
	700,
	1098,
	676,
	425,
	2509,
	1103,
	2509,
	1653,
	1650,
	2509,
	2509,
	2509,
	2509,
	2509,
	1654,
	1654,
	1111,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1058,
	1650,
	689,
	1653,
	1663,
	1650,
	1653,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1107,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	1655,
	2509,
	2509,
	1655,
	1655,
	1650,
	431,
	155,
	2509,
	1653,
	2509,
	3541,
	3541,
	3541,
	5545,
	5545,
	4664,
	4664,
	1751,
	3178,
	3178,
	276,
	3178,
	276,
	7863,
	3178,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	6814,
	3178,
	5345,
	3100,
	3086,
	3086,
	889,
	558,
	3178,
	3178,
	2727,
	1319,
	2186,
	2186,
	2186,
	1662,
	2519,
	2491,
	3086,
	3100,
	3178,
	699,
	3178,
	2728,
	558,
	6483,
	6483,
	6483,
	6483,
	6483,
	6483,
	6486,
	6486,
	6486,
	6486,
	6630,
	5457,
	5457,
	3178,
	3152,
	3100,
	3086,
	3086,
	3086,
	3086,
	518,
	518,
	2727,
	1319,
	2186,
	2519,
	2491,
	3086,
	3178,
	2738,
	2509,
	1195,
	1072,
	253,
	1653,
	195,
	2253,
	2186,
	674,
	667,
	688,
	1107,
	267,
	267,
	267,
	267,
	154,
	1101,
	1101,
	1101,
	1103,
	1653,
	441,
	689,
	689,
	1653,
	2509,
	2509,
	2509,
	690,
	690,
	1109,
	1109,
	1653,
	1653,
	1653,
	1107,
	153,
	446,
	1654,
	693,
	2509,
	1653,
	1650,
	2509,
	2509,
	2509,
	2509,
	2509,
	1654,
	1654,
	1111,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1655,
	1653,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	7009,
	1081,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	676,
	1655,
	1655,
	2509,
	1655,
	2509,
	2519,
	2509,
	1653,
	1653,
	2509,
	2509,
	1650,
	1300,
	1171,
	689,
	1653,
	1650,
	2509,
	2509,
	7863,
	3166,
	3086,
	3086,
	3086,
	7725,
	6630,
	7815,
	7815,
	7815,
	497,
	1812,
	872,
	577,
	872,
	1320,
	1410,
	1870,
	1812,
	1870,
	2673,
	1217,
	5345,
	3730,
	7863,
	3086,
	3086,
	3086,
	1217,
	2727,
	2788,
	2738,
	2738,
	819,
	3178,
	3178,
	2727,
	1319,
	2519,
	3100,
	3100,
	2738,
	6717,
	4793,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	1654,
	481,
	1654,
	481,
	1653,
	174,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	2509,
	770,
	1511,
	988,
	689,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	441,
	667,
	688,
	1650,
	689,
	3253,
	689,
	3253,
	2509,
	2509,
	267,
	441,
	3254,
	5345,
	441,
	267,
	3247,
	692,
	1109,
	1653,
	1653,
	1653,
	1655,
	1107,
	55,
	2509,
	3178,
	2727,
	3178,
	2727,
	3178,
	2727,
	3178,
	2727,
	3178,
	3178,
	3178,
	2727,
	3178,
	54,
	171,
	96,
	292,
	1209,
	476,
	763,
	764,
	164,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	2728,
	4877,
	2728,
	2728,
	2728,
	2728,
	2728,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	1693,
	2569,
	2569,
	1132,
	848,
	1870,
	1870,
	674,
	667,
	688,
	1107,
	267,
	267,
	267,
	154,
	1101,
	1101,
	1101,
	1103,
	1653,
	689,
	689,
	2509,
	2509,
	2509,
	1109,
	1109,
	1653,
	1653,
	1653,
	1107,
	153,
	446,
	1654,
	700,
	700,
	1098,
	676,
	425,
	1103,
	2509,
	2509,
	1650,
	2509,
	2509,
	2509,
	2509,
	1654,
	2509,
	1654,
	1111,
	1653,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	2509,
	1655,
	1655,
	2509,
	1653,
	1650,
	431,
	155,
	1650,
	689,
	1653,
	1650,
	1663,
	2509,
	2509,
	2684,
	847,
	857,
	3581,
	3589,
	3584,
	3585,
	3178,
	7863,
	3178,
	3178,
	1870,
	1636,
	2509,
	2509,
	2509,
	2509,
	2509,
	3100,
	3100,
	7815,
	3038,
	7863,
	2727,
	3178,
	3038,
	3100,
	3178,
	3100,
	2727,
	3178,
	3038,
	3178,
	3100,
	3178,
	3100,
	854,
	3178,
	3178,
	3178,
	3178,
	3178,
	2738,
	1870,
	2738,
	2509,
	2509,
	3100,
	2509,
	2684,
	2509,
	3131,
	6630,
	3100,
	3100,
	2509,
	2509,
	3100,
	7863,
	3178,
	2446,
	2446,
	2446,
	2727,
	3178,
	3038,
	3178,
	3100,
	3178,
	3100,
	3178,
	3178,
	3178,
	3100,
	2203,
	1501,
	1107,
	1870,
	1300,
	2509,
	2738,
	2738,
	1870,
	2509,
	2509,
	7863,
	3178,
	2533,
	2533,
	2532,
	3038,
	3100,
	3178,
	1300,
	2738,
	1870,
	2509,
	3178,
	1300,
	3100,
	2203,
	2519,
	1662,
	854,
	1851,
	2738,
	2684,
	3178,
	3087,
	3087,
	3087,
	3100,
	3178,
	3178,
	3178,
	5185,
	6486,
	1501,
	1745,
	3178,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	3178,
	2203,
	7863,
	3178,
	2186,
	1653,
	1653,
	1653,
	1653,
	3038,
	3038,
	18,
	17,
	3178,
	3178,
	3368,
	4768,
	4745,
	3367,
	3456,
	3446,
	4147,
	3270,
	3178,
	3178,
	2727,
	6717,
	6717,
	5462,
	4626,
	4257,
	3959,
	4410,
	4410,
	6717,
	5462,
	5569,
	6849,
	6717,
	5462,
	5462,
	6717,
	6717,
	5462,
	6717,
	6486,
	6520,
	3178,
	7863,
	3178,
	2509,
	2203,
	2097,
	2485,
	2509,
	2532,
	2533,
	2532,
	2360,
	2509,
	3178,
	2203,
	2203,
	4619,
	5729,
	6483,
	6483,
	4853,
	7013,
	6486,
	6486,
	6717,
	6486,
	6486,
	6660,
	5462,
	5185,
	5729,
	7013,
	5729,
	3178,
	7863,
	3178,
	2203,
	7863,
	3178,
	2533,
	2533,
	2203,
	2186,
	2186,
	2186,
	2533,
	2533,
	2533,
	2533,
	3178,
	2361,
	3178,
	2203,
	3178,
	2361,
	2203,
	3178,
	2203,
	2203,
	3178,
	2203,
	2203,
	3178,
	2203,
	3178,
	2203,
	2203,
	2203,
	2203,
	3178,
	2203,
	3375,
	4231,
	3178,
	3590,
	1812,
	3178,
	2469,
	7863,
	3178,
	2469,
	2469,
	2469,
	2469,
	2469,
	2469,
	2469,
	2738,
	1870,
	1870,
	674,
	667,
	688,
	1107,
	267,
	267,
	267,
	154,
	1101,
	1101,
	1101,
	1103,
	1653,
	689,
	689,
	2509,
	2509,
	2509,
	1109,
	1109,
	1653,
	1653,
	1653,
	1107,
	153,
	446,
	1654,
	700,
	700,
	1098,
	676,
	425,
	1103,
	2509,
	2509,
	1650,
	2509,
	2509,
	2509,
	2509,
	2509,
	1654,
	1654,
	1111,
	1653,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	2509,
	1655,
	1655,
	2509,
	1653,
	1650,
	431,
	155,
	1650,
	689,
	1653,
	1650,
	1663,
	2509,
	2509,
	2684,
	3100,
	1862,
	1297,
	1297,
	3178,
	3178,
	3178,
	2519,
	1662,
	1851,
	854,
	2684,
	2738,
	3178,
	3087,
	3087,
	3087,
	3100,
	3178,
	3178,
	2738,
	1870,
	1917,
	2519,
	1662,
	1851,
	854,
	1300,
	2684,
	2738,
	3178,
	3087,
	3087,
	3087,
	3100,
	3178,
	2738,
	3178,
	3178,
	6630,
	2738,
	1870,
	2738,
	2738,
	2519,
	1662,
	1851,
	854,
	1300,
	2684,
	2738,
	3178,
	3087,
	3087,
	3087,
	3100,
	2509,
	2203,
	2738,
	2738,
	3178,
	3178,
	1864,
	2509,
	1107,
	2509,
	2738,
	1870,
	1870,
	674,
	667,
	688,
	1107,
	267,
	267,
	267,
	154,
	1101,
	1101,
	1101,
	1103,
	1653,
	689,
	689,
	2509,
	2509,
	2509,
	1109,
	1109,
	1653,
	1653,
	1653,
	1107,
	153,
	446,
	1654,
	700,
	700,
	1098,
	676,
	425,
	1103,
	2509,
	2509,
	1650,
	2509,
	2509,
	2509,
	2509,
	2509,
	1654,
	1654,
	1111,
	1653,
	2509,
	2509,
	2509,
	2509,
	1111,
	2509,
	2509,
	2509,
	1654,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	2509,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1650,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	2509,
	2509,
	1107,
	2509,
	1655,
	1655,
	2509,
	1653,
	1650,
	431,
	155,
	1650,
	689,
	1653,
	1650,
	1663,
	2509,
	2509,
	2684,
	7863,
	3178,
	2509,
	4069,
	4099,
	4850,
	5729,
	5450,
	5729,
	5457,
	5457,
	6630,
	5729,
	4853,
	6717,
	5462,
	6717,
	5462,
	5462,
	7013,
	6812,
	5462,
	5462,
	6717,
	5462,
	6717,
	5462,
	5162,
	3178,
	3582,
	3741,
	3178,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6717,
	5462,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1032,
	1276,
	3178,
	3178,
	3086,
	2738,
	2738,
	3431,
	3732,
	3752,
	4600,
	4066,
	3731,
	3729,
	4602,
	5450,
	4623,
	4085,
	5450,
	5450,
	5450,
	5162,
	6626,
	6626,
	3178,
	768,
	3038,
	2738,
	4623,
	3752,
	4623,
	3752,
	7013,
	5729,
	7013,
	5729,
	7013,
	5729,
	3178,
	7863,
	3178,
	3178,
	3178,
	2239,
	2203,
	3086,
	3086,
	2238,
	2203,
	1653,
	1104,
	3178,
	3178,
	2738,
	2738,
	3178,
	3038,
	3086,
	2502,
	2502,
	3086,
	2502,
	2502,
	2580,
	2580,
	1098,
	1098,
	1076,
	1076,
	3178,
	3178,
	3178,
	3178,
	6717,
	6717,
	6717,
	6717,
	6717,
	6717,
	6717,
	3178,
	2738,
	1273,
	1861,
	3100,
	2502,
	1861,
	7863,
	3178,
	2531,
	3100,
	3100,
	3100,
	3178,
	2948,
	3100,
	3100,
	1870,
	7863,
	3178,
	2532,
	2533,
	2509,
	5462,
	5062,
	5359,
	3178,
	2203,
	3100,
	2738,
	1424,
	2039,
	1423,
	580,
	2509,
	1425,
	2509,
	683,
	689,
	270,
	1103,
	442,
	689,
	689,
	1107,
	80,
	268,
	268,
	268,
	155,
	257,
	441,
	441,
	1653,
	1653,
	687,
	687,
	687,
	687,
	687,
	687,
	684,
	1103,
	688,
	1109,
	1110,
	1107,
	1107,
	1107,
	1653,
	682,
	441,
	268,
	268,
	1107,
	1107,
	1653,
	437,
	266,
	688,
	1653,
	1107,
	1107,
	1107,
	1082,
	1103,
	1653,
	682,
	1653,
	1653,
	1653,
	1653,
	1653,
	1109,
	1653,
	1109,
	693,
	1107,
	1653,
	693,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1082,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1653,
	1107,
	1107,
	1107,
	1107,
	1107,
	1107,
	1107,
	1107,
	1653,
	1653,
	689,
	423,
	424,
	690,
	690,
	1107,
	1107,
	1107,
	443,
	447,
	443,
	447,
	685,
	255,
	689,
	440,
	154,
	46,
	2509,
	2509,
	2509,
	2509,
	2509,
	4618,
	4618,
	4618,
	4618,
	4074,
	4503,
	4074,
	5729,
	5724,
	5458,
	6717,
	6717,
	6717,
	6717,
	6717,
	4850,
	4850,
	5729,
	5729,
	5729,
	5729,
	3178,
	0,
	0,
	0,
	0,
	7815,
	3178,
	97,
	490,
	777,
	1217,
	1809,
	2727,
	2738,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	2438,
	476,
	53,
	53,
	476,
	629,
	77,
	629,
	397,
	77,
	77,
	397,
	629,
	77,
	629,
	1565,
	2438,
	1809,
	3100,
	3152,
	3152,
	5228,
	5228,
	2203,
	3086,
	3100,
	7863,
	1916,
	1861,
	2727,
	3178,
	2727,
	3038,
	2449,
	1565,
	2438,
	7013,
	7013,
	3038,
	3100,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	3086,
	1300,
	302,
	784,
	1353,
	1300,
	302,
	784,
	1353,
	1300,
	784,
	1353,
	1353,
	1300,
	302,
	1353,
	1300,
	302,
	784,
	1353,
	1276,
	1276,
	1300,
	302,
	784,
	1353,
	2738,
	1870,
	491,
	1218,
	1917,
	1300,
	302,
	784,
	1353,
	2738,
	1870,
	491,
	1218,
	1917,
	3178,
	1851,
	1851,
	2738,
	2492,
	3178,
	3178,
	2137,
	3178,
	1662,
	2509,
	2509,
	1662,
	3100,
	3178,
	3100,
	3178,
	324,
	323,
	254,
	419,
	2438,
	629,
	397,
	77,
	629,
	397,
	629,
	77,
	1565,
	2567,
	1817,
	1684,
	1219,
	706,
	492,
	453,
	298,
	84,
	57,
	3100,
	3100,
	3100,
	3100,
	3100,
	3100,
	3086,
	4838,
	4840,
	4860,
	6717,
	6717,
	5457,
	5729,
	4839,
	5185,
	3961,
	5542,
	5462,
	6717,
	6717,
	5733,
	5568,
	5568,
	5568,
	6849,
	6849,
	5572,
	5571,
	5570,
	5571,
	5571,
	4091,
	4103,
	4091,
	4072,
	4101,
	4100,
	3775,
	3774,
	4127,
	3776,
	5345,
	6495,
	6495,
	6626,
	6636,
	6483,
	6486,
	6626,
	4256,
	5482,
	5482,
	4125,
	4126,
	5462,
	5571,
	5467,
	7863,
	3178,
	2446,
	3178,
	3178,
	1565,
	5060,
	5729,
	5449,
	3178,
	6717,
	5481,
	5481,
	6717,
	6849,
	6849,
	4342,
	4849,
	4088,
	3178,
	0,
	2674,
	5481,
	1171,
	1252,
	1501,
	1171,
	3178,
	3178,
	2203,
	7863,
	3178,
	2446,
	2446,
	2446,
	2446,
	2446,
	2446,
	2446,
	2446,
	2438,
	2446,
	2438,
	2446,
	0,
	2674,
	1501,
	1501,
	1501,
	5442,
	1501,
	1501,
	1501,
	1501,
	1635,
	1501,
	1501,
	5442,
	3178,
	3178,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	3178,
	2360,
	3178,
	2360,
	3178,
	2360,
	3178,
	2360,
	3178,
	2360,
	3178,
	2360,
	3178,
	2360,
	2360,
	3178,
	3178,
	2360,
	3178,
	2360,
	2674,
	3178,
	2203,
	2203,
	6486,
	6486,
	6486,
	6486,
	6486,
	6486,
	5188,
	5188,
	1499,
	1499,
	985,
	985,
	1495,
	1753,
	3178,
	3178,
	2203,
	1075,
	2674,
	2674,
	2674,
	3100,
	2502,
	2449,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	6713,
	4624,
	5442,
	5442,
	5457,
	5442,
	3100,
	1870,
	2674,
	2674,
	3178,
	7863,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1501,
	1870,
	1870,
	7863,
	3178,
	1501,
	2186,
	1870,
	1870,
	1870,
	1870,
	1870,
	3178,
	2203,
	2674,
	3178,
	7863,
	3178,
	2533,
	2533,
	2674,
	3178,
	3178,
	2203,
	3178,
	2203,
	2674,
	1501,
	985,
	3178,
	3178,
	2203,
	3178,
	2203,
	3178,
	2361,
	2203,
	3812,
	3178,
	1849,
	3178,
	7863,
	3178,
	2104,
	2095,
	2096,
	1849,
	3178,
	5462,
	5462,
	6717,
	1849,
	3178,
	7863,
	3178,
	2509,
	2532,
	2533,
	1849,
	3178,
	7863,
	3178,
	2509,
	2203,
	2509,
	1849,
	3178,
	1849,
	3178,
	1849,
	3178,
	2674,
	6486,
	6486,
	3178,
	3178,
	2203,
	2203,
	7863,
	3178,
	2186,
	2186,
	2186,
	2186,
	2674,
	3178,
	3178,
	2203,
	2674,
	2674,
	3178,
	3178,
	2203,
	2674,
	6483,
	6483,
	4765,
	3178,
	3178,
	2203,
	3178,
	2361,
	2203,
	7863,
	3178,
	2203,
	3178,
	2361,
	2674,
	7001,
	3178,
	3178,
	2203,
	2674,
	1653,
	985,
	3178,
	3178,
	2203,
	2203,
	3178,
	2203,
	2203,
	7863,
	3178,
	2533,
	2533,
	3178,
	2203,
	3178,
	2203,
	2674,
	6486,
	6486,
	6660,
	5462,
	5185,
	5729,
	7013,
	3178,
	7863,
	3178,
	2203,
	2203,
	2203,
	2203,
	3178,
	2203,
	2203,
	3178,
	2203,
	2203,
	3178,
	2203,
};
static const Il2CppTokenRangePair s_rgctxIndices[27] = 
{
	{ 0x060002C6, { 0, 6 } },
	{ 0x060002C7, { 6, 5 } },
	{ 0x060002C8, { 11, 4 } },
	{ 0x060002C9, { 15, 4 } },
	{ 0x060002CA, { 19, 3 } },
	{ 0x060002CB, { 22, 3 } },
	{ 0x060002D2, { 25, 2 } },
	{ 0x060002D3, { 27, 2 } },
	{ 0x060002D4, { 29, 2 } },
	{ 0x060002D5, { 31, 2 } },
	{ 0x060002D6, { 33, 2 } },
	{ 0x060002D7, { 35, 2 } },
	{ 0x060002D8, { 37, 2 } },
	{ 0x060002D9, { 39, 2 } },
	{ 0x060002DA, { 41, 2 } },
	{ 0x060002DB, { 43, 2 } },
	{ 0x060002DC, { 45, 2 } },
	{ 0x060002DD, { 47, 2 } },
	{ 0x060002DE, { 49, 2 } },
	{ 0x060002DF, { 51, 2 } },
	{ 0x060002E0, { 53, 2 } },
	{ 0x060002E1, { 55, 2 } },
	{ 0x060002E3, { 57, 2 } },
	{ 0x060002E4, { 59, 2 } },
	{ 0x060002E5, { 61, 2 } },
	{ 0x060002E6, { 63, 2 } },
	{ 0x060002E7, { 65, 2 } },
};
extern const uint32_t g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_X_m66CB5380BD08AB132DECFC8B8A0BD2F2320991BC;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_S_mF166022C26AF0155708543B6B76BF7C78AFE5E45;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_B_mEA67161F4D1C3688CCD6DB98DB34DB45BA241608;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_O_mB2EAD300614B5DF2E44F74C208344603265318E3;
extern const uint32_t g_rgctx_IJobParallelForExtensions_Schedule_TisT_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_mF95E2A3C2FA8BAD9C17CD38106F7E71D30BA44C1;
extern const uint32_t g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_X_m5835F0581AAC278C162A187FE5F567BD2C4BE904;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_B_m7E782816B67A93643D36588988CB263BF8A981BD;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_O_m0AF1F4708AC0D7674EAD81C4D1D7117E04186927;
extern const uint32_t g_rgctx_IJobParallelForExtensions_Schedule_TisT_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_m4ACD29FDE3260E6034C19FFD4BBD8B61F9F80E5B;
extern const uint32_t g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_IJobResourceDeclarationXO_set_X_mC4CADB75E69E689F684CC4B7369D36BE89B3B8D3;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_IJobResourceDeclarationXO_set_O_m1F225A094426F5B25DF84B67B8C6CCD47874261D;
extern const uint32_t g_rgctx_IJobParallelForExtensions_Schedule_TisT_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_mF4637B5145198EC95D0D732A9D3C5B9902C13DDD;
extern const uint32_t g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_IJobResourceDeclarationXO_set_X_mC4CADB75E69E689F684CC4B7369D36BE89B3B8D3;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_IJobResourceDeclarationXO_set_O_m1F225A094426F5B25DF84B67B8C6CCD47874261D;
extern const uint32_t g_rgctx_IJobExtensions_Schedule_TisT_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_m12AC0D7597DD10258265238CF2E88A6F01DE1F9F;
extern const uint32_t g_rgctx_T_t02959BFEFFE52FD5CC444B136292D58D0263E765;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t02959BFEFFE52FD5CC444B136292D58D0263E765_IJobResourceDeclarationO_set_O_mC98FF3D6E8E26B214CBBC884059C1533A74D61B9;
extern const uint32_t g_rgctx_IJobExtensions_Schedule_TisT_t02959BFEFFE52FD5CC444B136292D58D0263E765_m8EDCA5C71FBD6880711739544B67D29A9D193306;
extern const uint32_t g_rgctx_T_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C_IJobResourceDeclarationO_set_O_mC98FF3D6E8E26B214CBBC884059C1533A74D61B9;
extern const uint32_t g_rgctx_IJobParallelForExtensions_Schedule_TisT_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C_mF47CC9CC7B8C3DBDA48EF2ADA9E1B28A8444287B;
extern const uint32_t g_rgctx_T_t590514B46B6A01AAAAD23EED8A88CFDD1573DD34;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXSBOInternal_TisT_t590514B46B6A01AAAAD23EED8A88CFDD1573DD34_m1B10599EBF38C8594F1DBA10A8F9300E846B2349;
extern const uint32_t g_rgctx_T_t123248DF5D1BFB5BDA3649117C50F6C912779DBA;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXSBOInternal_TisT_t123248DF5D1BFB5BDA3649117C50F6C912779DBA_m090C10DA36B5FC65F6E713E0D129FF1BFCEEB225;
extern const uint32_t g_rgctx_T_t1321887F1A9E59970EA2C04608494033672757F1;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_t1321887F1A9E59970EA2C04608494033672757F1_mEEFE6B49780CCFCE0602267DD66CDB8C08E902D0;
extern const uint32_t g_rgctx_T_tCAE262A78F76837B613D9F06D1927EB829EEC058;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_tCAE262A78F76837B613D9F06D1927EB829EEC058_m33319984CA0CA83115467157D27E15FA4244CB67;
extern const uint32_t g_rgctx_T_t6591166E4F79C6FBF7DF87B920338E60AF434933;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_t6591166E4F79C6FBF7DF87B920338E60AF434933_m2A73BC1F9D91AA8BD1602F40417F0098F5EA1802;
extern const uint32_t g_rgctx_T_tE2884381C19921D56ED12AD9DCBA5861B839DB6A;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleOInternal_TisT_tE2884381C19921D56ED12AD9DCBA5861B839DB6A_m90A12ADBD5513079EF73D7FCFD02D0B2396D5B4C;
extern const uint32_t g_rgctx_T_t86AD72CE087A47C911AB6369DDD307A580EA126C;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleOInternal_TisT_t86AD72CE087A47C911AB6369DDD307A580EA126C_mDB957E3EDC0FC36DEA088E15540AC0662BC5ADDD;
extern const uint32_t g_rgctx_T_t23DF52D8CA122ABB522D0722421A649FB813B870;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t23DF52D8CA122ABB522D0722421A649FB813B870_m4E8A482F5D7FD25B2C4992FA21859E127977597D;
extern const uint32_t g_rgctx_T_tE333D1C4B84CD4C5F070BB072FB861508231F80D;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_tE333D1C4B84CD4C5F070BB072FB861508231F80D_m449FF2D567ADF767D24115F258CDD670DAC9E7D9;
extern const uint32_t g_rgctx_T_t94FED5AD40B9628CF5E3570BE3CB6C4C4D29DA10;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t94FED5AD40B9628CF5E3570BE3CB6C4C4D29DA10_m545292C9E73472A41D286306A1AF07C0E8CEF2D7;
extern const uint32_t g_rgctx_T_t41C7469D197D42BF2FFB3DDA2983BBD01D168A0E;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t41C7469D197D42BF2FFB3DDA2983BBD01D168A0E_m6A75760297E2FB089D89E49960CDF781C956C618;
extern const uint32_t g_rgctx_T_t1F636060D53F0AA32A366E6B8B2F3DF3BC9628FD;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t1F636060D53F0AA32A366E6B8B2F3DF3BC9628FD_mFD99CED183133EA27083BF401DBB496960F270B8;
extern const uint32_t g_rgctx_T_t7EDBD4FE126B76090487C9CF3E99FA6D0D552B9C;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t7EDBD4FE126B76090487C9CF3E99FA6D0D552B9C_m0CA5030EEFF568C6799C38C780A82CA7DEC2D7B2;
extern const uint32_t g_rgctx_T_t4B9A5E019DB5D78DD1A845DA540ADD7E70403751;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t4B9A5E019DB5D78DD1A845DA540ADD7E70403751_mF08A4DFE2198A58959AB3D4FEFD4B7813C28D610;
extern const uint32_t g_rgctx_T_tD2FA00480B9714CA13A02663BEE4F877A3305852;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXBO_TisT_tD2FA00480B9714CA13A02663BEE4F877A3305852_mA77685B3A03D8C6B3917E25AECB32A197C3E8834;
extern const uint32_t g_rgctx_T_t1831C142F6E9616D44578193DC967B56C13FE241;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXSBO_TisT_t1831C142F6E9616D44578193DC967B56C13FE241_m067AB63CA7E2253B58BC9A561AE91543C8ABABD6;
extern const uint32_t g_rgctx_T_t4CC83894504382B28CE62569BB5736FAEA7CA154;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleO_TisT_t4CC83894504382B28CE62569BB5736FAEA7CA154_m07649E150728EA73124F75EC123B0FF53E4118F7;
extern const uint32_t g_rgctx_T_t315B42C029AA364A2E29635619FC6CBD1AD0FDF5;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t315B42C029AA364A2E29635619FC6CBD1AD0FDF5_m9D50AB22E3BBC3B2EA1A5C2080804D2C338D1EC5;
extern const uint32_t g_rgctx_T_tE08F8B19D43B1AE548A248F69115B6684DBC15DA;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_tE08F8B19D43B1AE548A248F69115B6684DBC15DA_m84A029E8E7CE6E04AA7A8A0F654E96AC4A6175B7;
extern const uint32_t g_rgctx_T_tFEE587E1BF29376C796C2F15B32F910B2B547B51;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXBO_TisT_tFEE587E1BF29376C796C2F15B32F910B2B547B51_m36C7C24C775EB3E776A6BFA44DF8C0BF16B56139;
extern const uint32_t g_rgctx_T_tAD2FC0D3F11DD7A22A68D32572E2FEECE8C37467;
extern const uint32_t g_rgctx_BurstSchedulingHelper_ScheduleXSBO_TisT_tAD2FC0D3F11DD7A22A68D32572E2FEECE8C37467_m0B152A53E78D41D94044E897B5E52A81EADD2EC2;
static const Il2CppRGCTXDefinition s_rgctxValues[67] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_X_m66CB5380BD08AB132DECFC8B8A0BD2F2320991BC },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_S_mF166022C26AF0155708543B6B76BF7C78AFE5E45 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_B_mEA67161F4D1C3688CCD6DB98DB34DB45BA241608 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_IJobResourceDeclarationXSBO_set_O_mB2EAD300614B5DF2E44F74C208344603265318E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobParallelForExtensions_Schedule_TisT_tFEE6C2CC4EE41F4D633C3A392FC891125FC1BB0C_mF95E2A3C2FA8BAD9C17CD38106F7E71D30BA44C1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_X_m5835F0581AAC278C162A187FE5F567BD2C4BE904 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_B_m7E782816B67A93643D36588988CB263BF8A981BD },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_IJobResourceDeclarationXBO_set_O_m0AF1F4708AC0D7674EAD81C4D1D7117E04186927 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobParallelForExtensions_Schedule_TisT_tFC71200DA82757675FA20E6947AC9BBCE3DC8C1A_m4ACD29FDE3260E6034C19FFD4BBD8B61F9F80E5B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_IJobResourceDeclarationXO_set_X_mC4CADB75E69E689F684CC4B7369D36BE89B3B8D3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_IJobResourceDeclarationXO_set_O_m1F225A094426F5B25DF84B67B8C6CCD47874261D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobParallelForExtensions_Schedule_TisT_t02D0C7C6F8E346CDD9EC2B1E94C73F138B5F44F9_mF4637B5145198EC95D0D732A9D3C5B9902C13DDD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_IJobResourceDeclarationXO_set_X_mC4CADB75E69E689F684CC4B7369D36BE89B3B8D3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_IJobResourceDeclarationXO_set_O_m1F225A094426F5B25DF84B67B8C6CCD47874261D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobExtensions_Schedule_TisT_tF29FECDEF59485D16863D6DDD0B28F48A29CC703_m12AC0D7597DD10258265238CF2E88A6F01DE1F9F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t02959BFEFFE52FD5CC444B136292D58D0263E765 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t02959BFEFFE52FD5CC444B136292D58D0263E765_IJobResourceDeclarationO_set_O_mC98FF3D6E8E26B214CBBC884059C1533A74D61B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobExtensions_Schedule_TisT_t02959BFEFFE52FD5CC444B136292D58D0263E765_m8EDCA5C71FBD6880711739544B67D29A9D193306 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C_IJobResourceDeclarationO_set_O_mC98FF3D6E8E26B214CBBC884059C1533A74D61B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IJobParallelForExtensions_Schedule_TisT_t494927F29CA57B23FE7F55B5B831CDFE94AAC71C_mF47CC9CC7B8C3DBDA48EF2ADA9E1B28A8444287B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t590514B46B6A01AAAAD23EED8A88CFDD1573DD34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXSBOInternal_TisT_t590514B46B6A01AAAAD23EED8A88CFDD1573DD34_m1B10599EBF38C8594F1DBA10A8F9300E846B2349 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t123248DF5D1BFB5BDA3649117C50F6C912779DBA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXSBOInternal_TisT_t123248DF5D1BFB5BDA3649117C50F6C912779DBA_m090C10DA36B5FC65F6E713E0D129FF1BFCEEB225 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1321887F1A9E59970EA2C04608494033672757F1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_t1321887F1A9E59970EA2C04608494033672757F1_mEEFE6B49780CCFCE0602267DD66CDB8C08E902D0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tCAE262A78F76837B613D9F06D1927EB829EEC058 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_tCAE262A78F76837B613D9F06D1927EB829EEC058_m33319984CA0CA83115467157D27E15FA4244CB67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6591166E4F79C6FBF7DF87B920338E60AF434933 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXBOInternal_TisT_t6591166E4F79C6FBF7DF87B920338E60AF434933_m2A73BC1F9D91AA8BD1602F40417F0098F5EA1802 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE2884381C19921D56ED12AD9DCBA5861B839DB6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleOInternal_TisT_tE2884381C19921D56ED12AD9DCBA5861B839DB6A_m90A12ADBD5513079EF73D7FCFD02D0B2396D5B4C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t86AD72CE087A47C911AB6369DDD307A580EA126C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleOInternal_TisT_t86AD72CE087A47C911AB6369DDD307A580EA126C_mDB957E3EDC0FC36DEA088E15540AC0662BC5ADDD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t23DF52D8CA122ABB522D0722421A649FB813B870 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t23DF52D8CA122ABB522D0722421A649FB813B870_m4E8A482F5D7FD25B2C4992FA21859E127977597D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE333D1C4B84CD4C5F070BB072FB861508231F80D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_tE333D1C4B84CD4C5F070BB072FB861508231F80D_m449FF2D567ADF767D24115F258CDD670DAC9E7D9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t94FED5AD40B9628CF5E3570BE3CB6C4C4D29DA10 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t94FED5AD40B9628CF5E3570BE3CB6C4C4D29DA10_m545292C9E73472A41D286306A1AF07C0E8CEF2D7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t41C7469D197D42BF2FFB3DDA2983BBD01D168A0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t41C7469D197D42BF2FFB3DDA2983BBD01D168A0E_m6A75760297E2FB089D89E49960CDF781C956C618 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1F636060D53F0AA32A366E6B8B2F3DF3BC9628FD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXOInternal_TisT_t1F636060D53F0AA32A366E6B8B2F3DF3BC9628FD_mFD99CED183133EA27083BF401DBB496960F270B8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7EDBD4FE126B76090487C9CF3E99FA6D0D552B9C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t7EDBD4FE126B76090487C9CF3E99FA6D0D552B9C_m0CA5030EEFF568C6799C38C780A82CA7DEC2D7B2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4B9A5E019DB5D78DD1A845DA540ADD7E70403751 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t4B9A5E019DB5D78DD1A845DA540ADD7E70403751_mF08A4DFE2198A58959AB3D4FEFD4B7813C28D610 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD2FA00480B9714CA13A02663BEE4F877A3305852 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXBO_TisT_tD2FA00480B9714CA13A02663BEE4F877A3305852_mA77685B3A03D8C6B3917E25AECB32A197C3E8834 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1831C142F6E9616D44578193DC967B56C13FE241 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXSBO_TisT_t1831C142F6E9616D44578193DC967B56C13FE241_m067AB63CA7E2253B58BC9A561AE91543C8ABABD6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4CC83894504382B28CE62569BB5736FAEA7CA154 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleO_TisT_t4CC83894504382B28CE62569BB5736FAEA7CA154_m07649E150728EA73124F75EC123B0FF53E4118F7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t315B42C029AA364A2E29635619FC6CBD1AD0FDF5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_t315B42C029AA364A2E29635619FC6CBD1AD0FDF5_m9D50AB22E3BBC3B2EA1A5C2080804D2C338D1EC5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE08F8B19D43B1AE548A248F69115B6684DBC15DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXO_TisT_tE08F8B19D43B1AE548A248F69115B6684DBC15DA_m84A029E8E7CE6E04AA7A8A0F654E96AC4A6175B7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFEE587E1BF29376C796C2F15B32F910B2B547B51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXBO_TisT_tFEE587E1BF29376C796C2F15B32F910B2B547B51_m36C7C24C775EB3E776A6BFA44DF8C0BF16B56139 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAD2FC0D3F11DD7A22A68D32572E2FEECE8C37467 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BurstSchedulingHelper_ScheduleXSBO_TisT_tAD2FC0D3F11DD7A22A68D32572E2FEECE8C37467_m0B152A53E78D41D94044E897B5E52A81EADD2EC2 },
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Barracuda;
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_CodeGenModule = 
{
	"Unity.Barracuda.dll",
	2996,
	s_methodPointers,
	532,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	27,
	s_rgctxIndices,
	67,
	s_rgctxValues,
	&g_DebuggerMetadataRegistrationUnity_Barracuda,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
