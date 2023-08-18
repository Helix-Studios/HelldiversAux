class CfgPatches 
{
	class dunce
	{
		author = "big boi";
		requiredAddons[] = {"A3_characters_f","A3_data_f"};
		units[] = {};
		weapons[] = {

        };
		requiredVersion = 0.1;
	};
};
 //fix this for helldivers!!!!!!!!!!!
#include "basicdefines_A3.hpp"

class CfgWeapons
{
    class ItemInfo;
	class ItemCore;
	class HeadgearItem;
	class VestItem;
	class UniformInfo;
	
    class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
	{
		scope = 0;	/// base classes should not be visible in editor
		allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		class ItemInfo: VestItem
		{
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		LOAD(0,0) /// macro from basicdefines_A3.hpp
		};
	};

	class H_Test_Headgear: ItemCore {
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName  = "Test hat"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa"; /// this looks fairly similar
		model   = "\Kenrobi\dunce.p3d"; /// what model does the cap use
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\Kenrobi\dunce.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides
			hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
			subItems[] = {"Integrated_NVG_F"}; //if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well. Currently works only for Headgear + NVG + Radio item combinations.
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 6; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};

};