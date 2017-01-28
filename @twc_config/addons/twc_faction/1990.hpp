	class 1990_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (90`s Woodland)";
		faction="twc_faction";
		editorSubcategory = "Men_1990W";
		vehicleClass="Men_1990W";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_Smock_DPMT";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACRE_PRC343"	
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACRE_PRC343"	
		};		
	};
	class 1990_British_Sectionleader: 1990_British_Base
	{
		scope=2;
		displayName="Section Leader (90`s Woodland)";
		icon="iconManLeader";
		backpack="TWC_Backpack_1990_Sectionlead";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer",
			"twc_browninghp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer",
			"twc_browninghp"
		};
		magazines[]=
		{
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_Rifleman: 1990_British_Base
	{
		scope=2;
		displayName="RifleMan(90`s Woodland)";
		backpack="UK3CB_BAF_B_Bergen_DPMT_Rifleman_A";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};	
	};
	class 1990_British_Gunner: 1990_British_Base
	{
		scope=2;
		displayName="Gunner (90`s Woodland)";
		icon="iconManMG";
		backpack="TWC_Backpack_1990_Gunner";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_2IC: 1990_British_Rifleman
	{
		displayName="2IC(90`s Woodland)";
		backpack="TWC_Backpack_1990_2IC";
	};
	class 1990_British_CGG: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Gunner (90`s Woodland)";
		backpack="TWC_Backpack_1990_CG";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Carl_Gustav"
		};
	};
	class 1990_British_CGAss: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Assistant(90`s Woodland)";
		backpack="TWC_Backpack_1990_CGAss";
	};
	class 1990_British_Platoon_Commander: 1990_British_Base
	{
		scope=2;
		displayName="Platoon Commander(90`s Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Command";
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D",
			"twc_browninghp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D",
			"twc_browninghp"
		};
		magazines[]=
		{
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_7x45acp_MHP",
			"rhsusf_mag_7x45acp_MHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
	};
	class 1990_British_Platoon_Sergeant: 1990_British_Platoon_Commander
	{
		displayName="Platoon Sergeant(90`s Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Sergeant";
	};
	class 1990_British_Medic: 1990_British_Base
	{
		scope=2;
		displayName="Medic(90`s Woodland)";
		backpack="TWC_Backpack_1990_Medic";
		weapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"TWC_Sterling_Sub"
		};
		magazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_HeliPilot: 1990_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot (90`s Woodland)";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub"
		};
		magazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"

		};
	};
	class 1990_British_JetPilot: 1990_British_HeliPilot
	{
		displayName="Jet Pilot (90`s Woodland)";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};	
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_browninghp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_browninghp"
		};
		magazines[]=
		{
			"twc_13Rnd_9mm_Mag",
			"twc_13Rnd_9mm_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"twc_13Rnd_9mm_Mag",
			"twc_13Rnd_9mm_Mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_MilanGunner: 1990_British_Base
	{
		scope=2;
		displayName="Milan Gunner (90`s Woodland)";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Milan_Tripod_Disassemabled"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub",
			"TWC_Milan_Tripod_Disassemabled"
		};
		magazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell"
		};
	};
	class 1990_British_MilanAssistant: 1990_British_MilanGunner
	{
		displayName="Milan Assistant(90`s Woodland)";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub",
			"TWC_Milan_Launcher_Disassemabled"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"TWC_Milan_Launcher_Disassemabled"
		};
	};
	class 1990_British_MortarGunner: 1990_British_Rifleman
	{
		displayName="Mortar Gunner(90`s Woodland)";
		backpack="TWC_Backpack_1990_Mortar";
		weapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub",
			"UK3CB_BAF_M6"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub",
			"UK3CB_BAF_M6"
		};
		magazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};
		Respawnmagazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};	
	};
	
//////////////////////////////  Mechanised  //////////////////////////////
	class 1990_British_Rifleman_Mechanised: 1990_British_Rifleman
	{
		displayName="Rifleman (90's Mechanised)";
		backpack="";
	};
	class 1990_British_Gunner_Mechanised: 1990_British_Gunner
	{
		displayName="Gunner (90's Mechanised)";
		backpack="";
	};
	class 1990_British_2IC_Mechanised: 1990_British_2IC
	{
		displayName="2IC (90's Mechanised)";
		backpack="";
	};
	class 1990_British_Vehicle_Commander: 1990_British_Base
	{
		displayName="Vehicle Commander(90`s Woodland)";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMT";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"TWC_Sterling_Sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"TWC_Sterling_Sub"
		};
		magazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
    class 1990_British_Vehicle_Crew: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Crew(90`s Woodland)";
		backpack="";
	};
//////////////////////////////////////////////////////////////////
//                                                              //
//                    1990 Desert British                       //
//                                                              //
//////////////////////////////////////////////////////////////////

	class 1990_British_Sectionleader_Desert: 1990_British_Sectionleader
	{
		displayName="Section Leader(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		backpack="TWC_Backpack_1990_Sectionlead_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Rifleman_Desert: 1990_British_Rifleman
	{
		displayName="RifleMan(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="UK3CB_BAF_B_Bergen_DDPM_Rifleman_A";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_CGG_Desert: 1990_British_CGG
	{
		displayName="Carl-Gustaf Gunner (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		icon="iconManAT";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_CG_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_CGAss_Desert: 1990_British_CGAss
	{
		displayName="Carl-Gustaf Assistant (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_CGAss_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Gunner_Desert: 1990_British_Gunner
	{
		displayName="Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Gunner_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_2IC_Desert: 1990_British_2IC
	{
		displayName="2IC (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_2IC_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Platoon_Commander_Desert: 1990_British_Platoon_Commander
	{
		displayName="Platoon Commander(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Platoon_Command_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Platoon_Sergeant_Desert: 1990_British_Platoon_Sergeant
	{
		scope=2;
		displayName="Platoon Sergeant(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Platoon_Sergeant_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_Medic_Desert: 1990_British_Medic
	{
		displayName="Medic(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Medic_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
    class 1990_British_HeliPilot_Desert: 1990_British_HeliPilot
	{
		displayName="Helicopter Pilot(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 1990_British_MilanGunner_Desert: 1990_British_MilanGunner
	{
		displayName="Milan Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_MilanAssistant_Desert: 1990_British_MilanAssistant
	{
		displayName="Milan Assistant(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 1990_British_MortarGunner_Desert: 1990_British_MortarGunner
	{
		displayName="Mortar Gunner(90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_1990_Mortar_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};	
	};
//////////////////////////////  Mechanised  //////////////////////////////
	class 1990_British_Rifleman_Mechanised_Desert: 1990_British_Rifleman_Desert
	{
		displayName="Rifleman (90's Mechanised Desert)";
		backpack="";
	};
	class 1990_British_Gunner_Mechanised_Desert: 1990_British_Gunner_Desert
	{
		displayName="Gunner (90's Mechanised Desert)";
		backpack="";
	};
	class 1990_British_2IC_Mechanised_Desert: 1990_British_2IC_Desert
	{
		displayName="2IC (90's Mechanised Desert)";
		backpack="";
	};
    class 1990_British_Vehicle_Commander_Desert: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Commander (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
    class 1990_British_Vehicle_Crew_Desert: 1990_British_Vehicle_Crew
	{
		displayName="Vehicle Crew (90`s Desert)";
		editorSubcategory = "Men_1990D";
		vehicleClass="Men_1990D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};