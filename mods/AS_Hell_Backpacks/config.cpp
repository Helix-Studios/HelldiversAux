class CfgPatches {
    class AS_HELL_Backpacks {
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

class CfgVehicles {
  /*extern*/ class B_mas_cia_AssaultPack_b;
  /*extern*/ class B_mas_cia_AssaultPack_m;
  /*extern*/ class B_mas_cia_AssaultPack;
  /*extern*/ class B_mas_cia_AssaultPack_w;
  /*extern*/ class B_mas_cia_AssaultPack_w2;
  /*extern*/ class B_mas_cia_KitBag_LB;
  /*extern*/ class B_mas_cia_KitBag_LD;
  /*extern*/ class B_mas_cia_KitBag_LT;
  /*extern*/ class B_mas_cia_KitBag_LW;

  class AS_Hell_AP: B_mas_cia_AssaultPack {
    displayName = "[HD Armoury] Assault Pack Olive";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_AP_b: B_mas_cia_AssaultPack_b {
    displayName = "[HD Armoury] Assault Pack Black";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_AP_m: B_mas_cia_AssaultPack_m {
    displayName = "[HD Armoury] Assault Pack Multicam";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_AP_w: B_mas_cia_AssaultPack_w {
    displayName = "[HD Armoury] Assault Pack Winter";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_AP_w2: B_mas_cia_AssaultPack_w2 {
    displayName = "[HD Armoury] Assault Pack Winter 2";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_KB_LB: B_mas_cia_KitBag_LB {
    displayName = "[HD Armoury] Kitbag Black";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_KB_LD: B_mas_cia_KitBag_LD {
    displayName = "[HD Armoury] Kitbag D?";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_KB_LT: B_mas_cia_KitBag_LT {
    displayName = "[HD Armoury] Kitbag Tan";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };
  class AS_Hell_KB_LW: B_mas_cia_KitBag_LW {
    displayName = "[HD Armoury] Kitbag Winter";
    tf_encryptionCode = "tf_west_radio_code";
    tf_range = 30000;
    tf_subtype = "digital_lr";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
  };

};


