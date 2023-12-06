// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project003_createcpp : ModuleRules
{
	public project003_createcpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
