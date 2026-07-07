#include "InteractableActor.h"

AInteractableActor::AInteractableActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Scene);
}

void AInteractableActor::BlockUsage()
{
	// 已知信息只能确认：
	// 函数名：BlockUsage
	// 所属类：InteractableActor
	// 参数：无
	// 返回值：void
	//
	// BP_LadderDoor 里会调用它，但该父类函数的内部逻辑
	// 不在 BP_LadderDoor.json 里，所以这里保持空实现。
}

void AInteractableActor::OnActorUsed_Implementation(ACharacter* Character)
{
	// 接口默认实现。
	// BP_LadderDoor 自己实现了 OnActorUsed，所以父类这里可以为空。
}