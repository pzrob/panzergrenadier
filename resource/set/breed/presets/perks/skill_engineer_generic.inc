
; Presets for all melee, small arm weapons and avoidance skills

(include "/set/breed/presets/perks/health.inc")


;/* - Fortification Building Skills - */

(define "fortification"
	{barricade
		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_middle"}
		{"fortifications" "barricade_sq"}
		{"fortifications" "medic_rally"}
		{"fortifications" "auto_medic_place_flag"}
		{"fortifications" "trench_short_soldier"}
		{"fortifications" "trench_intersection_soldier"}
		{"fortifications" "trench_turn_soldier"}	
		{"fortifications" "trench_end_soldier"}
		{"fortifications" "iron_door"}
	}
	{"resources" "10%"}
	{"resources_regeneration" "10%"}
)

(define "engineer"

;================Emplacement_cover================
;/* - Fortification_Cover_Skills begin - */	
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}
		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}
		{"fortifications" "foxhole_middle"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "tank_cover"}
	
		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
	
		{"fortifications" "placement_nest"}
		{"fortifications" "pillbox_earth"}
		{"fortifications" "sandbag_watchtower"}

		{"fortifications" "barricade_wall"}
		{"fortifications" "concrete_wall"}
		{"fortifications" "trench_modular"}	
		{"fortifications" "sandbag_heap_curved"}		
		{"fortifications" "sandbag_framed_straight_mod"}
		{"fortifications" "sandbag_framed_curved"}
		{"fortifications" "bush_cover"}	
		
		{"fortifications" "trench_short"}
		{"fortifications" "trench_intersection"}
		{"fortifications" "trench_turn"}	
		{"fortifications" "trench_end"}
		{"fortifications" "fighting_position_shallow"}
		{"fortifications" "fighting_position_deep"}
		{"fortifications" "iron_door"}

		{"fortifications" "emplacement_small_deep_mg"}
		{"fortifications" "watch_tower"}
		{"fortifications" "mortar_pit"}
		{"fortifications" "mortar_pit_heavy"}
		{"fortifications" "emplacement_light_aa_mg"}
		{"fortifications" "emplacement_light_aa"}
		{"fortifications" "emplacement_middle_aa"}
		{"fortifications" "emplacement_middle_aa_heavy"}
		{"fortifications" "emplacement_middle_at"}
		{"fortifications" "emplacement_middle_fieldgun"}
		{"fortifications" "emplacement_middle_howitzer"}
		
		{"fortifications" "emplacement_concrete_tower"}
		{"fortifications" "emplacement_concrete_bunker"}
		{"fortifications" "emplacement_concrete_bunker_at"}			
		{"fortifications" "emplacement_concrete_fortress"}	
		
;/* - Fortification_Cover_Skills end - */	
;================Emplacement_cover================
;================Engineer_fin begin================
;================Emplacement_Building================		
;/* - Fortification_Building_Skills begin - */	
		
		{"fortifications" "fin_20mm_l39_position"}
		{"fortifications" "fin_37mm_pstk36_emplacement"}
		{"fortifications" "fin_50mm_krh38_foxhole"}		

		{"fortifications" "fin_bunker"}
		{"fortifications" "fin_coastal_gun"}
		{"fortifications" "fin_75mm_k44_emplacement"}		
		
		{"fortifications" "fin_minefield_at"}		

;/* - Fortification_Building_Skills EnD - */	
;================Emplacement_Building================
;================Emplacement_Vehicle================
;/* - Fortification_Vehicle_Skills begin - */	
		{"fortifications" "fin_emplacement_watch_tower"}
		{"fortifications" "fin_emplacement_maxim"}		
		{"fortifications" "fin_emplacement_concrete_bunker_ds39"}	
		
		{"fortifications" "fin_emplacement_20mm_itk35"}		
		{"fortifications" "fin_emplacement_20mm_itk40"}			
		{"fortifications" "fin_emplacement_40mm_itk38b"}		
		{"fortifications" "fin_emplacement_75mm_itk37"}
		
		{"fortifications" "fin_emplacement_50mm_krh38"}		
		{"fortifications" "fin_emplacement_81mm_krh36"}		
		{"fortifications" "fin_emplacement_120mm_krh40"}			
		{"fortifications" "fin_emplacement_170mm_minewerfer"}
		
		{"fortifications" "fin_emplacement_37mm_pstk36"}	
		{"fortifications" "fin_emplacement_75mm_k40"}		
		{"fortifications" "fin_emplacement_75mm_k44"}		
		{"fortifications" "fin_emplacement_76mm_k36"}	
		
		{"fortifications" "fin_emplacement_76mm_m1927_fin"}		
		{"fortifications" "fin_emplacement_84mm_k18"}
		{"fortifications" "fin_emplacement_107mm_k10"}		
		{"fortifications" "fin_emplacement_120mm_k78_31"}		
		
;/* - Fortification_Vehicle_Skills EnD - */	
;================Emplacement_Vehicle================	
;================Engineer_fin EnD================
	
;================Engineer_ger begin================
;================Emplacement_Building================		
;/* - Fortification_Building_Skills begin - */	

		{"fortifications" "ger_20mm_flak38_emplacement"}		
		{"fortifications" "ger_37mm_pak36_emplacement"}
		{"fortifications" "ger_75mm_lg40_foxhole"}		

		{"fortifications" "ger_tower_mg34"}
		{"fortifications" "ger_tower_mg42"}
		{"fortifications" "ger_50mm_pak38_emplacement"}	

        {"fortifications" "ger_concrete_flak_pillbox"}
		{"fortifications" "ger_88mm_pak43_emplacement"}
		{"fortifications" "ger_bunker_88mm_pak4341"}
		
		{"fortifications" "ger_minefield_at"}		
		
;/* - Fortification_Building_Skills EnD - */	
;================Emplacement_Building================
;================Emplacement_Vehicle================
;/* - Fortification_Vehicle_Skills begin - */	
		{"fortifications" "ger_emplacement_mg34"}
		{"fortifications" "ger_emplacement_mg42"}
		{"fortifications" "ger_emplacement_concrete_tower"}

		{"fortifications" "ger_emplacement_concrete_bunker_mg34"}
		{"fortifications" "ger_emplacement_concrete_bunker"}
		{"fortifications" "ger_emplacement_watch_tower_mg34"}

		{"fortifications" "ger_emplacement_20mm_flak30"}		
		{"fortifications" "ger_emplacement_20mm_flak38"}
		{"fortifications" "ger_emplacement_20mm_flakvierling38"}
		{"fortifications" "ger_emplacement_37mm_flak37"}	
		{"fortifications" "ger_emplacement_concrete_88mm_flak18"}			
		{"fortifications" "ger_emplacement_concrete_88mm_flak36"}	
		
		{"fortifications" "ger_emplacement_37mm_pak36"}
		{"fortifications" "ger_emplacement_50mm_pak38"}
		{"fortifications" "ger_emplacement_concrete_bunker_50mm_flak41"}
		{"fortifications" "ger_emplacement_75mm_pak40"}
		{"fortifications" "ger_emplacement_88mm_pak43"}	
		
		{"fortifications" "ger_emplacement_80mm_sgrw34"}
		{"fortifications" "ger_emplacement_100mm_nbw35"}
		{"fortifications" "ger_emplacement_120mm_sgrw42"}		

		{"fortifications" "ger_emplacement_75mm_lg40"}		
		{"fortifications" "ger_emplacement_75mm_leig18"}
		{"fortifications" "ger_emplacement_150mm_sig33"}
		
		{"fortifications" "ger_emplacement_105mm_lefh18"}	
		{"fortifications" "ger_emplacement_concrete_fortress"}	
		
		{"fortifications" "ger_emplacement_bunker_osttruppen"}
		{"fortifications" "ger_emplacement_bunker_osttruppen_unlimited"}
		{"fortifications" "ger_emplacement_bunker_strafbatallion_unlimited"}
		{"fortifications" "ger_emplacement_bunker_luftwaffe_unlimited"}
		{"fortifications" "ger_emplacement_bunker_kriegsmarine_unlimited"}
		{"fortifications" "ger_emplacement_bunker_volkssturm_unlimited"}
;/* - Fortification_Vehicle_Skills EnD - */	
;================Emplacement_Vehicle================	
;================Engineer_ger EnD================

;================Engineer_rus begin================
;================Emplacement_Building================		
;/* - Fortification_Building_Skills begin - */	
			
        {"fortifications" "rus_maxim_pillbox"}
        {"fortifications" "rus_45mm_m42_emplacement"}
		{"fortifications" "rus_76mm_bpk76_foxhole"}
		{"fortifications" "rus_76mm_m43_emplacement"}
		
        {"fortifications" "rus_bunker_maxim"}
        {"fortifications" "rus_bunker_ds39"}
		{"fortifications" "rus_bunker_dshk"}
		{"fortifications" "rus_pillbox_earth_dshk"}
        {"fortifications" "rus_100mm_bs3_emplacement"}

		{"fortifications" "rus_minefield_at"}				
;/* - Fortification_Building_Skills EnD - */	
;================Emplacement_Building================
;================Emplacement_Vehicle================
;/* - Fortification_Vehicle_Skills begin - */	

		{"fortifications" "rus_emplacement_watch_tower"}
		{"fortifications" "rus_emplacement_maxim"}	
		{"fortifications" "rus_emplacement_ds39"}
		{"fortifications" "rus_emplacement_pillbox_sg43"}
		{"fortifications" "rus_emplacement_sg43"}	
		{"fortifications" "rus_emplacement_dshk"}	
		{"fortifications" "rus_emplacement_dshk_aa"}		
		
		{"fortifications" "rus_emplacement_25mm_72k"}
		{"fortifications" "rus_emplacement_37mm_61k"}			
		{"fortifications" "rus_emplacement_76mm_m1938"}	
        {"fortifications" "rus_emplacement_85mm_52k"}	
	
		{"fortifications" "rus_emplacement_45mm_m37"}	
		{"fortifications" "rus_emplacement_45mm_m42"}
		{"fortifications" "rus_emplacement_57mm_zis2"}
		{"fortifications" "rus_emplacement_76mm_zis3"}		
		{"fortifications" "rus_emplacement_100mm_bs3"}	

		{"fortifications" "rus_emplacement_76mm_m1927"}
		{"fortifications" "rus_emplacement_76mm_m43"}	
		{"fortifications" "rus_emplacement_small_76mm_m43"}	
	
		{"fortifications" "rus_emplacement_82mm_bm37"}			
		{"fortifications" "rus_emplacement_120mm_pm38"}
		
		{"fortifications" "rus_emplacement_122mm_m30"}

		{"fortifications" "rus_emplacement_bunker_border"}	
		{"fortifications" "rus_emplacement_bunker_conscript"}
		{"fortifications" "rus_emplacement_bunker_border_unlimited"}	
		{"fortifications" "rus_emplacement_bunker_conscript_unlimited"}
		{"fortifications" "rus_emplacement_bunker_penal_unlimited"}
		
		{"fortifications" "rus_factory_t3476_42"}
		{"fortifications" "rus_emplacement_command_post"}
;/* - Fortification_Vehicle_Skills EnD - */	
;================Emplacement_Vehicle================	
;================Engineer_rus EnD================
;================Engineer_usa begin================
;================Emplacement_Building================		
;/* - Fortification_Building_Skills begin - */	

        {"fortifications" "usa_37mm_m3a1_emplacement"}
        {"fortifications" "usa_60mm_m2_foxhole"}	
        {"fortifications" "usa_75mm_m1a1_emplacement"}

		
        {"fortifications" "usa_bunker_m2_50cal"}	
        {"fortifications" "usa_trench_pillbox_m2_50cal"}
        {"fortifications" "usa_76mm_m5_emplacement"}
		
		{"fortifications" "usa_minefield_at"}		
		
;/* - Fortification_Building_Skills EnD - */	
;================Emplacement_Building================
;================Emplacement_Vehicle================
;/* - Fortification_Vehicle_Skills begin - */	
		{"fortifications" "usa_emplacement_watch_tower"}
		{"fortifications" "usa_emplacement_m2_30cal"}
        {"fortifications" "usa_emplacement_m2_50cal"}		
		{"fortifications" "usa_emplacement_modular_box_m2_50cal"}
		{"fortifications" "usa_emplacement_m2_50cal_aa"}		
		{"fortifications" "usa_emplacement_50cal_quad_m45"}		
		
        {"fortifications" "usa_emplacement_40mm_m1"}	
		{"fortifications" "usa_emplacement_90mm_m1a1"}	
		
		{"fortifications" "usa_emplacement_37mm_m3a1"}			
		{"fortifications" "usa_emplacement_57mm_m1"}
		{"fortifications" "usa_emplacement_76mm_m5_m1"}
		{"fortifications" "usa_emplacement_76mm_m5_m6"}	

		{"fortifications" "usa_emplacement_60mm_m2"}
		{"fortifications" "usa_emplacement_81mm_m1"}
		{"fortifications" "usa_emplacement_107mm_m2"}
		
		{"fortifications" "usa_emplacement_75mm_m1a1"}
		{"fortifications" "usa_emplacement_75mm_m3a3"}	
		{"fortifications" "usa_emplacement_small_75mm_m1a1"}
		
		{"fortifications" "usa_emplacement_105mm_m2a1"}	

		{"fortifications" "usa_emplacement_bunker_national_guard"}
		{"fortifications" "usa_emplacement_bunker_national_guard_unlimited"}
;/* - Fortification_Vehicle_Skills EnD - */	
;================Emplacement_Vehicle================		
;================Engineer_usa EnD================
	}
	{"resources" "1000%"}
	{"resources_regeneration" "50%"}
	{mechanic factor 10.0}
	
;================Engineer_miner begin================	
;================Engineer_miner EnD================	
)
(define "engineer_mine_at"
	{barricade
		{"fortifications" "fin_minefield_at"}
		{"fortifications" "ger_minefield_at"}		
		{"fortifications" "rus_minefield_at"}		
		{"fortifications" "usa_minefield_at"}		
	}
	{"resources" "500%"}
	{"resources_regeneration" "50%"}
	{mechanic factor 10.0}
)
