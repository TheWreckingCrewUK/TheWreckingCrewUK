class CfgFunctions {
	// Core ACE adjustments
	class ace_medical {
		tag = "ace_medical";
		
		class ace_medical {
			class displayPatientInformation {
				file = "twc_medical\functions\fn_displayPatientInformation.sqf";
			};
		};
	};
	
	class ace_medical_treatment {
		tag = "ace_medical_treatment";
		
		class ace_medical_treatment {
			class diagnose {
				file = "twc_medical\functions\fn_diagnose.sqf";
			};
		};
	};
	
	class ace_medical_gui {
		tag = "ace_medical_gui";
		
		class ace_medical_gui {
			class updateinjurylist {
				file = "twc_medical\functions\fn_updateinjurylist.sqf";
			};
		};
	};
	
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\functions";
			// Init
			class init {};
			class serverInit {};
			class settings {};
			
			// Generics
			class addTime {};
			class getBloodVolume {};
			class extendedVitalLoop {};
			class logToRPT {};
			class painkillers {};
			class painkillerslocal {};
			class fullyBandageUnit {};
			class fullHealWithoutLog {};
			class removeMedicalItem {};
			class onOverDose {};
			class addPain {};

			// Uncon Loop
			class extendedUnconLoop {};
			class handleUncon {};
			class handleAIUncon {};
			class unconSoundLoop {};

			// Suture
			class canSuture {};
			class sutureKitTime {};
			class sutureKitSuccess {};
			class sutureKitProgress {};
			class sutureKitFailure {};
			class selectSutureWound {};
			
			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
			class checkDamage {};
		};
		
		class modules {
			file = "twc_medical\modules";
			
			class moduleMedical {}; // public CPR chance
		};
		
		class curator {
			file = "twc_medical\curator";
			
			class resuscitateUnit {};
			class fullHealUnit {};
			class killUnit {};
			class inspectUnit {};
			class logUnit {}; // adds the above to RPT
		};
	};
};