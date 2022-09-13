class CfgPatches {
    class HS_HELL_Vests {
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
  class Uniform_Base: ItemCore {
    class ItemInfo;
  };
  class VestItem;
  class Vest_Camo_Base: ItemCore {
    class ItemInfo;
  };
  /*extern*/ class V_mas_cia_PlateCarrierAR_rgr; //Auto Rif. Rig
  /*extern*/ class V_mas_cia_PlateCarrier1_rgr; //Grenade Rig
  /*extern*/ class V_mas_cia_PlateCarrierLR_rgr; //Light Rig
  /*extern*/ class V_mas_cia_PlateCarrierRF_rgr; //Recon Force

  class HS_HELL_V_Platecarrier_OP_Blk: V_mas_cia_PlateCarrierLR_rgr {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Blk";
    displayName = "[Helldivers Armoury] Platecarrier Black (Operator)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_B", "\HS_Hell_Vests\Data\HD_V_acc_B"};
  };
  class HS_HELL_V_Platecarrier_AR_Blk: V_mas_cia_PlateCarrierAR_rgr {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_AR_Blk";
    displayName = "[Helldivers Armoury] Platecarrier Black (Heavy)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_B", "\HS_Hell_Vests\Data\HD_V_acc_B"};
  };
  class HS_HELL_V_Platecarrier_GL_Blk: V_mas_cia_PlateCarrier1_rgr {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_GL_Blk";
    displayName = "[Helldivers Armoury] Platecarrier Black (Grenadier)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_B", "\HS_Hell_Vests\Data\HD_V_acc_B"};
  };
  class HS_HELL_V_Platecarrier_RF_Blk: V_mas_cia_PlateCarrierRF_rgr {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_RF_Blk";
    displayName = "[Helldivers Armoury] Platecarrier Black (Recon)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_B", "\HS_Hell_Vests\Data\HD_V_acc_B"};
  };

  class HS_HELL_V_Platecarrier_OP_Coy: HS_HELL_V_Platecarrier_OP_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Coy";
    displayName = "[Helldivers Armoury] Platecarrier Coyote (Operator)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_T", "\HS_Hell_Vests\Data\HD_V_acc_T"};
  };
  class HS_HELL_V_Platecarrier_AR_Coy: HS_HELL_V_Platecarrier_AR_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_AR_Coy";
    displayName = "[Helldivers Armoury] Platecarrier Coyote (Heavy)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_T", "\HS_Hell_Vests\Data\HD_V_acc_T"};
  };
  class HS_HELL_V_Platecarrier_GL_Coy: HS_HELL_V_Platecarrier_GL_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_GL_Coy";
    displayName = "[Helldivers Armoury] Platecarrier Coyote (Grenadier)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_T", "\HS_Hell_Vests\Data\HD_V_acc_T"};
  };
  class HS_HELL_V_Platecarrier_RF_Coy: HS_HELL_V_Platecarrier_RF_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_RF_Coy";
    displayName = "[Helldivers Armoury] Platecarrier Coyote (Recon)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_T", "\HS_Hell_Vests\Data\HD_V_acc_T"};
  };

  class HS_HELL_V_Platecarrier_OP_Rgr: HS_HELL_V_Platecarrier_OP_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Ranger (Operator)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_R", "\HS_Hell_Vests\Data\HD_V_acc_R"};
  };
  class HS_HELL_V_Platecarrier_AR_Rgr: HS_HELL_V_Platecarrier_AR_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Ranger (Heavy)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_R", "\HS_Hell_Vests\Data\HD_V_acc_R"};
  };
  class HS_HELL_V_Platecarrier_GL_Rgr: HS_HELL_V_Platecarrier_GL_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Ranger (Grenadier)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_R", "\HS_Hell_Vests\Data\HD_V_acc_R"};
  };
  class HS_HELL_V_Platecarrier_RF_Rgr: HS_HELL_V_Platecarrier_RF_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Ranger (Recon)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_R", "\HS_Hell_Vests\Data\HD_V_acc_R"};
  };

  class HS_HELL_V_Platecarrier_OP_Win: HS_HELL_V_Platecarrier_OP_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Win";
    displayName = "[Helldivers Armoury] Platecarrier Winter (Operator)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_W", "\HS_Hell_Vests\Data\HD_V_acc_W"};
  };
  class HS_HELL_V_Platecarrier_AR_Win: HS_HELL_V_Platecarrier_AR_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Winter (Heavy)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_W", "\HS_Hell_Vests\Data\HD_V_acc_W"};
  };
  class HS_HELL_V_Platecarrier_GL_Win: HS_HELL_V_Platecarrier_GL_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Rgr";
    displayName = "[Helldivers Armoury] Platecarrier Winter (Grenadier)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_W", "\HS_Hell_Vests\Data\HD_V_acc_W"};
  };
  class HS_HELL_V_Platecarrier_RF_win: HS_HELL_V_Platecarrier_RF_Blk {
    author = "Helix Studios + Massi";
    _generalMacro = "HS_H_V_PC_OP_Win";
    displayName = "[Helldivers Armoury] Platecarrier Winter (Recon)";
    hiddenSelectionsTextures[] = {"\HS_Hell_Vests\Data\HD_V_W", "\HS_Hell_Vests\Data\HD_V_acc_W"};
  };

};

