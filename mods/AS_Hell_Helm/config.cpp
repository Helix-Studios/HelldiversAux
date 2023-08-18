class CfgPatches {
    class AS_HELL_Helmets {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Characters_F", 
            "rhsusf_main",
            "rhsusf_infantry2",
            "rhsusf_c_weapons",
            "rhsusf_c_troops",
            };
    };
};

// Factions

class CfgFactionClasses {
  class AS_HD_Faction {
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
	/*extern*/ class ItemCore;
  /*extern*/ class HeadgearItem;
  /*extern*/ class H_Beret_02;
  /*extern*/ class rhs_altyn;
  /*extern*/ class rhsusf_hgu56p_black;
  /*extern*/ class rhsusf_hgu56p_mask_black;
  /*extern*/ class rhsusf_hgu56p_visor_black; 
  /*extern*/ class rhsusf_hgu56p_visor_mask_black;
  
  class AS_HELL_Beret: H_Beret_02 {
    author = "Rib";
    _generalMacro = "HD_Beret";
    displayName = "[HD Armoury] Helldivers Beret";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\beret.paa"};
  };

  class AS_TFO_Beret: AS_HELL_Beret {
    displayName = "[HD Armoury] Taskforce ONI Beret";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\tfoberet.paa"};
  };

  class AS_HELL_HGU56P_V: rhsusf_hgu56p_visor_black {
    author = "Rib";
    displayName = "[HD Armoury] HGU56P/Visor (ONI)";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\ONI_HGU56P_co.paa", ""};
  };

  class AS_HELL_HGU56P_M: rhsusf_hgu56p_mask_black {
    author = "Rib";
    displayName = "[HD Armoury] HGU56P/Mask (ONI)";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\ONI_HGU56P_co.paa", ""};
  };
  class AS_HELL_HGU56P_MV: rhsusf_hgu56p_visor_mask_black {
    author = "Rib";
    displayName = "[HD Armoury] HGU56P/Mask/Visor (ONI)";
    hiddenSelections[] = {"camo","patches"};
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\ONI_HGU56P_co.paa", ""};
  };
  class AS_HELL_HGU56P_MV_Milk: rhsusf_hgu56p_visor_mask_black {
    author = "Rib";
    displayName = "[HD Armoury] HGU56P/Mask/Visor (Milkman)";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\ONI_HGU56P_milk_co.paa", ""};
  };
  class AS_HELL_HGU56P_MV_Rib: rhsusf_hgu56p_visor_mask_black {
    author = "Rib";
    displayName = "[HD Armoury] HGU56P/Mask/Visor (Rib)";
    hiddenSelectionsTextures[] = {"\AS_HELL_Helm\Data\ONI_HGU56P_Rib_co.paa", ""};
  };
};