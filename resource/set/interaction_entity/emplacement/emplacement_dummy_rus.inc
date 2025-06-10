;/*====================================== weapon_crate begin ======================================*/
{"rus_weapon_crate_maxim_x4"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "maxim_x4" "mgun" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "maxim_x4" "mgun" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"rus_weapon_crate_dshk_aa"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "dshk_aa_stat" "basic" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"rus_weapon_crate_82mm_bm37"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "82mm_bm37_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"rus_weapon_crate_120mm_pm38"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "120mm_pm38_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"rus_weapon_crate_85mm_52k"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "85mm_52k_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"rus_weapon_crate_57mm_zis2"
	{on "fortify_rus"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "57mm_zis2_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}

;/*====================================== weapon_crate end ======================================*/
;/*====================================== weapon_dummy begin ======================================*/
{"maxim_stand_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "maxim_stand" "enumerator_logo1" x }
        }
	}
}
{"ds39_stand_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ds39_stand_stat" "enumerator_logo1" x }
        }
	}
}
{"maxim_stand"
	{on "weapon_upgrade"
		{delay 0.5 {delete}
            {spawn "dshk_stat" "basic" x }
        }
	}
}
;/*====================================== weapon_dummy end ======================================*/


;/*====================================== emplacement_minefield begin ======================================*/
{"minefield_at_rus"
	{on spawn
		{delay 0.2 {delete}}
        {spawn "minefield_tmd_b" offset 115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmd_b" offset 115 0 120  ;z x y
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		{spawn "minefield_tmd_b" offset 115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
		
        {spawn "minefield_tmd_b" offset 0 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmd_b" offset 0 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmd_b" offset 0 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
        {spawn "minefield_tmd_b" offset -115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmd_b" offset -115 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmd_b" offset -115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmd_b" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmd_b" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmd_b" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
	}
}
;/*====================================== emplacement_minefield end ======================================*/
;/*====================================== emplacement_trench begin ======================================*/
{"emplacement_log_trench_maxim_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_log_trench_maxim" "enumerator_logo1" x }
        }
	}
}
{"emplacement_log_trench_maxim_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_log_trench_maxim_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_log_trench_maxim_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_log_trench_maxim_bunker_stage" "enumerator_logo1" x }
        }
	}
}
{"trench_dirt_fire_position_maxim_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "trench_dirt_fire_position_maxim" "enumerator_logo1" x }
        }
	}
}
{"trench_dirt_fire_position_maxim_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "trench_dirt_fire_position_maxim_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_dshk_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_dshk" "basic" x }
        }
	}
}
{"emplacement_dshk_mgun_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "dshk_stat" "mgun" x }
        }
	}
}
{"emplacement_dshk_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_dshk_bunker_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_pillbox_sg43_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_pillbox_sg43" "basic" x }
        }
	}
}
{"emplacement_pillbox_sg43"
	{on spawn
		{delay 0.1
			{if  not tagged "spawned"
				{delay 0.2
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.2
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{delay 0.3
					{spawn "planks_walkable_01_indestructible" "trench_floor" x }
				}
				{tags add "spawned"}
			}	
		}	
	}
}
{"emplacement_pillbox_sg43_mgun_stage"
	{on spawn
		{delay 0.1
			{if  not tagged "spawned"
				{tags add "spawned"}
				{delay 0.1
					{spawn "crate_mg_platform" "table_01" x }
				}
				{delay 0.1 {delete}
					{spawn "sg43_stand_stat" "mgun" x }
				}
			else
				{delete}
			}
		}
	}
}
{"emplacement_pillbox_dshk"
	{on spawn
		{delay 0.1
			{if  not tagged "spawned"
				{delay 0.2
					{spawn "euro_log_trench_dirt_exit" "trench_01" x }
				}
				{delay 0.2
					{spawn "euro_log_trench_dirt_exit" "trench_02" x }
				}
				{tags add "spawned"}
			}
		}
	}
}
{"emplacement_pillbox_dshk_mgun_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "dshk_stat" "mgun" x }
        }
	}
}
;/*====================================== emplacement_trench end ======================================*/


;/*====================================== emplacement_ground_floor begin ======================================*/

	
;/*====================================== emplacement_ground_floor end ======================================*/


;/*====================================== emplacement_small begin ======================================*/
{"emplacement_small_76mm_m43_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_76mm_m43" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_76mm_m43_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_76mm_m43_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_76mm_m43_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_76mm_m43_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_76mm_m43_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_76mm_m43_bunker_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_small end ======================================*/
;/*====================================== emplacement_small_deep begin ======================================*/
{"emplacement_maxim_mgun_stage"
	{on spawn
		{delay 0.2 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.2 {delete}
            {spawn "maxim_stand" "mgun" x }
        }
	}
}
{"emplacement_maxim_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_maxim" "basic" x }
        }
	}
}
{"emplacement_trench_pillbox_maxim_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "maxim_stand" "mgun" x }
        }
	}
}
{"emplacement_sg43_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_sg43" "basic" x }
        }
	}
}
{"emplacement_sg43_mgun_stage"
	{on spawn
		{delay 0.2 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.2 {delete}
            {spawn "sg43_stand_stat" "mgun" x }
        }
	}
}
{"emplacement_small_deep_mgun_bunker_stage_rus"
	{on spawn
		{delay 0.3 {delete}
            {spawn "emplacement_small_deep_mgun_bunker_stage" "mark_bunker" x }
        }
	}
}
{"emplacement_small_deep_mgun_roof_sandbag_stage_rus"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_roof_sandbag_stage" "mark_roof_sandbag" x }
        }
	}
}
;/*====================================== emplacement_small_deep end ======================================*/
;/*====================================== emplacement_light begin ======================================*/
{"emplacement_maxim_x4_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "maxim_x4" "mgun" x }
        }
	}
}
{"emplacement_ds39_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_ds39" "basic" x }
        }
	}
}
{"emplacement_ds39_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_ds39_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_ds39_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_ds39_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_ds39_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_ds39_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_dshk_aa_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
           ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "dshk_aa_stat" "mgun" x }
        }
	}
}
{"emplacement_25mm_72k_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            {spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "25mm_72k_stat" "cannon" x }
        }
	}
}
{"emplacement_25mm_72k_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_25mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_45mm_m37_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_45mm_m37" "basic" x }
        }
	}
}
{"emplacement_45mm_m37_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_45mm_m37_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_45mm_m42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_45mm_m42" "enumerator_logo1" x }
        }
	}
}
{"emplacement_45mm_m42_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_45mm_m42_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_rus_45mm_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_rus_45mm_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_rus_45mm_shell_crate_stage_set_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_rus_45mm_shell_crate_stage_set" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_at_roof_stage_rus_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_at_roof_stage_rus" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_at_roof_stage_set_rus_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_at_roof_stage_set_rus" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_at_roof_sandbag_stage_rus_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_at_roof_sandbag_stage_rus" "enumerator_logo1" x }
        }
	}
}
{"emplacement_76mm_m43_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m43" "basic" x }
        }
	}
}
{"emplacement_76mm_m43_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m43_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_rus_76mm_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_rus_76mm_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_82mm_bm37_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "82mm_bm37_stat" "mortar" x }
        }
	}
}
{"emplacement_82mm_bm37_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_82mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_light end ======================================*/
;/*====================================== emplacement_middle begin ======================================*/
{"emplacement_37mm_61k_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "sand-shuttering-box_3_short" "support_01" x }
        }
		{delay 0.1 
            {spawn "emplacement_middle_aa_sandbag_stage_low" "sandbag_stage" x }
        }
		{delay 0.1 {delete}
            {spawn "37mm_61k_stat" "cannon" x }
        }
	}
}
{"emplacement_37mm_61k_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_37mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_57mm_zis2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_57mm_zis2" "basic" x }
        }
	}
}
{"emplacement_57mm_zis2_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_57mm_zis2_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_57mm_zis2_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_57mm_zis2_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_76mm_m1927_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "76mm_m1927_stat" "cannon" x }
        }
	}
}
{"emplacement_middle_rus_76mm_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_76mm_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_small_76mm_m43_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_76mm_m43" "basic" x }
        }

	}
}
{"emplacement_76mm_zis3_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "76mm_zis3_stat" "cannon" x }
        }
	}
}
{"emplacement_76mm_m1938_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m1938" "basic" x }
        }

	}
}
{"emplacement_76mm_m1938_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "76mm_m1938_stat" "cannon" x }
        }
	}
}
{"emplacement_76mm_m1938_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "rus_76mm_l55_shell_crate" "ammo_crate_01" x }
        }
	}
}
{"emplacement_85mm_52k_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_85mm_52k" "basic" x }
        }
	}
}
{"emplacement_85mm_52k_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "85mm_52k_stat" "cannon" x }
        }
	}
}
{"emplacement_85mm_52k_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "rus_85mm_shell_crate_52k" "ammo_crate_01" x }
        }
	}
}
{"emplacement_85mm_52k_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_85mm_52k_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_120mm_pm38_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_120mm_pm38" "basic" x }
        }
	}
}
{"emplacement_120mm_pm38_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "120mm_pm38_stat" "mortar" x }
        }
	}
}
{"emplacement_120mm_pm38_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_120mm_mortar_round_crate" "ammo_box_01" x }
        }

	}
}
{"emplacement_middle_log_deep_122mm_m30_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_deep_122mm_m30" "basic" x }
        }

	}
}
{"emplacement_middle_log_deep_122mm_m30_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_deep_122mm_m30_cannon_stage" "enumerator_logo1" x }
        }

	}
}
{"emplacement_middle_log_deep_122mm_m30_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_middle_log_deep_122mm_m30_shell_crate_stage" "enumerator_logo1" x }
        }

	}
}
{"emplacement_122mm_m30_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "122mm_m30_stat" "cannon" x }
        }
	}
}
{"emplacement_122mm_m30_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_122mm_l22_howitzer_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_command_post_rus_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_command_post_rus" "basic" x }
        }
	}
}
{"emplacement_command_post_rus_radio_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_command_post_rus_radio_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_middle end ======================================*/
;/*====================================== emplacement_heavy begin ======================================*/
{"emplacement_100mm_bs3_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_100mm_bs3" "basic" x }
        }
	}
}
{"emplacement_100mm_bs3_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "100mm_bs3_stat" "cannon" x }
        }
	}
}
{"emplacement_100mm_bs3_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "rus_100mm_shell_crate" "ammo_crate_01" x }
        }
	}
}

;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== emplacement_tank begin ======================================*/
{"emplacement_tank_trench_t20_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t20_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t20_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t20_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t20_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t20_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t34_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t34_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t34_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t34_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t34_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t34_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t3485_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t3485_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t3485_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t3485_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_t3485_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_t3485_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su85_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su85_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su85_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su85_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su85_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su85_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv1_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv1_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv1_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv1_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv1_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv1_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv2_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv2_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv2_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv2_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_kv2_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_kv2_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_45_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_45_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_45_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_45_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_is2_45_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_is2_45_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_isu_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_isu_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_isu_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_isu_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_isu_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_isu_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su100y_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su100y_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su100y_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su100y_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_su100y_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_su100y_netting_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_tank end ======================================*/
;/*====================================== factory begin ======================================*/
{"factory_t3476_42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "factory_t3476_42" "enumerator_logo1" x }
        }
	}
}
{"steel_crate_t3476_42_01_dummy"
	{on spawn
		{delay 0.2
            {spawn "cleaner_dummy"}
			    {delay 30
			        {spawn "steel_crate_t3476_42_01"  "enumerator_logo1" x}
				    {delay 0.2 {delete}	
			    }
			}
        }
	}
}
{"steel_crate_t3476_42_01_instance_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "steel_crate_t3476_42_01" "enumerator_logo1" x }
        }
	}
}
{"steel_crate_t3476_42_01_build_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "steel_crate_t3476_42_01_build_stage" "enumerator_logo1" x }
        }
	}
}
{"t3476_42_no_scavenge_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "t3476_42" "enumerator_logo1" x{tags add "no_scavenge"}}
        }
	}
}
;/*====================================== factory end ======================================*/
;/*====================================== emplacement_other begin ======================================*/
{"emplacement_watch_tower_maxim_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_maxim" "basic" x }
        }
	}
}
{"emplacement_watch_tower_maxim_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_maxim_mgun_stage" "mark_dummy" x }
        }
	}
}
;/*====================================== emplacement_other end ======================================*/
;/*====================================== concrete_fortification begin ======================================*/
{"emplacement_45mm_pillbox_ds39_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "ds39_stand_stat" "mgun" x }
        }
	}
}
{"emplacement_45mm_pillbox_sg43_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "sg43_stand_stat" "mgun" x }
        }
	}
}
;/*====================================== concrete_fortification end ======================================*/