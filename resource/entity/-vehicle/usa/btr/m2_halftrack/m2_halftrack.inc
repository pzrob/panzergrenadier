
	(include "/properties/armoredcar.ext")
	(include "/properties/selection/vehicle.inc" scale(1.0))
	{props "m2_halftrack" "tank" "halftrack" "wheeled" "explosion_throw_crew" "vision_lev02" "tractor" "tractor_heavy" "detect_tank_mg" "open_death_fx" "muzzle_hmg_m2hb" "emplacement_halftrack_trench"}
	{able "emit_passengers_on_enemy"}
	{extension "m2_halftrack.mdl"}
	(include "m2_halftrack.ext")
	{patherId "m3halftrack"}
	{targetclass "armoredcar"}
	{targetSelector "tank_bullet"}

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
			{forward {begin "board_body"} {end "seat_m3a1_gunner50"}}
			{reverse {end "emit_tank_1_hold" 1}}
		}
		{anm "gunner2"
			{forward {begin "board_body"} {end "pose_m3a1e1_gunner4"}}
			{reverse {end "emit_tank_1_hold" 1}}
		}
		{anm "passenger"
			{forward {begin "board_body"} {end "seat_passenger"}}
			{reverse {end "emit_body" 1}}
		}
		{anm "passenger1"
			{forward {begin "board_body"} {end "seat_m2_crew"}}
			{reverse {end "emit_body" 1}}
		}
		{anm "passenger2"
			{forward {begin "board_body"} {end "seat_m2_crew1"}}
			{reverse {end "emit_body" 1}}
		}
	}

	("crew" place(driver)		bone(driver)	door(emit1)	animation(driver)	 visor(driver) off({sensor}))
	("crew" place(gunner)		bone(gunner)	door(emit3)	animation(gunner)	 visor(none) off())
	("crew" place(gunner2)		bone(gunner2)	door(emit4)	animation(gunner2)	 visor(none) off())
	("crew" place(gunner3)		bone(gunner3)	door(emit3)	animation(gunner2)	 visor(none) off())
	("crew_human" place(seat1)	bone(seat01)	door(emit2)	animation(commander) group(passenger))
	("crew_human" place(seat2)	bone(seat02)	door(emit4)	animation(passenger1) group(passenger))
;	("crew_human" place(seat3)	bone(seat03)	door(emit4)	animation(passenger1) group(passenger))
	("crew_human" place(seat4)	bone(seat04)	door(emit4)	animation(passenger2) group(passenger))
	("crew_human" place(seat5)	bone(seat05)	door(emit3)	animation(passenger1) group(passenger))
;	("crew_human" place(seat6)	bone(seat06)	door(emit4)	animation(passenger2) group(passenger))
	("crew_human" place(seat7)	bone(seat07)	door(emit3)	animation(passenger2) group(passenger))
	("crew_human" place(seat8)	bone(seat08)	door(emit3)	animation(passenger1) group(passenger))

	{extender "inventory"
		{weapon "mgun2" {mask "mountable"}}
		{weapon "mgun3" {mask "mountable"}}
		{Box
		    {item "sandbag_vehicle" 1}
			{item "browning_m19a4_left" filling "ammo mgun_usa belt" 250 {user "mgun2"}}
			{item "browning_m19a4_right" filling "ammo mgun_usa belt" 250 {user "mgun3"}}
			{item "ammo hmgun_usa" 600}				; 700 .50cal total
			{item "ammo mgun_usa belt" 6750}		; 7750 .30cal
			;{item "ammo m1_carbine_mag" 500}		; .30cal
			;{item "ammo thompson_mag stick 20" 540}
			{item "mine m1a1" 14}
			;{item "mk2 grenade" 4}			;10 handgrenades, 4 frag, 3 WP, 3 smoke
			;{item "m15_wp grenade" 3}
			;{item "anm8_smoke grenade" 3}
		}
	}

	{Weaponry
		{place "mgun"
			{type "main"}
			{weapon "browning_m2" filled}
			{gunner "gunner"}
			{charger "gunner"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
		{place "mgun2"
			{type "left"}
			{gunner "gunner2"}
			{charger "gunner2"}
			{LinkBone "mgun2"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
		{place "mgun3"
			{type "right"}
			{gunner "gunner3"}
			{charger "gunner3"}
			{LinkBone "mgun3"}
			{LinkAnimation "off"}
			("abm_mgun")
			{ai_in_manual}
			{basic}
		}
	}

	{mass 8707}
	{Chassis "wheel"
		("tank_trace_ex" fx("tracks_sm2") step(0.2) len(0.58) boneleft("FXtraceL3") boneright("FXtraceR3"))
		("car_trace" fx("tracewheel03a") step(0.09) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("mobility_car"
			speed(72) ;----------------------------------Max speed.
			speedatmaxturn(14) ;-------------------------Max speed at max turn.
			reverse(14) ;---------------------------------Max speed in Reverse.
			weight(8.707) ;--------------------------------Weight in Tonnes.
			power(147) ;---------------------------------Horse Power.
			fuel(227) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(320) ;---------------------------------Range in Kilometers.
		)
	}
	{bone "mgun_1_rot1"
		{speed2 60}
		{limits -40 40}
	}
	{bone "mgun_1_rot2"
		{speed2 60}
		{limits -25 35}
	}
	{bone "mgun_2_rot1"
		{speed2 60}
		{limits -40 40}
	}
	{bone "mgun_2_rot2"
		{speed2 60}
		{limits -25 35}
	}
	{bone "mgun_3_rot1"
		{speed2 60}
		{limits -40 40}
	}
	{bone "mgun_3_rot2"
		{speed2 60}
		{limits -25 35}
	}