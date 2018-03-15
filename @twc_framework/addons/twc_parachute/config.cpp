class CfgPatches {
	class TWC_Parachute {
		units[] = {
			"twc_c5_hercules",
			"TWC_T10_Parachute",
			"TWC_T10_Parachute_backpack"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Air_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Air_F_Beta",
			"CBA_XEH_A3",
			"ace_common"
		};
	};
};

class CfgFactionClasses {
	// Included again, to make it not rely on config entries for public
	class TWC_General {
		displayName = "TWC General Operation Units";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgEditorSubcategories {
	class TWC_ForceType_Airborne {
		displayName = "Airborne";
	};
};

class CfgFunctions {
	class TWC {
		class TWC_Paradrop {
			file = "twc_parachute\functions";

			class CanJump { };
			class JumpOut { };
			class CutChute { };
			class LandingSound { };
			
			class PrepJump { };
		};
	};
};

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		chute_pos = "chute_pos";
	};
};

class CfgCoreData {
	cobraLight = "twc_parachute\cobraSvetlo.p3d";
	marker = "twc_parachute\obrysove svetlo.p3d";
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class Crew;
		class KIA_Para_Pilot;
		class chute_pos: Crew {
			file= "twc_parachute\data\anim\chute_pos";
			interpolateTo[]={KIA_Para_Pilot,1};
		};
	};
};

#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"