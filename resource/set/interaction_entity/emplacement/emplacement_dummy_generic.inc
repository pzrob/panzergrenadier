;/*====================================== weapon_crate begin ======================================*/
{"weapon_crate_generic_aa_mg"
	{on "fortify_fin"
		{delay 0.1 {delete}
			{spawn "rus_weapon_crate_maxim_x4" "crater_mg" x }
        }
	}
	{on "fortify_spa"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_15mm_mg151" "crater_mg" x }
		}
	}
	{on "fortify_ger"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_15mm_mg151" "crater_mg" x }
		}
	}
	{on "fortify_rus"
		{delay 0.1 {delete}
			{spawn "rus_weapon_crate_dshk_aa" "basic" x }
        }
	}
	{on "fortify_usa"
		{delay 0.1 {delete}
			{spawn "crate_m2_50cal_aa" "crater_aa_mg" x }
        }
	}
}
{"weapon_crate_generic_mortar"
	{on "fortify_fin"
		{delay 0.1 {delete}
			{if rand 0.5
				{spawn "fin_weapon_crate_170mm_minewerfer" "basic" x }
				else
				{spawn "fin_weapon_crate_81mm_krh36" "basic" x }
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1 {delete}
			{if rand 0.5 
				{spawn "ger_weapon_crate_200mm_ldgw40" "basic" x }
				else
				{spawn "ger_weapon_crate_80mm_sgrw34" "basic" x }
			}
		}
	}
	{on "fortify_ger"
		{delay 0.1 {delete}
			{if rand 0.5 
				{spawn "ger_weapon_crate_200mm_ldgw40" "basic" x }
				else
				{spawn "ger_weapon_crate_80mm_sgrw34" "basic" x }
			}
		}
	}
	{on "fortify_rus"
		{delay 0.1 {delete}
			{spawn "rus_weapon_crate_82mm_bm37" "basic" x }
        }
	}
	{on "fortify_usa"
		{delay 0.1 {delete}
			{spawn "usar_weapon_crate_81mm_m1" "basic" x }
        }
	}
}
{"weapon_crate_generic_mortar_heavy"
	{on "fortify_fin"
		{delay 0.1 {delete}
			{spawn "fin_weapon_crate_120mm_krh40" "basic" x }
        }
	}
	{on "fortify_spa"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_120mm_sgrw42" "basic" x }
        }
	}
	{on "fortify_ger"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_120mm_sgrw42" "basic" x }
        }
	}
	{on "fortify_rus"
		{delay 0.1 {delete}
			{spawn "rus_weapon_crate_120mm_pm38" "basic" x }
        }
	}
	{on "fortify_usa"
		{delay 0.1 {delete}
			{spawn "usa_weapon_crate_107mm_m2" "basic" x }
        }
	}
}
{"weapon_crate_generic_aa_heavy"
	{on "fortify_fin"
		{delay 0.1 {delete}
			{spawn "fin_weapon_crate_75mm_itk37" "basic" x }
        }
	}
	{on "fortify_spa"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_88mm_flak36" "basic" x }
        }
	}
	{on "fortify_ger"
		{delay 0.1 {delete}
			{spawn "ger_weapon_crate_88mm_flak36" "basic" x }
        }
	}
	{on "fortify_rus"
		{delay 0.1 {delete}
			{spawn "rus_weapon_crate_85mm_52k" "basic" x }
        }
	}
	{on "fortify_usa"
		{delay 0.1 {delete}
			{spawn "usa_weapon_crate_90mm_m1a1" "basic" x }
        }
	}
}

;/*====================================== weapon_crate end ======================================*/
;/*====================================== emplacement_minefield begin ======================================*/
{"minefield"
	{inflammation_time 3}
	{on spawn
	    {physics_work 1}
		{delay 0.1}
		{impulse up 0.1 0.1 com}
		{delay 0.2
			{volumes "body" disable blast}
		}	
		{delay 0.3
			{set "mined" 1}
		}	
		{volumes "body1" disable all}
		{add_view "mined_view_own"		"mined_own"		"mined_view"}
		{add_view "mined_view_enemy"	"mined_enemy"	"mined_view"}
		{add_view "mined_view_defused"	"defused"		"mined_view"}
		{call "change_state"}
	}
	{on "explosion"
		{if mined
			{tags remove "mine_planted"}
			{volumes "body1" disable blast}
			{volumes "body" disable blast}
			{stuff_detonate}
		}
	}
	{on "change_state"
		{if mined
			{tags add "mine_planted"}
			{volumes "body1" disable all}
			{volumes "body1" enable blast}
			{volumes "body" enable select touch contact}
			{volumes "body" disable blast}

		else tagged "grounded"
			{volumes "body1" enable blast}

		else
			{tags remove "mine_planted"}
			{volumes "body1" enable select touch contact contact_ground blast}
			{volumes "body" disable all}
		}
	}
	{on blast_hit
		{if mined
			{if min_energy 3
				{if not tagged "minefield_planted"
					{stuff_detonate}
				}
			}
		else
			{if min_energy 3
				{if not tagged "minefield_planted"
					{stuff_detonate}
				}
			}
		}
	}
	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				;{call "explosion"}
			}
		else mine_effector "vehicle"
			{if tagged "minefield_planted"
				{volumes disable contact}
				{delay 0.20
					{stuff_detonate}
				}
			}
		}
	}
	{on bullet_hit
		{if not mined
			{stuff_detonate}
		}
	}
}
;/*====================================== emplacement_minefield end ======================================*/
;/*====================================== emplacement_modular_box begin ======================================*/
{"emplacement_modular_box_mgun_roof_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_modular_box_mgun_roof_stage" "mark_roof" x }
        }
	}
}
{"emplacement_modular_box_mgun_roof_sandbag_stage"
	{on spawn
		{delay 0.1 
            {spawn "wooden_planks_roof_sandbag_pile_row_stage" "mark_roof_sandbag_01" x }
        }
		{delay 0.1 {delete}
            {spawn "wooden_planks_roof_sandbag_pile_row_stage" "mark_roof_sandbag_02" x }
        }
	}
}
{"emplacement_modular_box_mg_tripod_low"
	{on spawn
		{delay 0.1 
			{if not tagged "placed"
				{spawn "emplacement_modular_box_mg_tripod_roof_stage" "roof" x }
				{spawn "emplacement_modular_box_mgun_roof_sandbag_stage" "roof_sandbag" x }
			}
			{tags add "placed"}
		}
	}
}
{"sandbag_framed_straight_mod_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "sandbag_framed_straight_mod" "basic" x }
        }
	}
}
{"sand_shuttering_wall_2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "sand_shuttering_wall_2" "basic" x }
        }
	}
}
{"sandbag_framed_straight_low_mod_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "sandbag_framed_straight_low_mod" "basic" x }
        }
	}
}
{"mine_sign"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{spawn "mine_sign_at_fin" "basic" x }
				{tags add "fortified"}
				{delay 0.1 {delete}
				    {volumes "fortify" disable all}
				}
			}
		}
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{spawn "mine_sign_at_ger" "basic" x }
				{tags add "fortified"}
				{delay 0.1
				    {volumes "fortify" disable all}
				}
			}
		}
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{spawn "mine_sign_at_rus" "basic" x }
				{tags add "fortified"}
				{delay 0.1
				    {volumes "fortify" disable all}
				}
			}
		}
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{spawn "mine_sign_at_usa" "basic" x }
				{tags add "fortified"}
				{delay 0.1
				    {volumes "fortify" disable all}
				}
			}
		}
	}
}
;/*====================================== emplacement_modular_box end ======================================*/
;/*====================================== emplacement_watch begin ======================================*/
{"watch_tower_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "watch_tower" "basic" x }
        }
	}
}
{"watch_tower"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{view hide "lamp"}
					{view hide "glass"}
					{delay 0.1
						{volumes "lamp" disable all}
						{volumes "body17" disable all}
					}
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "fin"}
				}
				{delay 0.1
					{spawn "flag_hanging" "flag_hanging" x texmod "fin"}
				}
				{delay 0.1
					{spawn "sandbag_framed_straight_watchtower" "sandbag_ground" x}
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{delay 0.1
					{spawn "maxim_stand_stat_fin" "maxim_slot" x }
				}
				{tags add "fortified"}
				{play_sound "deploy"}
				
			else not tagged "search_light_installed"
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x}
				}
				{play_sound "deploy"}
				{tags add "search_light_installed"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{view hide "lamp"}
					{view hide "glass"}
					{delay 0.1
						{volumes "body17" disable all}
					}
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "ger"}
				}
				{delay 0.1
					{spawn "flag_hanging" "flag_hanging" x texmod "ger"}
				}
				{delay 0.1
					{spawn "sandbag_framed_straight_watchtower" "sandbag_ground" x}
				}
				{delay 0.1
					{spawn "crate_mg_platform_floor" "mg_tripod_platform" x}
				}
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{tags add "fortified"}
				{play_sound "deploy"}
			else not tagged "search_light_installed"
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x}
				}
				{play_sound "deploy"}
				{tags add "search_light_installed"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{view hide "lamp"}
					{view hide "glass"}
					{delay 0.1
						{volumes "body17" disable all}
					}
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "blau"}
				}
				{delay 0.1
					{spawn "sandbag_framed_straight_watchtower" "sandbag_ground" x}
				}
				{delay 0.1
					{spawn "crate_mg_platform_floor" "mg_tripod_platform" x}
				}
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{tags add "fortified"}
				{play_sound "deploy"}
			else not tagged "search_light_installed"
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x}
				}
				{play_sound "deploy"}
				{tags add "search_light_installed"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{view hide "lamp"}
					{view hide "glass"}
					{delay 0.1
						{volumes "body17" disable all}
					}
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x }
				}
				{delay 0.1
					{spawn "flag_hanging" "flag_hanging" x }
				}
				{delay 0.1
					{spawn "sandbag_framed_straight_watchtower" "sandbag_ground" x}
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{delay 0.1
					{spawn "maxim_stand" "maxim_slot" x }
				}
				{tags add "fortified"}
				{play_sound "deploy"}
				
			else not tagged "search_light_installed"
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x}
				}
				{play_sound "deploy"}
				{tags add "search_light_installed"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{view hide "lamp"}
					{view hide "glass"}
					{delay 0.1
						{volumes "lamp" disable all}
						{volumes "body17" disable all}
					}
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "usa"}
				}
				{delay 0.1
					{spawn "sandbag_framed_straight_watchtower" "sandbag_ground" x}
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "m2_30cal_platform" x }
				}
				{delay 0.1
					{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
				}
				{tags add "fortified"}
				{play_sound "deploy"}
				
			else not tagged "search_light_installed"
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x}
				}
				{play_sound "deploy"}
				{tags add "search_light_installed"}
				{volumes "fortify" disable all}
			}
        }
	}
}
;/*====================================== emplacement_watch end ======================================*/
;/*====================================== emplacement_trench begin ======================================*/
{"emplacement_middle_exit"
	{on spawn
		{view hide "exit"}
		{delay 0.05 
			{if not tagged "spawned"
				{delay 0.05
					{spawn "euro_log_trench_dirt_exit" "exit" x }
					{tags add "spawned"}
				}
			}
		}
	}
}
{"euro_log_trench_dirt_fire_position2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "euro_log_trench_dirt_fire_position2" "basic" x }
        }
	}
}
{"euro_log_trench_dirt_intersection2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "euro_log_trench_dirt_intersection2" "basic" x }
        }
	}
}
{"euro_log_trench_dirt_turn_90-1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "euro_log_trench_dirt_turn_90-1" "basic" x }
        }
	}
}
{"euro_log_trench_dirt_emplacement2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "euro_log_trench_dirt_emplacement2" "basic" x }
        }
	}
}
{"euro_log_trench_dirt_emplacement2_at_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "euro_log_trench_dirt_emplacement2_at" "basic" x }
        }
	}
}
{"trench_fire_position_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "trench_fire_position_bunker_stage" "mark_bunker" x }
        }
	}
}
{"trench_fire_position_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "trench_fire_position_roof_sandbag_stage" "mark_roof_sandbag_01" x }
        }
	}
}
{"euro_log_trench_dirt_straight_short_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "euro_log_trench_dirt_straight_short" "basic" x }
        }
	}
}
{"euro_log_trench_dirt_straight_short_roof_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_trench_roof" "roof_stage" x }
        }
	}
}
{"euro_log_trench_dirt_straight_short_roof_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_trench_roof_sandbag_stage" "roof_sandbag_stage" x }
        }
	}
}
{"euro_log_trench_dirt_intersection2_roof_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_trench_roof" "roof_stage" x }
        }
	}
}
{"euro_log_trench_dirt_intersection2_roof_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_trench_roof_sandbag_stage" "roof_sandbag_stage" x }
        }
	}
}
{"emplacement_trench_pillbox"
	{on spawn
		{delay 0.1
            {spawn "euro_log_trench_dirt_exit" "exit" x }
        }
	}
}
{"trench_pillbox"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "crate_mg_platform" "maxim_platform" x }
				}
				{delay 0.1
					{spawn "maxim_stand_stat_fin" "maxim_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.2
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.2
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "crate_mg_platform" "maxim_platform" x }
				}
				{delay 0.2
					{spawn "maxim_stand" "maxim_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "crate_mg_platform" "m2_30cal_platform" x }
				}
				{delay 0.2
					{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"earth_pillbox"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_01" x}
				}
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.1
					{spawn "planks_walkable_01_indestructible" "trench_floor" x }
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform" "maxim_platform" x }
				}
				{delay 0.2
					{spawn "maxim_stand_stat_fin" "maxim_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.1
					{spawn "planks_walkable_01_indestructible" "trench_floor_mg_slot" x }
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "ger"}
				}
				{delay 0.2
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.1
					{spawn "planks_walkable_01_indestructible" "trench_floor_mg_slot" x }
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "blau"}
				}
				{delay 0.2
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.1
					{spawn "planks_walkable_01_indestructible" "trench_floor" x }
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x }
				}
				{delay 0.1
					{spawn "crate_mg_platform" "maxim_platform" x }
				}
				{delay 0.2
					{spawn "maxim_stand" "maxim_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.1
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.1
					{spawn "planks_walkable_01_indestructible" "trench_floor" x }
				}
				{delay 0.1
					{spawn "flag_stick" "flag" x texmod "usa"}
				}
				{delay 0.1
					{spawn "crate_mg_platform" "m2_30cal_platform" x }
				}
				{delay 0.2
					{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"tower"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform_maxim" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform" x }
				}
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform" x }
				}
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform_maxim" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small_taller" "m2_30cal_platform" x }
				}
				{delay 0.1
					{spawn "crate_search_light_platform_small" "search_light_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"mg_bunker"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "m2_30cal_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"mg_bunker_v2"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform_01" x }
					{spawn "crate_mg_platform_small" "maxim_platform_02" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform_01" x }
					{spawn "crate_mg_platform_small" "mg_tripod_platform_02" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "mg_tripod_platform_01" x }
					{spawn "crate_mg_platform_small" "mg_tripod_platform_02" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform_01" x }
					{spawn "crate_mg_platform_small" "maxim_platform_02" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "m2_30cal_platform_01" x }
					{spawn "crate_mg_platform_small" "m2_30cal_platform_02" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"mg_bunker_hallway"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform_bunker" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_bunker" "mg_tripod_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_bunker" "mg_tripod_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_bunker" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_bunker" "m2_30cal_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"at_bunker"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "fin_weapon_crate_75mm_k40" "75mm_pak40_crate" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.1
					{spawn "ger_weapon_crate_75mm_pak40" "75mm_pak40_crate" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.1
					{spawn "ger_weapon_crate_75mm_pak40" "75mm_pak40_crate" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "rus_weapon_crate_57mm_zis2" "57mm_zis2_crate" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "usa_weapon_crate_57mm_m1" "57mm_m1_crate" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}
{"45mm_pillbox"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "fin"}
				}
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "ger" }
				}
				{delay 0.2
					{spawn "heavy_mg_mg34" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "blau" }
				}
				{delay 0.2
					{spawn "heavy_mg_mg34" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "rus" }
				}
				{delay 0.1
					{spawn "crate_mg_platform_small" "maxim_platform" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "flag_pole_small" "flag" x texmod "usa" }
				}
				{delay 0.1
					{spawn "wooden_planks_walkable_floor_x2" "m2_30cal_floor" x }
				}
				{delay 0.1
					{spawn "sand-shuttering-box_5" "m2_30cal_floor_stair" x }
				}
				{delay 0.2
					{spawn "m2_30cal_tripod_stat" "m2_30cal_slot" x }
				}
				{play_sound "deploy"}
				{tags add "fortified"}
				{volumes "fortify" disable all}
			}
        }
	}
}

;/*====================================== emplacement_trench end ======================================*/
;/*====================================== emplacement_ground_floor begin ======================================*/
{"emplacement_mgun_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_mgun_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_deep_mgun_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_motor_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_motor_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_ground_floor end ======================================*/
;/*====================================== emplacement_small begin ======================================*/
{"emplacement_small_mgun_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_mgun_bunker_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_mgun_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_mgun_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}

;/*====================================== emplacement_small end ======================================*/
;/*====================================== emplacement_small_deep begin ======================================*/
{"emplacement_small_deep_mg_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mg" "basic" x }
        }
	}
}	
{"emplacement_small_deep_bush_cover_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_bush_cover_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_deep_mgun_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_bunker_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_deep_mgun_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_small_deep_mortar_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mortar_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_small_deep end ======================================*/
;/*====================================== emplacement_light begin ======================================*/
{"emplacement_light_aa_sandbag_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_aa_sandbag" "aa_sandbag" x }
        }
	}
}
{"emplacement_light_aa_sandbag_stage_low"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_aa_sandbag" "aa_sandbag_low" x }
        }
	}
}
{"emplacement_light_aa_mg_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_aa_mg" "basic" x }
        }
	}
}
{"emplacement_light_aa_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_aa" "basic" x }
        }
	}
}	
{"emplacement_light_mortar_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_mortar" "basic" x }
        }
	}
}	
{"emplacement_light_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_stage" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_roof_stage_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_stage_set" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_roof_sandbag_stage_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_sandbag_stage_set" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_netting_stage" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_netting_stage_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_netting_stage_set" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_roof_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_stage_low" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_roof_stage_low_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_stage_low_set" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_roof_sandbag_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_sandbag_stage_low" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_roof_sandbag_stage_low_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_roof_sandbag_stage_low_set" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_netting_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_netting_stage_low" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_netting_stage_low_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_netting_stage_low_set" "enumerator_logo1" x }
        }
	}
}	
{"emplacement_light_bush_cover_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_bush_cover_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_bush_cover_stage_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_bush_cover_stage_set" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_light end ======================================*/
;/*====================================== emplacement_middle begin ======================================*/
{"emplacement_middle_aa_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_aa_sandbag" "aa_sandbag" x }
        }
	}
}
{"emplacement_middle_aa_sandbag_stage_low"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_aa_sandbag" "aa_sandbag_low" x }
        }
	}
}
{"emplacement_middle_aa_heavy_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_aa_sandbag" "aa_sandbag" x }
        }
	}
}
{"emplacement_middle_aa_heavy_sandbag_stage_low"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_aa_sandbag" "aa_sandbag_low" x }
        }
	}
}
{"emplacement_middle_fieldgun_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_aa_sandbag" "fieldgun_sandbag" x }
        }
	}
}
{"emplacement_middle_howitzer_sandbag_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_middle_howitzer_sandbag" "howitzer_sandbag" x }
        }
	}
}
{"emplacement_middle_at_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_at" "basic" x }
        }
	}
}
{"emplacement_middle_aa_heavy_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_aa_heavy" "basic" x }
        }
	}
}
{"emplacement_middle_aa_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_aa" "basic" x }
        }
	}
}
{"emplacement_middle_mortar_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_mortar" "basic" x }
        }
	}
}
{"emplacement_middle_fieldgun_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_fieldgun" "basic" x }
        }
	}
}
{"emplacement_middle_howitzer_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_howitzer" "basic" x }
        }
	}
}
{"emplacement_middle_log_sandbag_stage_aa_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_sandbag_stage_aa_low" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_sandbag_stage_aa_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_sandbag_stage_aa_tall" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_sandbag_stage_fieldgun_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_sandbag_stage_fieldgun" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_sandbag_stage_tall_fieldgun_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_sandbag_stage_tall_fieldgun" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_sandbag_stage_at_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_sandbag_stage_at" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_sandbag_stage_at_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_sandbag_stage_at_tall" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_deep_sandbag_stage_artillery_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_deep_sandbag_stage_artillery" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_fieldgun_bush_cover_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_fieldgun_bush_cover_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_log_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_stage" "mark_roof" x }
        }
	}
}
{"emplacement_middle_log_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_sandbag_stage" "mark_roof_sandbag" x }
        }
	}
}
{"emplacement_middle_log_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_netting_stage" "mark_roof_netting" x }
        }
	}
}

{"emplacement_middle_log_roof_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_stage" "mark_roof_low" x }
        }
	}
}
{"emplacement_middle_log_roof_sandbag_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_sandbag_stage_low" "mark_roof_sandbag_low" x }
        }
	}
}
{"emplacement_middle_log_netting_stage_low_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_netting_stage_low" "mark_roof_netting_low" x }
        }
	}
}
{"emplacement_middle_log_roof_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_stage" "mark_roof_tall" x }
        }
	}
}
{"emplacement_middle_log_roof_sandbag_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_roof_sandbag_stage_tall" "mark_roof_sandbag_tall" x }
        }
	}
}
{"emplacement_middle_log_netting_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_netting_stage_tall" "mark_roof_netting_tall" x }
        }
	}
}
{"emplacement_command_post_roof_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_command_post_roof_stage_tall" "enumerator_logo1" x }
        }
	}
}
{"emplacement_command_post_roof_sandbag_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_command_post_roof_sandbag_stage_tall" "enumerator_logo1" x }
        }
	}
}
{"emplacement_command_post_netting_stage_tall_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_command_post_netting_stage_tall" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_middle end ======================================*/
;/*====================================== emplacement_heavy begin ======================================*/
{"emplacement_heavy_bush_cover_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_heavy_bush_cover_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_heavy_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_heavy_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_heavy_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_heavy_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_heavy_sandbag_stage_at_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_heavy_sandbag_stage_at" "enumerator_logo1" x }
        }
	}
}
{"emplacement_heavy_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_heavy_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_middle_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_middle_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_middle_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_middle_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_middle_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_middle_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_heavy_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_heavy_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_heavy_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_heavy_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_artillery_heavy_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_artillery_heavy_netting_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== emplacement_other begin ======================================*/
{"wooden_planks_roof_01_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "wooden_planks_roof_01" "enumerator_logo1" x }
        }
	}
}
{"wooden_planks_roof_end_01_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "wooden_planks_roof_end_01" "enumerator_logo1" x }
        }
	}
}
{"wooden_planks_roof_end_02_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "wooden_planks_roof_end_02" "enumerator_logo1" x }
        }
	}
}
{"45mm_pillbox_reinforce_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "45mm_pillbox_reinforce_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_other end ======================================*/
;/*====================================== emplacement_tank begin ======================================*/
{"emplacement_tank_trench_light_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_light_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_light_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_light_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_light_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_light_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_middle_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_middle_roof_stage" "emplacement_tank_trench_middle_roof" x }
        }
	}
}
{"emplacement_tank_trench_middle_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_middle_roof_sandbag_stage" "emplacement_tank_trench_middle_roof_sandbag" x }
        }
	}
}
{"emplacement_tank_trench_middle_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_middle_netting_stage" "emplacement_tank_trench_middle_netting" x }
        }
	}
}
{"emplacement_tank_trench_heavy_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_heavy_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_heavy_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_heavy_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_heavy_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_heavy_netting_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_tank end ======================================*/
;/*====================================== emplacement_car begin ======================================*/
{"emplacement_jeep_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_jeep_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_jeep_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_jeep_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_car end ======================================*/
;/*====================================== special begin ======================================*/
{"cleaner_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "cleaner" "enumerator_logo1" x }
        }
	}
}
{"f_end_c06_door_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "f_end_c06_indestructible_door" "basic" x }
        }
	}
}
{"f_end_c06_door_small_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "f_end_c06_door_small" "basic" x }
        }
	}
}
{"f_end_c06_windows_indestructible_opened_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "f_end_c06_windows_indestructible_opened" "basic" x }
        }
	}
}
{"f_end_c06_windows_indestructible_opened_small_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "f_end_c06_windows_indestructible_opened_small" "basic" x }
        }
	}
}
;/*====================================== special end ======================================*/
{"mg_platform"
	{on "fortify_fin"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "maxim_stand_stat_fin" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "maxim_stand" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
}
{"mg_platform_hallway"
	{on "fortify_fin"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "maxim_stand_bunker_fin" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded_bunker" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.1
					{spawn "mg34_tripod_stat_shielded_bunker" "mg_tripod_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "maxim_stand_bunker" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
}
{"crate_search_light_platform"
	{on "fortify_fin"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "150mm_sw34_stat" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
}
{"crate_search_light_platform_small"
	{on "fortify_fin"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_ger"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_rus"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "search_light" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
	{on "fortify_usa"
		{delay 0.1
			;{if not tagged "fortified"
				{delay 0.2
					{spawn "crate_platform_search_light_stage" "maxim_slot" x }
				}
				{play_sound "deploy"}
			;}
        }
	}
}
;/*====================================== concrete_fortification begin ======================================*/
{"emplacement_concrete_platform_bunker_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_hallway_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_hallway" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_inner_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_inner" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_v2_inner_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_v2_inner" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_window_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_v2_window_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_v2_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_door_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_door_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_at_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_at" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_bunker_at_window_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_bunker_at_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_tower_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_tower" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_tower_fortress_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_tower_fortress" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_tower_door_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_tower_door_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_platform_tower_window_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_tower_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_block_fortress_v3_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_block_fortress_v3" "basic" x {tags add "spawned"}}
        }
	}
}
{"emplacement_concrete_block_bunker_maxim_fin_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform" "maxim_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "maxim_stand_stat_fin" "maxim_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_hallway_maxim_fin_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform_bunker" "maxim_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "maxim_stand_bunker_fin" "maxim_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_mg34_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform" "mg_tripod_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "mg34_tripod_stat_shielded" "mg_tripod_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_hallway_mg34_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform_bunker" "mg_tripod_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "mg34_tripod_stat_shielded_bunker" "mg_tripod_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_maxim_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform" "maxim_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "maxim_stand" "maxim_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_hallway_maxim_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform_bunker" "maxim_platform" x }
        }
		{delay 0.1 {delete}
           ;{spawn "maxim_stand_bunker" "maxim_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_m2_30cal_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform" "m2_30cal_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "m2_30cal_tripod_stand_stat" "m2_30cal_slot" x }
        }
	}
}
{"emplacement_concrete_block_bunker_hallway_m2_30cal_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform_bunker" "m2_30cal_platform" x }
        }
		{delay 0.1 {delete}
            ;{spawn "m2_30cal_tripod_bunker" "m2_30cal_slot" x }
        }
	}
}
{"emplacement_concrete_platform_fortress_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_platform_fortress" "basic" x }
        }
	}
}
;/*====================================== concrete_fortification begin ======================================*/