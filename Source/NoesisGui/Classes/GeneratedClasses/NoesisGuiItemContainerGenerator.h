////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "NoesisGuiBaseComponent.h"
#include "NoesisGuiItemContainerGenerator.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiItemContainerGenerator : public UNoesisGuiBaseComponent
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property Status
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisGuiGeneratorStatus GetStatus();

	// UObject interface
	virtual void BeginDestroy() override;
	// End of UObject interface
};

