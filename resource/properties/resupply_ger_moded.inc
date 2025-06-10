;/*===================mod Item_Defines begin ===================*/
;/*====================================== items_light begin ======================================*/
;/*========= small_arms begin =========*/
(define "small_arms_ger"

;// pistol
;// smg
	{item "mp40"					"ammo" 32 {value 2}}

;// mg
	{item "mgun_ger" "belt" "ap"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt" "ap2"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt"			"ammo" 50 {value 5}}
	{item "mgun_ger" "mg13"			"ammo" 50 {value 5}}
	{item "mgun_ger" "drum"			"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum"	"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap" "ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap2" "ammo" 50 {value 5}}
	{item "zb26_mag"					"ammo" 20 {value 2}}
;// rifle
	{item "atrifle_ger"				"ammo" 5  {value 5}}
	{item "rifle_ger" "clip"		"ammo" 10 {value 2}}
	{item "rifle_ger" "gewehr"		"ammo" 10 {value 2}}
	{item "stg44"					"ammo" 30 {value 2}}
	{item "fg42"					"ammo" 20 {value 2}}

;// AT
	{item "k98_antitank"			"ammo" 1  {value 5}}
	{item "k98_grenade"	"he"		"ammo" 1  {value 5}}
	{item "k98_grenade"	"heat"		"ammo" 1  {value 5}}
	{item "k98_grenade"	"heata"		"ammo" 1  {value 5}}

;// Grenade
	{item "grenade" "m24"					1  {value 5}}
	{item "grenade" "m24_splinter"			1  {value 5}}

	{item "grenade" "m24_geballteladung"	1  {value 10}}
	{item "grenade" "hafthohlladung"		1  {value 10}}
	{item "grenade" "pwm_l"					1  {value 10}}
	{item "grenade" "molotov_cocktail"		1  {value 10}}

	{item "grenade" "m24_smoke"				1  {value 5}}
	{item "grenade" "nbk39"					1  {value 5}}
	{item "grenade" "nbks"					1  {value 5}}

	{item "grenade" "m42_wp"				1  {value 5}}
	{item "grenade" "m43_smoke"				1  {value 5}}

)

(define "rifle_ammo_ger"

;// mg
	{item "mgun_ger" "belt" "ap"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt" "ap2"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt"			"ammo" 50 {value 5}}
	{item "mgun_ger" "mg13"			"ammo" 50 {value 5}}
	{item "mgun_ger" "drum"			"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum"	"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap" "ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap2" "ammo" 50 {value 5}}
	{item "zb26_mag"					"ammo" 20 {value 2}}
;// rifle
	{item "atrifle_ger"				"ammo" 5  {value 5}}
	{item "rifle_ger" "clip"		"ammo" 10 {value 2}}
	{item "rifle_ger" "gewehr"		"ammo" 10 {value 2}}
	{item "fg42"					"ammo" 20 {value 2}}
)

(define "mg_ammo_ger"

;// mg
	{item "mgun_ger" "belt" "ap"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt" "ap2"	"ammo" 50 {value 5}}
	{item "mgun_ger" "belt"			"ammo" 50 {value 5}}
	{item "mgun_ger" "mg13"			"ammo" 50 {value 5}}
	{item "mgun_ger" "drum"			"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum"	"ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap" "ammo" 50 {value 5}}
	{item "mgun_ger" "doubledrum" "ap2" "ammo" 50 {value 5}}
	{item "zb26_mag"					"ammo" 20 {value 2}}

;// rifle
	{item "rifle_ger" "clip"		"ammo" 10 {value 2}}
	{item "rifle_ger" "gewehr"		"ammo" 10 {value 2}}
	{item "fg42"					"ammo" 20 {value 2}}
)

(define "smg_ammo_ger"

;// smg
	{item "mp40"					"ammo" 32 {value 2}}

)

(define "stg_ammo_ger"

;// rifle
	{item "stg44"					"ammo" 30 {value 2}}
)

(define "small_arms_jap"
	{item "6x50" "ammo" 30  {value 2}}
	{item "8x22" "ammo" 40  {value 1}}
	{item "7x58" "ammo" 30  {value 2}}
	{item "7x56" "ammo" 30  {value 2}}
	{item "7x21" "ammo" 30  {value 1}}
	{item "9x19" "ammo" 30  {value 1}}
	{item "type_4" "ammo" 1  {value 10}}
	{item "type_89_jap" "ammo" 4  {value 10}}
)

;/*========= small_arms end =========*/
;/*========= explosives_and_support_items begin =========*/

(define "items_medic_ger"
;// other
	{item "bandage_ger"						1 {value 1}}
)

(define "items_backpack_engineer_ger"
;// fortification tools
	;{item "shovel_ger"							1 {value 5}}
	;{item "pickaxe"								1 {value 10}}
	{item "tent_kit"							1 {value 5}}
	{item "sandbag_vehicle"						1 {value 10}}

;// general tools
	;{item "mine_detector"						1 {value 20}}
	{item "repair_kit"							1 {value 20}}
	
;// special ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
)

(define "items_explosives_ger"
;// explosives
	{item "geballteladung_3kg"					1 {value 15}}

;// mines
	{item "s" "mine" 							1 {value 5}}

	{item "tmi_35" "mine" 						1 {value 10}}
	{item "tmi_43" "mine" 						1 {value 10}}
)

(define "hand_grenade_ger"
;// Grenade
	{item "grenade" "m24"					1  {value 5}}
	{item "grenade" "m24_splinter"			1  {value 5}}

	{item "grenade" "m24_geballteladung"	1  {value 10}}
	{item "grenade" "hafthohlladung"		1  {value 10}}
	{item "grenade" "pwm_l"					1  {value 10}}
	{item "grenade" "molotov_cocktail"		1  {value 10}}

	{item "grenade" "m24_smoke"				1  {value 5}}
	{item "grenade" "nbk39"					1  {value 5}}
	{item "grenade" "nbks"					1  {value 5}}

	{item "grenade" "m42_wp"				1  {value 5}}
	{item "grenade" "m43_smoke"				1  {value 5}}
)
(define "rifle_grenade_ger"
;// Rifle_Grenade
	{item "k98_grenade"	"he"		"ammo" 1  {value 5}}
	{item "k98_grenade"	"heat"		"ammo" 1  {value 5}}
	{item "k98_grenade"	"heata"		"ammo" 1  {value 5}}
)

(define "AT_rocket_rounds_ger"

;// ger
	{item "panzershreck"			"ammo" 1  {value 10}}
)

;/*========= explosives_and_support_items end =========*/
;/*====================================== items_light end ======================================*/
;/*====================================== items_heavy begin ======================================*/
;/*========= auto_cannon_shells begin =========*/

(define "shells_ger_15mm_auto"
	{item "bulletger_15_auto"	"ap"		"ammo" 20 {value 5}}
	{item "bulletger_15_auto"	"he"		"ammo" 20 {value 5}}
)

(define "shells_ger_20mm_auto"
	{item "bullet_20_auto"		"aphe"		"ammo" 20 {value 5}}
	{item "bulletger_20_auto"	"ap"		"ammo" 20 {value 5}}
	{item "bulletger_20_auto"	"apcr"		"ammo" 20 {value 10}}
	{item "bulletger_20_auto"	"he"		"ammo" 20 {value 5}}
)	

(define "shells_ger_30mm_auto"
	{item "bulletger_30_auto"	"apcr"		"ammo" 20 {value 5}}
	{item "bulletger_30_auto"	"he"		"ammo" 20 {value 5}}
)

(define "shells_ger_37mm_auto"
	{item "bulletger_37_auto"	"ap"		"ammo" 10 {value 5}}
	{item "bulletger_37_auto"	"he"		"ammo" 10 {value 5}}
)

;/*========= auto_cannon_shells end =========*/
;/*========= tank_and_at_shells begin =========*/
(define "shells_ger_37mm"
;// at_cannon

	{item "bulletger_37"		"aphe"		"ammo" 2 {value 5}}
	{item "bulletger_37"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_37"		"he"		"ammo" 2 {value 5}}
	{item "bulletger_37"		"heat"		"ammo" 1 {value 10}}

	{item "bullet_37x149" "ger"	"apc"		"ammo" 2 {value 5}}
	{item "bullet_37x149" "ger"	"he"		"ammo" 2 {value 5}}
	
)
(define "shells_ger_47mm"
	{item "bulletger_47"		"apche"		"ammo" 2 {value 5}}
	{item "bulletger_47"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_47"		"he"		"ammo" 2 {value 5}}

	{item "bullet_47x193" "ger"	"apc"		"ammo" 2 {value 5}}
	{item "bullet_47x193" "ger"	"he"		"ammo" 2 {value 5}}
)

(define "shells_ger_50mm_l42"
	{item "bulletger_50_l42"	"apche"		"ammo" 2 {value 5}}
	{item "bulletger_50_l42"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_50_l42"	"he"		"ammo" 2 {value 5}}

)

(define "shells_ger_50mm_l60"
	{item "bulletger_50_l60"	"apche"		"ammo" 1 {value 5}}
	{item "bulletger_50_l60"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_50_l60"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_50_l60"	"heat"		"ammo" 1 {value 10}}

)

(define "shells_ger_50mm_l87"
	{item "bulletger_50_l87"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_50_l87"	"he"		"ammo" 1 {value 5}}
)

(define "shells_ger_75mm_l24"
	{item "bullet_75x241" "ger"	"aphe"		"ammo" 1 {value 5}}
	{item "bullet_75x241" "ger"	"he"		"ammo" 1 {value 5}}

	{item "bulletger_75_l24"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l24"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_75_l24"	"heat"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"heata"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"heatb"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"heatc"		"ammo" 1 {value 10}}
	{item "bulletger_75_l24"	"sm"		"ammo" 1 {value 5}}
)

(define "shells_ger_75mm_l43"

	{item "bulletger_75_l43"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l43"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_75_l43"	"heat"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"heatb"		"ammo" 1 {value 10}}
	{item "bulletger_75_l43"	"heatc"		"ammo" 1 {value 10}}
)

(define "shells_ger_75mm_l70"
	{item "bulletger_75_l70"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_75_l70"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_75_l70"	"he"		"ammo" 1 {value 5}}
)

(define "shells_ger_88mm_l56"
	{item "bulletger_88_l56"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_88_l56"	"apcbche2"	"ammo" 1 {value 5}}
	{item "bulletger_88_l56"	"apcr"		"ammo" 1 {value 10}}
	{item "bulletger_88_l56"	"he"		"ammo" 1 {value 5}}
	{item "bulletger_88_l56"	"heat"		"ammo" 1 {value 10}}
)

(define "shells_ger_88mm_l71"
	{item "bulletger_88_l71"	"apcbche"	"ammo" 1 {value 5}}
	{item "bulletger_88_l71"	"he"		"ammo" 1 {value 5}}
)

;/*========= tank_and_at_shells end =========*/
;/*========= howitzer_shells begin =========*/

(define "howitzer_shells_ger_105mm"
	{item "bulletger_105"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletger_105"		"he"		"ammo" 1 {value 15}}
	{item "bulletger_105"		"he2"		"ammo" 1 {value 5}}
	{item "bulletger_105"		"heat"		"ammo" 1 {value 10}}
)
(define "howitzer_shells_ger_150mm_l11"
	{item "bulletger_150_l11"	"he"		"ammo" 1 {value 50}}
	{item "bulletger_150_l11"	"he2"		"ammo" 1 {value 50}}
)

(define "howitzer_shells_ger_150mm_l30"
	{item "bulletger_150_l30"	"he"		"ammo" 1 {value 50}}
	{item "bulletger_150_l30"	"heat"		"ammo" 1 {value 50}}
)

(define "howitzer_shells_ger_155mm"
	{item "bullet_155"	"ger"	"he"		"ammo" 1 {value 50}}
)

;/*========= howitzer_shells end =========*/
;/*========= nebelwerfer_shells begin =========*/
(define "nebelwerfer_shells"
	{item "150mm_nebelwerfer"				"ammo" 1 {value 40}} ;// 6 rockets costs ~250 per salvo
	{item "210mm_nebelwerfer"				"ammo" 1 {value 50}} ;// 5 rockets costs 250 per salvo
	{item "280mm_nebelwerfer"				"ammo" 1 {value 60}} ;// 6 rockets costs ~500 per salvo
	{item "300mm_nebelwerfer"				"ammo" 1 {value 60}} ;// 6 rockets costs ~500 per salvo
)
(define "nebelwerfer_shells_300mm"
	{item "300mm_nebelwerfer"				"ammo" 1 {value 60}} ;// 6 rockets costs ~500 per salvo
)
;/*========= nebelwerfer_shells end =========*/
;/*========= mortar_rounds begin =========*/

(define "mortar_rounds_ger_80mm"

;// ger
	{item "mortarger_80" "he"		"ammo" 1  {value 5}}
	{item "mortarger_80" "sm"		"ammo" 1  {value 5}}
)

(define "mortar_rounds_ger_100mm"

;// ger
	{item "mortarger_100" "he"		"ammo" 1  {value 5}}
	{item "mortarger_100" "sm"		"ammo" 1  {value 5}}
)

(define "mortar_rounds_ger_120mm"

	{item "mortarger_120" "he"		"ammo" 1  {value 15}}
)
(define "mortar_rounds_ger_200mm"

	{item "mortarger_200"		"he"		"ammo" 1  {value 30}}
	{item "mortarger_200"		"sm"		"ammo" 1  {value 5}}
)
;/*========= mortar_rounds end =========*/
;/*====================================== items_heavy end ======================================*/
;/*===================mod Item_Defines end ===================*/








;/*===================mod Supply_Defines Begin ===================*/
;/*===================infantry_equipment begin ===================*/

(define "medic_bag_ger"
	{extender "supply_zone"
		{resupply
			("items_medic_ger")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	3}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "ger_ammo_box"
	{extender "supply_zone"
		{resupply
			("small_arms_ger")
			("small_arms_jap")
		}
		{radius 			10}	;// resupply radius in meter
		{resupplyPeriod 	4}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)

(define "backpack_engineer_ger"
	{extender "supply_zone"
		{resupply
			("items_backpack_engineer_ger")
			("items_explosives_ger")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				200}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
(define "backpack_explosives_ger"
	{extender "supply_zone"
		{resupply
			("items_backpack_engineer_ger")
			("hand_grenade_ger")
		}
		{radius 			2}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				80}	;// max number of resupplies (0 = unlimited)
	}
)
(define "backpack_rifle_grenade_ger"
	{extender "supply_zone"
		{resupply
			("rifle_grenade_ger")
		}
		{radius 			2}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_ger_box"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_80mm")
			("mortar_rounds_ger_100mm")
			("mortar_rounds_ger_120mm")			
		}
		{radius 			2}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_ger_crate"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_80mm")
			("mortar_rounds_ger_100mm")
			("mortar_rounds_ger_120mm")		
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "ger_harness_rifle"
	{extender "supply_zone"
		{resupply
			("rifle_ammo_ger")	
		}
		{radius 			1}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				60}	;// max number of resupplies (0 = unlimited)
	}
)

(define "ger_harness_mg"
	{extender "supply_zone"
		{resupply
			("mg_ammo_ger")				
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				60}	;// max number of resupplies (0 = unlimited)
	}

)

(define "ger_harness_smg"
	{extender "supply_zone"
		{resupply
			("smg_ammo_ger")	
		}
		{radius 			1}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				60}	;// max number of resupplies (0 = unlimited)
	}

)
(define "ger_harness_stg"
	{extender "supply_zone"
		{resupply
			("stg_ammo_ger")	
		}
		{radius 			1}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				60}	;// max number of resupplies (0 = unlimited)
	}

)

(define "AT_rocket_box_ger"
	{extender "supply_zone"
		{resupply
			("AT_rocket_rounds_ger")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================infantry_equipment end ===================*/
;/*===================auto_cannon_shell_supply begin ===================*/

(define "shells_ger_crate_15mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_ger_15mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_20mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_ger_20mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_30mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_ger_30mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_37mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_ger_37mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================auto_cannon_shell_supply end ===================*/
;/*===================tank_and_at_shell_supply begin ===================*/
(define "shells_ger_crate_37mm"
	{extender "supply_zone"
		{resupply
			("shells_ger_37mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_50mm_l60"
	{extender "supply_zone"
		{resupply
			("shells_ger_50mm_l60")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_ger_crate_50mm_l87"
	{extender "supply_zone"
		{resupply
			("shells_ger_50mm_l87")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_75mm_l24"
	{extender "supply_zone"
		{resupply
			("shells_ger_75mm_l24")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_75mm_l43"
	{extender "supply_zone"
		{resupply
			("shells_ger_75mm_l43")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_88mm_l56"
	{extender "supply_zone"
		{resupply
			("shells_ger_88mm_l56")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "shells_ger_crate_88mm_l71"
	{extender "supply_zone"
		{resupply
			("shells_ger_88mm_l71")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

;/*===================tank_and_at_shell_supply end ===================*/
;/*===================howitzer_shell_supply begin ===================*/

(define "howitzer_shells_ger_crate_105mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_ger_105mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "howitzer_shells_ger_crate_150mm_l11"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_ger_150mm_l11")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "howitzer_shells_ger_crate_150mm_l30"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_ger_150mm_l30")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "howitzer_shells_ger_crate_155mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_ger_155mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================nebelwerfer_shells_supply begin ===================*/
(define "nebelwerfer_shells_ger_crate_300mm"
	{extender "supply_zone"
		{resupply
			("nebelwerfer_shells_300mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				1000}	;// max number of resupplies (0 = unlimited)
	}
)

;/*===================nebelwerfer_shells_supply end ===================*/

;/*===================howitzer_shell_supply end ===================*/
;/*===================mortar_round_supply begin ===================*/

(define "mortar_rounds_ger_crate_80mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_80mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_ger_crate_100mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_100mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_ger_crate_120mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_120mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "mortar_rounds_ger_crate_200mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_ger_200mm")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================mortar_round_supply end ===================*/
;/*===================mod Supply_Defines end ===================*/