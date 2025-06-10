;/*===================mod Item_Defines begin ===================*/
;/*====================================== items_light begin ======================================*/
;/*========= small_arms begin =========*/
(define "small_arms_eng"

;// mg
	{item "mgun_ger" "belt" "mk2"	"ammo" 50 {value 5}}
	{item "bren_mag"                "ammo" 30 {value 3}}	
;// rifle
	{item "7x56" "clip"		        "ammo" 10 {value 2}}
	{item "atrifle_eng"	"ap"		"ammo" 5  {value 5}}
	{item "atrifle_eng"	"ap2"		"ammo" 5  {value 5}}


;// Grenade
	{item "grenade" "no8_smoke" 			1  {value 5}}
)

(define "small_arms_usa"
	
;// pistol
	{item "m1911_mag"				"ammo" 14 {value 1}}
	{item "hdm_mag"					"ammo" 10 {value 1}}

;// smg
	{item "thompson_mag" "stick" "20" "ammo" 20 {value 1}}
	{item "m3_grease_mag"			"ammo" 30 {value 2}}
	{item "thompson_mag" "stick" "30" "ammo" 30 {value 2}}
	{item "thompson_mag" "drum"		"ammo" 50 {value 3}}

;// mg
	{item "bar_mag"					"ammo" 20 {value 2}}
	{item "mgun_usa" "belt"			"ammo" 50 {value 5}}
	{item "hmgun_usa"				"ammo" 50 {value 5}}
	{item "hmgun_usa" "api"			"ammo" 50 {value 5}}

;// rifle
	{item "rifle_usa" "clip"		"ammo" 10 {value 2}}
	{item "rifle_usa" "clip" "ap"	"ammo" 10 {value 2}}
	{item "rifle_usa" "clip" "trace" "ammo" 10 {value 2}}
	{item "rifle_usa" "garand_clip" "ammo" 8 {value 2}}
	{item "rifle_usa" "garand_clip" "ap" "ammo" 8 {value 2}}
	{item "rifle_usa" "garand_clip" "trace" "ammo" 8 {value 2}}
	
	{item "m1_carbine_mag"			"ammo" 15 {value 2}}
)

(define "smg_ammo_usa"
;// smg
	{item "thompson_mag" "stick" "20" "ammo" 20 {value 1}}
	{item "m3_grease_mag"			"ammo" 30 {value 2}}
	{item "thompson_mag" "stick" "30" "ammo" 30 {value 2}}
	{item "thompson_mag" "drum"		"ammo" 50 {value 3}}
)

(define "mg_ammo_usa"
;// mg
	{item "mgun_usa" "belt"			"ammo" 50 {value 5}}
	{item "hmgun_usa"				"ammo" 50 {value 5}}
	{item "hmgun_usa" "api"			"ammo" 50 {value 5}}

)
(define "mg_ammo_usa_50cal"
;// mg
	{item "hmgun_usa"				"ammo" 50 {value 5}}
	{item "hmgun_usa" "api"			"ammo" 50 {value 5}}

)
(define "rifle_grenade_usa"
;// rifle_grenade
	{item "usa_grenade"	"he"		"ammo" 1  {value 5}}
	{item "usa_grenade"	"he2"		"ammo" 1  {value 5}}
	{item "usa_grenade"	"heat"		"ammo" 1  {value 5}}
	{item "usa_grenade"	"heata"		"ammo" 1  {value 5}}
	{item "usa_grenade"	"wp"		"ammo" 1  {value 5}}
)

(define "rifle_ammo_usa"
;// rifle
	{item "rifle_usa" "clip"		"ammo" 10 {value 2}}
	{item "rifle_usa" "clip" "ap"	"ammo" 10 {value 2}}
	{item "rifle_usa" "clip" "trace" "ammo" 10 {value 2}}
	{item "rifle_usa" "garand_clip" "ammo" 8 {value 2}}
	{item "rifle_usa" "garand_clip" "ap" "ammo" 8 {value 2}}
	{item "rifle_usa" "garand_clip" "trace" "ammo" 8 {value 2}}
)

(define "carbine_ammo_usa"
;// rifle
	{item "m1_carbine_mag"			"ammo" 15 {value 2}}
)

(define "bar_ammo_usa"

;// mg
	{item "bar_mag"					"ammo" 20 {value 2}}
)
;/*========= small_arms end =========*/
;/*========= explosives_and_support_items begin =========*/

(define "items_backpack_engineer_usa"
;// fortification tools
	;{item "shovel_usa"							1 {value 5}}
	;{item "pickaxe"								1 {value 10}}
	{item "tent_kit"							1 {value 5}}
	{item "sandbag_vehicle"						1 {value 10}}
	{item "usa_ammo_box"						1 {value 10}}

;// general tools
	;{item "mine_detector"						1 {value 20}}
	{item "repair_kit"							1 {value 20}}

;// special ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
	{item "flare"			"ammo" 1 {value 50}}	
	{item "flare_usa.mortar_60"			"ammo" 1 {value 50}}
	{item "flare_usa.mortar_81"			"ammo" 1 {value 60}}
	{item "flare_usa.artillery_105"			"ammo" 1 {value 75}}
	{item "flare_usa.artillery_155"			"ammo" 1 {value 100}}
	{item "flare_usa.artillery_203"			"ammo" 1 {value 125}}
	{item "flare_usa.artillery_240"			"ammo" 1 {value 150}}
)

(define "items_explosives_usa"
;// explosives
	{item "satchel_charge_usa"					1 {value 15}}

;// grenade mine hybrid
	{item "grenade" "m7"						1 {value 10}}
	{item "grenade" "no75"						1 {value 10}}

;// mines
	{item "m2" "mine" 							1 {value 5}}
	{item "m6" "mine" 							1 {value 5}}

	{item "m39" "mine" 							1 {value 10}}
	{item "m1a1" "mine" 						1 {value 10}}
)

(define "mine_hybrid"
;// grenade mine hybrid
	{item "grenade" "m7"						1 {value 10}}
	{item "grenade" "no75"						1 {value 10}}
)

(define "hand_grenade_usa"
;// Grenade
	{item "grenade" "mk2" 					1  {value 5}}

	{item "grenade" "m7"					1  {value 10}}

	{item "grenade" "anm8_smoke" 			1  {value 5}}
	{item "grenade" "m15_wp" 				1  {value 5}}
)

(define "AT_rocket_rounds_usa"
	
;// usa

	{item "bazooka"	"heatb"			"ammo" 1  {value 10}}
	{item "bazooka"	"heata"			"ammo" 1  {value 10}}
	{item "bazooka"	"heat"			"ammo" 1  {value 10}}


	{item "recoilless" "he"			"ammo" 1  {value 10}}
	{item "recoilless" "wp"			"ammo" 1  {value 10}}
	{item "recoilless" "heat"		"ammo" 1  {value 10}}

)

(define "items_medic_usa"
;// other
	{item "bandage_usa"						1 {value 1}}
)
;/*========= explosives_and_support_items end =========*/
;/*====================================== items_light end ======================================*/
;/*====================================== items_heavy begin ======================================*/
;/*========= auto_cannon_shells begin =========*/
(define "shells_usa_37mm_auto"
	{item "bulletusa_37_auto"	"apc"		"ammo" 10 {value 5}}
	{item "bulletusa_37_auto"	"he"		"ammo" 10 {value 5}}
)	
(define "shells_usa_40mm_auto"
	{item "bullet_40x331_auto" "usa" "apbc"	"ammo" 10 {value 5}}
	{item "bullet_40x331_auto" "usa" "he"	"ammo" 10 {value 5}}
)

;/*========= auto_cannon_shells end =========*/

;/*========= tank_and_at_shells begin =========*/
(define "shells_usa_37mm"
;// at_cannon

	{item "bulletusa_37"		"ap"		"ammo" 2 {value 5}}
	{item "bulletusa_37"		"apcbc"		"ammo" 2 {value 5}}
	{item "bulletusa_37"		"he"		"ammo" 2 {value 5}}
	
)

(define "shells_usa_57mm"
;// at_cannon
	{item "bullet_57x441" "usa" "ap"		"ammo" 1 {value 5}}
	{item "bullet_57x441" "usa" "apcbche"	"ammo" 1 {value 5}}
	{item "bullet_57x441" "usa" "he"		"ammo" 1 {value 5}}
)

(define "shells_usa_75mm_l16"

	{item "bulletusa_75x272"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_75x272"	"heat"		"ammo" 1 {value 10}}
	{item "bulletusa_75x272"	"wp"		"ammo" 1 {value 5}}

)

(define "shells_usa_75mm_l40"

	{item "bulletusa_75x350"	"ap"		"ammo" 1 {value 5}}
	{item "bulletusa_75x350"	"apcbc"		"ammo" 1 {value 5}}
	{item "bulletusa_75x350"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletusa_75x350"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_75x350"	"wp"		"ammo" 1 {value 5}}
)	

(define "shells_usa_76mm_l45"
;// at_cannon
	{item "bulletusa_76x585"	"ap"		"ammo" 1 {value 5}}
	{item "bulletusa_76x585"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletusa_76x585"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_76x585"	"hvap"		"ammo" 1 {value 10}}
	{item "bulletusa_76x585"	"sm"		"ammo" 1 {value 5}}
)

(define "shells_usa_76mm_l52"
;// at_cannon
	{item "bulletusa_76x539"	"ap"		"ammo" 1 {value 5}}
	{item "bulletusa_76x539"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletusa_76x539"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_76x539"	"hvap"		"ammo" 1 {value 10}}
	{item "bulletusa_76x539"	"sm"		"ammo" 1 {value 5}}
)

(define "shells_usa_90mm_l53"
;// at_cannon

	{item "bulletusa_90x600"	"ap"		"ammo" 1 {value 5}}
	{item "bulletusa_90x600"	"apbc"		"ammo" 1 {value 5}}
	{item "bulletusa_90x600"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletusa_90x600"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_90x600"	"hvap"		"ammo" 1 {value 10}}
	
)
(define "shells_usa_90mm_l73"
;// at_cannon
	{item "bulletusa_90x1270"	"apbc"		"ammo" 1 {value 5}}
	{item "bulletusa_90x1270"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletusa_90x1270"	"he"		"ammo" 1 {value 5}}
	{item "bulletusa_90x1270"	"hvap"		"ammo" 1 {value 5}}
	
)


;/*========= tank_and_at_shells end =========*/
;/*========= howitzer_shells begin =========*/

(define "howitzer_shells_usa_105mm"
	{item "bulletusa_105"		"he"		"ammo" 1 {value 15}}
	{item "bulletusa_105"		"heat"		"ammo" 1 {value 10}}
	{item "bulletusa_105"		"sm"		"ammo" 1 {value 5}}
	{item "bulletusa_105"		"wp"		"ammo" 1 {value 5}}
)

;/*========= howitzer_shells end =========*/
;/*========= mortar_rounds begin =========*/
(define "mortar_rounds_usa_60mm"
;// usa
	{item "mortarusa_60" "he"		"ammo" 1  {value 3}}
	{item "mortarusa_60" "wp"		"ammo" 1  {value 3}}
)

(define "mortar_rounds_usa_81mm"
;// usa
	{item "mortarusa_81" "he"		"ammo" 1  {value 5}}
	{item "mortarusa_81" "he2"		"ammo" 1  {value 5}}
	{item "mortarusa_81" "sm"		"ammo" 1  {value 5}}
	{item "mortarusa_81" "wp"		"ammo" 1  {value 5}}
)

(define "mortar_rounds_usa_107mm"
	{item "mortarusa_107" "he"		"ammo" 1  {value 15}}
	{item "mortarusa_107" "sm"		"ammo" 1  {value 5}}
	{item "mortarusa_107" "wp"		"ammo" 1  {value 10}}
)
;/*========= mortar_rounds end =========*/
;/*====================================== items_heavy end ======================================*/
;/*===================mod Item_Defines end ===================*/










;/*===================mod Supply_Defines Begin ===================*/
;/*===================infantry_equipment begin ===================*/
(define "usa_ammo_box"
	{extender "supply_zone"
		{resupply
			("small_arms_eng")
			("small_arms_usa")
		}
		{radius 			10}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_rifle"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("rifle_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_rifle_grenade"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("rifle_ammo_usa")
			("rifle_grenade_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)


(define "usa_backpack_bar"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("bar_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_bar_asst"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("bar_ammo_usa")
			("rifle_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_carbine"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("carbine_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_smg"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("smg_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_smg_grenade"
	{extender "supply_zone"
		{resupply
			("hand_grenade_usa")
			("rifle_grenade_usa")
			("items_medic_usa")
			("smg_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_mg"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("mg_ammo_usa")		
		}
		{radius 			3}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_para"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
            ("mine_hybrid")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_para_mg"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("mg_ammo_usa")		
            ("mine_hybrid")
		}
		{radius 			3}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_bag_grenade"
	{extender "supply_zone"
		{resupply
			("hand_grenade_usa")
		}
		{radius 			10}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				40}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_bag_grenade_and_rifle_grenade"
	{extender "supply_zone"
		{resupply
			("hand_grenade_usa")
			("rifle_grenade_usa")
		}
		{radius 			10}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				40}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_engineer"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("items_backpack_engineer_usa")
		}
		{radius 			3}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_backpack_explosives"
	{extender "supply_zone"
		{resupply
			("items_medic_usa")
			("items_explosives_usa")
		}
		{radius 			2}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_belt_bag_explosives"
	{extender "supply_zone"
		{resupply
			("items_explosives_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_rifle_explosives"
	{extender "supply_zone"
		{resupply
			("items_explosives_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				120}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_rifle"
	{extender "supply_zone"
		{resupply
			("rifle_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_rifle_grenade_usa"
	{extender "supply_zone"
		{resupply
			("rifle_ammo_usa")
			("rifle_grenade_usa")			
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_carbine"
	{extender "supply_zone"
		{resupply
			("carbine_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_smg"
	{extender "supply_zone"
		{resupply
			("smg_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_bar"
	{extender "supply_zone"
		{resupply
			("bar_ammo_usa")
		}
		{radius 			1}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "usa_harness_bar_asst"
	{extender "supply_zone"
		{resupply
			("bar_ammo_usa")
			("rifle_ammo_usa")
		}
		{radius 			3}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)


(define "usa_harness_at"
	{extender "supply_zone"
		{resupply
			("AT_rocket_rounds_usa")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================infantry_equipment end ===================*/
(define "ammo_usa_crate_50cal"
	{extender "supply_zone"
		{resupply
			("mg_ammo_usa_50cal")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				400}	;// max number of resupplies (0 = unlimited)
	}
)

;/*===================auto_cannon_shell_supply begin ===================*/

(define "shells_usa_crate_37mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_usa_37mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_usa_crate_40mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_usa_40mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================auto_cannon_shell_supply end ===================*/
;/*===================tank_and_at_shell_supply begin ===================*/

(define "shells_usa_crate_37mm"
	{extender "supply_zone"
		{resupply
			("shells_usa_37mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_usa_crate_57mm"
	{extender "supply_zone"
		{resupply
			("shells_usa_57mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_usa_crate_75mm_l16"
	{extender "supply_zone"
		{resupply
			("shells_usa_75mm_l16")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_usa_crate_75mm_l40"
	{extender "supply_zone"
		{resupply
			("shells_usa_75mm_l40")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_usa_crate_76mm_l45"
	{extender "supply_zone"
		{resupply
			("shells_usa_76mm_l45")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)


(define "shells_usa_crate_76mm_l52"
	{extender "supply_zone"
		{resupply
			("shells_usa_76mm_l52")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_usa_crate_90mm_l53"
	{extender "supply_zone"
		{resupply
			("shells_usa_90mm_l53")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_usa_crate_90mm_l73"
	{extender "supply_zone"
		{resupply
			("shells_usa_90mm_l73")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)


;/*===================tank_and_at_shell_supply end ===================*/
;/*========= howitzer_shells begin =========*/

(define "howitzer_shells_usa_crate_105mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_usa_105mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

;/*========= howitzer_shells end =========*/
;/*===================mortar_round_supply begin ===================*/

(define "mortar_rounds_usa_crate_60mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_usa_60mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_usa_crate_81mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_usa_81mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_usa_crate_107mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_usa_107mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================mortar_round_supply end ===================*/
;/*===================mod Supply_Defines end ===================*/


