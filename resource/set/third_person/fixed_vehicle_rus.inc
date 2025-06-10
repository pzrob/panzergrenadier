
{"vehicle.gaz67b_stat"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	10	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -40 5 36}
		{nearoffset -34 4 36}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{linkBone "mgun"}
		{vision_modes_active}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset -5.5 0 2.1}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
	}
}

{"tank.t3476early_stat" ;
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	120	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -0 0 52}
		{nearoffset 0 0 52}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1

		{linkBone "visor1"}
		{faroffset 0 7 2}
		{nearoffset 5 7 2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tod6"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t3476_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	120	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -0 0 52}
		{nearoffset 0 0 52}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1

		{linkBone "visor1"}
		{faroffset 0 7 2}
		{nearoffset 5 7 2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt4-7"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t3457_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	120	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -0 0 52}
		{nearoffset 0 0 52}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1

		{linkBone "visor1"}
		{faroffset 0 7 2}
		{nearoffset 5 7 2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-4-14"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t3485_stat" 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	120	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1

		{linkBone "visor1"}
		{faroffset 0 7 0}
		{nearoffset 5 7 0.0}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;2
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh16"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "turret_grill_top"}
		}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.kv1_stat" 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}
	{level ;1
		{linkBone "visor1"}
		{faroffset -50 8.7 3.2}
		{nearoffset -16 8.7 1}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}

	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt4-7"}
		;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.kv2_stat" 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}
	{level ;1
		{linkBone "visor1"}
		{faroffset -50 -9.8 3.2}
		{nearoffset -2 -9.8 1}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 8 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tod9"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.kv85_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -50 8.7 5.2}
		{nearoffset -16 8.7 2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-4-15"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.is2_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -50 8.7 1.1}
		{nearoffset -16 8.7 1.0}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 15 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh17"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.bt7a_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	50	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "visor1"}
		{faroffset -25 7 -1.0}
		{nearoffset -6 7 -0.5}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 -1.2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}
{"tank.t28_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 90}
		{nearoffset -45 0 70}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.t35_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 98}
		{nearoffset -50 0 85}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.smk_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 95}
		{nearoffset -50 0 75}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tod6"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.bt2_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -35 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 4 0 15}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tfmp1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t26_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -35 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}
{"tank.su26_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -35 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
		{with_owner
			;{viewoff "turret"} ; removes headlight to prevent clipping
		}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.bt5_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	300	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -35 0 62}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 27 -5 17}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
		{with_owner
			{viewoff "turret_light headlightl1 headlightr1"} ; removes headlight to prevent clipping
		}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t60_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -30 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{offset 0.5 -5 2.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tfmp1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.t40_stat" ; 
	{clip
		{viewMin		-20	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -30 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 2 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.t20_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -30 0 50}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_shield"}
		{offset 3 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"td.zis30_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -45 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 0 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
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

{"td.su76_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 72}
		{nearoffset -40 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom_14d"}
	}
}

{"td.su85_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -50 -6.5 3.2}
		{nearoffset -16 -6.5 1.2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 8 0 1.7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh15"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}
{"td.su85m_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -50 -11.5 3.2}
		{nearoffset -16 -11.5 1.2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 8 0 1.7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh15"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}
{"td.su100_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -50 -9.5 3.2}
		{nearoffset -16 -9.5 1.2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 1.7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh19"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.su122_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -40 -11.5 3.2}
		{nearoffset -11 -11.5 1.2}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.su152_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -40 14.6 5}
		{nearoffset -5 14.6 2.5}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_st10"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.isu122_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -40 14.6 5}
		{nearoffset -5 14.6 2.5}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh17"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.su100y_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	2	}	; camera min distance from object. value / 20 = meters
		{distanceMax	80	}	; camera max distance from object. value / 20 = meters
	}

	{level ;1
		{linkBone "visor1"}
		{faroffset -40 15.5 4.5}
		{nearoffset -5 15.5 4.5}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"artillery.katyusha_stat" ; 
	{clip
		{viewMin		-40	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 90}
		{nearoffset -65 0 75}
		;{hide_crosshair 1}
		;{hide_hitmarker 1}
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
		{distance 50}
		{distanceset 1}
		{delta 0}
		{linkBone "turret"}
		{offset -400 0 200}
		{gunnerviewoff 1}
		{camera "zoom1.5"}
		;{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom2"}
		{offset -300 0 300}
	}
	{level ;3
		{camera "zoom2.5"}
		{offset -200 0 400}
	}
	{level ;4
		{camera "zoom3"}
		{offset -100 0 500}
	}
	{level ;5
		{camera "zoom3.5"}
		{offset 0 0 600}
	}
	{level ;6
		{camera "zoom4"}
		{offset 100 0 700}
	}
	{level ;7
		{camera "zoom4.5"}
		{offset 200 0 800}
	}
	{level ;8
		{camera "zoom5"}
		{offset 300 0 900}
	}
	{level ;9
		{camera "zoom6"}
		{offset 400 0 1000}
	}
}

{"truck.yag10_stat" ; 
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	002	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 60}
		{nearoffset -45 0 30}
		{camera "zoom1"}
		;{hide_hitmarker 1}
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
		{offset 8 0 10}
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