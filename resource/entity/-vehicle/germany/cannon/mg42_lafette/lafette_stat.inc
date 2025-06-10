
	(include "/properties/cannon_mgun.ext")
	(include "/properties/shadow/tank.inc" scale(0.3))
	{extension "lafette.mdl"}
	{props "vision_lev00_can" "emplacement_small_mgun_lafette" "detect_cannon_aa" "gun_shield"}
    {tag "gun_shield_off"}
	("shield" args "shield" 8)
    {tag "emplacement_small_mgun_lafette"}
	{boarder
		{anm "gunner"
			{forward {end "pose_mg_lafette_gunner" 10}}
		}
		{anm "commander"
			{forward {end "pose_mg_lafette_commander" 10}}
		}
	}
	{placer
		{place "driver1" remove}
		{place "driver2" remove}
	}

	{extender "cannon"
		{animation
		;// "gunner" "commander"
			{move "" ""}
			;{fire "mg_lafette_gunner_fire" "mg_lafette_commander_fire"}
			{aim "mg_lafette_gunner_aim" "mg_lafette_commander_aim"}
			{reload "mg_lafette_gunner_reload" "mg_lafette_commander_reload"}
		}
		{move {workers clear} {obstacle "close"}}
		{attack {obstacle "open"}}
		{rotate_ik_Limit 35}
	}

	{extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "ammo mgun_ger belt" 1000}
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
			{Rotate}
		}
	}

	{mass 32}
	{Chassis
		("mobility_cannon"
			speed(12) ;----------------------------------Max speed.
			weight(32) ;---------------------------------Weight in Kilograms.
		)
	}

	{bone "basis"
		{speed2 20}
	}
	{bone "gun_rot"
		{limits -10 15}
		{speed2 60}
	}
	{bone "turret"
		{limits -13 13}
		{speed2 60}
	}
