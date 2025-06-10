
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc" scale(1.2))
	{props "m12_gmc" "spg" "medium" "emplacement_halftrack_trench_tall" "-turret" "vision_lev04" "muzzle_150mm_155mm" "shell_eject" "detect_artillery" "artillery_minimap_heavy" "open_top" "ammo_open_top"}
	{Extension "m12_gmc.mdl"}
	(include  "m12_gmc.ext")
	{targetclass "tank_medium"}
	{targetSelector "cannon_howitzer"}

	{boarder
		{anm "driver"
			{forward {begin "board_tank_left"} {base "open_driver"}}
			{reverse {end "emit_tank_2_hold"}{base "open_driver"}}
		}
		{anm "co_driver"
			{forward {begin "board_tank_right"} {base "open_co_driver"}}
			{reverse {end "emit_tank_1_hold"} {base "open_co_driver"}}
		}
		{anm "left"
			{forward {begin "board_tank_left"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner_l"
			{forward {begin "board_tank_left"} {end "m12_gmc_gunner"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner_r"
			{forward {begin "board_tank_right"} {end "m12_gmc_gunner"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger_l"
			{forward {begin "board_tank_left"} {end "m12_gmc_charger"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger_r"
			{forward {begin "board_tank_right"} {end "m12_gmc_charger"}}
			{reverse {end "emit_tank_2_hold"}}
		}	
		{anm "gunner2_l"
			{forward {begin "board_tank_left"} {end "m12_gmc_gunner2"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner2_r"
			{forward {begin "board_tank_right"} {end "m12_gmc_gunner2"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger2_l"
			{forward {begin "board_tank_left"} {end "m12_gmc_charger2"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger2_r"
			{forward {begin "board_tank_right"} {end "m12_gmc_charger2"}}
			{reverse {end "emit_tank_2_hold"}}
		}
	}

;	("crew_inside")
;	("crew_human"				place(driver)		door(emit1) door2(emit2) visor(driver))
;	("crew_human"				place(commander)	door(emit1) door2(emit2) visor(around))

	("crew_driver" 									door(emit0) door2(emit2) door3(emit3))
	("crew_co_driver" 			place(commander) 	door(emit1) door2(emit2) door3(emit3))
	("crew_human_visible_anm"	place(gunner)		door(emit2) door2(emit3) visor(main)   anm_left(gunner_l)	anm_right(gunner_r))
	("crew_human_visible_anm"	place(gunner2)		door(emit2) door2(emit3) visor(main)   anm_left(gunner2_l)	anm_right(gunner2_r))
	("crew_human_visible_anm"	place(charger)		door(emit4) door2(emit5) visor(around) anm_left(charger_l)	anm_right(charger_r))
	("crew_human_visible_anm"	place(charger2)		door(emit4) door2(emit5) visor(around) anm_left(charger2_l)	anm_right(charger2_r))

	{extender "inventory"
		{box
			{item "ammo bullet_155 usa he2" 3}		;10 rounds
			{item "ammo bullet_155 usa aphebc" 3}
			{item "satchel_charge_usa" 1}
		}
	}
	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "155mm_m1918m1" filling "bullet_155 usa he2" 1}
			{gunner "gunner gunner2" minWorkers 1}
			{charger "charger charger2" minWorkers 1}
			{rotate}
			("abm_dymamic_gun"
				zeroing(8.0)	; // time it takes to aim until the reticle shrinks. Bigger values, more control.
				dispersion(1)   ; // time it takes to distort the reticle when you move the gun (how abrupt it loses zeroing). Bigger values, more control.
			)
		}
	}

	{mass 27000}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.3) len(1.05))
		("mobility_tank"
			speed(39) ;----------Max speed when fully accelerated on road, km/h.
			reverse(6) ;---------Max speed in reverse on road, km/h.
			traverse(30) ;-------Track traverse, per second, in degrees.
			weight(27) ;---------Weight in Tonnes.
			power(350) ;---------Engine Power, in hp.
			track(4) ;-----------Track performance: (0,10], 10=ideal. Sluggish tanks and vehicles with narrow and non-gripping tracks have a lower performance.
			fuel(660) ;----------Fuel capacity in Litres.
			type(fuel) ;---------Fuel type. (diesel OR fuel)
			range(193) ;---------Range in km, off-road.
		)
	}
	
	{bone "Basis"
		{speed2 2}
	}
	{bone "turret"
		{limits -7 7}
		{speed2 3}
	}
	{bone "gun_rot"
		{limits -5 30}
		{speed2 3}
	}
	(mod "mp"
		{brain
			{properties
				{fire_mode hold}
			}
		}
	)
