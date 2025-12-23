class CfgPatches
{
	class BBD_VignettesDownedButNotOut
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class BBD_VignettesDownedButNotOut_Mod
	{
		dir 		= "BBD_VignettesDownedButNotOut";
		name 		= "";
		author 		= "BuckleBD";
		credits 	= "";
		creditsJSON = "";
		version 	= 1.0.0;
		extra 		= 0;
		type 		= "mod";
		inputs 		= "";
		picture 	= "";
		logo 		= "";
		logoSmall 	= "";
		logoOver 	= "";
		action 		= "";

		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BBD_VignettesDownedButNotOut/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"BBD_VignettesDownedButNotOut/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"BBD_VignettesDownedButNotOut/scripts/5_mission"};
			};
		};
	};
};