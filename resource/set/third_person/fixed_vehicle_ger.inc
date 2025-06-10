        {"generic.bmw_r71_stat"
			{clip
				{viewMin		-40}	; camera rotate upward limit (looking down)
				{viewMax		15 }	; camera rotate downward limit (looking up)
				{distanceMin	1}		; camera min distance from object. value / 20 = meters
				{distanceMax	15}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "gunner"}
				{faroffset -7 3 14}
				{nearoffset -4 4 14}

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
				{offset -5 0 3.8}
				{camera "zoom1"}
				{blur_strength 10}
			}
		}

{"vehicle.kubel_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	30}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -30 6 36}
		{nearoffset -25 6 35}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "front_mgun"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset -8.6 0 3.45}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.kubel.dak_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 58}
		{nearoffset -75 0 38}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "front_mgun"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset -45 -8 7}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.kfz13_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	40}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -48 6 38}
		{nearoffset -44 5 40}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot2"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 0.1}

		{delta 0}
		{offset -33 -0.0 6.5}
		{camera "zoom1"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}
{"vehicle.kfz15_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	35}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -32 6 46}
		{nearoffset -27 4 45}
		{camera "zoom0"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{ManualAccuracyZoom}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot2"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{offset -9 -0.05 1.6}
		{camera "zoom1.5"}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}
{"vehicle.kfz14_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -20 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "vision_rot"}
		{camera "human_zoom4"}			; magnification x4
		{scope_vignette "/texture/common/environment/lens_effects/zoom_vignette_binoculars"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_binoculars_mask"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
		{vignette_gloss 10}
		{vignette_fade_speed 5}			; factoring the speed at which the vignette fades in/out
		{hide_crosshair}
		{mouse_speed_factor 0.8}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset 25 0 1}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "human_zoom8"}			; magnification x8
		{mouse_speed_factor 0.6}
	}
}

{"vehicle.221_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -30 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{offset -10 0 26}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{no_grain}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
}

{"vehicle.222_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -20 0 55}
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
		{offset 39 7 15.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}		; activation distance
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"vehicle.sdkfz250.3_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -30 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "mgun_a_rot1"}
		{offset -15 -10 10}
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_grain}
		{no_rim_light}
	}
}

{"vehicle.sdkfz250.9_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -30 0 55}
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
		{offset 39 7 15.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
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
		{camera "zoom2.4"}
	}
}

{"vehicle.sdkfz250.11_stat"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		50	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	350	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -30 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 5 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_spzb41"}
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
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.hanomag_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 8 70}
		{nearoffset -50 8 55}
		{camera "zoom1"}
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
		{offset -15 8 9}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.sdkfz251.17_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -50 0 60}
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

{"vehicle.sdkfz251.21_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -50 0 60}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "camera"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
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
			{viewoff "gun_shield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
}

{"vehicle.sdkfz251.22_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}		; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -50 0 55}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "gun_rot"}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 1}
		{distanceSet 0}
		{delta 0}
		{offset 10 -8 2}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_grain}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.panhard_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -40 0 70}
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
		{offset -4 0 3.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_l711"}
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
		{disable_fow 1}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.puma_stat" ;
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
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
		{linkBone "turret"}
		{offset 32 -6.5 13.0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_tzf_4b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.234_3_stat" ; Short 7.5cm gun
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
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
		{linkBone "turret"}
		{offset 50 -6.5 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.234_4_stat" ; 7.5cm Pak 40 gun
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
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
		{linkBone "turret"}
		{offset 45 -6.5 10.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
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

{"tank.panzer1b_stat" ; Panzer I B
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 60}
		{nearoffset -25 0 50}
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
		{offset 35 -5.0 8}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer1f_stat" ; Panzer I F
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -25 0 60}
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
		{offset 20 0 11}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2c_stat" ; Panzer II
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -20 0 55 }
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
	    {offset 33 0 10.0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2f_stat" ; Panzer II
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -20 0 55}
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
		{offset 33 0 15}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer2l_stat" ; Panzer II
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -20 0 60}
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
		{offset 30 0 14}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer35t_stat" ; Panzer 35t
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	3}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -17 0 31}
		{nearoffset -15 0 31}
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
		{offset 34 -5.0 18}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.panzer38t_stat" ; Panzer 38t
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	3}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "turret"}
		{faroffset -16 0 8.5}
		{nearoffset -15 0 9}
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
		{offset 35 -6.5 10}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.4"}
	}
}

{"tank.h39_turret_stat" ; Panzer 38h turret emplacement
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 35}
		{nearoffset -30 0 25}
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
		{offset 40 -3 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
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
		{camera "zoom2.5"}
	}
}

{"tank.panzer38h_stat" ; Panzer 38h 37mm
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 65}
		{nearoffset -20 0 55}
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
		{offset 35 -3 24}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
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
		{camera "zoom2.5"}
	}
}

{"tank.panzer35s_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -20 0 65}
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
		{offset 45 -3 14}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"tank.panzer3e_stat" ; Panzer III 37mm
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 25 -5.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3f_stat" ; Panzer III 50mm short barrel
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 25 -5.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5d"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{no_rim_light}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{with_owner
			{viewoff "detail7"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3l_stat" ; Panzer III 50mm long barrel
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 25 -6.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5e"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3flamm_stat" ; Panzer III 50mm long barrel
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 25 -6.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer3n_stat" ; Panzer III 75mm kwk 37
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 25 -6.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5b"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer4f2_stat" ; Panzer IV F2, G
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -15 0 52}
		{nearoffset -5 0 53.5}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 25 -6.5 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 5}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.wirbelwind_stat" ;
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		80 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 95}
		{nearoffset 0 0 80}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 15 0 -3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}
{"tank.ostwind_stat" ;
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		80 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 90}
		{nearoffset -50 0 82}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 30 -0.3 1.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_37mm"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 40}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"tank.pz756r_stat" ; Panzer 756r
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	350}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -45 0 65}
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
		{offset 52 8 14}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panzer4h_stat" ; Panzer IV H, J
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{zoom}
		{linkBone "basis"}
		{faroffset -14 7 51.5}
		{nearoffset 21 0 52.5}

		;{hide_hitmarker 1}
		{blur_strength 0}
		{disable_fow 1}
		{no_grain}
	}

	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "turret"}
		{offset 32 -8 12}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f1"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 0.1}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{no_rim_light}
		{with_owner
			{viewoff "shieldt turret_basket"} ; removes shield to prevent clipping
		}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"tank.panther_stat" ; Panther tanks
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	30}	; camera min distance from object. value / 20 = meters
		{distanceMax	70}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset -9 7 6}
		{nearoffset 40 7 6}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 52 0 1}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_12a"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 30.0}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.panzerb2_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	250}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -20 0 67}
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
		{offset 43 -2 16}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
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
		{camera "zoom4"}
	}
}

{"tank.tigerh_stat" ; Tiger
	{clip
		{viewMin 		-30}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset -20 10 4}
		{nearoffset -3 10 4}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 1 9}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"tank.tiger_stat" ; Tiger
	{clip
		{viewMin 		-30}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset -20 10 4}
		{nearoffset -3 10 4}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 1 9}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}
{"tank.tiger2p_stat" ; Tiger II early production turret
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	80}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 8.5 15}
		{nearoffset 5 8.5 8}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 55 0 6}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
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
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}
{"tank.tiger2h_stat" ; Tiger II late production turret
	{clip
		{viewMin		-12}	; camera rotate upward limit (looking down)
		{viewMax		 41}	; camera rotate downward limit (looking up)
		{distanceMin	002}	; camera min distance from object. value / 20 = meters
		{distanceMax	80}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "fxfire3"}
		{faroffset 0 8.5 15}
		{nearoffset 5 8.5 8}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "fxfire3"}
		{offset 53 0 7}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9d"}
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
		{disable_fow 0}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}
{"td.panzerjaeger_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 70}
		{nearoffset -30 0 55}
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
		{offset 14 -11 -8}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
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
		{disable_fow 1}
		{with_owner
			{viewoff "turretshield"} ; removes shield to prevent clipping
		}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.marder2_stat" ; Marder II
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -40 0 65}
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
		{offset 0 0 0}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
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
		{disable_fow 1}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"td.marder3m_stat" ; Marder IIIm
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -40 0 65}
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
		{offset 30 -6 10}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 20}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom3"}
	}
}

{"td.grille_stat" ; mk103mm
	{clip
		{viewMin		-35}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -40 0 65}
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
		{offset 5 7 21}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x40"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
}

{"td.jagdpanther_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -20 0 55}
		{nearoffset -5 0 55}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 5 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_wzf1-4"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
	}
	{level ;3
		{camera "zoom10"}
	}
}

{"td.ferdinand_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	2}	; camera min distance from object. value / 20 = meters
		{distanceMax	60}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -5 0 68.0}
		{nearoffset 15 0 62}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 6 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.hetzer_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -25 0 58}
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
		{offset 5 0 2.5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stug3b_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	    ; camera min distance from object. value / 20 = meters
		{distanceMax	77}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -3 0 44}
		{nearoffset 1 0 44}
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
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stug3_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	    ; camera min distance from object. value / 20 = meters
		{distanceMax	77}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -3 0 44}
		{nearoffset 1 0 44}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.jagdpanzer4_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	    ; camera min distance from object. value / 20 = meters
		{distanceMax	77}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -3 0 40}
		{nearoffset 1 0 40}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "visor1"}
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.stuh42_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	30}	    ; camera min distance from object. value / 20 = meters
		{distanceMax	77}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -3 0 44}
		{nearoffset 1 0 44}
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
		{offset 3 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.sig33b_stat"
	{clip
		{viewMin		-30	}	; camera rotate upward limit (looking down)
		{viewMax		30	}	; camera rotate downward limit (looking up)
		{distanceMin	200	}	; camera min distance from object. value / 20 = meters
		{distanceMax	400	}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 75}
		{nearoffset -25 0 60}
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
		{offset 3 0 5}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.bison_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -25 0 65}
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
		{offset 10 0 10}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.grille_k_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 80}
		{nearoffset -25 0 70}
		{camera "zoom1"}
		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
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
		{linkBone "gun"}
		{offset 75 0 300}
		{gunnerviewoff 1}
		{camera "zoom1.5"}
		;{ManualAccuracyZoom}
		{blur_strength 10}
		{disable_fow 1}
		{no_rim_light}
		{soundEffect "opentop_vehicle"}
	}
	{level ;2
		{camera "zoom4"}
		{offset 100 0 500}
	}
	{level ;3
		{camera "zoom4"}
		{offset 200 0 600}
	}
	{level ;4
		{camera "zoom4"}
		{offset 300 0 700}
	}
	{level ;5
		{camera "zoom4"}
		{offset 400 0 800}
	}
	{level ;6
		{camera "zoom4"}
		{offset 500 0 900}
	}
	{level ;7
		{camera "zoom4"}
		{offset 600 0 1000}
	}
}

{"td.sturmtiger_stat"
	{clip
		{viewMin		-30}	; camera rotate upward limit (looking down)
		{viewMax		45 }	; camera rotate downward limit (looking up)
		{distanceMin	200}	; camera min distance from object. value / 20 = meters
		{distanceMax	400}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 85}
		{nearoffset -25 0 65}
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
		{offset 10 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
		{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
		{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
		{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{distance 15}
		{distanceSet 0}
		{delta 0}
		{no_rim_light}
		{camera "zoom1.5"}
		{ManualAccuracyZoom}
		{blur_strength 5}
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
}

{"td.jagdtiger_stat"
	{clip
		{viewMin		-25}	; camera rotate upward limit (looking down)
		{viewMax		30 }	; camera rotate downward limit (looking up)
		{distanceMin	1}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset -4 0 60}
		{nearoffset 1 0 60}

		;{hide_hitmarker 1}
		{blur_strength 2}
		{disable_fow 1}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "sight"}
		{offset 6 0 3}
		{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
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
		{disable_fow 1}
		{soundEffect "enclosed_vehicle"}
	}
	{level ;2
		{camera "zoom5"}
	}
	{level ;3
		{camera "zoom10"}
	}
}