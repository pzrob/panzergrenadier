
	(include "/properties/car.ext")
	(include "/properties/selection/vehicle_elongated.inc" scale(1.15))
	{props "cckw" "multi_board" "truck" "vision_lev02" "tractor" "tractor_heavy" "Captor" "emplacement_halftrack_trench_tall"}
	{able "emit_on_attack"}
	{extension "cckw.mdl"}
	{collider "truck"}
	{patherId "cckw"}

	("wheel" args "wheelright1")
	("wheel" args "wheelleft1")
	("wheel" args "wheelright2")
	("wheel" args "wheelleft2")
	("wheel" args "wheelright3")
	("wheel" args "wheelleft3")

	("glass" args "window1")
	("glass" args "window2")
	("glass" args "window3")
	("glass" args "window4")
	("fuel" args "fuel")
	("transmission" args "transmission")

	("bodyback" repair(30))

	("shield_cover")

	{volume "detail2"
		{thickness 1}
	}

	{volume "body2" {able {holed}}}
	{volume "body3" {able {holed}}}
	{volume "bodyback1" {material "wood"} {tags "wood"} {able {holed}}}
	{volume "bodyback2" {material "wood"} {tags "wood"}}
	{volume "shield_cover" {able {holed}}}
	{volume "fuel" {able {NoWoundDecal 0}}}
	{volume "transmission" {able {NoWoundDecal 0}}}

	("crew_2_human")
	("passenger_12_human")

	("board_animation"
		place(driver)
		board_begin(board_big-midcar_driver)
		board_end(seat_driver_car)
		base(doorleft)
	)
	("board_animation"
		place(commander)
		board_begin(board_big-midcar)
		board_end(seat_passenger)
		base(doorright)
	)

	{boarder
		{anm "passenger"
			{forward {begin "board_body"} {end "seat_passenger"} {base "board"}}
			{reverse {end "emit_body" 1} {base "board"}}
		}
	}

	{extender "shield" {on}}

	{extender "inventory"
		{box
		}
	}

	{mass 4000}
	{Chassis
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel03d") step(0.08) wheell("wlr") wheelr("wrr") bonel("FXtraceL2") boner("FXtraceR2"))
		("mobility_car"
			speed(72) ;----------------------------------Max speed.
			speedatmaxturn(15) ;-------------------------Max speed at max turn.
			reverse(22) ;--------------------------------Max speed in Reverse.
			weight(4.00) ;-------------------------------Weight in Tonnes.
			power(104) ;---------------------------------Horse Power.
			fuel(150) ;----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(480) ;---------------------------------Range in Kilometers.
		)
	}

