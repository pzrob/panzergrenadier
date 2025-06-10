
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "m36b1_gmc" "medium" "emplacement_tank_trench_middle" "vision_lev04" "muzzle_85mm_93mm" "shell_eject" "open_top" "detect_td_medium" "ammo_open_top_turret"}
	{extension "m36b1_gmc.mdl"}
	(include  "m36b1_gmc.ext")
	{PatherId "sherman"}
	{targetclass "tank_heavy"}
	{targetSelector "tank_medium"}

	{boarder
		{anm "driver"
			{forward {begin "board_tank_left"} {base "open_driver"}}
			{reverse {end "emit_tank_1_hold"} {base "open_driver"}}
		}
		{anm "co_driver"
			{forward {begin "board_tank_right"} {base "open_co_driver"}}
			{reverse {end "emit_tank_1_hold"} {base "open_co_driver"}}
		}
		{anm "left"
			{forward {begin "board_tank_left"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "charger_l"
			{forward {begin "board_tank_left"} {end "seat_m18_charger"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "charger_r"
			{forward {begin "board_tank_right"} {end "seat_m18_charger"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "gunner_l"
			{forward {begin "board_tank_left"} {end "seat_m10_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "gunner_r"
			{forward {begin "board_tank_right"} {end "seat_m10_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "commander_l"
			{forward {begin "board_tank_left"} {end "seat_m3a1_gunner50"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "commander_r"
			{forward {begin "board_tank_right"} {end "seat_m3a1_gunner50"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "armor1"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_2"}}
		}
	}

	("crew_driver" door(emit0) door2(emit2) door3(emit3))
	("crew_human_visible_anm"	place(gunner)		door(emit2) door2(emit3) visor(main)		anm_left(gunner_l)		anm_right(gunner_r))
	("crew_human_visible_anm"	place(charger)		door(emit2) door2(emit3) visor(around)		anm_left(charger_l)		anm_right(charger_r))
	("crew_co_driver" 			place(gunner3) 		door(emit1) door2(emit2) door3(emit3))
	("crew_human_visible_anm2"	place(commander)	door(emit2) door2(emit3)					anm_left(commander_l)	anm_right(commander_r))

	{sensor
		{visor "around"
			{vision "vehicle_around"}		;// better vision than a in-closed turret 
		}
	}

	("seat_human" place(seat1) bone(seat01) door(emit4) animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit5) animation(armor1))
	("seat_human" place(seat3) bone(seat03) door(emit6) animation(armor1))
	("seat_human" place(seat4) bone(seat04) door(emit7) animation(armor1))

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{RestoreIKAfterAim}
			{weapon "90mm_m3" filling "bulletusa_90x600 apcbche" 1}
			{gunner "gunner"}
			{charger "charger"}
			("abm_dymamic_td"
				zeroing(2.5)
				dispersion(0.25)
			)
		}
		{place "mgun1"
			{type "hull"}
			{weapon "browning_m19a4" filled}
			{foresight "foresight4"}
			{gunner "gunner3"}
			{charger "gunner3"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
		{place "mgun"
			{type "aa"}
			{weapon "browning_m2" filled}
			{gunner "commander"}
			{charger "commander"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{basic}
			{ai_in_manual}
		}
	}

	{mass 31070}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.3) len(0.7))
		("mobility_tank"
			speed(42) ;----------Max speed when fully accelerated on road, km/h.
			reverse(7) ;---------Max speed in reverse on road, km/h.
			traverse(30) ;-------Track traverse, per second, in degrees.
			weight(31.57) ;-------Weight in Tonnes.
			power(450) ;---------Engine Power, in hp.
			track(4) ;---------Track performance: (0,10], 10=ideal. Sluggish tanks and vehicles with narrow and non-gripping tracks have a lower performance.
			fuel(635) ;----------Fuel capacity in Litres.
			type(fuel) ;---------Fuel type. (diesel OR fuel)
			range(160) ;---------Range in km, off-road.
		)
	}

	{bone "gun_rot"
		{limits -10 20}
		{speed2 4}
	}
	{bone "turret"
		("turret_heavy" power_traverse(24))
	}
	{bone "mgun_a_rot1"
		{limits -15 15}
		{speed2 60}
	}
	{bone "mgun_a_rot2"
		{limits -10 35}
		{speed2 60}
	}