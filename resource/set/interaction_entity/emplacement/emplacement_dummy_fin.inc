;/*====================================== weapon_crate begin ======================================*/
{"fin_weapon_crate_81mm_krh36"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "81mm_krh36_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"fin_weapon_crate_120mm_krh40"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "120mm_krh40_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"fin_weapon_crate_170mm_minewerfer"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "170mm_minewerfer_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"fin_weapon_crate_75mm_itk37"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "75mm_itk37_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"fin_weapon_crate_75mm_k40"
	{on "fortify_fin"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "75mm_k40_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}

;/*====================================== weapon_crate end ======================================*/
;/*====================================== weapon_dummy begin ======================================*/
{"maxim_stand_stat_fin_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "maxim_stand_stat_fin" "enumerator_logo1" x }
        }
	}
}
{"ds39_stand_stat_fin_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ds39_stand_stat_fin" "enumerator_logo1" x }
        }
	}
}
{"20mm_itk35_stat"
	{on "weapon_upgrade"
		{delay 0.5 {delete}
            {spawn "20mm_itk40_stat" "basic" x }
        }
	}
}
;/*====================================== weapon_dummy end ======================================*/
;/*====================================== emplacement_minefield begin ======================================*/
{"minefield_at_fin"
	{on spawn
		{delay 0.2 {delete}}
        {spawn "minefield_m39" offset 115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m39" offset 115 0 120  ;z x y
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		{spawn "minefield_m39" offset 115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
		
        {spawn "minefield_m39" offset 0 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m39" offset 0 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m39" offset 0 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
        {spawn "minefield_m39" offset -115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m39" offset -115 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_m39" offset -115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_m39" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_m39" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_m39" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
	}
}

;/*====================================== emplacement_minefield end ======================================*/


;/*====================================== emplacement_ground_floor begin ======================================*/

	
;/*====================================== emplacement_ground_floor end ======================================*/
;/*====================================== emplacement_small begin ======================================*/


;/*====================================== emplacement_small end ======================================*/
;/*====================================== emplacement_small_deep begin ======================================*/
{"emplacement_maxim_fin_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_maxim_fin" "basic" x }
        }
	}
}
{"emplacement_maxim_fin_mgun_stage"
	{on spawn
		{delay 0.2 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.2 {delete}
            {spawn "maxim_stand_stat_fin" "mgun" x }
        }
	}
}
{"emplacement_50mm_krh38_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_50mm_krh38" "basic" x }
        }
	}
}
{"emplacement_50mm_krh38_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "50mm_krh38_stat" "mortar" x }
        }
	}
}
{"emplacement_50mm_krh38_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "rus_50mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_small_deep end ======================================*/
;/*====================================== emplacement_light begin ======================================*/
{"emplacement_20mm_itk35_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "20mm_itk35_stat" "cannon" x }
        }
	}
}
{"emplacement_20mm_itk40_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "fin_20mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_20mm_itk40_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_itk40" "basic" x }
        }
	}
}
{"emplacement_20mm_itk40_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "20mm_itk40_stat" "cannon" x }
        }
	}
}
{"emplacement_20mm_itk40_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_itk40_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_20mm_itk40_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_itk40_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_20mm_itk40_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_itk40_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_37mm_pstk36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_pstk36" "basic" x }
        }
	}
}
{"emplacement_37mm_pstk36_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_pstk36_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_fin_37mm_l45_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_fin_37mm_l45_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_81mm_krh36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_81mm_krh36" "basic" x }
        }
	}
}
{"emplacement_81mm_krh36_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "81mm_krh36_stat" "mortar" x }
        }
	}
}
{"emplacement_81mm_krh36_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "fin_81mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_light end ======================================*/
;/*====================================== emplacement_middle begin ======================================*/
{"emplacement_40mm_itk38b_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "sand-shuttering-box_3_short" "support_01" x }
        }
		{delay 0.1 
            {spawn "emplacement_middle_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 {delete}
            {spawn "40mm_itk38b_stat" "cannon" x }
        }
	}
}
{"emplacement_40mm_itk38b_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "usa_40mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_75mm_itk37_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_itk37" "basic" x }
        }
	}
}
{"emplacement_75mm_itk37_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_itk37_stat" "cannon" x }
        }
	}
}
{"emplacement_75mm_itk37_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "fin_75x657_shell_crate" "ammo_crate_01" x }
        }
	}
}
{"emplacement_75mm_itk37_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_itk37_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_k40_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_k40" "basic" x }
        }
	}
}
{"emplacement_75mm_k40_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_k40_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_k40_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_k40_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_k44_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_k44" "basic" x }
        }
	}
}
{"emplacement_76mm_k36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_76mm_k36" "basic" x }
        }
	}
}
{"emplacement_76mm_k36_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "76mm_k36_stat" "cannon" x }
        }
	}
}
{"emplacement_76mm_m1927_fin_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "76mm_m1927_fin_stat" "cannon" x }
        }
	}
}
{"emplacement_middle_fin_76mm_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "fin_76mm_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_84mm_k18_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_84mm_k18" "basic" x }
        }
	}
}
{"emplacement_84mm_k18_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_84mm_k18_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_84mm_k18_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_84mm_k18_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_120mm_krh40_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_120mm_krh40" "basic" x }
        }
	}
}
{"emplacement_120mm_krh40_mortar_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "120mm_krh40_stat" "mortar" x }
        }
	}
}
{"emplacement_120mm_krh40_round_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_120mm_krh40_round_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_170mm_minewerfer_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_170mm_minewerfer" "basic" x }
        }
	}
}
{"emplacement_170mm_minewerfer_mortar_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_170mm_minewerfer_mortar_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_170mm_minewerfer_round_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_170mm_minewerfer_round_crate_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_middle end ======================================*/
;/*====================================== emplacement_heavy begin ======================================*/
{"emplacement_107mm_k10_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_107mm_k10" "basic" x }
        }

	}
}
{"emplacement_107mm_k10_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_107mm_k10_cannon_stage" "enumerator_logo1" x }
        }

	}
}
{"emplacement_107mm_k10_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_107mm_k10_shell_crate_stage" "enumerator_logo1" x }
        }

	}
}
{"emplacement_120mm_k78_31_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_120mm_k78_31" "basic" x }
        }

	}
}
{"emplacement_120mm_k78_31_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "120mm_k78_31_stat" "cannon" x }
        }

	}
}
{"emplacement_120mm_k78_31_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "fin_120mm_howitzer_shell_crate" "ammo_box_01" x }
        }

	}
}
;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== concrete_fortification begin ======================================*/
{"emplacement_concrete_bunker_ds39_fin_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_ds39_fin" "basic" x }
        }
	}
}
{"emplacement_45mm_pillbox_ds39_fin_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "crate_mg_platform" "table_01" x }
        }
		{delay 0.1 {delete}
            {spawn "ds39_stand_stat_fin" "mgun" x }
        }
	}
}
;/*====================================== emplacement_concrete end ======================================*/
;/*====================================== emplacement_other begin ======================================*/
{"emplacement_watch_tower_maxim_fin_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_maxim_fin" "basic" x }
        }
	}
}
{"emplacement_watch_tower_maxim_mgun_fin_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_maxim_mgun_fin_stage" "mark_dummy" x }
        }
	}
}
;/*====================================== emplacement_other end ======================================*/

