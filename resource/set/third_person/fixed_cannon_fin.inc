		{"fixed_mgun.maxim_stand_tower_fin"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -25 4 11 }
				{nearoffset -25 4 11 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "basis" }
				{faroffset -10 3 13 }
				{nearoffset -10 0.3 11 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset -0.7 0 2.3 }
				{nearoffset -0.1 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}	
		
		{"fixed_mgun.maxim_stand_fin"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -19 7 10 }
				{nearoffset -19 7 10 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
                {zoom}
				{linkBone "gun" }
				{faroffset -0.2 0 2.3 }
				{nearoffset -0.6 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		
		
		{"fixed_mgun.maxim_stand_bunker_fin"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -5 4 11.5 }
				{nearoffset -10 4 11.5 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "basis" }
				{faroffset -10 3 13 }
				{nearoffset -10 0.3 11 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset -0.7 0 2.3 }
				{nearoffset -0.1 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		
{"atgun.l39_stat_prone"
		{clip
			{viewMin		-40	}	; camera rotate upward limit (looking down)
			{viewMax		30	}	; camera rotate downward limit (looking up)
			{distanceMin	20	}	; camera min distance from object. value / 20 = meters
			{distanceMax	50	}	; camera max distance from object. value / 20 = meters
		}
		{level ;0
			{linkBone "basis"}
			{faroffset 25 4 9}
			{nearoffset 25 4 9}
			{delta 50}
			{ManualAccuracyZoom}
			{blur_strength 2}
			;{hide_hitmarker 0}
			{disable_fow 1}
			{no_grain}
			{no_rim_light}
		}
		{level ;1
			{zoom}
			{linkBone "visor"}
			{distanceset 0}
			{distance 50}		; activation distance
			{delta 30 }			; distance delta, effects number of steps in between near and far
			{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
			{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
			{camera "human_zoom1.5"}
			{offset 30 -1.8 0.2}
			{blur_strength 10}
		}
}

{"atgun.l39_stand_stat"
		{clip
			{viewMin		-40	}	; camera rotate upward limit (looking down)
			{viewMax		30	}	; camera rotate downward limit (looking up)
			{distanceMin	50	}	; camera min distance from object. value / 20 = meters
			{distanceMax	100	}	; camera max distance from object. value / 20 = meters
		}
		{level ;0
			{linkBone "basis"}
			{faroffset 0 -2 23}
			{nearoffset 0 -2 18}
			{delta 50}
			{ManualAccuracyZoom}
			{blur_strength 2}
			;{hide_hitmarker 0}
			{disable_fow 1}
			{no_grain}
			{no_rim_light}
		}
		{level ;1
			{zoom}
			{linkBone "visor"}
			{distanceset 0}
			{distance 50}		; activation distance
			{delta 30 }			; distance delta, effects number of steps in between near and far
			{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
			{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
			{camera "human_zoom1.5"}
			{offset 3 -8 4.75}
			{blur_strength 10}
		}
}

{"atgun.pstk36_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -32 0 22}
		{nearoffset -16 0 21}
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
{"atgun.pstk39_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset -28 0.1 4.8}
		{nearoffset -10 -0 4.8}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp9-3"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
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
		{camera "zoom2.5"} ; in reality it did not have zoom3
	}
}
{"atgun.itk35_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 8 28}
		{nearoffset -5 0 26}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "visor"}
		{faroffset -1 0 7}
		{nearoffset -6 0 1}

		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
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
		{offset 10 0 2}
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
{"atgun.itk40_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		70	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 8 28}
		{nearoffset -5 0 26}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "visor"}
		{faroffset -1 0 5}
		{nearoffset -6 0 1}

		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
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
		{offset 10 0 2}
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
{"atgun.75mm_itk37_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		15	}	; camera rotate downward limit (looking up)
		{distanceMin	11	}	; camera min distance from object. value / 20 = meters
		{distanceMax	25	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset 0 8 11}
		{nearoffset -20 8 16}
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