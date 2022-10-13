class CfgPatches {
    class HS_HELL_Helmets {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Characters_F", 
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
  /*extern*/ class ItemCore;
  /*extern*/ class UniformItem;
  /*extern*/ class H_Beret_02;
  /*extern*/ class rhs_altyn;
  class Uniform_Base: ItemCore {
    class ItemInfo;
  };
  class H_HelmetB: ItemCore { 
      class ItemInfo; 
  };
  
  class HS_HELL_Beret: H_Beret_02 {
    author = "Helix Studios";
    _generalMacro = "HD_Beret";
    displayName = "[Helldivers Armoury] Beret";
    hiddenSelectionsTextures[] = {"\HS_HELL_Helm\Data\beret.paa"};
  };

  class HS_HELL_Altyn: rhs_altyn {
    author = "Helix Studios";
    _generalMacro = "HD_Altyn";
    displayName = "[Helldivers Armoury] Altyn";
    hiddenSelectionsTextures[] = {"\HS_HELL_Helm\Data\Altyn.paa"};
  };

};