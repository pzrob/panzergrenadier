{"fixed_mgun.maxim_x4"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		10	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -10 0 15}
		{nearoffset 2 0 15}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 18}
		{distanceSet 0}
		{delta 0}
		{offset 10 12 7}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shield2"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
		{"fixed_mgun.ds39_stand_bunker"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset 0 5 20 }
				{nearoffset 0 5 20 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "basis" }
				{faroffset 0 0 20 }
				{nearoffset 0 0 20 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
			{level ;2
                {zoom}
				{linkBone "gunner" }
				{faroffset 19.0 -0.4 17 }
				{nearoffset 19.0 -0.4 17 }
				{camera "zoom2" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
		}
		
		{"fixed_mgun.maxim_stand_tower"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -20 6 14 }
				{nearoffset -20 6 14 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "gunner" }
				{faroffset 23.3 -0.1 33 }
				{nearoffset 23.3 -0.1 33 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 13 }
			}
			{level ;2
                {zoom}
				{linkBone "basis" }
				{faroffset -11 -0 16 }
				{nearoffset -11 -0 16 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
		}	
		
	    {"fixed_mgun.maxim_stand_bunker"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -3 7 10 }
				{nearoffset -3 7 10 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
                {zoom}
				{linkBone "gun" }
				{faroffset -0.7 0 2.3 }
				{nearoffset -0.7 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
        }

		
		{"fixed_mgun.sg43_stand_bunker"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -3 7 12 }
				{nearoffset -3 7 12 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset 2.8 0 2.3 }
				{nearoffset 2.8 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}

		{"fixed_mgun.sg43_stand_stat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -17 7 12 }
				{nearoffset -17 7 12 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
				{linkBone "basis" }
				{faroffset -3 7 12 }
				{nearoffset -3 7 12 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset 3.1 0 2.3 }
				{nearoffset 3.1 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		

		{"dshk_aa.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			;{level ;0
				;{linkBone "basis" }
				;{faroffset -25 3 29 }
				;{nearoffset -25 3 29 }
				;{hide_hitmarker 1}
				;{blur_strength 0}
				;{disable_fow 1}
			;}
			{level ;1
				{linkBone "gunner" }
				{faroffset -7 8 30 }
				{nearoffset -4 8 30 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 13 }
			}
			{level ;2
                {zoom}
				{linkBone "gunner" }
				{faroffset 14.0 0.05 30.15 }
				{nearoffset 12.0 0.05 30.15 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
		}
	
	    {"fixed_mgun.dshk_aa_fixed_noshield"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			;{level ;0
				;{linkBone "basis" }
				;{faroffset -25 3 29 }
				;{nearoffset -25 3 29 }
				;{hide_hitmarker 1}
				;{blur_strength 0}
				;{disable_fow 1}
			;}
			{level ;1
				{linkBone "gunner" }
				{faroffset -7 8 30 }
				{nearoffset -4 8 30 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 13 }
			}
			{level ;2
                {zoom}
				{linkBone "gunner" }
				{faroffset 14.0 0.05 30.15 }
				{nearoffset 12.0 0.05 30.15 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}

	    }
	
		{"dshk_stan.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		90	}	; camera rotate downward limit (looking up)
				{distanceMin	50	}	; camera min distance from object. value / 20 = meters
				{distanceMax	50	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
                {zoom}
				{linkBone "basis"}
				{faroffset 3 3 14.5}
				{nearoffset 3 3 14.5}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 40 }
			}
			{level ;1
                {zoom}
				{linkBone "gunner"}
				{faroffset 26.0 -0.05 13.5}
				{nearoffset 26.0 -0.05 13.5}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }

			}
			
		}
		
		
	
		{"fixed_mgun.maxim_stand"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -4 7 11.5 }
				{nearoffset -16 6 11.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
				{linkBone "basis" }
				{faroffset 2 7 11.5 }
				{nearoffset -3 6 11.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset -0.7 0 2.3 }
				{nearoffset -0.7 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		
		{"fixed_mgun.sg43_stand"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -23 7 14 }
				{nearoffset -23 6 14 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
                {zoom}
				{linkBone "gun" }
				{faroffset 2.5 0 2.3 }
				{nearoffset 2.5 0 2.3 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}
		
		{"fixed_mgun.ds39_stand_moded"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	30	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset 0 5 15 }
				{nearoffset 0 5 15 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "basis" }
				{faroffset 0 0 17 }
				{nearoffset -1.3 0 17 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
			{level ;2
                {zoom}
				{linkBone "gunner" }
				{faroffset 19.0 -0.4 17 }
				{nearoffset 19.0 -0.4 17 }
				{camera "zoom2" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
		}
		
		{"fixed_mgun.ds39_stand_shielded"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	30	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -14 5.5 18 }
				{nearoffset -14 5.5 17.0 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
			{level ;1
				{linkBone "basis" }
				{faroffset 0 0 17 }
				{nearoffset -1.1 0 17 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
			{level ;2
                {zoom}
				{linkBone "gunner" }
				{faroffset 19.0 -0.4 17 }
				{nearoffset 19.0 -0.4 17 }
				{camera "zoom2" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
		}
		{"fixed_mgun.ds39_stand_unshielded"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -17 7 12 }
				{nearoffset -17 7 12 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;1
				{linkBone "basis" }
				{faroffset -3.6 5.7 11.5 }
				{nearoffset -3.6 5.7 11.5 }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 12 }
			}
			{level ;2
                {zoom}
				{linkBone "gun" }
				{faroffset 3.2 0 1.6 }
				{nearoffset 3.2 0 1.6 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
		}	
        {"fixed_mgun.ds39_stand_stat"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	15	}	; camera min distance from object. value / 20 = meters
				{distanceMax	35	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset -14 5.7 18 }        
     			{nearoffset -14 5.7 17.0 }    
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{distance 14 }
			}
			{level ;1
                {zoom}
				{linkBone "gunner" }
				{faroffset 20.0 -0.06 29.2 }
				{nearoffset 24.0 -0.06 31 }   ;(far->near z x y)
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
			}
	    }
		
{"atgun.76mm_bpk76_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	20	}	; camera min distance from object. value / 20 = meters
		{distanceMax	60	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -20 0 60}
		{nearoffset -20 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "basis" }
		{faroffset -5 6.5 19 }
		{nearoffset -3 4.5 19 }
		{hide_hitmarker 1}
		{blur_strength 0}
		{disable_fow 1}
		{distance 12 }
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 15 -5 3}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		
		{soundEffect "opentop_vehicle"}
	}
	{level ;3
		{camera "zoom2.5" }
	}
}  
	
{"atgun.m37_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	52	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "gun_rot"}
		{faroffset -28 0.1 11}
		{nearoffset -14 0.1 11}
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
		{camera "zoom2.5"} ; in reality it did not have zoom3
	}
}

{"atgun.37mm_61k_shield_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	70	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 11 36}
		{nearoffset -10 13 33}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 0 25 2.5}
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
}

{"atgun.zis2_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	42	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -30 0 28}
		{nearoffset -12 0 28}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 9}
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
		{camera "zoom2.5"}
	}
}
{"atgun.f22_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	62	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -25 0 37}
		{nearoffset -14 0 37}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
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
	}
	{level ;2
		{camera "zoom3"} ; in reality it did not have zoom3
	}
}
{"atgun.zis3_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	50	}	; camera min distance from object. value / 20 = meters
		{distanceMax	62	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -30 0 31}
		{nearoffset -10 0 30}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 9}
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
		{camera "zoom2.5"}
	}
}

    {"76mm_m43_stat.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	0	}	; camera min distance from object. value / 20 = meters
				{distanceMax	52	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
		        {faroffset -22 0 24}
		        {nearoffset -12 0 23}
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
		
{"atgun.25mm_72k_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	52	}	; camera min distance from object. value / 20 = meters
		{distanceMax	50	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -3.5 11 29}
		{nearoffset -3 11 30}
		{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "basis"}
		{faroffset -2.5 0 31.0}
		{nearoffset -2.5 0 31.0}
		{camera "zoom2"}
		{distance 2.5}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 0 23 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shield2"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}

{"atgun.bs3_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50		}	; camera rotate downward limit (looking up)
		{distanceMin	50		}	; camera min distance from object. value / 20 = meters
		{distanceMax	52		}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "visor"}
		{faroffset -6 0 5.0}
		{nearoffset -6 0 5.0}
		{camera "zoom2"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{linkBone "visor"}
		{faroffset 5 12.8 3.5}
		{nearoffset 5 12.8 3.5}
		;{camera "zoom1"}
		;{hide_hitmarker 0}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2-5"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 8 0 2}
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
		{camera "zoom4"}
	}
}
{"atgun.52k_stat"
	{clip
		{viewMin		-15	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	20	}	; camera min distance from object. value / 20 = meters
		{distanceMax	35	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -10 8 45}
		{nearoffset -40 8 50}
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
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{offset 18 10 -2}
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