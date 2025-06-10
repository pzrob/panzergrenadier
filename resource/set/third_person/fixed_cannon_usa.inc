
		{"fixed_mgun.m2_30cal_stand"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		25	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	15	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -21 4 5 }
				{nearoffset -16 4 4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -10 4 4 }
				{nearoffset -10 4 3 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 3.1 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		{"fixed_mgun.m2_30cal_tower"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -21 4 5 }
				{nearoffset -16 4 4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -10 4 4 }
				{nearoffset -10 4 3 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 3.1 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		{"fixed_mgun.m2_30cal_squat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	30	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -21 4 21 }
				{nearoffset -16 4 21 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -10 4 22 }
				{nearoffset -9 4 22 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 3.1 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}		
		{"fixed_mgun.m1917_30cal"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "gun" }
				{faroffset -21 4 5 }
				{nearoffset -16 4 4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "gun" }
				{faroffset -10 4 4 }
				{nearoffset -10 4 3 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 3.1 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
	
        {"fixed_mgun.m2_50cal_tripod_prone"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	11	}	; camera min distance from object. value / 20 = meters
				{distanceMax	31	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -16 4 3.1 }
				{nearoffset -15 4 3.1 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -14 4 3.1 }
				{nearoffset -13.5 3.0 3.8 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 2.4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}	
		
        {"fixed_mgun.m2_50cal_tripod_sandbag_bunker"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
			    {zoom}
				{linkBone "mgun" }
				{faroffset -8 5 3.1 }
				{nearoffset -5 4.5 3.1 }
				;{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
                {zoom}
				{linkBone "mgun" }
				{faroffset -5.9 0.01 1.65 }
				{nearoffset -5.9 0.01 1.65 }
				;{camera "zoom1" }
				{distance 0.1}
				{distanceSet 0}
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}

	
		{"fixed_mgun.m2_50cal_tripod_squat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	31	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -22 4.0 24 }
				{nearoffset -18 4.0 24 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -16 3.5  24 }
				{nearoffset -16 3.5 24 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 10 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 2.4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		
		{"fixed_mgun.m2_50cal_tripod_stand"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	11	}	; camera min distance from object. value / 20 = meters
				{distanceMax	31	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body" }
				{faroffset -18 6 25 }
				{nearoffset -17 6 24 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "body" }
				{faroffset -10 7 25 }
				{nearoffset -10 7.0 24 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 7.7 0 3.2 }
				{nearoffset 7.1 0 2.4 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}

		{"fixed_mgun.browning_m2_tower"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	14	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -25 4 36 }
				{nearoffset -25 4 36 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "mgun" }
				{faroffset 6 0 3.5 }
				{nearoffset 6 0 3.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 13 }
			}
			{level ;2
                {zoom}
				{linkBone "mgun" }
				{faroffset 24 0 3.5 }
				{nearoffset 24 0 3.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 13 }
			}
		}

		
{"atgun.37mm_m3_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -31 0 21}
		{nearoffset -15 0 20}
		{camera "zoom1.5"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m54"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
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

{"atgun.57mm_m1_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -20 0 26}
		{nearoffset -12 0 25.5}
		{camera "zoom1.5"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m69c"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}	

{"atgun.76mm_m5_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -24 0 29}
		{nearoffset -12 0 30}
		{camera "zoom1.5"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{offset 0 0 0}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner {viewoff "shield"}} ; removes shield to prevent clipping
		{soundEffect "opentop_vehicle"}
	}
}

{"75mm_m1a1_stat.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	52	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
		        {faroffset -43 0 21}
		        {nearoffset -9 0 21}
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

{"75mm_m3a3_stat.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	60	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
		        {faroffset -43 0 25}
		        {nearoffset -9 0 25}
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

{"atgun.40mm_m1_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 5 65}
		{nearoffset -30 5 45}
		{camera "zoom1.5"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m74"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		;{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset -2 0 3}
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
{"atgun.90mm_m1a1_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	10	}	; camera min distance from object. value / 20 = meters
		{distanceMax	61	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset 0 -0 14}
		{nearoffset -61 -0 20}
		{camera "zoom1.5"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m60a1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 50}
		{distanceSet 0}
		{delta 0}
		{offset 65 -1.35 13}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}