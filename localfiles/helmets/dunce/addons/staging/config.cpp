////////////////////////////////////////////////////////////////////
//DeRap: staging\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 09 11:01:02 2022 : 'file' last modified on Thu Jan 01 00:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class dunce
	{
		author = "big boi";
		requiredAddons[] = {"A3_characters_f","A3_data_f"};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class CfgWeapons
{
	class ItemInfo;
	class ItemCore;
	class HeadgearItem;
	class VestItem;
	class UniformInfo;
	class Vest_Camo_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			maximumLoad = 0;
			mass = 0;
		};
	};
	class H_Test_Headgear: ItemCore
	{
		scope = 2;
		displayName = "Test hat";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model = "\Kenrobi\dunce.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Kenrobi\dunce.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			subItems[] = {"Integrated_NVG_F"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
class cfgMods
{
	author = "rib";
	timepacked = "1667991623";
};
