////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiMatrixTransform.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiMatrixTransform::UNoesisGuiMatrixTransform(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiMatrixTransform::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::MatrixTransform* NoesisMatrixTransform = NsDynamicCast<Noesis::Gui::MatrixTransform*>(InNoesisComponent);
	check(NoesisMatrixTransform);

}

	void UNoesisGuiMatrixTransform::BeginDestroy()
{
	Super::BeginDestroy();

	Noesis::Gui::MatrixTransform* NoesisMatrixTransform = NsDynamicCast<Noesis::Gui::MatrixTransform*>(NoesisComponent.GetPtr());
	if (!NoesisMatrixTransform)
		return;

}

