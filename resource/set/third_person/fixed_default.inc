
		
		
		{"low_mg.moded"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		90	}	; camera rotate downward limit (looking up)
				{distanceMin	50	}	; camera min distance from object. value / 20 = meters
				{distanceMax	50	}	; camera max distance from object. value / 20 = meters
			}
			{level ;1
                {zoom}
				{linkBone "basis"}
				{faroffset 11 5 16}
				{nearoffset 11 5 16}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{ManualAccuracyZoom}
			}
			{level ;1
                {zoom}
				{linkBone "basis"}
				{faroffset 19 0 21}
				{nearoffset 19 0 21}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 0}
				{disable_fow 1}
				{ManualAccuracyZoom}
			}
		}
		

        {"generic.moto_stat"
			{clip
				{viewMin		-40}	; camera rotate upward limit (looking down)
				{viewMax		15 }	; camera rotate downward limit (looking up)
				{distanceMin	1}		; camera min distance from object. value / 20 = meters
				{distanceMax	15}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "gunner"}
				{faroffset -12 1 18}
				{nearoffset -5 4 16}
				{camera "zoom0"}
				{delta 20}			; distance delta
				;{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 1}
				{no_grain}
				{no_rim_light}
				{ManualAccuracyZoom}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "mgun"}
				{distance 0.1}
				{distanceSet 0}
				{delta 20}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{offset -2.5 0 3.1}
				{camera "zoom1"}
				{blur_strength 10}
			}
		}
