// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Weinhofer_LFBTarget : TargetRules
{
	public Weinhofer_LFBTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Weinhofer_LFB" } );
	}
}
