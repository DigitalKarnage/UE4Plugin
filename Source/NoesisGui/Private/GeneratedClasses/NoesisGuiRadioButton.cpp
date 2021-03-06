////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiRadioButton.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiRadioButton::UNoesisGuiRadioButton(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiRadioButton::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::RadioButton* NoesisRadioButton = NsDynamicCast<Noesis::Gui::RadioButton*>(InNoesisComponent);
	check(NoesisRadioButton);

}

	void UNoesisGuiRadioButton::BeginDestroy()
{
	Super::BeginDestroy();

	Noesis::Gui::RadioButton* NoesisRadioButton = NsDynamicCast<Noesis::Gui::RadioButton*>(NoesisComponent.GetPtr());
	if (!NoesisRadioButton)
		return;

}

