////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// KismetCompiler includes
#include "KismetCompilerModule.h"

class FNoesisGuiBlueprintCompiler : public IBlueprintCompiler
{
	// IBlueprintCompiler interface
	virtual bool CanCompile(const UBlueprint* Blueprint) override;
	virtual void PreCompile(UBlueprint* Blueprint) override;
	virtual void Compile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompilerOptions, FCompilerResultsLog& Results, TArray<UObject*>* ObjLoaded) override;
	virtual void PostCompile(UBlueprint* Blueprint) override;
	// End of IBlueprintCompiler interface
};
