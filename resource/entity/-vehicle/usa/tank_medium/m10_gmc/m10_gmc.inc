
	(include "/properties/tank.ext")
	(include "/properties/selection/vehicle.inc" scale(1.1))
	{props "td" "medium" "emplacement_tank_trench_panzer5" "vision_lev04" "muzzle_75mm_76mm" "shell_eject" "open_top" "muzzle_hmg_m2hb" "ammo_open_top_turret"}
	(include "m10_gmc.ext")
	{targetclass "tank_medium"}
	{targetSelector "tank_medium"}
	{patherId "m10_gmc"}

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
			{forward {begin "board_tank_left"} {end "m10_gmc_top_mgunner"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "right"
			{forward {begin "board_tank_right"} {end "m10_gmc_top_mgunner"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "gunner_l"
			{forward {begin "board_tank_left"} {end "seat_m10_gunner"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "gunner_r"
			{forward {begin "board_tank_right"} {end "seat_m10_gunner"}}
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
		{anm "charger2_l"
			{forward {begin "board_tank_left"} {end "seat_m10_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "charger2_r"
			{forward {begin "board_tank_right"} {end "seat_m10_commander"}}
			{reverse {end "emit_tank_1_hold"}}
		}
		{anm "armor1"
			{forward {begin "board_HighArmor"} {end "pose_seat_armor_1"}}
			{reverse {end "emit_tank_2"}}
		}
	}

	("crew_driver" door(emit0) door2(emit2) door3(emit3))
	("crew_human_visible_anm"	place(gunner)		door(emit2) door2(emit3) visor(main)		anm_left(gunner_l)		anm_right(gunner_r))
	("crew_human_visible_anm"	place(charger)		door(emit2) door2(emit3) visor(none)		anm_left(charger_l)		anm_right(charger_r))
	("crew_human_visible_anm"	place(charger2)		door(emit2) door2(emit3) visor(around)		anm_left(charger2_l)	anm_right(charger2_r))
	("crew_co_driver" 			place(commander) 	door(emit1) door2(emit2) door3(emit3))

	("gunner_open" place(gunner2) bone(gunner2) visorbone(mgun_rot) door(emit5) door2(emit7) anm_left(left) anm_right(right) group(passenger))

	("seat_human" place(seat1) bone(seat01) door(emit4) animation(armor1))
	("seat_human" place(seat2) bone(seat02) door(emit5) animation(armor1))
	("seat_human" place(seat3) bone(seat03) door(emit6) animation(armor1))
	("seat_human" place(seat4) bone(seat04) door(emit7) animation(armor1))

	{sensor
		{visor "around"
			{vision "vehicle_around"}		;// better vision than a in-closed turret 
		}
	}

	{mass 29600}
	{Chassis
		("tank_trace" fx("tracks_mid") step(0.52) len(0.9))
		("mobility_tank"
			speed(48) ;----------Max speed when fully accelerated on road, km/h.
			reverse(6) ;---------Max speed in reverse on road, km/h.
			traverse(32) ;-------Track traverse, per second, in degrees.
			weight(29.6) ;--------Weight in Tonnes.
			power(375) ;---------Engine Power, in hp.
			track(4) ;-----------Track performance: (0,10], 10=ideal. Sluggish tanks and vehicles with narrow and non-gripping tracks have a lower performance.
			fuel(620) ;----------Fuel capacity in Litres.
			type(diesel) ;---------Fuel type. (diesel OR fuel)
			range(260) ;---------Range in km, off-road.
		)
	}


