;/*-------------------------- terrain begin -------------------------*/
{"fortress"
	{on spawn
		{delay 0.1 
			{if not tagged "spawned"
				{delay 0.4 
					{spawn "house_cleaner" "basic" x }
				}
				{tags add "spawned"}
			}
		}
	}
}
{"fortress_cleaner_stage"
	{on spawn
		{delay 10.5		
			{delete}
		}
	}
}
{"cleaner"
	{on spawn
		{delay 2.0		
			{delete}
		}
	}
}
{"dummy_emplacement"
	{on spawn
		{delay 2.0		
			{delete}
		}
	}
}

{"weapon_crate_cleaner"
	{on spawn
		{delay 0.01		
			{stuff_detonate}
		}
	}
}
{"weapon_crate"
	{on contact
		{if effector "weapon_crate_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.1			
				    {delete}
				}
			}
		}
	}
	{on blast_hit
		{if stuff "weapon_crate_cleaner"
            ;{damage_report "Removed" "<s(10)b+c(00FF00)>From Construction Site"}
            ;{if terrain_fx "bunker_floor"
				{delay 0.2			
				    {delete}
				}
			;}
		}
	}
}
{"house_cleaner"
	{on spawn
	    {delay 0.1
			{set "overlap" 1}
			{set "contact" 1}
		}
	    {physics_work 1}
		{delay 0.1}
		{impulse up 0.1 0.1 com}
		{delay 10.5		
			{delete}
		}
	}
}

{"immediate_explosive"
	{on spawn
		{delay 0.01
			{stuff_detonate}
		}
	}
}

{"dirt_lump_straight"
	{on spawn
	    {delay 0.1
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
	}
	{on "sel_del_loop"
		{if terrain_fx "bunker_floor"
            {delete}
		else
		{delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
		}
	}
}
{"crater"
	{on spawn
	    {delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
	}
	{on "sel_del_loop"
		{if terrain_fx "bunker_floor"
            {delete}
		else
		{delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
		}
	}
	{##on terrain_pp "bunker_floor" enter
		{delay 0.05
			{delete}
		}
	}
}
{"trench_modular"
	{on spawn
	    {delay 0.1
        {set "overlap" 1}
        {set "contact" 1}
		}
	}
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
	{on blast_hit
		;{if stuff "ground_cleaner"
            {damage_report "Removed" "<s(10)b+c(00FF00)>From Construction Site"}
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		;}
	}
}
{"antitank_hedgehog"
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
{"crushable"
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
{"straw"
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
{"bush"
	{on spawn
	    {delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
	}
	{on "sel_del_loop"
		{if terrain_fx "bunker_floor"
            {delete}
		else
		{delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
		}
	}
	{##on terrain_pp "bunker_floor" enter
		{delay 0.05
			{delete}
		}
	}
}

;/*-------------------------- terrain end -------------------------*/
;/*-------------------------- reinforcement_bunker begin -------------------------*/
{"vehicle"
	{on crew out
	{if tagged "garrison"
        ;{delay 10.0
            {tags add "out"}
                {if not crew_in_place "driver1" 
                	{if not crew_in_place "seat01" 
                        {if not crew_in_place "seat02" 
                            {if not crew_in_place "seat03" 
                                {if not crew_in_place "seat04" 
                                    {if not crew_in_place "seat05" 
                                        {if not crew_in_place "seat06" 
                                            {if not crew_in_place "seat07" 
                                                {if not crew_in_place "seat08" 
                                                   {if not crew_in_place "seat09" 
                                                    {if not crew_in_place "seat10"
                                                        {if not crew_in_place "seat11"
                                                            {if not crew_in_place "seat12"
                                                                {if not crew_in_place "seat13"
                                                                	{if operatable
                     															{delay 10 {delete}}
                													}
                												}
                											}
                										}
                									}
                								}
                							}
                						}
                					}
                				}
                			}
                		}
                	}
                }
            }
        }
    }
    ;}	
}
;/*-------------------------- reinforcement_bunker end -------------------------*/
;/*-------------------------- gun_shield begin -------------------------*/
{"gun_shield"
	{on "show_shield"				;// ables for all wheel volumes
		{volumes "shield" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
		{view show "shield"}
		{view show "shield_cover"}
		{volumes "shield_off" disable all}
		{view hide "shield_off"}
		{view hide "sight"}
	}
	{on "hide_shield"				;// removes ables for all wheel volumes
		{volumes "shield" disable all}
		{volumes "shield" enable contact_ground}
		{view hide "shield"}
		{view hide "shield_cover"}
		{volumes "shield_off" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
		{view show "shield_off"}
		{view show "sight"}
	}
	{on "gun_shield_switch"
		{if tagged "gun_shield_off"
			{call "show_shield"}
			{tags add "gun_shield_on"}
			{tags remove "gun_shield_off"}
			{drop_orders}
			{damage_report "gun shield mode" "<s(10)b+c(00FF00)>Gun-shield activated. gun shield on"}	
		else tagged "gun_shield_on"
			{call "hide_shield"}
			{tags add "gun_shield_off"}
			{tags remove "gun_shield_on"}
			{damage_report "gun shield mode" "<s(10)b>Gun-shield disabled. gun shield off"}		
		else
            {call "hide_shield"}
			{tags add "gun_shield_off"}
			{damage_report "gun shield mode" "<s(10)b>Gun-shield disabled. gun shield off"}			
		}
		
	}
	{on spawn
		{call "activate_vehicle"}
		{if tagged "gun_shield_off"
			{call "hide_shield"}
		}
	}
}
;/*-------------------------- gun_shield end -------------------------*/
;*===================dummy_stuff begin=================*
;*===================dummy_stuff end===================*

;/*-------------------------- texture_mod begin -------------------------*/
;/*-------------------------- concrete begin -------------------------*/
{"concrete" ;// entity name
	{on spawn
		{spawn "building_smoke" "service_bone"}
		{link_sound "deploy" "vehicle/deploy"}
		{play_sound "deploy"}
		{if terrain_fx "ice"
			{tex_mod "win"}
		else terrain_fx "snow"
			{tex_mod "win"}
		else terrain_fx "grass"
			{tex_mod "camo"}
		}
	}
	{on "change_model"
		{delay 0.1
		{play_sound "deploy"}
		{delay 0.1
			{delete}
		}
		}
	}
	{on "change_model_synced" overload
		{delay 0.1
		{play_sound "deploy"}
		{delay 0.1
			{delete}
		}
		}
	}
}
;/*-------------------------- concrete end -------------------------*/
;/*-------------------------- sandbag begin -------------------------*/
{"sandbag" ;// entity name
	{on spawn
		{spawn "building_smoke" "service_bone"}
		{link_sound "deploy" "vehicle/deploy"}
		{play_sound "deploy"}
		{if terrain_fx "ice"
			{tex_mod "win"}
		else terrain_fx "snow"
			{tex_mod "win"}
		else terrain_fx "grass"
			{tex_mod "camo"}
		}
	}
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
	{on "change_model"
		{delay 0.1
		{play_sound "deploy"}
		{delay 0.1
			{delete}
		}
		}
	}
	{on "change_model_synced" overload
		{delay 0.1
		{play_sound "deploy"}
		{delay 0.1
			{delete}
		}
		}
	}
}


;/*-------------------------- sandbag end -------------------------*/
;/*====================================== trench begin ======================================*/
{"trench" ;// entity name
	{on spawn
	    {delay 0.1
            ;{set "overlap" 1}
            {set "contact" 1}
		}
		{if terrain_fx "ice"
			{tex_mod "win"}
		else terrain_fx "snow"
			{tex_mod "win"}
		else terrain_fx "sand"
			;{tex_mod "sand"}
		else terrain_fx "ground"
			;{tex_mod "ground"}
		else
			;{tex_mod "ground"}
		}
		{delay 0.2
			{spawn "building_smoke" "inside"}
			{link_sound "trench_deploy" "vehicle/deploy/foxhole/"}
			{play_sound "trench_deploy"}
		}
		{delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
	}
	{on "sel_del_loop"
		{if terrain_fx "bunker_floor"
            {delete}
		else
		{delay 10.0
	        {if not tagged "emplacement"
				{call "sel_del_loop"}
			}
		}
		}
	}
	{##on terrain_pp "bunker_floor" enter
		{delay 0.05
			{delete}
		}
	}
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
	{on blast_hit
		;{if stuff "ground_cleaner"
            {damage_report "Removed" "<s(10)b+c(00FF00)>From Construction Site"}
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		;}
	}
}
;/*====================================== trench end ======================================*/
;/*====================================== wooden begin ======================================*/
{"wood" ;// entity name
	{on spawn
		{if terrain_fx "ice"
			{tex_mod "win"}
		else terrain_fx "snow"
			{tex_mod "win"}
		else terrain_fx "sand"
			;{tex_mod "sand"}
		else terrain_fx "ground"
			;{tex_mod "ground"}
		else
			;{tex_mod "ground"}
		}
		{delay 0.2
			{spawn "building_smoke" "inside"}
			{link_sound "trench_deploy" "vehicle/deploy/foxhole/"}
			{play_sound "trench_deploy"}
		}
	}
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
{"wooden" ;// entity name
	{on spawn
		{if terrain_fx "ice"
			{tex_mod "win"}
		else terrain_fx "snow"
			{tex_mod "win"}
		else terrain_fx "sand"
			;{tex_mod "sand"}
		else terrain_fx "ground"
			;{tex_mod "ground"}
		else
			;{tex_mod "ground"}
		}
		{delay 0.2
			{spawn "building_smoke" "inside"}
			{link_sound "trench_deploy" "vehicle/deploy/foxhole/"}
			{play_sound "trench_deploy"}
		}
	}
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
{"tree"
	{on contact
		{if effector "house_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.05			
				    {delete}
				}
			}
		}
	}
}
;/*====================================== trench end ======================================*/
;/*-------------------------- texture_mod end -------------------------*/

;/*====================================== additional cannon begin ======================================*/

{"15mm_mg151_x3"
	;("hanomag_sound")
	{on "add_weapon_sound" overload
		("MG151_15_Drilling")
	}
	("multi_barrel_loop" flash(flash_gun_hmg_m2hb) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(gun) head(0.081))

	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
}
;/*====================================== additional cannon end ======================================*/
;/*====================================== detector begin ======================================*/
{"detector"
	{on spawn
	    {delay 0.1
        {set "overlap" 1}
        {set "contact" 1}
		}
	    {physics_work 1}
		{delay 0.1}
		{impulse up 0.1 0.1 com}
	}
	{on contact
		{if effector "vehicle"
			{delay 0.2
				{delete}
			}
		}
		{if effector "medic_rally"
			{delay 0.3
				{delete}
			}
		}
	}
}
{"target_emplacement"
	{on spawn
		{delay 1
			{delete}
		}
	}
	{on contact
		{if effector "trench_emplacement"
			{delay 0.1
				{delete}
			}
		}
	}
}
;/*====================================== emplacement_trigger begin ======================================*/
;/*====================================== emplacement2_at_roof begin ======================================*/
{"euro_log_trench_dirt_emplacement2_at"
	{on contact
		{if effector "emplacement_trigger_roof"
			{if not tagged "roof_triggered"
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_detector_roof" "detector" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_ds39"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_ds39" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_mgun_lafette"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_mgun_lafette" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_atgun_light"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_atgun_light" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_atgun_middle"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_atgun_middle" x }
				}
			}
		}
		{if effector "emplacement_trigger_sandbag_stage_standard"
			{if not tagged "sandbag_standard_installed"
				{tags add "sandbag_standard_installed"}
				{delay 0.1
					{spawn "emplacement_middle_sandbag_stage_standard" "sandbag_standard" x }
				}
			}
		}
;/*====================================== emplacement2_at_roof end ======================================*/
;/*====================================== emplacement2_at_roof_sandbag begin ======================================*/
		{if effector "emplacement_trigger_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_detector_roof_sandbag" "detector" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_ds39"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_ds39" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_mgun_lafette"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_mgun_lafette" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_atgun_light"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_atgun_light" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_atgun_middle"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_atgun_middle" x }
				}
			}
		}
	}
}
;/*====================================== emplacement2_at_roof_sandbag end ======================================*/
;/*====================================== emplacement2_roof begin ======================================*/
{"euro_log_trench_dirt_emplacement2"
	{on contact
		{if effector "emplacement_trigger_roof"
			{if not tagged "roof_triggered"
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_detector_roof" "detector" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_ds39"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_ds39" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_mgun_lafette"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_mgun_lafette" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_atgun_light"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_atgun_light" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_atgun_middle"
			{if not tagged "roof_installed"
				{tags add "roof_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_stage" "roof_stage_atgun_middle" x }
				}
			}
		}
		{if effector "emplacement_trigger_sandbag_stage_standard"
			{if not tagged "sandbag_standard_installed"
				{tags add "sandbag_standard_installed"}
				{delay 0.1
					{spawn "emplacement_middle_sandbag_stage_standard" "sandbag_standard" x }
				}
			}
		}
;/*====================================== emplacement2_roof end ======================================*/
;/*====================================== emplacement2_roof_sandbag begin ======================================*/
		{if effector "emplacement_trigger_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_detector_roof_sandbag" "detector" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_ds39"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_ds39" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_mgun_lafette"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_mgun_lafette" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_atgun_light"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_atgun_light" x }
				}
			}
		}
		{if effector "emplacement_trigger_roof_sandbag_atgun_middle"
			{if not tagged "roof_sandbag_installed"
				{tags add "roof_sandbag_installed"}
				{delay 0.1
					{spawn "emplacement_middle_roof_sandbag_stage" "roof_sandbag_stage_atgun_middle" x }
				}
			}
		}
	}
}
;/*====================================== emplacement2_roof_sandbag end ======================================*/
{"medic_rally"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>加固封顶"}	
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_ds39" "body" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_ds39" "body" x }
				}
				{delay 0.2
					{spawn "emplacement_trigger_sandbag_stage_standard" "body" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"mortar"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "sandbag_triggered"
			{damage_report "检测到迫击炮" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_sandbag_stage_standard" "basis" x }
				}
				{delay 5
					{tags remove "sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_ground_floor_ds39_stand"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>加固封顶"}	
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_ds39" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_ds39" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_small_75mm_lg40"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{damage_report "检测到无座力炮" "<s(10)b+c(00FF00)>加固封顶"}
			{if not tagged "roof_triggered"
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到无座力炮" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_small_mgun_lafette"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>加固封顶"}	
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到机枪" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"76mm_bpk76"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到无座力炮" "<s(10)b+c(00FF00)>加固封顶"}
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到无座力炮" "<s(10)b+c(00FF00)>额外沙包"}	
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_mgun_lafette" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_middle_log_atgun"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>加固封顶"}
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_atgun_middle" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>额外沙包"}
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_atgun_middle" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_light_atgun_rus"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>加固封顶"}
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>额外沙包"}
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_light_atgun"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>加固封顶"}
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>额外沙包"}
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
{"emplacement_light_atgun_47mm_pakt"
	{on contact
		{if effector "emplacement_trigger_detector_roof"
			{if not tagged "roof_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>加固封顶"}
				{tags add "roof_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_triggered"}
				}
			}
		}
		{if effector "emplacement_trigger_detector_roof_sandbag"
			{if not tagged "roof_sandbag_triggered"
			{damage_report "检测到反坦克炮" "<s(10)b+c(00FF00)>额外沙包"}
				{tags add "roof_sandbag_triggered"}
				{delay 0.1
					{spawn "emplacement_trigger_roof_sandbag_atgun_light" "basis" x }
				}
				{delay 5
					{tags remove "roof_sandbag_triggered"}
				}
			}
		}
	}
}
;/*====================================== detector end ======================================*/
;/*====================================== emplacement_trigger end ======================================*/
;/*====================================== reinforcement_trigger begin ======================================*/
;{"reinforcement"
    ;{on spawn
        ;{delay 0.1
           ;{able "select" 1 }
		   ;{delay 0.2 {call_synced "emit_crew"}}
       ;}
		;{delay 2
			;{delete}
		;}
   ; }
	;{on "emit_crew"
		;{delay 1
			;{crew_emit}
		;}
	;}
;}
;/*====================================== reinforcement_trigger end ======================================*/


{"steel"
	{on contact
		{if effector "weapon_crate_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.1			
				    {delete}
				}
			}
		}
	}
}
{"stat_weapon"
	{on spawn
		{set "contact" 0}
		{physics_work 0}
		{delay 0.1
			{tags add "stat_weapon"}
		}
		{delay 0.3
			{physics_work 1}
			{set "contact" 1}
		}
	}
	{on contact
		{if effector "weapon_crate_cleaner"
            {if terrain_fx "bunker_floor"
				{delay 0.1			
				    {delete}
				}
			}
		}
	}
	{on blast_hit
		{if stuff "weapon_crate_cleaner"
           ;{damage_report "Removed" "<s(10)b+c(00FF00)>From Construction Site"}
            {if terrain_fx "bunker_floor"
				{delay 0.1			
				    {delete}
				}
			}
		}
	}
	;{on "stat_break"
	;	{if not tagged "stat_weapon"
	;		{if not "broken"
	;			{set "broken" 1}
	;			{if "burn_fire"
	;				{stat_notify break burned}
	;			else
	;				{stat_notify break}				;// stat_notify - used for correct stats gathering
	;			}
	;		}
	;	}
	;}
	;{on "disable_all_seats"
		;{if not tagged "stat_weapon"
			;{crew_enable group "crew" 0}
			;{crew_enable group "passenger" 0}
		;}
	;}
	
}



;/*====================================== air_bomb begin ======================================*/

;/*====================================== air_bomb end ======================================*/

;/*====================================== Door begin ======================================*/
{"door"
	{on spawn
		{delay 0.1	
			{if tagged "opened"
				{volumes "door_lock" disable all}
				{view hide "door_lock"}
				{delay 0.1
					{set "opened" 1}
					{call "update_area"}
				}
			else	
				{volumes "door_l" disable all}
				{view hide "door_open"}
				{volumes "door_r" disable all}
				{delay 0.1
					{set "opened" 0}
					{call "update_area"}
				}
			}
		}
	}
	{on "open"
		{start_sound "emplacement/door/iron_door_open"}
		{volumes "door_l" enable touch}
		{volumes "door_r" enable touch}
		{if not "user_opened"
			{set "opened" 1}
			;{ani_play "open" resume callback}
			{call "update_area"}
			{volumes "door_lock" disable all}
			{volumes "door_l" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{volumes "door_r" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{view hide "door_lock"}
			{view show "door_open"}
		}
		{tags add "opened"}
		{call "update_area"}
		{volumes "door_lock" disable touch}
	}
	{on "close"
		{if not "user_opened"
			{start_sound "emplacement/door/iron_door_close"}
			{set "opened" 0}
			;{ani_play "open" -1 resume}
			{call "update_area"}
			{volumes "door_lock" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{volumes "door_l" disable all}
			{volumes "door_r" disable all}
			{view hide "door_open"}
			{view show "door_lock"}
		}
		{tags remove "opened"}
		{volumes "door_lock" enable touch}
	}
	{on animation_end "open"
		{tags add "opened"}
	}
	{on "update_area"
		{if "opened"
			{area disable	"close"}
			{area enable	"left"}
			{area enable	"right"}
		else
			{area enable	"close"}
			{area disable	"left"}
			{area disable	"right"}
		}
	}
	{on bullet_hit
		{if volume "lock"
			{if not "opened"
				{call "open"}
				{set "user_opened" 1}
				{delay_ex 0
					{tear "piece_small_steel" bone "lock"
						{impulse up -1 0.7 dir 2.5 0.3 no_position}
					}
				}
			}
		}
	}
}
{"side_door"
	{on spawn
		{delay 0.1	
		{if not tagged "initialized"
			{if not tagged "opened"
			{volumes "door_open_default" enable touch}
			{volumes "door_lock_default" enable touch}
			{volumes "door_lock" disable all}
			{volumes "door_open" disable all}
			{view hide "door_lock"}
			{view hide "door_open"}
			{area disable	"close"}
			{area disable	"open"}
			{if not tagged "opened"
				{if not tagged "close"
					{volumes "door_open_default" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
					{volumes "door_lock_default" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
					{area enable	"default"}
				}
			}
			{tags add "initialized"}
			}
		}
		{if tagged "opened"
			{set "opened" 1}
			{volumes "door_open" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{volumes "door_lock" disable all}
			{volumes "door_open_default" disable all}
			{volumes "door_lock_default" disable all}
			{view hide "door_lock"}
			{area disable	"close"}
			{view hide "door_open_default"}
			{view hide "door_lock_default"}
			{area disable	"default"}
			{tags add "initialized"}
		else
			{volumes "door_open" disable all}
			{view hide "door_open"}
			{area disable "open"}
			{tags add "initialized"}
		}
		{if tagged "closed"
			{set "opened" 0}
			{volumes "door_lock" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{view show "door_lock"}
			{area enable	"close"}
			{volumes "door_open_default" disable all}
			{volumes "door_lock_default" disable all}
			{view hide "door_open_default"}
			{view hide "door_lock_default"}
			{area disable	"default"}
			{tags add "initialized"}
		else
			{volumes "door_lock" disable all}
			{view hide "door_lock"}
			{area disable	"close"}
			{tags add "initialized"}
		}
		}
	}
	{on "open"
		{start_sound "emplacement/door/iron_door_open"}
		{volumes "door_open" enable touch}
		{if not "user_opened"
			{set "opened" 1}
			;{ani_play "open" resume callback}
			{call "update_area"}
			{volumes "door_open_default" disable all}
			{volumes "door_lock_default" disable all}
			{volumes "door_lock" disable all}
			{volumes "door_open" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{view hide "door_lock"}
			{view hide "door_open_default"}
			{view hide "door_lock_default"}
			{view show "door_open"}
		}
		{tags add "opened"}
		{tags remove "closed"}
	}
	{on "close"
		{if not "user_opened"
			{start_sound "emplacement/door/iron_door_close"}
			{set "opened" 0}
			;{ani_play "open" -1 resume}
			{call "update_area"}
			{volumes "door_lock" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
			{volumes "door_open_default" disable all}
			{volumes "door_lock_default" disable all}
			{volumes "door_open" disable all}
			{view hide "door_open"}
			{view hide "door_open_default"}
			{view hide "door_lock_default"}
			{view show "door_lock"}
		}
		{tags remove "opened"}
		{tags add "closed"}
	}
	{on animation_end "open"
		{tags add "opened"}
	}
	{on "update_area"
		{if "opened"
			{area disable	"close"}
			{area disable	"default"}
			{area enable	"open"}
		else
			{area enable	"close"}
			{area disable	"default"}
			{area disable	"open"}
		}
	}
	{on bullet_hit
		{if volume "lock"
			{if not "opened"
				{call "open"}
				{set "user_opened" 1}
				{delay_ex 0
					{tear "piece_small_steel" bone "lock"
						{impulse up -1 0.7 dir 2.5 0.3 no_position}
					}
				}
			}
		}
	}
}
;/*====================================== Door end ======================================*/
;/*====================================== trap begin ======================================*/
{"trap_hidden"
	{on spawn
		{delay 0.1	
			{if tagged "activated"
				{volumes "trap_hidden" disable all}
				{view hide "trap_hidden"}
				{delay 0.1
					{set "activated" 1}
					{call "update_area"}
				}
			else	
				{volumes "trap_enable" disable all}
				{view hide "trap_enable"}
				{delay 0.1
					{area disable	"obstacle"}
				}
				{tags add "loaded"}
			}
		}
	}
	{on contact 
		{delay 0.01	
			{if effector "vehicle"
				{call "change_model"}
				else not tagged "activated"
					;{if mine_effector "human"
					;{if effector "human"
						{call "trap_enable"}
					;}
			}
		}
	}
	{on "update_area"
		{if "activated"
			{area enable	"obstacle"}
		else
			{area disable	"obstacle"}
		}
	}
	{on "trap_enable"
		{delay 0.01	
			{spawn "crater_tiny" "basic" x }
			{delay 0.01	
				{start_sound "emplacement/trap/sharp_wood"}
				;{volumes "trap_enable" enable contact}
					{set "activated" 1}
					;{ani_play "open" resume callback}
					{call "update_area"}
					{volumes "trap_hidden" disable all}
					{volumes "trap_touch" disable all}
					{volumes "trap_enable" enable visible bullet blast contact_ground select obstacle touch NoWoundDecal}
					{view hide "trap_hidden"}
					{view show "trap_enable"}
				{tags add "activated"}
				{tags remove "loaded"}
			}
		}
	}
}

;/*====================================== trap end ======================================*/
;/*====================================== change_flag begin ======================================*/
{"flag"
	{on "fortify_fin"
		{delay 0.1
			{tex_mod "fin"}
		}
	}
	{on "fortify_ger"
		{delay 0.1
			{tex_mod "ger"}
		}
	}
	{on "fortify_spa"
		{delay 0.1
			{tex_mod "blau"}
		}
	}
	{on "fortify_rus"
		{delay 0.1
			{tex_mod ""}
		}
	}
	{on "fortify_usa"
		{delay 0.1
			{tex_mod "usa"}
		}
	}
}
;/*====================================== Door end ======================================*/
;/*====================================== stat_weapon begin ======================================*/
{"stat_weapon"
	{on "weapon_upgrade"
		{delay 0.1 
            {crew_emit}
        }
	}
}

;/*====================================== stat_weapon end ======================================*/

