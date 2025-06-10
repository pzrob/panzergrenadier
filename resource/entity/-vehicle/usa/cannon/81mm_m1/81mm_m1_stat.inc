
	(include "/properties/cannon_mgun.ext")
	{extension "81mm_m1_stat.mdl"}
	{props "-mg_stan" "with_gun" "mortar" "vision_lev01_can" "detect_artillery_small" "cannon_sandbag_standard" "artillery_minimap_light" "c_mtr_med"}
	(mod not "mp" {able "emit_on_attack"})
	{targetclass "howitzer"}
	{targetSelector "cannon_howitzer"}

	{sensor
		{visor "main"
			{vision "cannon_mortar"}
			{bone "visor"}
		}
	}

	{placer
		{place "gunner" {visor "main"}}
		{place "driver1" remove}
		{place "driver2" remove}
	}

	{boarder
		{anm "gunner"
			{forward {end "pose_mortar_gunner" 10}}
		}
		{anm "commander"
			{forward {end "pose_mortar_commander" 10}}
		}
	}

	{extender "cannon"
		{animation
			{switch "close"}
			;// "gunner" "commander"
			{move "" ""}
			{aim "mortar_gunner_aim" "mortar_commander_aim"}
			{fire "mortar_gunner_fire" "mortar_commander_fire"}
			{reload "" "mortar_commander_reload"}
		}
		{move {workers clear} {obstacle "close"}}			;// move state: cannon being pushed and which positions play animations
		{attack {obstacle "open"}}
	}

	{Weaponry
		("restore_ik_time")
		{place "gun"
			{weapon "weapon 81mm_m1" filling "ammo mortarusa_81 he" 1}
			{RestoreIKAfterAim}
			{gunner "gunner"}
			{charger "gunner"}
			{basic}
			("abm_dymamic_mortar"
				zeroing(3.0)	; // time it takes to aim until the reticle shrinks. Bigger values, more control.
				dispersion(1)   ; // time it takes to distort the reticle when you move the gun (how abrupt it loses zeroing). Bigger values, more control.
			)
		}
	}

	{mass 62}
	{Chassis
		("mobility_cannon"
			speed(12) ;----------------------------------Max speed.
			weight(62) ;---------------------------------Weight in Kilograms.
		)
	}

	{bone "basis"
		{speed2 15}
	}
	{bone "turret"
		{limits -10 10}
		{speed2 20}
	}
	{bone "foresight"
		{limits -25 20}
		{speed2 10}
	}