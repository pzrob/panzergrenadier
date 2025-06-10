;/*===================mod Item_Defines begin ===================*/
;/*====================================== items_light begin ======================================*/
;/*========= small_arms begin =========*/
(define "small_arms_fin"

;// smg
	{item "suomi_drum"				"ammo" 72 {value 4}}
	{item "suomi_stick"				"ammo" 50 {value 3}}
	{item "bergmann_stick"			"ammo" 50 {value 3}}

;// mg
	{item "chauchat"				"ammo" 20 {value 2}}
	{item "m26"						"ammo" 20 {value 2}}
	{item "madsen"					"ammo" 30 {value 3}}


;// Grenade
	{item "grenade" "m32"					1  {value 5}}
	{item "grenade" "m32_stick"				1  {value 5}}
	{item "grenade" "m36"					1  {value 5}}

	{item "grenade" "m32_satchel"			1  {value 10}}
	{item "grenade" "molotov_bundle_fin"	1  {value 10}}
	{item "grenade" "molotov_cocktail_fin"	1  {value 10}}

	{item "grenade" "m42_wp"				1  {value 5}}
	{item "grenade" "m43_smoke"				1  {value 5}}
)


(define "smg_ammo_fin"

	{item "suomi_drum"				"ammo" 72 {value 4}}
	{item "suomi_stick"				"ammo" 50 {value 3}}
	{item "bergmann_stick"			"ammo" 50 {value 3}}
	
)
(define "rifle_ammo_fin"

	{item "atrifle_rus"				"ammo" 5  {value 5}}
	{item "rifle_rus" "clip"		"ammo" 10 {value 2}}
	{item "rifle_rus" "svt"			"ammo" 10 {value 2}}
	
)

(define "mg_ammo_fin"
;// mg
	{item "chauchat"				"ammo" 20 {value 2}}
	{item "m26"						"ammo" 20 {value 2}}
	{item "madsen"					"ammo" 30 {value 3}}
)
;/*========= small_arms end =========*/


;/*========= explosives_and_support_items begin =========*/
(define "items_medic_fin"
;// other
	{item "bandage_fin"						1 {value 1}}
)
(define "items_explosives_fin"
;// explosives
	{item "satchel_charge_rus"					1 {value 15}}

;// mines
	{item "s" "mine" 							1 {value 5}}
	{item "luhas" "mine" 						1 {value 5}}
	
	{item "m39" "mine" 							1 {value 10}}
)

(define "hand_grenade_fin"
;// Grenade
	{item "grenade" "m32"					1  {value 5}}
	{item "grenade" "m32_stick"				1  {value 5}}
	{item "grenade" "m36"					1  {value 5}}

	{item "grenade" "m32_satchel"			1  {value 10}}
	{item "grenade" "molotov_bundle_fin"	1  {value 10}}
	{item "grenade" "molotov_cocktail_fin"	1  {value 10}}

	{item "grenade" "m42_wp"				1  {value 5}}
	{item "grenade" "m43_smoke"				1  {value 5}}
)

;/*========= explosives_and_support_items end =========*/
(define "items_backpack_engineer_fin"
;// fortification tools
	;{item "shovel_fin"							1 {value 5}}
	;{item "pickaxe"								1 {value 10}}
	{item "tent_kit"							1 {value 5}}
	{item "sandbag_vehicle"						1 {value 10}}

;// general tools
	;{item "mine_detector"						1 {value 20}}
	{item "repair_kit"							1 {value 20}}
	
;// special ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
)
;/*====================================== items_light end ======================================*/
;/*====================================== items_heavy begin ======================================*/

;/*========= auto_cannon_shells begin =========*/
(define "shells_fin_20mm_auto"
	{item "bulletfin_20"		"ap"		"ammo" 20 {value 5}}
	{item "bulletfin_20_auto"	"ap"		"ammo" 20 {value 5}}
	{item "bulletfin_20_auto"	"he"		"ammo" 20 {value 5}}

	{item "bullet_20x138b_auto" "fin" "ap"	"ammo" 20 {value 5}}
	{item "bullet_20x138b_auto" "fin" "he"	"ammo" 20 {value 5}}
)

(define "shells_fin_40mm_auto"
	{item "bullet_40x331_auto" "fin" "apbc"	"ammo" 10 {value 5}}
	{item "bullet_40x331_auto" "fin" "he"	"ammo" 10 {value 5}}
)
;/*========= auto_cannon_shells end =========*/
;/*========= tank_and_at_shells begin =========*/

(define "shells_fin_37mm_l21"
	{item "bullet_37x94" "fin" "aphe"		"ammo" 2 {value 5}}
	{item "bullet_37x94" "fin" "he"			"ammo" 2 {value 5}}
)
(define "shells_fin_37mm_l45"
	{item "bullet_37x257" "fin" "ap"		"ammo" 2 {value 5}}
	{item "bullet_37x257" "fin" "he"		"ammo" 2 {value 5}}
)

;/*========= tank_and_at_shells end =========*/

(define "shells_fin_75x657"
	{item "bullet_75x657" "fin" "apbc"		"ammo" 1 {value 5}}
	{item "bullet_75x657" "fin" "he"		"ammo" 1 {value 5}}
)
;/*========= howitzer_shells begin =========*/

(define "howitzer_shells_fin_84mm"
	{item "bullet_84x294" "fin" "ap"		"ammo" 1 {value 5}}
	{item "bullet_84x294" "fin" "he"		"ammo" 1 {value 5}}
)

(define "howitzer_shells_fin_107mm"
	{item "bullet_107x442" "fin" "he"		"ammo" 1 {value 15}}
)

(define "howitzer_shells_fin_120mm"
	{item "bullet_120_l27" "fin" "he"		"ammo" 1 {value 25}}
)

;/*========= howitzer_shells end =========*/
;/*========= mortar_rounds begin =========*/

(define "mortar_rounds_fin"
;// fin
	{item "mortareng_50" "sm"		"ammo" 1  {value 5}}
	
	{item "mortarfin_81" "he"		"ammo" 1  {value 5}}
	{item "mortarfin_81" "sm"		"ammo" 1  {value 5}}
	{item "mortarfin_120" "he"		"ammo" 1  {value 10}}
	{item "bulletfin_20"		"ap"		"ammo" 20 {value 5}}
	
	{item "mortarfin_170"		"he"		"ammo" 1  {value 50}}

)
(define "mortar_rounds_fin_81mm"
;// fin

	{item "mortarfin_81" "he"		"ammo" 1  {value 5}}
	{item "mortarfin_81" "sm"		"ammo" 1  {value 5}}
)
(define "mortar_rounds_fin_120mm"
;// fin
	{item "mortarfin_120" "he"		"ammo" 1  {value 10}}
)
(define "mortar_rounds_fin_170mm"
;// fin

{item "mortarfin_170"		"he"		"ammo" 1  {value 50}}
)
	


;/*========= mortar_rounds end =========*/
;/*====================================== items_heavy end ======================================*/
;/*===================mod Item_Defines end ===================*/



;/*===================mod Supply_Defines Begin ===================*/
;/*===================infantry_equipment begin ===================*/
(define "medic_bag_fin"
	{extender "supply_zone"
		{resupply
			("items_medic_fin")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	3}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)
(define "ammo_box_small"
	{extender "supply_zone"
		{resupply
			("small_arms_fin")
		}
		{radius 			10}	;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				60}	;// max number of resupplies (0 = unlimited)
	}
)

(define "plash_palatka_fin"
	{extender "supply_zone"
		{resupply
			("rifle_ammo_fin")
			;("items_medic_fin")			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				50}	;// max number of resupplies (0 = unlimited)
	}
)


;/*===================infantry_equipment end ===================*/
(define "smg_bag_fin"
	{extender "supply_zone"
		{resupply
			("smg_ammo_fin")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
)
(define "mg_bag_fin"
	{extender "supply_zone"
		{resupply
			("mg_ammo_fin")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
)

(define "backpack_engineer_fin"
	{extender "supply_zone"
		{resupply
			("items_backpack_engineer_fin")
			("items_explosives_fin")
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
;/*===================auto_cannon_shell_supply begin ===================*/

(define "shells_fin_crate_20mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_fin_20mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_fin_crate_40mm_auto"
	{extender "supply_zone"
		{resupply
			("shells_fin_40mm_auto")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				600}	;// max number of resupplies (0 = unlimited)
	}
)



;/*===================auto_cannon_shell_supply end ===================*/
;/*===================tank_and_at_shell_supply begin ===================*/



(define "shells_fin_crate_37mm_l21"
	{extender "supply_zone"
		{resupply
			("shells_fin_37mm_l21")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
(define "shells_fin_crate_37mm_l45"
	{extender "supply_zone"
		{resupply
			("shells_fin_37mm_l45")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

;/*===================tank_and_at_shell_supply end ===================*/
(define "shells_fin_crate_75x657"
	{extender "supply_zone"
		{resupply
			("shells_fin_75x657")			
		}
		{radius 			4}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)
;/*===================howitzer_shell_supply begin ===================*/

(define "howitzer_shells_fin_crate_84mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_fin_84mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				800}	;// max number of resupplies (0 = unlimited)
	}
)

(define "howitzer_shells_fin_crate_107mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_fin_107mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				800}	;// max number of resupplies (0 = unlimited)
	}
)

(define "howitzer_shells_fin_crate_120mm"
	{extender "supply_zone"
		{resupply
			("howitzer_shells_fin_120mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				800}	;// max number of resupplies (0 = unlimited)
	}
)


;/*===================howitzer_shell_supply end ===================*/
;/*===================mortar_round_supply begin ===================*/
(define "mortar_rounds_fin_box"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_fin")
			
		}
		{radius 			2}		;// resupply radius in meter
		{resupplyPeriod 	6}		;// resupply period in seconds
		{regenerationPeriod 6}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				150}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_fin_crate"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_fin")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_fin_crate_81mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_fin_81mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_fin_crate_120mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_fin_120mm")
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)

(define "mortar_rounds_fin_crate_170mm"
	{extender "supply_zone"
		{resupply
			("mortar_rounds_fin_170mm")
			
		}
		{radius 			3}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds 0 = no regeneration
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
)


;/*===================mortar_round_supply end ===================*/
;/*===================mod Supply_Defines end ===================*/