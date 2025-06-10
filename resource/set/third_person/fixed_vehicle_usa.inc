{"vehicle.jeep_mg_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	20}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -100 0 41}
		{nearoffset -33 5 39}
		{camera "zoom1.5"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset -13.4 0 7.5}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.wc_mg_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	30}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -40 4 45}
		{nearoffset -37 4 44}
		{camera "zoom1.5"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -16.8 -0.03 6.0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.m6_gmc_stat"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	1	}	; camera min distance from object. value / 20 = meters
		{distanceMax	40	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -22 0 14}
		{nearoffset -15 0 14}
		;{camera "zoom1.5"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m54"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset 5 0 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_grain}
		{no_rim_light}
		{with_owner
			{viewoff "shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}
{"tank.m24_chaffee_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -30 0 50}
		{nearoffset -12 0 28}
		{camera "zoom1.5"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71g"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
	{level ;3
		{camera "zoom8"}
	}
}
{"tank.sherman_75_early_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 31 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
}

{"tank.sherman_75_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 31 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m55"}
		{camera "zoom3"}
	}
}

{"tank.sherman_75_late_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 31 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_75w_late_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.sherman_75w_e2_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71g"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.sherman_75_calliope_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 31 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m70f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_105_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 31 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m72d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_a3_105_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m72d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.sherman_a3_105_hvss_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m72d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.m18_gmc_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	5}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -26 11 7}
		{nearoffset -1 11 7}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 2 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 2}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.m10_gmc_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	5}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -27 9 8}
		{nearoffset -8 9 8}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "opentop_vehicle"}
	}
}

{"tank.sherman_76_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.sherman_76_center_50_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	10}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "mgun_a_rot1"}
		{faroffset -30 -9 8}
		{nearoffset -10 -9 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m71d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.m26_pershing_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "sight"}
		{faroffset -35 -5 17.5}
		{nearoffset -7 -10 16.0}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset -2 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m76f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{with_owner
			{viewoff "extra_armor"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
	{level ;3
		{camera "zoom6"}
	}
}

{"tank.m36_gmc_stat" ; 
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		41 }	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset 0 0 42}
		{nearoffset -50 0 25}
		{camera "zoom1.5"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		;{vision_modes_active}
		{linkBone "sight"}
		{offset 1 0 2}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m76f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom3"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "opentop_vehicle"}
	}
}