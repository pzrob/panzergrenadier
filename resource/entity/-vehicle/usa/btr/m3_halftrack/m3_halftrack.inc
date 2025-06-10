
	(include "/properties/armoredcar.ext")
	(include "/properties/selection/vehicle.inc" scale(1.0))
	{props "m3_halftrack" "tank" "halftrack" "wheeled" "multi_board" "explosion_throw_crew" "vision_lev02" "tractor" "tractor_heavy" "detect_tank_mg" "open_death_fx" "muzzle_hmg_m2hb" "emplacement_halftrack_trench"}
	{able "emit_passengers_on_enemy"}
	{extension "m3_halftrack.mdl"}
	(include "m3_halftrack.ext")
	{patherId "m3halftrack"}
	{targetclass "armoredcar"}
	{targetSelector "car_bullet"}

	{boarder
		{anm "driver"
			{forward {begin "board_big-midcar_driver"} {end "seat_kubel_driver"} {base "doorleft"}}
			{reverse {end "board_big-midcar_driver" -1} {base "doorleft" -1}}
		}
		{anm "commander"
			{forward {begin "board_big-midcar"} {end "seat_kubel_commander"} {base "doorright"}}
			{reverse {end "board_big-midcar" -1} {base "doorright" -1}}
		}
		{anm "gunner"
			{forward {begin "board_body"} {end "seat_m3_gunner"} {base "board"}}
			{reverse {end "emit_tank_1_hold" 1} {base "board"}}
		}
		{anm "gunner4"
			{forward {begin "board_body"} {end "pose_m3a1e1_gunner4"}}
			{reverse {end "emit_tank_1_hold" 1}}
		}
		{anm "passenger"
			{forward {begin "board_body"} {end "seat_passenger"}}
			{reverse {end "emit_body" 1}}
		}
		{anm "passenger1"
			{forward {begin "board_body"} {end "seat_m2_crew"} {base "board"}}
			{reverse {end "emit_tank_1_hold"} {base "board"}}
		}
		{anm "passenger2"
			{forward {begin "board_body"} {end "seat_m2_crew1"} {base "board"}}
			{reverse {end "emit_tank_1_hold"} {base "board"}}
		}
	}

	("crew" place(driver)		bone(driver)	door(emit1)	animation(driver)	 visor(driver) off({sensor}))
	("crew" place(gunner)		bone(gunner)	door(emit3)	animation(gunner)	 visor(none) off())

	("crew_human" place(seat1)	bone(seat01)	door(emit2)	animation(commander) group(passenger))
	("crew_human" place(seat2)	bone(seat02)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat3)	bone(seat03)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat4)	bone(seat04)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat5)	bone(seat05)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat6)	bone(seat06)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat7)	bone(seat07)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat8)	bone(seat08)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat9)	bone(seat09)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat10)	bone(seat10)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat11)	bone(seat11)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat12)	bone(seat12)	door(emit4)	animation(passenger2) group(passenger))

	{extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{Box
			{item "browning_m19a4" filling "ammo mgun_usa belt" 250 {user "mgun"}}
			{item "ammo mgun_usa belt" 3250}		; 4000 .30cal total
			;{item "ammo m1_carbine_mag" 500}		; .30cal
			;{item "ammo thompson_mag stick 20" 540}
			{item "mine m1a1" 24}			;24 AT mines
			;{item "mk2 grenade" 10}			;22 handgrenades
			;{item "m15_wp grenade" 6}
			;{item "anm8_smoke grenade" 6}
		}
	}

	{Weaponry
		{place "mgun"
			{type "main"}
			{gunner "gunner"}
			{charger "gunner"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
	}

	{mass 9100}
	{Chassis "wheel"
		("tank_trace_ex" fx("tracks_sm2") step(0.2) len(0.58) boneleft("FXtraceL3") boneright("FXtraceR3"))
		("car_trace" fx("tracewheel03a") step(0.09) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("mobility_car"
			speed(72) ;----------------------------------Max speed.
			speedatmaxturn(14) ;-------------------------Max speed at max turn.
			reverse(14) ;--------------------------------Max speed in Reverse.
			weight(9.1) ;--------------------------------Weight in Tonnes.
			power(147) ;---------------------------------Horse Power.
			fuel(225) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(320) ;---------------------------------Range in Kilometers.
		)
	}

	{bone "mgun_1_rot1"
		{speed2 60}
	}
	{bone "mgun_1_rot2"
		{speed2 60}
	}
