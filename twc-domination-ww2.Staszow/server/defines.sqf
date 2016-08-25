/*
Written by [TWC] jayman
Holds all defines included the #include for server side functions and other variables
Variables allow the mission to easily be switched to different mods and maps.
*/
//Calls all server side functions.
#include "func\init.sqf";

//creates the badAO's array based on map given in /init
if (whatMap == "Altis")then{badAOs = ["Agia Triada","Telos"];};
if (whatMap == "Sahrani")then{badAOs = ["PARAISO","Rashidah"];};
if (whatMap == "Chernarus")then{badAOs = [""];};
if (whatMap == "Staszow")then{badAOs = [""];};

//sets up enemy variables based on mods
if(isModded == 0)then{
	tank = ["O_MBT_02_cannon_F"];
	ifv = ["O_APC_Tracked_02_cannon_F"];
	apc = ["O_APC_Wheeled_02_rcws_F"];
	squad = (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad");
	squadAT = (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AT");
	squadAA = (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AA");
	aa = ["O_APC_Tracked_02_AA_F"];
	radioTower = "Land_TTowerBig_2_F";
	mortar = ["O_Mortar_01_F"];
	arty = ["O_MBT_02_arty_F"];
	tankaaCombined = (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Armored" >> "OIA_TankPlatoon_AA");
	enemyFlag = "flag_CSAT";
};
if(isModded == 1) then{
	badAOs = ["PARAISO","Rashidah"];
	tank = ["rhs_t72ba_tv"];
	ifv = ["rhs_bmp1_msv"];
	apc = ["rhs_btr70_msv"];
	squad = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_squad");
	squadAT = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_AT");
	squadAA = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_AA");
	aa = ["rhs_zsu234_aa"];
	radioTower = "Land_TTowerBig_2_F";
	mortar = ["rhs_2b14_82mm_vdv"];
	arty = ["rhs_2s3_Tv"];
	tankaaCombined = (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Armored" >> "OIA_TankPlatoon_AA");
	enemyFlag = "rhs_flag_Russia";
};
if(isModded == 2)then{
	tank = ["LIB_PzKpfwIV_H"];
	ifv = ["LIB_StuG_III_G"];
	apc = ["LIB_SdKfz251"];
	squad = (configfile >> "CfgGroups" >> "West" >> "LIB_WEHRMACHT" >> "Infantry" >> "LIB_GER_infantry_squad");
	squadAT = (configfile >> "CfgGroups" >> "West" >> "LIB_WEHRMACHT" >> "Infantry" >> "LIB_GER_AT_squad");
	squadAA = (configfile >> "CfgGroups" >> "West" >> "LIB_WEHRMACHT" >> "Infantry" >> "LIB_GER_scout_squad");
	aa = ["LIB_SdKfz_7_AA"];
	radioTower = "Land_TTowerBig_2_F";
	mortar = ["O_Mortar_01_F"];
	arty = ["LIB_Pak40"];
	tankaaCombined = (configfile >> "CfgGroups" >> "West" >> "LIB_PANZERWAFFE" >> "Armored" >> "LIB_GER_PzKpfwVI_E_Platoon");
	enemyFlag = "Faction_CUP_OPFOR";
};