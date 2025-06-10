;/*===================mod Item_Defines begin ===================*/
;/*====================================== items_light begin ======================================*/
;/*========= small_arms begin =========*/
(define "small_arms_rus"
;// pistol
	{item "tt33"					"ammo" 16 {value 1}}
	{item "revolver_clip"			"ammo" 14 {value 1}}

;// smg
	{item "ppd_drum"				"ammo" 71 {value 4}}
	{item "pps_stick"				"ammo" 35 {value 2}}
	{item "ppsh_drum"				"ammo" 71 {value 4}}
	{item "ppsh_stick"				"ammo" 35 {value 2}}

;// mg
	{item "hmgun_rus" "ap"			"ammo" 50 {value 5}}
	{item "hmgun_rus" "api"			"ammo" 50 {value 5}}
	{item "mgun_rus" "dp"			"ammo" 47 {value 5}}
	{item "mgun_rus" "dt"			"ammo" 63 {value 5}}
	{item "mgun_rus" "belt"			"ammo" 50 {value 5}}
	{item "mgun_rus" "belt" "ap"	"ammo" 50 {value 5}}
	{item "mgun_rus" "belt"	"api"	"ammo" 50 {value 5}}

;// rifle
	{item "atrifle_rus"				"ammo" 5  {value 5}}
	{item "rifle_rus" "clip"		"ammo" 10 {value 2}}
	{item "rifle_rus" "svt"			"ammo" 10 {value 2}}
	{item "as44_magazine"			"ammo" 20 {value 2}}

;// AT
	{item "dyakonov"				"ammo" 1  {value 5}}
	{item "vpgs41"					"ammo" 1  {value 5}}

;// Grenade
	{item "grenade" "f1" 					1  {value 5}}
	{item "grenade" "rgd33" 				1  {value 5}}

	{item "grenade" "rpg40"					1  {value 10}}
	{item "grenade" "rpg43"					1  {value 10}}
	{item "grenade" "molotov_cocktail"		1  {value 10}}

	{item "grenade" "rdg1_smoke" 			1  {value 5}}
)


(define "smg_ammo_rus_stick"
;// smg
	{item "pps_stick"				"ammo" 35 {value 2}}
	{item "ppsh_stick"				"ammo" 35 {value 2}}
	{item "as44_magazine"			"ammo" 20 {value 2}}
)

(define "smg_ammo_rus_drum"
;// smg
	{item "ppd_drum"				"ammo" 71 {value 4}}
	{item "ppsh_drum"				"ammo" 71 {value 4}}
)

(define "smg_ammo_us_drum"
;// smg
	{item "thompson_mag" "drum"		"ammo" 50 {value 3}}
)


(define "mg_ammo_rus"
;// mg
	{item "hmgun_rus" "ap"			"ammo" 50 {value 5}}
	{item "hmgun_rus" "api"			"ammo" 50 {value 5}}
	{item "mgun_rus" "dp"			"ammo" 47 {value 5}}
	{item "mgun_rus" "dt"			"ammo" 63 {value 5}}
	{item "mgun_rus" "belt"			"ammo" 50 {value 5}}
	{item "mgun_rus" "belt" "ap"	"ammo" 50 {value 5}}
	{item "mgun_rus" "belt"	"api"	"ammo" 50 {value 5}}
)

(define "rifle_ammo_rus"
;// rus
	{item "rifle_rus" "clip"		"ammo" 10 {value 2}}
	{item "rifle_rus" "svt"			"ammo" 10 {value 2}}
	{item "as44_magazine"			"ammo" 20 {value 2}}
)

(define "at_rifle_ammo_rus"
;// rus
	{item "atrifle_rus"				"ammo" 5  {value 5}}
)

(define "rifle_grenade_ammo_rus"
;// at
	{item "dyakonov"				"ammo" 1  {value 5}}
	{item "vpgs41"					"ammo" 1  {value 5}}
)

(define "small_arms_ally"
;// mg usa
	{item "mgun_usa" "belt"			"ammo" 50 {value 5}}
	{item "hmgun_usa"				"ammo" 50 {value 5}}
	{item "hmgun_usa" "api"			"ammo" 50 {value 5}}

;// mg eng
	{item "mgun_ger" "belt" "mk2"	"ammo" 50 {value 5}}
)

(define "flame_rus"

;// special ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
)
;/*========= small_arms end =========*/
;/*========= explosives_and_support_items begin =========*/

(define "items_veshmeshok_engineer_rus"
;// fortification tools
	;{item "shovel_rus"							1 {value 5}}
	;{item "pickaxe"								1 {value 10}}
	{item "tent_kit"							1 {value 5}}
	{item "sandbag_vehicle"						1 {value 10}}

;// general tools
	;{item "mine_detector"						1 {value 20}}
	{item "repair_kit"							1 {value 20}}
	
;// special ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
)

(define "items_explosives_rus"
;// explosives
	{item "satchel_charge_rus"					1 {value 15}}

;// mines
	{item "pmd" "mine" 							1 {value 5}}
	{item "tm_35" "mine" 						1 {value 10}}
	{item "tm_41" "mine" 						1 {value 10}}
	{item "tmd_b" "mine" 						1 {value 10}}
)
(define "items_medic_rus"
;// other
	{item "bandage_rus"						1 {value 1}}
)

(define "hand_grenade_rus"
;// Grenade
	{item "grenade" "f1" 					1  {value 5}}
	{item "grenade" "rgd33" 				1  {value 5}}

	{item "grenade" "rpg40"					1  {value 10}}
	{item "grenade" "rpg43"					1  {value 10}}
	{item "grenade" "molotov_cocktail"		1  {value 10}}

	{item "grenade" "rdg1_smoke" 			1  {value 5}}
)

(define "items_veshmeshok_ammo"

;// general tools
	{item "repair_kit"							1 {value 20}}
	{item "ammo_box_small"						1 {value 5}}
)

;/*========= explosives_and_support_items end =========*/
;/*====================================== items_light end ======================================*/
;/*====================================== items_heavy begin ======================================*/
;/*========= auto_cannon_shells begin =========*/
(define "shells_rus_20mm_auto"
	{item "bullet_20_auto"		"aphe"		"ammo" 20 {value 5}}
	{item "bulletrus_20_auto"	"ap"		"ammo" 20 {value 5}}
	{item "bulletrus_20_auto"	"apcr"		"ammo" 20 {value 10}}
	{item "bulletrus_20_auto"	"he"		"ammo" 20 {value 5}}
)	

(define "shells_rus_25mm_auto"
	{item "bulletrus_25_auto"	"apbc"		"ammo" 20 {value 5}}
	{item "bulletrus_25_auto"	"he"		"ammo" 20 {value 5}}
)

(define "shells_rus_37mm_auto"
	{item "bulletrus_37_auto"	"ap"		"ammo" 10 {value 5}}
	{item "bulletrus_37_auto"	"he"		"ammo" 10 {value 5}}
)

;/*========= auto_cannon_shells end =========*/
;/*========= tank_and_at_shells begin =========*/
(define "shells_rus_45mm"
	{item "bulletrus_45"		"aphebc"	"ammo" 2 {value 5}}
	{item "bulletrus_45"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_45"		"he"		"ammo" 2 {value 5}}
)

(define "shells_rus_57mm"
	{item "bulletrus_57"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_57"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_57"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_57"		"he"		"ammo" 1 {value 5}}
)

(define "shells_rus_76mm_early"
	{item "bulletrus_76"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_76"		"he"		"ammo" 1 {value 5}}
)

(define "shells_rus_76mm"

	{item "bulletrus_76"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_76"		"aphebc2"	"ammo" 1 {value 5}}
	{item "bulletrus_76"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_76"		"heat"		"ammo" 1 {value 10}}
	{item "bulletrus_76"		"he"		"ammo" 1 {value 5}}
	
)

(define "shells_rus_76mm_l55"

	{item "bulletrus_76_l55"	"apbc"		"ammo" 1 {value 5}}
	{item "bulletrus_76_l55"	"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_76_l55"	"he"		"ammo" 1 {value 5}}
)



(define "rus_he_85mm"
	{item "bulletrus_85"		"aphebc"	"ammo" 1 {value 5}}
)

(define "rus_aphebc_85mm"
	{item "bulletrus_85"		"aphebc"	"ammo" 1 {value 5}}
)

(define "shells_rus_85mm"
	{item "bulletrus_85"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_85"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_85"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_85"		"he"		"ammo" 1 {value 5}}
)	

(define "anti_tank_shells_rus_100mm"

;// rus	

	{item "bulletrus_100"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_100"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_100"		"he"		"ammo" 1 {value 5}}
)
;/*========= tank_and_at_shells end =========*/
;/*========= howitzer_shells begin =========*/

(define "howitzer_shells_rus_122mm_l22"
	{item "bulletrus_122_l22"	"he"		"ammo" 1 {value 25}}
	{item "bulletrus_122_l22"	"heat"		"ammo" 1 {value 15}}
)

;/*========= howitzer_shells end =========*/
;/*========= mortar_rounds begin =========*/
(define "mortar_rounds_rus"
	{item "mortarrus_82" "he"		"ammo" 1  {value 10}}
	{item "mortarrus_82" "sm"		"ammo" 1  {value 5}}
	{item "mortarrus_120" "he"		"ammo" 1  {value 15}}
	{item "mortarrus_120" "sm"		"ammo" 1  {value 5}}
	{item "mortarrus_120" "ic"		"ammo" 1  {value 10}}
)

(define "mortar_rounds_rus_50mm"
	{item "mortarrus_50" "he"		"ammo" 1  {value 3}}
)


(define "mortar_rounds_rus_82mm"
	{item "mortarrus_82" "he"		"ammo" 1  {value 10}}
	{item "mortarrus_82" "sm"		"ammo" 1  {value 5}}
)
(define "mortar_rounds_rus_120mm"

;// rus	
	{item "mortarrus_120" "he"		"ammo" 1  {value 15}}
	{item "mortarrus_120" "sm"		"ammo" 1  {value 5}}
	{item "mortarrus_120" "ic"		"ammo" 1  {value 10}}

)
;/*========= mortar_rounds end =========*/
;/*====================================== items_heavy end ======================================*/
;/*===================mod Item_Defines end ===================*/






;/*===================mod Supply Defines rus Begin ===================*/
;/*===================infantry_equipment begin ===================*/

(define "medic_bag_rus"
	{extender "supply_zone"
		{resupply
			("items_medic_rus")				
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
(define "rifleman_bag_rus"
	{extender "supply_zone"
		{resupply		
			("hand_grenade_rus")			
			("rifle_ammo_rus")			
			;("at_rifle_ammo_rus")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
(define "smg_bag_rus_stick"
	{extender "supply_zone"
		{resupply		
			("hand_grenade_rus")			
			("smg_ammo_rus_stick")				
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
(define "smg_bag_rus_drum"
	{extender "supply_zone"
		{resupply		
			("hand_grenade_rus")			
			("smg_ammo_rus_drum")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "rus_ammo_box"
	{extender "supply_zone"
		{resupply
			("small_arms_rus")
			("small_arms_ally")
		}
		{radius 			5}	;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "plash_palatka_rus"
	{extender "supply_zone"
		{resupply
			("rifle_ammo_rus")	
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_flame_rus"
	{extender "supply_zone"
		{resupply
			("flame_rus")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_medic_rus"
	{extender "supply_zone"
		{resupply
			("items_medic_rus")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_smg_rus_stick"
	{extender "supply_zone"
		{resupply
			("smg_ammo_rus_stick")	
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_smg_rus_drum"
	{extender "supply_zone"
		{resupply
			("smg_ammo_rus_drum")		
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_smg_us_drum"
	{extender "supply_zone"
		{resupply
			("smg_ammo_us_drum")		
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "harness_mg_rus"
	{extender "supply_zone"
		{resupply
			("mg_ammo_rus")
			("small_arms_ally")	
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_basic_mg_rus"
	{extender "supply_zone"
		{resupply
			("mg_ammo_rus")
			("small_arms_ally")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_basic_at_rifle_rus"
	{extender "supply_zone"
		{resupply
			("at_rifle_ammo_rus")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_basic_rifle_grenade_rus"
	{extender "supply_zone"
		{resupply
			("rifle_grenade_ammo_rus")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_basic_ammo_rus"
	{extender "supply_zone"
		{resupply
			("small_arms_rus")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_basic_medic_rus"
	{extender "supply_zone"
		{resupply
			("items_medic_rus")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				30}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_full_ammo_rus"
	{extender "supply_zone"
		{resupply
			("small_arms_rus")
			("small_arms_ally")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	12}		;// resupply period in seconds
		{regenerationPeriod 12}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
)

(define "veshmeshok_full_engineer_rus"
	{extender "supply_zone"
		{resupply
			("items_veshmeshok_engineer_rus")
			("items_explosives_rus")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				250}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "veshmeshok_full_miner_rus"
	{extender "supply_zone"
		{resupply
			("items_explosives_rus")
		}
		{radius 			1}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				250}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)


;/*===================infantry_equipment end ===================*/
;/*===================auto_cannon_shell_supply begin ===================*/

(define "shells_rus_crate_20mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_rus_20mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_25mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_rus_25mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_37mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_rus_37mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================auto_cannon_shell_supply end ===================*/







;/*===================tank_and_at_shell_supply begin ===================*/
(define "shells_rus_crate_45mm"
	{extender "supply_zone"
		{resupply
			("shells_rus_45mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 4}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_57mm"
	{extender "supply_zone"
		{resupply
			("shells_rus_57mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_76mm_early"
	{extender "supply_zone"
		{resupply
			("shells_rus_76mm_early")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_76mm"
	{extender "supply_zone"
		{resupply
			("shells_rus_76mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_76mm_l55"
	{extender "supply_zone"
		{resupply
			("shells_rus_76mm_l55")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_rus_crate_85mm_52k"
	{extender "supply_zone"
		{resupply
			("shells_rus_85mm")	
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				300}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_rus_crate_rus_100mm"
	{extender "supply_zone"
		{resupply
			("anti_tank_shells_rus_100mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================tank_and_at_shell_supply end ===================*/
;/*===================howitzer_shell_supply begin ===================*/

(define "howitzer_shells_rus_crate_122mm_l22"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_rus_122mm_l22")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				800}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================howitzer_shell_supply end ===================*/
;/*===================mortar_round_supply begin ===================*/



(define "mortar_rounds_rus_box"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_rus")
			
		}
		{radius 			2}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)
(define "mortar_rounds_rus_crate_50mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_rus_50mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_rus_crate_82mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_rus_82mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_rus_crate_120mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_rus_120mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				800}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================mortar_round_supply end ===================*/
;/*===================mod Supply Defines rus end ===================*/