
	(include "/properties/cannon_mgun.ext")
	(include "/properties/shadow/tank.inc" scale(0.3))
	{obstacleid "unbreakable"}
	{extension "mg42_tripod_stat_shielded.mdl"}
	{props "vision_lev00_can" "cannon_sandbag_standard" "detect_cannon_aa"}
	{placer
		{place "driver1" remove}
		{place "driver2" remove}
	}

	{boarder
		{anm "gunner"
			{forward {end "pose_jagdtiger_aa"} {base "mgun_aa"}}
		}
		{anm "commander"
			{forward {end "pose_mg_lafette_commander" 10}}
		}
	}
	("shield" args "shield" 8)
	
	{volume "shield"
		{able {holed}}
	}
	
	{extender "shield" {off}}


	{extender "cannon"
		{animation
		;// "gunner" "commander"
			{move "" ""}
			;{fire "" "mg_lafette_commander_fire"}
			{aim "" "mg_lafette_commander_aim"}
			{reload "" "mg_lafette_commander_reload"}
		}
		{move {workers clear} {obstacle "close"}}
		{attack {obstacle "open"}}
		{rotate_ik_Limit 0}
	}

	{extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "ammo mgun_ger belt ap" 1000}
			{item "sandbag_vehicle" 2}
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
			{basic}
		}
	}

	{mass 32}
	{Chassis
		("mobility_cannon"
			speed(12) ;----------------------------------Max speed.
			weight(32) ;---------------------------------Weight in Kilograms.
		)
	}


	{bone "mgun_a_rot1"
		{limits -40 40}	
		{speed2 60}
	}
	{bone "mgun_a_rot2" ; up and down rotation
		{limits -11.0 65}
		;{speed2 20}
	}

