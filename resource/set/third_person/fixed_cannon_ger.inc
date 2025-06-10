
{"cannon.mg34_lafette_stat"
	{clip
		{viewMin		-50	}	; camera rotate upward limit (looking down)
		{viewMax		90	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{linkBone "mgun"}
		{offset			-10 0 3.3}
		;{gunnerviewoff	1}
		{hide_crosshair 1} 
		;{hide_hitmarker 1}
		{blur_strength 1}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{linkBone "mgun"}
		{offset			0 0 4.1}
		;{gunnerviewoff	1}
		{hide_crosshair 0} 
		;{hide_hitmarker 1}
		{blur_strength 1}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "lafette42_optic"}
		{offset 1 -2 4}
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{no_rim_light}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{with_owner
			{viewoff "lafette42_optic"} ; removes lafette_mechtop to prevent clipping
		} 
		{soundEffect "opentop_vehicle"}
		{hide_crosshair 1}
	}
}

{"cannon.mg42_lafette_stat"
	{clip
		{viewMin		-50	}	; camera rotate upward limit (looking down)
		{viewMax		90	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{linkBone "mgun"}
		{offset			-10 0 2.9}
		;{gunnerviewoff	1}
		{hide_crosshair 1} 
		;{hide_hitmarker 1}
		{blur_strength 1}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{linkBone "mgun"}
		{offset			0 0 3.7}
		;{gunnerviewoff	1}
		{hide_crosshair 0} 
		;{hide_hitmarker 1}
		{blur_strength 1}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "lafette42_optic"}
		{offset 1 -2 4}
		{distance 		50}
		{distanceset 	10}
		{delta 			0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{no_rim_light}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{with_owner
			{viewoff "lafette42_optic"} ; removes lafette_mechtop to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
		{hide_crosshair 1}
	}
}



		{"fixed_mgun.mg42_lafette_bunker"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	30	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "gun_rot" }
				{faroffset -9 0 5 }
				{nearoffset -9 0 5 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "gun_rot" }
				{faroffset 0.0 0 4.8 }
				{nearoffset 0.0 0 4.8 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
		}	
		
		{"fixed_mgun.mg42_lafette_tower"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset 0 4 90 }
				{nearoffset 0 4 90 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "gun_rot" }
				{faroffset -2 -0 9 }
				{nearoffset -2 -0 9 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 10 }
			}
		}

		{"fixed_mgun.mg42_lafette_stand_stat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -16 4 8 }
				{nearoffset -16 4 8 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "mgun_a_rot1" }
				{faroffset -2 -0 9 }
				{nearoffset -2 -0 9 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 10 }
			}
		}

		{"fixed_mgun.mg42_tripod_stat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -9 0.2 36 }
				{nearoffset -9 0.2 36 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "mgun_a_rot1" }
				{faroffset -3 -0 3.8 }
				{nearoffset -3 -0 3.8 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 10 }
			}
		}

		{"fixed_mgun.mg42_lafette_pillbox"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "mgun_a_rot1" }
				{faroffset -13 4 8 }
				{nearoffset -13 4 8 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "mgun_a_rot1" }
				{faroffset -2 -0 8.5 }
				{nearoffset -2 -0 8.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 10 }
			}
		}
	
		
{"atgun.pak40_bunker"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 -1 15}
		{nearoffset -10 -1 15}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 1}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"atgun.pak38_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 0 26}
		{nearoffset -12 0 26}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 12 -4 4}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"atgun.pak40_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 0 28}
		{nearoffset -10 0 28}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"atgun.pak36_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -38 0 24}
		{nearoffset -20 0 23}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x11"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 0 -4 9}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"} ; in reality it did not have zoom3
	}
}
{"atgun.pakt_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset -44 -0.1 5.1}
		{nearoffset -6 -0.1 5.4}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x11"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset 0 -6 7}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
		{hide_crosshair 1}
	}
	{level ;2
		{camera "zoom3"} ; in reality it did not have zoom3
	}
}
{"atgun.flak30_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	10	}	; camera min distance from object. value / 20 = meters
		{distanceMax	33	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -33 8 25}
		{nearoffset -8 0 22}

		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

		{distanceSet 0}
		{delta 0}
		{offset 10 0 4}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.flak38_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	10	}	; camera min distance from object. value / 20 = meters
		{distanceMax	36	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -36 0 24}
		{nearoffset -10 0 23}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 13 0 1}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.flak37_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	10	}	; camera min distance from object. value / 20 = meters
		{distanceMax	16	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{zoom}
		{linkBone "visor"}
		{faroffset 18 0 1}
		{nearoffset 18 0 1.1}

		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{linkBone "basis"}
		{faroffset -2 0 27.9}
		{nearoffset -2 0 27.9}
		{camera "zoom2"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_37mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

		{distanceSet 0}
		{delta 0}
		{offset 31 0 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"atgun.kwk39_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		40	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	30	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -20 0 30}
		{nearoffset -5 0 30}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset 1 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.flak41_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	30	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -22 0 25}
		{nearoffset -12 0 25}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset -2 0 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
		{with_owner
			{viewoff "shield1"} ; removes shield to prevent clipping
		}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"atgun.flak18_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		45	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	35	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -26 -1 46}
		{nearoffset -14 -1 46}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf20"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 50}
		{distanceSet 0}
		{delta 0}
		{offset 65 -1.35 13}
		{camera "zoom2"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}
    {"sig33_stat"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	0	}	; camera min distance from object. value / 20 = meters
				{distanceMax	42	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
		        {faroffset -22 0 31}
		        {nearoffset -12 0 32}
		        {camera "zoom1"}
				(mod "hardcore"
					{hide_crosshair 1}
					;{hide_hitmarker 1}
				)
				{blur_strength 2}
				{disable_fow 1}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 5}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 50}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2"}
				{offset 100 0 100}
			}
			{level ;3
				{camera "zoom2"}
				{offset 150 0 150}
			}
			{level ;4
				{camera "zoom2"}
				{offset 200 0 200}
			}
			{level ;5
				{camera "zoom2"}
				{offset 250 0 250}
			}
			{level ;6
				{camera "zoom2"}
				{offset 300 0 300}
			}
			{level ;5
				{camera "zoom2"}
				{offset 350 0 350}
			}
		}
		
{"atgun.pak4341_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50		}	; camera rotate downward limit (looking up)
		{distanceMin	50		}	; camera min distance from object. value / 20 = meters
		{distanceMax	52		}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "visor"}
		{faroffset -6 -0.5 8.0}
		{nearoffset -6 -0.5 8.0}
		{camera "zoom2"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "visor"}
		{faroffset 5 8 9}
		{nearoffset 5 8 9}
		;{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shield1"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}
{"cannon.15mm_mg151_x3"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0.5 1 31.0}
		{nearoffset -5 -0.2 30.0}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_grain}
		{no_rim_light}
		{with_owner
			{viewoff "magazine"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}