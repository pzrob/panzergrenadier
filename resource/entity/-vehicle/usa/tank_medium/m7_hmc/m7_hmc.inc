
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "m7_hmc" "spg" "medium" "emplacement_tank_trench_kv2" "-turret" "vision_lev04" "muzzle_100mm_105mm" "tractor" "tractor_medium" "shell_eject" "detect_spg" "artillery_minimap_medium" "open_top" "muzzle_hmg_m2hb" "ammo_open_top"}
	{Extension "m7_hmc.mdl"}
	(include  "m7_hmc.ext")
	{PatherId "sherman"}
	{targetclass "howitzer"}
	{targetSelector "cannon_howitzer"}

	{boarder
		{anm "driver_l"
			{forward {begin "board_tank_left"} {end "seat_m7_driver"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "driver_r"
			{forward {begin "board_tank_right"} {end "seat_m7_driver"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner2_l"
			{forward {begin "board_tank_left"} {end "seat_m3a1_gunner50"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner2_r"
			{forward {begin "board_tank_right"} {end "seat_m3a1_gunner50"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner_l"
			{forward {begin "board_tank_left"} {end "pose_m5_gunlayer"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "gunner_r"
			{forward {begin "board_tank_right"} {end "pose_m5_gunlayer"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger_l"
			{forward {begin "board_tank_left"} {end "pose_pdr25_charger"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger_r"
			{forward {begin "board_tank_right"} {end "pose_pdr25_charger"}}
			{reverse {end "emit_tank_2_hold"}}
		}
		{anm "charger2_l"
			{forward {begin "board_tank_left"} {end "pose_flak_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "charger2_r"
			{forward {begin "board_tank_right"} {end "pose_flak_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "commander_l"
			{forward {begin "board_tank_left"} {end "seat_m18_charger"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "commander_r"
			{forward {begin "board_tank_right"} {end "seat_m18_charger"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "armor1"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_2"}}
		}
	}

	("crew_human_visible_anm"  place(driver)	door(emit1) door2(emit2) visor(driver)	anm_left(driver_l)		anm_right(driver_r))

	("crew_human_visible_anm"  place(gunner)	door(emit3) door2(emit4) visor(main)	anm_left(gunner_l)		anm_right(gunner_r))
	("crew_human_visible_anm2" place(gunner2)	door(emit1) door2(emit2) visor()		anm_left(gunner2_l)		anm_right(gunner2_r))
	("crew_human_visible_anm2" place(charger)	door(emit3) door2(emit4) visor()		anm_left(charger_l)		anm_right(charger_r))

	("crew_human_visible_anm2" place(charger2)	door(emit3) door2(emit4) visor()		anm_left(charger2_l)	anm_right(charger2_r))
	("crew_human_visible_anm"  place(commander)	door(emit1) door2(emit2) visor(around)	anm_left(commander_l)	anm_right(commander_r))

	("seat_human" place(seat1) bone(seat01) door(emit5) animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit6) animation(armor1))
	("seat_human" place(seat3) bone(seat03) door(emit7) animation(armor1))
	("seat_human" place(seat4) bone(seat04) door(emit8) animation(armor1))

	{extender "inventory"
		{box
			{item "bulletusa_105 he" 47}	;69 rounds	;70,20,10%  HE,WP,HEAT
			{item "bulletusa_105 heat" 7}
			{item "ammo hmgun_usa" 200}	;300 rounds
			{item "satchel_charge_usa" 1}
		}
	}
	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "105mm_m2a1" filling "bulletusa_105 he" 1}
			{gunner "gunner"}
			{charger "charger charger2" minWorkers 1}
			{rotate}
			("abm_dymamic_gun"
				zeroing(8.0)	; // time it takes to aim until the reticle shrinks. Bigger values, more control.
				dispersion(1)   ; // time it takes to distort the reticle when you move the gun (how abrupt it loses zeroing). Bigger values, more control.
			)
		}
		{place "mgun"
			{type "main"}
			{weapon "browning_m2_nomag" filled}
			{gunner "gunner2"}
			{charger "gunner2"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
	}

	{mass 23000}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.3) len(1.05))
		("mobility_tank"
			speed(39) ;----------Max speed when fully accelerated on road, km/h.
			reverse(6) ;---------Max speed in reverse on road, km/h.
			traverse(30) ;-------Track traverse, per second, in degrees.
			weight(23.0) ;-------Weight in Tonnes.
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
		{limits -30 15}
		{speed2 4}
	}
	{bone "gun_rot"
		{limits -5 35}
		{speed2 4}
	}
	{bone "mgun_mount"
		{speed2 30}
	}
	{bone "mgun_1_rot1"
		{limits -5 5}
		{speed2 60}
	}
	{bone "mgun_1_rot2"
		{limits -10 35}
		{speed2 60}
	}
	(mod "mp"
		{brain
			{properties
				{fire_mode hold}
			}
		}
	)
