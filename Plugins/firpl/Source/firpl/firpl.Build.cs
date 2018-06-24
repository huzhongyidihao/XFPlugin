// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
public class firpl : ModuleRules
{
    private string ModulePath //第三方库
    {
        // get { return Path.GetDirectoryName(RulesCompiler.GetModuleFilename(this.GetType().Name)); }  
        get { return ModuleDirectory; }
    }
    private string ThirdPartyPath //第三方库目录
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../kdxf/")); }
    }
 //   private string XFLibPath //第三方库 xflib的目录
 //   {
 //       get { return Path.GetFullPath(Path.Combine(ThirdPartyPath, "xflib")); }
 //   }
    public firpl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"firpl/Public","kdxf/xflib/include"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"firpl/Private",
                
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core","InputCore","Json",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                
                
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        //此处加载第三方库 讯飞
        LoadThirdPartyLib(Target);


    }

    public bool LoadThirdPartyLib(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;
        if((Target.Platform== UnrealTargetPlatform.Win64)||(Target.Platform== UnrealTargetPlatform.Win32)) //目标平台判断
        {
            isLibrarySupported = true;
            System.Console.WriteLine("---??????isLibrarySupported true");
            string LibrariesPath = Path.Combine(ThirdPartyPath, "xflib","libs");
            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath,"msc_x64.lib"));
        }

        if(isLibrarySupported)//是否成功加载库
        {
            System.Console.WriteLine("--!!!!!!!PublicAdditionalLibraries.Add true");
            PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "xflib", "include"));
            
        }
        return isLibrarySupported;
    }
}
