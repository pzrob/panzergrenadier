;/*====================================== weapon_crate begin ======================================*/
{"ger_weapon_crate_15mm_mg151"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "15mm_mg151_x3_stat" "mgun" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "15mm_mg151_x3_stat" "mgun" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"ger_weapon_crate_80mm_sgrw34"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "80mm_sgrw34_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "80mm_sgrw34_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"ger_weapon_crate_120mm_sgrw42"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "120mm_sgrw42_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "120mm_sgrw42_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"ger_weapon_crate_200mm_ldgw40"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "200mm_ldgw40_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "200mm_ldgw40_stat" "mortar" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"ger_weapon_crate_75mm_pak40"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "75mm_pak40_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "75mm_pak40_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}
{"ger_weapon_crate_88mm_flak36"
	{on "fortify_ger"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "88mm_flak36_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
	{on "fortify_spa"
		{delay 0.1
			{if not tagged "fortified"
				{delay 0.1
					{spawn "88mm_flak36_stat" "cannon" x }
				}
				{play_sound "deploy"}
			}
        }
	}
}

;/*====================================== weapon_crate end ======================================*/
;/*====================================== weapon_dummy begin ======================================*/
{"mg42_tripod_stat_shielded"
	{on break
		{delay 1.1{spawn "ger_weapon_crate_mg42_tripod_stat_shielded_crate_stage" "enumerator_logo1" x }}
	}
	{on break_armor	
		{delay 1.1{spawn "ger_weapon_crate_mg42_tripod_stat_shielded_crate_stage" "enumerator_logo1" x }}
	}
	{on destroy	
		{delay 1.1{spawn "ger_weapon_crate_mg42_tripod_stat_shielded_crate_stage" "enumerator_logo1" x }}
	}
	{on "stat_break"
		{delay 1.1{spawn "ger_weapon_crate_mg42_tripod_stat_shielded_crate_stage" "enumerator_logo1" x }}
	}
}
{"mg42_tripod_stat_shielded_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "mg42_tripod_stat_shielded" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_mg42_tripod_stat_shielded_dummy"
	{on spawn
		{delay 0.6 {delete}
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_mg42_tripod_stat_shielded_cleaner_stage_dummy"
	{on spawn
		{delay 0.1 
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_cleaner_stage" "enumerator_logo1" x }
        }
		{delay 0.2
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_mgun_stage_dummy" "enumerator_logo1" x }
        }
		{delay 0.3 {delete}
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_cleaner_stage" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_mg42_tripod_stat_shielded_mgun_stage_dummy"
	{on spawn
		{delay 0.1 
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_cleaner_stage" "enumerator_logo1" x }
        }
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_mg42_tripod_stat_shielded_hallway_mgun_stage_dummy"
	{on spawn
		{delay 0.1 
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_cleaner_stage" "enumerator_logo1" x }
        }
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_mg42_tripod_stat_shielded_hallway_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"80mm_sgrw34_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "80mm_sgrw34_stat" "enumerator_logo1" x }
        }
	}
}
{"75mm_pak40_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_pak40_stat" "enumerator_logo1" x }
        }
	}
}
{"88mm_pak4341_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "88mm_pak4341_stat" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_88mm_pak4341"
	{on "weapon_upgrade"
		{delay 0.2 
            {spawn "88mm_pak4341_stat" "cannon" x }
        }
	}
}
{"ger_weapon_crate_88mm_flak36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_88mm_flak36" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_88mm_flak36_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_88mm_flak36_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"88mm_flak36_stat_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "88mm_flak36_stat" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_50mm_flak41_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_50mm_flak41" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_50mm_flak41_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_50mm_flak41_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"50mm_flak41_bunker_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "50mm_flak41_bunker" "enumerator_logo1" x }
        }
	}
}
{"mg34_tripod_stat_shielded_bunker"
	{on spawn
		{delay 0.1 
			{if not tagged "placed"
				;{spawn "emplacement_modular_box_mg_tripod_low" "pillbox" x }
				{spawn "emplacement_concrete_block_bunker_set" "bunker" x }
				{spawn "crate_mg_platform" "table_01" x }
				{tags add "placed"}
			}
        }
	}
}
{"mg34_tripod_stat_shielded"
	{on "weapon_upgrade"
		{delay 0.3 {delete}
            {spawn "mg42_tripod_stat_shielded" "basic" x }
        }
	}
}
;/*====================================== weapon_dummy end ======================================*/;/*====================================== emplacement_minefield begin ======================================*/
{"minefield_at_ger"
	{on spawn
		{delay 0.2 {delete}}
        {spawn "minefield_tmi_35" offset 115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmi_35" offset 115 0 120  ;z x y
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		{spawn "minefield_tmi_35" offset 115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
		
        {spawn "minefield_tmi_35" offset 0 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmi_35" offset 0 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmi_35" offset 0 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
		
        {spawn "minefield_tmi_35" offset -115 115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmi_35" offset -115 0 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
        {spawn "minefield_tmi_35" offset -115 -115 120
		    {tags add "minefield_planted"}
			{if rand 0.25
				{spawn "minefield_tmi_35" offset 32 -32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset 32 32 0
		        {tags add "minefield_planted"}}
			else rand 0.25
				{spawn "minefield_tmi_35" offset -32 32 0
		        {tags add "minefield_planted"}}
			else 
				{spawn "minefield_tmi_35" offset -32 -32 0
		        {tags add "minefield_planted"}}
			}
		}
	}
}

;/*====================================== emplacement_minefield end ======================================*/
;/*====================================== emplacement_ground_floor begin ======================================*/

	
;/*====================================== emplacement_ground_floor end ======================================*/


;/*====================================== emplacement_small begin ======================================*/
{"emplacement_75mm_lg40_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_lg40" "basic" x }
        }
	}
}
{"emplacement_75mm_lg40_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_lg40_stat" "cannon" x }
        }
	}
}
{"emplacement_75mm_lg40_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_lg40_shell_crate_stage" "basic" x }
        }
	}
}

;/*====================================== emplacement_small end ======================================*/
;/*====================================== emplacement_small_deep begin ======================================*/
{"emplacement_mg34_mgun_stage"
	{on spawn
		{delay 0.1 
            ;{spawn "sandbag_structured_straight_90_indestructible" "sandbag_00" x }
        }
		{delay 0.1 {delete}
            {spawn "mg34_tripod_stat_shielded" "mgun" x }
        }
	}
}
{"emplacement_mg42_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "sandbag_structured_straight_90_indestructible" "sandbag_00" x }
        }
		{delay 0.1 {delete}
            {spawn "mg42_tripod_stat_shielded" "mgun" x }
        }
	}
}
{"emplacement_small_deep_mgun_bunker_stage_ger"
	{on spawn
		{delay 0.3 {delete}
            {spawn "emplacement_small_deep_mgun_bunker_stage" "mark_bunker" x }
        }
	}
}
{"emplacement_small_deep_mgun_roof_sandbag_stage_ger"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_small_deep_mgun_roof_sandbag_stage" "mark_roof_sandbag" x }
        }
	}
}
;/*====================================== emplacement_small_deep end ======================================*/
;/*====================================== emplacement_light begin ======================================*/
{"emplacement_mg151_x3_stat_mgun_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "15mm_mg151_x3_stat" "mgun" x }
        }
	}
}
{"emplacement_20mm_flak30_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flak30" "basic" x }
        }
	}
}
{"emplacement_20mm_flak30_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flak30_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_20mm_flak38_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flak38" "basic" x }
        }
	}
}
{"emplacement_20mm_flak38_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flak38_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_20mm_flak38_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flak38_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_20mm_flakvierling38_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flakvierling38" "basic" x }
        }
	}
}
{"emplacement_20mm_flakvierling38_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_20mm_flakvierling38_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_37mm_flak37_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "emplacement_light_aa_sandbag_stage" "sandbag_stage" x }
        }
		{delay 0.1 
            ;{spawn "emplacement_light_floor_stage" "floor" x }
        }
		{delay 0.1 {delete}
            {spawn "37mm_flak37_stat" "cannon" x }
        }
	}
}
{"emplacement_37mm_flak37_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_37mm_auto_cannon_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_37mm_pak36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_pak36" "basic" x }
        }
	}
}
{"emplacement_37mm_pak36_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_37mm_pak36_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_light_ger_37mm_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_light_ger_37mm_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_75mm_leig18_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_leig18" "basic" x }
        }
	}
}
{"emplacement_75mm_leig18_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_leig18_stat" "cannon" x }
        }
	}
}
{"emplacement_75mm_leig18_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_75mm_l24_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_80mm_sgrw34_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "80mm_sgrw34_stat" "mortar" x }
        }
	}
}
{"emplacement_80mm_sgrw34_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_80mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
;/*====================================== emplacement_light end ======================================*/
;/*====================================== emplacement_middle begin ======================================*/
{"emplacement_50mm_flak41_cannon_stage"
	{on spawn
		{delay 0.1 
            {spawn "sand-shuttering-box_3_short" "support_01" x }
        }
		{delay 0.1 
            {spawn "emplacement_middle_aa_sandbag_stage_low" "sandbag_stage" x }
        }
		{delay 0.1 {delete}
            {spawn "50mm_flak41_stat" "cannon" x }
        }
	}
}
{"emplacement_50mm_flak41_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_50mm_l87_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_50mm_pak38_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_50mm_pak38" "basic" x }
        }
	}
}
{"emplacement_50mm_pak38_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "50mm_pak38_stat" "cannon" x }
        }
	}
}
{"emplacement_50mm_pak38_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_50mm_l60_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_75mm_pak40_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_75mm_pak40" "basic" x }
        }
	}
}
{"emplacement_75mm_pak40_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "75mm_pak40_stat" "cannon" x }
        }
	}
}
{"emplacement_75mm_pak40_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_75mm_l43_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_100mm_nbw35_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_100mm_nbw35" "basic" x }
        }
	}
}
{"emplacement_100mm_nbw35_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "100mm_nbw35_stat" "mortar" x }
        }
	}
}
{"emplacement_100mm_nbw35_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_100mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_105mm_lefh18_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "105mm_lefh18_stat" "cannon" x }
        }
	}
}
{"emplacement_105mm_lefh18_shell_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_105mm_howitzer_shell_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_120mm_sgrw42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_120mm_sgrw42" "basic" x }
        }
	}
}
{"emplacement_120mm_sgrw42_mortar_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "120mm_sgrw42_stat" "mortar" x }
        }
	}
}
{"emplacement_120mm_sgrw42_round_crate_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_120mm_mortar_round_crate" "ammo_box_01" x }
        }
	}
}
{"emplacement_150mm_sig33_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_150mm_sig33" "basic" x }
        }
	}
}
{"emplacement_150mm_sig33_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_150mm_sig33_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_150mm_sig33_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_150mm_sig33_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}

{"emplacement_88mm_flak36_cannon_stage"
	{on spawn
		{delay 0.2 {delete}
            {spawn "88mm_flak36_stat" "cannon" x }
        }
	}
}
{"emplacement_88mm_flak36_shell_crate_stage"
	{on spawn
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_01" x }
        }
		{delay 0.2 
            {spawn "bench_storage_rack_indestructible" "bench_02" x }
        }
		{delay 0.2 {delete}
            {spawn "ger_88mm_l56_shell_crate" "ammo_crate_01" x }
        }
	}
}
;/*====================================== emplacement_middle end ======================================*/
;/*====================================== emplacement_heavy begin ======================================*/
;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== emplacement_heavy end ======================================*/
;/*====================================== concrete_fortification begin ======================================*/
{"emplacement_concrete_bunker_mg34_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_mg34" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_mg34_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_mg34_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker" "basic" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_kwk39_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_kwk39" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_kwk39_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_kwk39_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_kwk39_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_kwk39_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_flak41_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_flak41" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_flak41_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_flak41_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_50mm_flak41_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_50mm_flak41_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_mg42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_mg42" "basic" x }
        }
	}
}
{"emplacement_concrete_tower_mg34_mgun_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "mg34_tripod_stat_shielded" "mgun" x }
        }
	}
}
{"emplacement_concrete_tower_mg42_mgun_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "mg42_tripod_stat_shielded" "mgun" x }
        }
	}
}
{"emplacement_concrete_tower_search_light_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_search_light_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_cannon_stage_01_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_cannon_stage_01" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_cannon_stage_02_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_cannon_stage_02" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_shell_crate_stage_01_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_shell_crate_stage_01" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_tower_50mm_flak41_shell_crate_stage_02_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_tower_50mm_flak41_shell_crate_stage_02" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_block_tower_window_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_block_tower_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_block_bunker_window_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_block_bunker_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_88mm_flak_basement_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak_basement_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak_basement_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak_basement_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_50mm_flak41_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_50mm_flak41" "basic" x }
        }
	}
}
{"emplacement_concrete_50mm_flak41_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_50mm_flak41_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_50mm_flak41_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_50mm_flak41_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak18_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak18" "basic" x }
        }
	}
}
{"emplacement_concrete_88mm_flak18_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak18_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak36_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak36" "basic" x }
        }
	}
}
{"emplacement_concrete_88mm_flak36_cut_entity_01_dummy"
	{on spawn
		{delay 0.2 {delete}
			{spawn "emplacement_concrete_88mm_flak36_cut_entity_01" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak36_cut_entity_02_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak36_cut_entity_02" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak36_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak36_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_88mm_flak36_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_88mm_flak36_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_fortress_ger_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_fortress_ger" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_block_fortress_platform_large_no_stair_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_block_fortress_platform_large_no_stair" "enumerator_logo1" x }
        }
	}
}
{"regel_bau_636a_cut_entity_entry_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "regel_bau_636a_cut_entity_entry" "enumerator_logo1" x }
        }
	}
}
{"regel_bau_636a_cut_entity_bunker_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "regel_bau_636a_cut_entity_bunker" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_window_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_window_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_v2_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_v2_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_v2_37mm_flak37_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_v2_37mm_flak37_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_v2_75mm_pak40_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_concrete_bunker_lager_v2_75mm_pak40_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_build_roof_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_bunker_lager_build_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_build_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_bunker_lager_build_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_lager_build_window_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_bunker_lager_build_window_stage" "basic" x }
        }
	}
}
{"emplacement_concrete_block_bunker_side_exit_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_block_bunker_side_exit" "basic" x }
        }
	}
}
{"emplacement_concrete_block_bunker_hallway_side_exit_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "emplacement_concrete_block_bunker_hallway_side_exit" "basic" x }
        }
	}
}
{"steel_crate_emplacement_concrete_maze_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "steel_crate_emplacement_concrete_maze" "enumerator_logo1" x }
        }
	}
}
{"steel_crate_emplacement_concrete_maze_build_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
            {spawn "steel_crate_emplacement_concrete_maze_build_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_maze_dummy"
	{on spawn
		{delay 0.1 
			{spawn "emplacement_concrete_maze" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_maze_entrance_cut_entity_dummy"
	{on spawn
		{delay 0.1 
			{spawn "emplacement_concrete_maze_entrance_cut_entity" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_maze"
	{on spawn
		{delay 0.4 
            {spawn "house_cleaner" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_maze_roof_stage_dummy"
	{on spawn
		{delay 0.1 
			{spawn "emplacement_concrete_maze_roof_stage" "enumerator_logo1" x }
        }
	}
}

{"steel_crate_emplacement_concrete_block_fortress_ger_dummy"
	{on spawn
		{delay 0.1 {delete}
			{spawn "steel_crate_emplacement_concrete_block_fortress_ger" "enumerator_logo1" x }
        }
	}
}
{"steel_crate_emplacement_concrete_block_fortress_ger_build_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
			{spawn "steel_crate_emplacement_concrete_block_fortress_ger_build_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_block_fortress_ger_dummy"
	{on spawn
		{delay 0.1 
			{spawn "house_cleaner" offset 0 0 0}
        }
		{delay 0.1 {delete}
			{spawn "emplacement_concrete_block_fortress_ger" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_block_fortress_ger"
	{on spawn
		{delay 0.1 
			{spawn "house_cleaner" offset 0 0 0}
        }
		{delay 0.1
			{spawn "80mm_sgrw34_stat" "fortress_northeast_third_floor_mortar_emplacement_01" x }
        }
		{delay 0.1
			{spawn "80mm_sgrw34_stat" "fortress_northeast_third_floor_mortar_emplacement_02" x }
        }
	}
}
{"emplacement_concrete_block_fortress_roof_stage_dummy"
	{on spawn
		{delay 0.1 {delete}
			{spawn "emplacement_concrete_block_fortress_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_concrete_bunker_88mm_pak4341_dummy"
	{on spawn
		{delay 0.1 {delete}
			{spawn "emplacement_concrete_bunker_88mm_pak4341" "basic" x }
        }
	}
}
{"emplacement_concrete_bunker_88mm_pak4341_cannon_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "88mm_pak4341_stat" "cannon" x }
        }
	}
}
{"emplacement_concrete_bunker_88mm_pak4341_shell_crate_stage"
	{on spawn
		{delay 0.1 {delete}
            {spawn "ger_weapon_crate_88mm_pak4341" "crate" x }
        }
	}
}
;/*====================================== emplacement_concrete end ======================================*/
;/*====================================== emplacement_other begin ======================================*/
{"emplacement_watch_tower_mg34_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_mg34" "enumerator_logo1" x }
        }
	}
}
{"emplacement_watch_tower_mg34_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_mg34_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_watch_tower_mg42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_mg42" "enumerator_logo1" x }
        }
	}
}
{"emplacement_watch_tower_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_watch_tower_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_other end ======================================*/
;/*====================================== emplacement_tank begin ======================================*/
{"emplacement_tank_trench_stug3_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_stug3_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_stug3_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_stug3g_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3g_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_stug3g_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3g_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_stug3g_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_stug3g_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanzer4_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanzer4_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanzer4_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanzer4_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanzer4_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanzer4_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_panzer5_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_panzer5_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_panzer5_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_panzer5_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_panzer5_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_panzer5_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanther_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanther_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanther_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanther_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdpanther_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdpanther_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_tiger2_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_tiger2_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_tiger2_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_tiger2_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_tiger2_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_tiger2_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_ferdinand_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_ferdinand_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_ferdinand_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_ferdinand_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_ferdinand_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_ferdinand_netting_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdtiger_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdtiger_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdtiger_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdtiger_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_tank_trench_jagdtiger_netting_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_tank_trench_jagdtiger_netting_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_tank end ======================================*/
;/*====================================== emplacement_car begin ======================================*/
{"emplacement_bmw_r71_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_bmw_r71_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kubelwagen_mg_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kubelwagen_mg_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kubelwagen_mg_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kubelwagen_mg_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kfz15_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kfz15_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kfz15_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kfz15_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kfz13_trench_roof_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kfz13_trench_roof_stage" "enumerator_logo1" x }
        }
	}
}
{"emplacement_kfz13_trench_roof_sandbag_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_kfz13_trench_roof_sandbag_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== emplacement_car end ======================================*/
;/*====================================== weapon_selection begin ======================================*/
{"ger_weapon_crate_120mm_sgrw42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_120mm_sgrw42" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_120mm_sgrw42_mortar_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_120mm_sgrw42_mortar_stage" "enumerator_logo1" x }
        }
	}
}

{"ger_weapon_crate_150mm_sig33_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_150mm_sig33" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_150mm_sig33_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_150mm_sig33_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_155mm_gpf_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_155mm_gpf" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_155mm_gpf_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_155mm_gpf_cannon_stage" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_300mm_nebelwerfer42_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_300mm_nebelwerfer42" "enumerator_logo1" x }
        }
	}
}
{"ger_weapon_crate_300mm_nebelwerfer42_cannon_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "ger_weapon_crate_300mm_nebelwerfer42_cannon_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== weapon_selection end ======================================*/
;/*====================================== weapon_floor begin ======================================*/

{"floor_80mm_sgrw34_mortar_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "floor_80mm_sgrw34_mortar_stage" "enumerator_logo1" x }
        }
	}
}
{"floor_80mm_sgrw34_round_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "floor_80mm_sgrw34_round_crate_stage" "enumerator_logo1" x }
        }
	}
}



{"floor_120mm_sgrw42_round_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "floor_120mm_sgrw42_round_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"floor_155mm_gpf_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "floor_155mm_gpf_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"floor_300mm_nebelwerfer42_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "floor_300mm_nebelwerfer42_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"concrete_floor_150mm_sig33_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "concrete_floor_150mm_sig33_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"concrete_floor_155mm_gpf_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "concrete_floor_155mm_gpf_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
{"concrete_floor_300mm_nebelwerfer42_shell_crate_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "concrete_floor_300mm_nebelwerfer42_shell_crate_stage" "enumerator_logo1" x }
        }
	}
}
;/*====================================== weapon_floor end ======================================*/
{"crate_mg_tripod_bunker_entrance_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "crate_mg_tripod_bunker_entrance_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"mg_fixed_shielded_tripod_bunker_entrance_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "mg_fixed_shielded_tripod_bunker_entrance" "enumerator_logo1" x }
        }
	}
}
{"emplacement_regel_bau_636a_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "emplacement_regel_bau_636a_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}
{"regel_bau_636a_mg42_mgun_stage_dummy"
	{on spawn
		{delay 0.2 {delete}
            {spawn "regel_bau_636a_mg42_mgun_stage" "enumerator_logo1" x }
        }
	}
}