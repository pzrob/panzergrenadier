;/*====================================== weapon_crate begin ======================================*/
{"crate_m2_50cal_aa"
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "m2_50cal_aa_stat" "m2_50cal_aa_slot" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"usa_weapon_crate_81mm_m1"
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "81mm_m1_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"usa_weapon_crate_107mm_m2"
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "107mm_m2_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"usa_weapon_crate_57mm_m1"
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "57mm_m1_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"usa_weapon_crate_90mm_m1a1"
	{on "fortify_usa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "90mm_m1a1_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}

;/*====================================== weapon_crate end ======================================*/
;/*====================================== weapon_dummy begin ======================================*/
{"m2_50cal_aa_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "m2_50cal_aa_stat" "enumerator_logo1" x }
        }
	}
}
{"m2_50cal_stand_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "m2_50cal_stand_stat" "enumerator_logo1" x }
        }
	}
}
{"m2_30cal_tripod_stand_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "m2_30cal_tripod_stand_stat" "basic" x }
        }
	}
}
{"m2_30cal_tripod_stat"
	{on "weapon_upgrade"
		{delay 0.3 {delete}
            {spawn "m2_50cal_tripod_stat" "basic" x }
        }
	}
}
{"m2_30cal_tripod_stand_stat"
	{on "weapon_upgrade"
		{delay 0.3 {delete}
            {spawn "m2_50cal_tripod_stand_stat" "basic" x }
        }
	}
}
;/*====================================== weapon_dummy end ======================================*/
;/*====================================== emplacement_minefield begin ======================================*/
{"minefield_at_usa"
	{on spawn
		{delay 0.2 {delete}}
        {spawn "minefield_m1a1" offset 115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m1a1" offset 115 0 120  ;z x y
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		{spawn "minefield_m1a1" offset 115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
		
        {spawn "minefield_m1a1" offset 0 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m1a1" offset 0 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m1a1" offset 0 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
        {spawn "minefield_m1a1" offset -115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m1a1" offset -115 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m1a1" offset -115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m1a1" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m1a1" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m1a1" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
	}
}

;/*====================================== emplacement_minefield end ======================================*/

;/*====================================== emplacement_modular_box begin ======================================*/
{"emplacement_modular_box_mgun_cut_entity_dummy"
	{on spawn
		{delay 0.2 
            {spawn "emplacement_modular_box_mgun_cut_entity" "enumerator_logo1" x }
        }
	}
}
{"emplacement_modular_box_m2_50cal_tripod_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_modular_box_m2_50cal_tripod" "basic" x }
        }
	}
}
{"emplacement_modular_box_m2_50cal_tripod_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "m2_50cal_tripod_stand_stat" "mgun" x }
        }
	}
}
;/*====================================== emplacement_modular_box end ======================================*/




;/*====================================== emplacement_ground_floor begin ======================================*/

	
;/*====================================== emplacement_ground_floor end ======================================*/
{"emplacement_ground_floor_tripod_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_ground_floor_tripod_sandbag_stage" "enumerator_logo1" x }
        }
	}
}

;/*====================================== emplacement_small begin ======================================*/

{"emplacement_small_m2_30cal_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_m2_30cal" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_m2_30cal_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_m2_30cal_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_small_75mm_m1a1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_75mm_m1a1" "enumerator_logo1" x }
        }
	}
}

{"emplacement_m2_50cal_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m2_50cal" "enumerator_logo1" x }
        }
	}
}
{"emplacement_m2_50cal_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m2_50cal_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_m2_50cal_bunker_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m2_50cal_bunker_stage" "enumerator_logo1" x }
        }
	}
}

;/*====================================== emplacement_small end ======================================*/
;/*====================================== emplacement_small_deep begin ======================================*/
{"emplacement_60mm_m2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_60mm_m2" "basic" x }
        }
	}
}
{"emplacement_60mm_m2_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "60mm_m2_stat" "mortar" x }
        }
	}
}
{"emplacement_60mm_m2_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_60mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_m2_30cal_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m2_30cal" "basic" x }
        }
	}
}
{"emplacement_m2_30cal_mgun_stage"
	{on spawn
		{delay 0.1
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "m2_30cal_tripod_stand_stat" "mgun" x }
        }
	}
}
{"emplacement_small_deep_mgun_bunker_stage_us"
	{on spawn
		{delay 0.3 {delete}
            {spawn "emplacement_small_deep_mgun_bunker_stage" "mark_bunker" x }
        }
	}
}
{"emplacement_small_deep_mgun_roof_sandbag_stage_us"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_roof_sandbag_stage" "mark_roof_sandbag" x }
        }
	}
}
;/*====================================== emplacement_small_deep end ======================================*/
;/*====================================== emplacement_light begin ======================================*/
{"emplacement_m2_50cal_aa_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage_low" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1
            {spawn "crate_mg_platform_small" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "m2_50cal_aa_stat" "mgun" x }
        }
	}
}
{"emplacement_50cal_quad_m45_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "50cal_quad_m45_stat" "cannon" x }
        }
	}
}
{"emplacement_50cal_quad_m45_ammo_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_ammo_crate_50cal" "ammo_box_01" x }
        }
	}
}
{"emplacement_37mm_m3a1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_m3a1" "basic" x }
        }
	}
}
{"emplacement_37mm_m3a1_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_m3a1_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_usa_37mm_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_usa_37mm_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_m1a1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_m1a1" "basic" x }
        }
	}
}
{"emplacement_75mm_m1a1_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_m1a1_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_m1a1_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_m1a1_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_81mm_m1_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "81mm_m1_stat" "mortar" x }
        }
	}
}
{"emplacement_81mm_m1_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_81mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_light end ======================================*/
;/*====================================== emplacement_middle begin ======================================*/
{"emplacement_40mm_m1_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "sand-shuttering-box_3_short" "support_01" x }
        }
		{delay 0.1 
            {spawn "emplacement_middle_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 {delete}
            {spawn "40mm_m1_stat" "cannon" x }
        }
	}
}
{"emplacement_40mm_m1_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "fin_40mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_57mm_m1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_57mm_m1" "basic" x }
        }
	}
}
{"emplacement_57mm_m1_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "57mm_m1_stat" "cannon" x }
        }
	}
}
{"emplacement_middle_usa_57mm_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_57mm_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_75mm_m3a3_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_m3a3" "basic" x }
        }
	}
}
{"emplacement_75mm_m3a3_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_m3a3_stat" "cannon" x }
        }
	}
}
{"emplacement_middle_usa_75mm_l16_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_75mm_l16_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_76mm_m5_m1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m5_m1" "basic" x }
        }

	}
}
{"emplacement_76mm_m5_m1_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m5_m1_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_76mm_m5_m6_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m5_m6" "basic" x }
        }
	}
}
{"emplacement_76mm_m5_m6_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_m5_m6_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_middle_usa_76mm_l45_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_76mm_l45_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_90mm_m1a1_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_90mm_m1a1" "basic" x }
        }
	}
}
{"emplacement_90mm_m1a1_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "90mm_m1a1_stat" "cannon" x }
        }
	}
}
{"emplacement_90mm_m1a1_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "usa_90mm_l53_shell_crate" "ammo_crate_01" x }
        }
	}
}
{"emplacement_90mm_m1a1_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_90mm_m1a1_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_107mm_m2_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_107mm_m2" "basic" x }
        }
	}
}
{"emplacement_107mm_m2_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "107mm_m2_stat" "mortar" x }
        }
	}
}
{"emplacement_107mm_m2_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_107mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_middle end ======================================*/
;/*====================================== emplacement_heavy begin ======================================*/
{"emplacement_105mm_m2a1_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "105mm_m2a1_stat" "cannon" x }
        }
	}
}
{"emplacement_105mm_m2a1_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_105mm_howitzer_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_105mm_m2a1_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_105mm_m2a1_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== emplacement_other begin ======================================*/
{"emplacement_watch_tower_m2_30cal_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_m2_30cal" "basic" x }
        }
	}
}
{"emplacement_watch_tower_m2_30cal_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
           {spawn "emplacement_watch_tower_m2_30cal_mgun_stage" "mark_dummy" x }
        }
	}
}
;/*====================================== emplacement_other end ======================================*/
;/*====================================== emplacement_tank begin ======================================*/
{"emplacement_tank_trench_m4_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m4_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_m4_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m4_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_m4_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m4_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_m26_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m26_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_m26_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m26_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_m26_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_m26_netting_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_tank end ======================================*/
;/*====================================== emplacement_car begin ======================================*/
{"emplacement_willys_mg_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_willys_mg_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_willys_mg_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_willys_mg_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_wc52_50cal_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_wc52_50cal_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_wc52_50cal_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_wc52_50cal_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_m6_gmc_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m6_gmc_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_m6_gmc_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_m6_gmc_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_car end ======================================*/