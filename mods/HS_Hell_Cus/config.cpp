class CfgPatches {
    class HS_HELL_Customs {
        author = "Helix Studios";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F", 
            "rhsusf_main",
            "rhs_infantry2",
            "rhsusf_c_weapons",
            "rhsusf_c_troops",
            "mas_cia_jsog"
          };
    };
};

// Factions

class CfgFactionClasses {
  class HS_HD_Faction {
    scope = 2;
    scopeCurator = 2;
    displayName = "Helldivers";
    priority = 3;
    side = 1;
    icon = "";
  };
};

class CfgEditorSubcategories {
  class HD_Categ_Cus {
    displayName = "Helldivers Customs";
  };
  class HD_Categ_Inf {
    displayName = "Helldivers Infantry";
  };
  class HD_Categ_Grn {
    displayName = "Helldivers Ground";
  };
  class HD_Categ_Avi {
    displayName = "Helldivers Aviation";
  };
  class HD_Categ_Uni {
    displayName = "Helldivers Uniforms";
  };
};

class UniformSlotInfo { 
    slotType = 0; 
    linkProxy = ""; 
}; 

class CfgWeapons {
  /*extern*/ class ItemInfo;
  /*extern*/ class ItemCore;
  /*extern*/ class HeadgearItem;
  /*extern*/ class UniformItem;
  /*extern*/ class UniformInfo;

  /*extern*/ class H_Beret_02;
  /*extern*/ class rhs_altyn;

  class Uniform_Base: ItemCore {
    class ItemInfo;
  };
  class H_HelmetB: ItemCore { 
      class ItemInfo; 
  };

  /// Helmets
  class HS_HELL_Cus_Altyn: rhs_altyn {
    author = "Helix Studios";
    displayName = "[Helldivers Customs] Altyn";
    hiddenSelectionsTextures[] = {"\HS_HELL_Cus\Data\Helmets\altyn.paa"};
  };

  class HS_Hell_Cus_Dunce: ItemCore {
    scope = 2;
    displayName = "[Helldivers Customs] Ardys Duncecap";
    picture = "\HS_HELL_Cus\Data\Helmets\dunce_logo.jpg";
    model = "\HS_HELL_Cus\Data\dunce";
    HiddenSelections[] = ["camo"]
    HiddenSelectionsTexture[] = ["\HS_HELL_Cus\Data\Helmets\Dunce_co.paa"]
    class ItemInfo: HeadgearItem {
      mass = 4;
      uniformModel = "\HS_HELL_Cus\Data\dunce";
      allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			subItems[] = {"Integrated_NVG_F"};
      class HitpointsProtectionInfo {
        class Head {
          hitpointName = "HitHead";
          armor = 12;
          passThrough = 0.5;
        };
      };
    };
  };

  /// Vests
  /// Uniforms
};