; Third Person Control Definitions for Extra units

;_____________________________________________________
;|            EVAOOS units                      |
;|____________________________________________________|

;=================== EVAOOS TANK ===================
;USSR 
		{"btr152a" inherit "vehicle truck.gaz72k"}
		{"btr152d" inherit "vehicle truck.gaz72k"}
		{"94km" inherit "vehicle truck.gaz72k"}
		{"zis43" inherit "vehicle atgun.61k"}
		{"su57" inherit "vehicle tank.valentinemk9"}
		{"ba11" inherit "vehicle tank.t26"}
		{"rbt5" inherit "vehicle tank.bt5"}
		{"t26_4" inherit "vehicle tank.t28"}
		{"t26e_ussr" inherit "vehicle tank.t26"}
		{"t26_40" inherit "vehicle tank.t26"}
		{"su5_1" inherit "vehicle td.su76"}
		{"t126sp" inherit "vehicle tank.t26"}
		{"t50_zis4" inherit "vehicle tank.t3457"}
		{"t80" inherit "vehicle tank.t26"}
		{"t80_vt43" inherit "vehicle tank.t26"}
		{"bt7m" inherit "vehicle tank.t26"}
		{"bt7a_f32" inherit "vehicle tank.t3476early"}
		{"zut37" inherit "vehicle atgun.61k"}
		{"zsu37" inherit "vehicle atgun.61k"}
		{"su57b" inherit "vehicle tank.t3457"}
		{"su76d" inherit "vehicle tank.t3476"}
		{"su76m" inherit "vehicle td.su76"}
		{"su85a" inherit "vehicle td.su85"}

		{"t34_zsu37_2" inherit "vehicle atgun.61k"}
		{"t3476_39" inherit "vehicle tank.t3476early"}
		{"t34e_stz" inherit "vehicle tank.t3476"}
		{"t3485_43" inherit "vehicle tank.t3485"}
		{"t3485e" inherit "vehicle tank.t3485"}
		{"t3485_gai" inherit "vehicle tank.t3485"}
		{"t34100" inherit "vehicle td.su100"}
		{"t_v" inherit "vehicle tank.t_v"}
		{"su122p" inherit "vehicle td.isu122"}
		{"t4485" inherit "vehicle tank.t3485"}
		{"t44100" inherit "vehicle td.su100"}
		{"t44122" inherit "vehicle tank.is2"}
		{"t54_47" inherit "vehicle td.su100"}

		{"matilda_f96" inherit "vehicle tank.t3476"}
		{"kv2_39" inherit "vehicle tank.kv2"}
		{"kv220" inherit "vehicle tank.t3485"}
		{"kv2_zis6" inherit "vehicle td.su100"}
		{"kv122" inherit "vehicle tank.is2"}
		{"object248" inherit "vehicle td.su100"}
		{"isu122" inherit "vehicle td.isu122"}
		{"is3" inherit "vehicle tank.is2"}
		{"is4" inherit "vehicle tank.is2"}
		{"is6" inherit "vehicle tank.is2"}
		{"is4m" inherit "vehicle tank.is2"}
;USA
		{"t26e5" inherit "vehicle tank.m26_pershing"}
		{"t29" inherit "vehicle tank.m26_pershing"}
		{"t30_usa" inherit "vehicle tank.m26_pershing"}
		{"t32" inherit "vehicle tank.m26_pershing"}
		{"t32e1" inherit "vehicle tank.m26_pershing"}
		{"t34_usa" inherit "vehicle tank.m26_pershing"}
;=================== EVAOOS TANK END===================










;_____________________________________________________
;|                  Fix units                         |
;|____________________________________________________|
;=================== default_units begin ===================
;=================== Fixed cannon begin ===================
		{"broneschitok_1" inherit "vehicle low_mg.common"}
		{"broneschitok_2" inherit "vehicle low_mg.common"}
		{"broneschitok_2_dp" inherit "vehicle low_mg.common"}

		{"mg34_lafette" inherit "vehicle cannon.mg34_lafette_stat"}
		{"mg42_lafette" inherit "vehicle cannon.mg42_lafette_stat"}
		
		{"heavy_mg_mg34" inherit "vehicle fixed_mgun.mg42_lafette_bunker"}
		{"maxim" inherit "vehicle fixed_mgun.maxim_stand"}
		{"maxim_stand" inherit "vehicle fixed_mgun.maxim_stand"}
        {"heavy_mg_maxim" inherit "vehicle fixed_mgun.maxim_stand"}
		{"maxim_x4" inherit "vehicle fixed_mgun.maxim_x4"}
		{"ds39_stand" inherit "vehicle fixed_mgun.ds39_stand_shielded"}
		{"sg43_stand" inherit "vehicle fixed_mgun.sg43_stand"}
		{"dshk_aa" inherit "vehicle dshk_aa.common"}		
		{"dshk_stan" inherit "vehicle dshk_stan.common"}
		
		{"maxim_m1910_30" inherit "vehicle fixed_mgun.maxim_stand"}
		{"ds39_stand_fin" inherit "vehicle fixed_mgun.ds39_stand_shielded"}
		{"75mm_itk37" inherit "vehicle atgun.75mm_itk37_stat"}
		{"75mm_itk37_stat" inherit "vehicle atgun.75mm_itk37_stat"}

		{"m1917_30cal" inherit "vehicle fixed_mgun.m1917_30cal"}
		{"m2_30cal_tripod" inherit "vehicle fixed_mgun.m2_30cal_tower"}
		{"m2_50cal_tripod" inherit "vehicle fixed_mgun.m2_50cal_tripod_prone"}

		{"20mm_itk35" inherit "vehicle atgun.itk35_stat"}
		{"20mm_itk40" inherit "vehicle atgun.itk40_stat"}
		{"37mm_pstk36" inherit "vehicle atgun.pstk36_stat"}
		{"47mm_pstk39" inherit "vehicle atgun.pstk39_stat"}		
		
		{"75mm_pstk9738" inherit "vehicle atgun.pak40_stat"}

		{"20mm_flak30" inherit "vehicle atgun.flak30_stat"}
		{"20mm_flak38" inherit "vehicle atgun.flak38_stat"}

		{"37mm_flak37" inherit "vehicle atgun.flak37_stat"}

		{"37mm_pak36" inherit "vehicle atgun.pak36_stat"}
		{"37mm_pak36_late" inherit "vehicle atgun.pak36_stat"}
		{"47mm_pakt" inherit "vehicle atgun.pakt_stat"}
		{"50mm_pak38" inherit "vehicle atgun.pak38_stat"}
		{"50mm_pak38_late" inherit "vehicle atgun.pak38_stat"}

		{"50mm_kwk39_platform" inherit "vehicle atgun.kwk39_stat"}
		{"50mm_kwk39_platform_bunker" inherit "vehicle atgun.kwk39_stat"}		

		{"75mm_pak9738" inherit "vehicle atgun.pak40_stat"}
		{"75mm_pak40" inherit "vehicle atgun.pak40_stat"}
		{"88mm_pak4341" inherit "vehicle atgun.pak4341_stat"}		
		
		{"75mm_leig18" inherit "vehicle fieldgun.common"}
		{"150mm_sig33" inherit "vehicle sig33_stat"}

		{"25mm_72k" inherit "vehicle atgun.25mm_72k_stat"}
		{"37mm_61k" inherit "vehicle atgun.37mm_61k_shield_stat"}
		{"45mm_m37" inherit "vehicle atgun.m37_stat"}
		{"45mm_m42" inherit "vehicle atgun.m37_stat"}
		{"57mm_zis2" inherit "vehicle atgun.zis2_stat"}
		{"76mm_f22" inherit "vehicle atgun.f22_stat"}
		{"76mm_zis3" inherit "vehicle atgun.zis3_stat"}
		{"76mm_m43" inherit "vehicle 76mm_m43_stat.common"}
		
		{"76mm_bpk76" inherit "vehicle atgun.76mm_bpk76_stat"}
		{"100mm_bs3" inherit "vehicle atgun.bs3_stat"}		

		{"40mm_m1" inherit "vehicle atgun.40mm_m1_stat"}			
		{"57mm_m1" inherit "vehicle atgun.57mm_m1_stat"}
		
		{"75mm_m1a1" inherit "vehicle 75mm_m1a1_stat.common"}
		{"75mm_m3a3" inherit "vehicle 75mm_m3a3_stat.common"}		
		{"76mm_m5_m1" inherit "vehicle atgun.76mm_m5_stat"}
		{"76mm_m5_m6" inherit "vehicle atgun.76mm_m5_stat"}
;=================== Fixed cannon end ===================		
;=================== tank begin ===================
;=================== tank_fin begin ===================		
		{"ft17_fin" inherit "vehicle tank.ft17"}
		{"ft17_mg_fin" inherit "vehicle tank.ft17"}
		{"vickers_6t_altb" inherit "vehicle tank.t26"}
		{"t26e" inherit "vehicle tank.t26"}

		{"bt42" inherit "vehicle tank.bt42"}
		{"t50_fin" inherit "vehicle tank.t26"}
		{"l62" inherit "vehicle truck.bofors"}
		{"stug3g_fin" inherit "vehicle td.stug3b_stat"}
		{"t28_38_fin" inherit "vehicle tank.t28"}
		{"kv1_42_fin" inherit "vehicle tank.kv1_stat"}
;=================== tank_fin end ===================	
;=================== tank_ger begin ===================	

		{"pz35t" inherit "vehicle tank.panzer35t_stat"}
		{"pz38t_a" inherit "vehicle tank.panzer38t_stat"}
		{"pz38t_f" inherit "vehicle tank.panzer38t_stat"}
		{"pz38t_g" inherit "vehicle tank.panzer38t_stat"}

		{"stug3b" inherit "vehicle td.stug3b_stat"}
		{"stug3f" inherit "vehicle td.stug3_stat"}
		{"stug3g" inherit "vehicle td.stug3_stat"}
		{"stug3g_late" inherit "vehicle td.stug3_stat"}
		{"stuh42" inherit "vehicle td.stuh42_stat"}
		{"jagdpanzer4_l48_early" inherit "vehicle td.jagdpanzer4_stat"}
		{"jagdpanzer4_l48" inherit "vehicle td.jagdpanzer4_stat"}
		{"panzer4_70_v" inherit "vehicle td.jagdpanzer4_stat"}
		
		{"panzer3e" inherit "vehicle tank.panzer3e_stat"}

		{"panzer3f" inherit "vehicle tank.panzer3f_stat"}
		{"panzer3j" inherit "vehicle tank.panzer3f_stat"}
		{"panzer3h" inherit "vehicle tank.panzer3f_stat"}

		{"panzer3j1" inherit "vehicle tank.panzer3l_stat"}
		{"panzer3l" inherit "vehicle tank.panzer3l_stat"}
		{"panzer3m" inherit "vehicle tank.panzer3l_stat"}
		{"panzer3_flamm" inherit "vehicle tank.panzer3flamm_stat"}

		{"panzer3n" inherit "vehicle tank.panzer3n_stat"}
		{"panzer4d" inherit "vehicle tank.panzer3n_stat"}
		{"panzer4f1" inherit "vehicle tank.panzer3n_stat"}

		{"panzer4f2" inherit "vehicle tank.panzer4f2_stat"}
		{"panzer4g" inherit "vehicle tank.panzer4f2_stat"}
		{"pz756r" inherit "vehicle tank.pz756r_stat"}

		{"panzer4h" inherit "vehicle tank.panzer4h_stat"}
		{"wirbelwind" inherit "vehicle tank.wirbelwind_stat"}
		{"ostwind" inherit "vehicle tank.ostwind_stat"}
		{"panzer4j" inherit "vehicle tank.panzer4h_stat"}
		
		{"wespe" inherit "vehicle spa.common"}
		{"hummel" inherit "vehicle spa.common"}
		{"nashorn" inherit "vehicle atgun.pak4341.mounted"}

		{"panzer5a" inherit "vehicle tank.panther_stat"}
		{"panzer5d" inherit "vehicle tank.panther_stat"}
		{"panzer5g" inherit "vehicle tank.panther_stat"}

		{"tiger1h" inherit "vehicle tank.tigerh_stat"}
		{"tiger1e" inherit "vehicle tank.tiger_stat"}
		{"tiger1hunt" inherit "vehicle tank.tiger_stat"}

		{"tiger2p" inherit "vehicle tank.tiger2p_stat"}
		{"tiger2h" inherit "vehicle tank.tiger2h_stat"}

		{"jagdpanther" inherit "vehicle td.jagdpanther_stat"}

		{"ferdinand" inherit "vehicle td.ferdinand_stat"}

		{"sig33b" inherit "vehicle td.sig33b"}
		{"sturmpanzer4" inherit "vehicle td.sig33b"}

		{"bison" inherit "vehicle td.bison"}

		{"sturmtiger" inherit "vehicle td.sturmtiger"}
		{"jagdtiger" inherit "vehicle td.jagdtiger_stat"}
;=================== tank_ger end ===================
;=================== car_ger begin ===================
		{"m42_truppenfahrrad" inherit "vehicle generic.bicycle"}
		{"bmw_r71" inherit "vehicle generic.bmw_r71_stat"}

		{"blitz3_6" inherit "vehicle generic.unarmed"}
		{"blitz3_6_art_ammo" inherit "vehicle generic.unarmed"}
		{"blitz3_6_engineering" inherit "vehicle generic.unarmed"}
		{"blitz3_6_fuel" inherit "vehicle generic.unarmed"}
		{"blitz3_6_radio" inherit "vehicle generic.unarmed"}
		{"kettenkrad" inherit "vehicle small.unarmed"}
		{"kettenkrad_eng" inherit "vehicle small.unarmed"}
		{"kubelwagen" inherit "vehicle small.unarmed"}
		{"schwimmwagen" inherit "vehicle small.unarmed"}
		{"opel_maultier" inherit "vehicle generic.unarmed"}

		{"kubelwagen_dak" inherit "vehicle vehicle.kubel.dak"}
		{"kubelwagen_mg" inherit "vehicle vehicle.kubel_stat"}
		{"kfz13" inherit "vehicle vehicle.kfz13_stat"}
		{"kfz14" inherit "vehicle vehicle.kfz14"}
		{"kfz15" inherit "vehicle vehicle.kfz15_stat"}
		{"blitz3_6_flak30" inherit "vehicle truck.flak30"}
;=================== car_ger end ===================
;=================== Ger btr ===================	
;=================== tank_rus begin ===================	
		{"t26_31" inherit "vehicle tank.t2631"}
		{"kht26" inherit "vehicle tank.t2631"}
		{"kht130" inherit "vehicle tank.kht130"}
		{"t26_33" inherit "vehicle tank.t26"}
		{"t26_38" inherit "vehicle tank.t26"}
		{"t26_39" inherit "vehicle tank.t26"}
		{"su26" inherit "vehicle tank.su26"}

		{"t50" inherit "vehicle tank.t26"}

		{"t70" inherit "vehicle tank.t26"}
		{"t70m" inherit "vehicle tank.t26"}

		{"bt2" inherit "vehicle tank.bt2_stat"}
		{"bt2_da2" inherit "vehicle tank.bt2_stat"}

		{"bt5" inherit "vehicle tank.bt5_stat"}
		{"bt7" inherit "vehicle tank.t26_stat"}
		{"bt7a" inherit "vehicle tank.bt7a_stat"}

		{"t3457_41" inherit "vehicle tank.t3457_stat"}
		{"t3457_43" inherit "vehicle tank.t3457_stat"}

		{"t3476_40" inherit "vehicle tank.t3476early_stat"}
		{"t3476_41" inherit "vehicle tank.t3476_stat"}
		{"t3476_41e" inherit "vehicle tank.t3476_stat"}
		{"t3476_42" inherit "vehicle tank.t3476_stat"}
		{"t3476_43" inherit "vehicle tank.t3476_stat"}
		{"t3476_43_flame" inherit "vehicle tank.t3476_stat"}

		{"t3485_44" inherit "vehicle tank.t3485_stat"}
		{"t3485_44_flame" inherit "vehicle tank.t3485_stat"}
		{"t3485_44a" inherit "vehicle tank.t3485_stat"}
		{"t3485_44a_flame" inherit "vehicle tank.t3485_stat"}
		{"t3485_44b" inherit "vehicle tank.t3485_stat"}

		{"t35" inherit "vehicle tank.t35"}
		{"t35_late" inherit "vehicle tank.t35"}
		{"smk" inherit "vehicle tank.smk"}

		{"kv1_39" inherit "vehicle tank.kv1_stat"}
		{"kv1_40" inherit "vehicle tank.kv1_stat"}
		{"kv1_40e" inherit "vehicle tank.kv1_stat"}
		{"kv1_41" inherit "vehicle tank.kv1_stat"}
		{"kv8" inherit "vehicle tank.kv1_stat"}
		{"kv1_42" inherit "vehicle tank.kv1_stat"}
		{"kv1s" inherit "vehicle tank.kv1_stat"}

		{"kv85" inherit "vehicle tank.kv85_stat"}

		{"is1_43" inherit "vehicle tank.kv85_stat"}

		{"is2_43" inherit "vehicle tank.is2_stat"}
		{"is2_44" inherit "vehicle tank.is2_stat"}
		{"is2_45" inherit "vehicle tank.is2_stat"}

		{"zis30" inherit "vehicle td.zis30"}

		{"su76" inherit "vehicle td.su76"}

		{"su85" inherit "vehicle td.su85_stat"}
		{"su85m" inherit "vehicle td.su85m_stat"}

		{"su100" inherit "vehicle td.su100_stat"}

		{"su100y" inherit "vehicle td.su100y_stat"}

		{"su122" inherit "vehicle td.su122_stat"}

		{"isu122s" inherit "vehicle td.isu122_stat"}

		{"su152" inherit "vehicle td.su152_stat"}
		{"isu152" inherit "vehicle td.su152_stat"}

		{"kv2_40" inherit "vehicle tank.kv2_stat"}
;=================== tank_rus end ===================	
;=================== car_rus begin ===================

		{"m72" inherit "vehicle generic.moto_stat"}

		{"zis5" inherit "vehicle generic.unarmed"}
		{"gaz67" inherit "vehicle small.unarmed"}
		{"gaz67b" inherit "vehicle vehicle.gaz67b_stat"}
		{"gaz98" inherit "vehicle vehicle.gaz98"}
		{"zis5eng" inherit "vehicle generic.unarmed"}

		{"yag10_29k" inherit "vehicle truck.yag10"}
		{"zis6_bm8_48" inherit "vehicle artillery.katyusha"}
		{"zis6_bm13_16" inherit "vehicle artillery.katyusha"}
		{"bm13_studebaker" inherit "vehicle artillery.katyusha"}
		{"bm31_12" inherit "vehicle artillery.katyusha"}

		{"gaz_aaa" inherit "vehicle generic.unarmed"}
		{"gaz_aaa_supply" inherit "vehicle generic.unarmed"}
		{"gaz_fuel" inherit "vehicle generic.unarmed"}

		{"stalinetz60" inherit "vehicle generic.unarmed"}

		{"gaz_aaa_72k" inherit "vehicle truck.gaz72k"}
		{"gaz_aaa_maximx4" inherit "vehicle truck.gaz72k"}
		{"zis5_dshk" inherit "vehicle truck.gaz72k"}	
;=================== car_rus end ===================	
;=================== tank_usa begin ===================



		{"m24_chaffee" inherit "vehicle tank.m24_chaffee_stat"}

		{"m18_hellcat" inherit "vehicle tank.m18_gmc_stat"}
		{"m18_hellcat_late" inherit "vehicle tank.m18_gmc_stat"}

		{"m10_gmc" inherit "vehicle tank.m10_gmc_stat"}
		{"m10_gmc_late" inherit "vehicle tank.m10_gmc_stat"}
		
		{"m4_75_early" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4_75_early_armor" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4_75_late" inherit "vehicle tank.sherman_75_stat"}
		{"m4_105" inherit "vehicle tank.sherman_105_stat"}

		{"m4a1_75_early" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4a1_75_mid" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4a1_75_mid_armor" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4a1_75_late" inherit "vehicle tank.sherman_75_stat"}
		{"m4a1_76w" inherit "vehicle tank.sherman_76_stat"}
		{"m4a1_76w_mid" inherit "vehicle tank.sherman_76_stat"}
		{"t1e3_m4a1_75" inherit "vehicle tank.sherman_75_stat"}

		{"m4a2_75_early" inherit "vehicle tank.sherman_75_early_stat"}
		{"m4a2_75_late" inherit "vehicle tank.sherman_75_late_stat"}
		{"m4a2_76w_early" inherit "vehicle tank.sherman_76_stat"}
		{"m4a2_76w_late" inherit "vehicle tank.sherman_76_center_50_stat"}

		{"m4a3_75_early" inherit "vehicle tank.sherman_75_stat"}
		{"m4a3_75_late" inherit "vehicle tank.sherman_75_stat"}
		{"m4a3_75w_early" inherit "vehicle tank.sherman_75_late_stat"}
		{"m4a3_75w" inherit "vehicle tank.sherman_75w_late_stat"}
		{"m4a3_75w_e4_5" inherit "vehicle tank.sherman_75w_late_stat"}
		{"m4a3e2_75" inherit "vehicle tank.sherman_75w_e2_stat"}
		{"m4a3_calliope" inherit "vehicle tank.sherman_75_calliope"}

		{"m4a3_76w" inherit "vehicle tank.sherman_76_stat"}
		{"m4a3_76w_hvss" inherit "vehicle tank.sherman_76_center_50_stat"}
		{"m4a3_76w_field1" inherit "vehicle tank.sherman_76_center_50_stat"}
		{"m4a3_76w_field2" inherit "vehicle tank.sherman_76_center_50_stat"}
		{"m4a3_76w_field3" inherit "vehicle tank.sherman_76_center_50_stat"}
		{"m4a3e2_76" inherit "vehicle tank.sherman_76_center_50_stat"}
		{"m4a3_105" inherit "vehicle tank.sherman_a3_105_stat"}
		{"m4a3_105_hvss" inherit "vehicle tank.sherman_a3_105_hvss_stat"}


;=================== tank_usa end ===================	
;=================== car_usa begin ===================

		{"willys_mb" inherit "vehicle generic.unarmed"}
		{"willys_mb_30cal" inherit "vehicle vehicle.jeep_mg_stat"}
		{"willys_mb_50cal" inherit "vehicle vehicle.jeep_mg_stat"}

		;{"ford_gpa" inherit "vehicle vehicle.wc_mg"}
		{"ford_gpa" inherit "vehicle vehicle.jeep_mg_stat"}

		{"wc51" inherit "vehicle generic.unarmed"}
		{"wc52_50cal" inherit "vehicle vehicle.wc_mg_stat"}

		{"cckw" inherit "vehicle generic.unarmed"}
		{"cckw_art_ammo" inherit "vehicle generic.unarmed"}
		{"cckw_fuel" inherit "vehicle generic.unarmed"}
		{"cckw_engineer" inherit "vehicle generic.unarmed"}
		{"cckw_engineer_late" inherit "vehicle vehicle.gmc_mg"}
		{"cckw_redball" inherit "vehicle vehicle.gmc_mg"}

		{"m6_gmc" inherit "vehicle vehicle.m6_gmc_stat"}

;=================== car_usa end ===================
;=================== tank end ===================
;=================== default_units end ===================
;_____________________________________________________
;|                  Moded units fin                   |
;|____________________________________________________|
;===================  Moded units cannon begin ===================
		{"maxim_stand_bunker_fin" inherit "vehicle fixed_mgun.maxim_stand_fin"}
		{"maxim_stand_tower_fin" inherit "vehicle fixed_mgun.maxim_stand_tower_fin"}
		{"maxim_stand_stat_fin" inherit "vehicle fixed_mgun.maxim_stand_fin"}	
		{"ds39_stand_stat_fin" inherit "vehicle fixed_mgun.sg43_stand_stat"}

		{"20mm_l39_stat" inherit "vehicle atgun.l39_stat_prone"}

		{"50mm_krh38_stat" inherit "vehicle mortar.common"}
		{"81mm_krh36_stat" inherit "vehicle mortar.common"}
		{"120mm_krh40_stat" inherit "vehicle mortar.common"}
		{"170mm_minewerfer_stat" inherit "vehicle mortar.common"}


		{"20mm_itk35_stat" inherit "vehicle atgun.itk35_stat"}
		{"20mm_itk40_stat" inherit "vehicle atgun.itk40_stat"}
		{"40mm_itk38b_stat" inherit "vehicle atgun.bofors"}


		{"37mm_pstk36_stat" inherit "vehicle atgun.pstk36_stat"}
		{"45mm_pstk32_stat" inherit "vehicle atgun.m37"}
		{"47mm_pstk39_stat" inherit "vehicle atgun.m37"}

		{"75mm_pstk9738_stat" inherit "vehicle atgun.pak40_stat"}
		{"75mm_k40_stat" inherit "vehicle atgun.pak40_stat"}
		{"75mm_k44_stat" inherit "vehicle atgun.pak40_stat"}		
		{"76mm_m1927_fin_stat" inherit "vehicle fieldgun.common"}
		{"76mm_k02_30_40_stat" inherit "vehicle atgun.m1902"}

		{"84mm_k18_stat" inherit "vehicle fieldgun.common"}
		{"84mm_k18_late_stat" inherit "vehicle fieldgun.common"}

		{"105mm_k13_stat" inherit "vehicle artillery.common"}
		{"105mm_h33_stat" inherit "vehicle artillery.common"}
		{"105mm_k34_stat" inherit "vehicle artillery.common"}
		{"107mm_k10_stat" inherit "vehicle artillery.common"}
		{"120mm_k78_31_stat" inherit "vehicle artillery.common"}
		{"122mm_m1910_fin_stat" inherit "vehicle artillery.common"}
	
;_____________________________________________________
;|                  Moded units ger                   |
;|____________________________________________________|
;=================== Fixed cannon ===================
		
		{"mg34_lafette_bunker" inherit "vehicle fixed_mgun.mg42_lafette_bunker"}
		{"mg42_lafette_bunker" inherit "vehicle fixed_mgun.mg42_lafette_bunker"}

		{"mg34_lafette_tower" inherit "vehicle fixed_mgun.mg42_lafette_tower"}
		{"mg42_lafette_tower" inherit "vehicle fixed_mgun.mg42_lafette_tower"}
		
		{"mg34_lafette_pillbox" inherit "vehicle fixed_mgun.mg42_lafette_pillbox"}	
		{"mg42_lafette_pillbox" inherit "vehicle fixed_mgun.mg42_lafette_pillbox"}

		{"mg_stat_shielded_tripod_bunker_entrance" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	

		{"mg34_tripod_stat" inherit "vehicle fixed_mgun.mg42_tripod_stat"}
        {"mg34_tripod_stat_shielded" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
        {"mg34_tripod_stat_shielded_bunker" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		{"mg34_tripod_stat_shielded_bunker_entrance" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		
		{"mg42_stat_shielded" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		{"mg42_tripod_stat_shielded_bunker" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		{"mg42_tripod_stat" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		{"mg42_tripod_stat_shielded" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		{"mg42_tripod_stat_shielded_bunker_entrance" inherit "vehicle fixed_mgun.mg42_tripod_stat"}	
		
		
		{"20mm_flak30_stat" inherit "vehicle atgun.flak30_stat"}
		{"20mm_flak38_stat" inherit "vehicle atgun.flak38_stat"}
		{"20mm_flakvierling38_stat" inherit "vehicle atgun.flakvierling"}

		{"37mm_flak37_stat" inherit "vehicle atgun.flak37_stat"}

		{"28mm_pzb41_stat" inherit "vehicle atgun.pzb41"}
		{"37mm_pak36_stat" inherit "vehicle atgun.pak36_stat"}
		{"37mm_pak36_late_stat" inherit "vehicle atgun.pak36"}

		{"47mm_pakt_stat" inherit "vehicle atgun.pakt_stat"}

		{"50mm_pak38_stat" inherit "vehicle atgun.pak38_stat"}
		{"50mm_pak38_late_stat" inherit "vehicle atgun.pak38_stat"}
		

		{"50mm_flak41_stat" inherit "vehicle atgun.flak41_stat"}
		{"50mm_flak41_bunker" inherit "vehicle atgun.flak41_stat"}

		{"75mm_pak9738_stat" inherit "vehicle atgun.pak40_stat"}
		{"75mm_pak40_stat" inherit "vehicle atgun.pak40_stat"}
		{"75mm_pak40_stat_bunker" inherit "vehicle atgun.pak40_stat"}
		
		{"88mm_flak18_stat" inherit "vehicle atgun.flak18_stat"}
		{"88mm_flak36_stat" inherit "vehicle atgun.flak18_stat"}
		{"88mm_pak4341_stat" inherit "vehicle atgun.pak4341_stat"}
		{"88mm_pak4341_emplacement" inherit "vehicle atgun.pak4341_stat"}
		
		{"75mm_lg40_stat" inherit "vehicle fieldgun.common"}
		{"75mm_legebig18_stat" inherit "vehicle fieldgun.common"}
		{"75mm_legebig18_snow_stat" inherit "vehicle fieldgun.common"}
		{"75mm_leig18_stat" inherit "vehicle fieldgun.common"}
		{"150mm_sig33_stat" inherit "vehicle sig33_stat"}
		{"150mm_sig33_late_stat" inherit "vehicle sig33_stat"}
		{"155mm_gpf_platform" inherit "vehicle artillery.common"}
		{"300mm_nebelwerfer42_stat" inherit "vehicle artillery.common"}
		
		{"80mm_sgrw34_stat" inherit "vehicle mortar.common"}
		{"80mm_sgrw34_rapid_stat" inherit "vehicle mortar.common"}
		{"100mm_nbw35_stat" inherit "vehicle mortar.common"}
		{"120mm_sgrw42_stat" inherit "vehicle mortar.common"}
		{"200mm_ldgw40_stat" inherit "vehicle mortar.common"}
		
		{"105mm_lefh18_stat" inherit "vehicle artillery.common"}
		{"105mm_lefh18m_stat" inherit "vehicle artillery.common"}
		{"105mm_sk18_stat" inherit "vehicle artillery.common"}		

		{"15mm_mg151_x3_stat" inherit "vehicle cannon.15mm_mg151_x3"}
		{"15mm_mg151_x3_bunker" inherit "vehicle cannon.15mm_mg151_x3"}

;=================== vehicle ===================		
		{"sdkfz250a_3_command_vehicle" inherit "vehicle vehicle.sdkfz250.3"}
;_____________________________________________________
;|                  Moded units rus                   |
;|____________________________________________________|
;=================== Fixed cannon ===================
		{"maxim_stand_bunker" inherit "vehicle fixed_mgun.maxim_stand"}
		{"ds39_stand_bunker" inherit "vehicle fixed_mgun.ds39_stand_bunker"}
		{"ds39_stand_stat" inherit "vehicle fixed_mgun.ds39_stand_stat"}
		
		{"sg43_stand_bunker" inherit "vehicle fixed_mgun.sg43_stand_bunker"}
		{"sg43_stand_stat" inherit "vehicle fixed_mgun.sg43_stand_stat"}		
		
		{"dshk_stat" inherit "vehicle dshk_aa.common"}			
		{"dshk_aa_stat" inherit "vehicle dshk_aa.common"}		
		{"maxim_stand_tower" inherit "vehicle fixed_mgun.maxim_stand_tower"}



		{"25mm_72k_stat" inherit "vehicle atgun.25mm_72k_stat"}


		{"37mm_m30_stat" inherit "vehicle atgun.m37"}
		{"37mm_61k_stat" inherit "vehicle atgun.37mm_61k_shield_stat"}
		
		{"45mm_m37_stat" inherit "vehicle atgun.m37_stat"}
		{"45mm_m42_stat" inherit "vehicle atgun.m37_stat"}

		{"57mm_zis2_stat" inherit "vehicle atgun.zis2_stat"}
		{"76mm_bpk76_stat" inherit "vehicle atgun.76mm_bpk76_stat"}
		{"76mm_zis3_stat" inherit "vehicle atgun.zis3_stat"}	
		
		{"76mm_m43_stat" inherit "vehicle 76mm_m43_stat.common"}
		{"76mm_m1927_stat" inherit "vehicle fieldgun.common"}
		{"76mm_m1938_stat" inherit "vehicle atgun.52k"}
		{"82mm_bm37_stat" inherit "vehicle mortar.common"}
		{"85mm_52k_stat" inherit "vehicle atgun.52k_stat"}		
		
		{"100mm_bs3_stat" inherit "vehicle atgun.bs3_stat"}		
		{"120mm_pm38_stat" inherit "vehicle mortar.common"}	
		{"107mm_m1910_30_stat" inherit "vehicle artillery.common"}		
		{"122mm_m30_stat" inherit "vehicle artillery.common"}	
;=================== vehicle ===================		


		{"ba20_command_vehicle" inherit "vehicle tank.ba20"}



;_____________________________________________________
;|                  Moded units usa                   |
;|____________________________________________________|
;=================== Fixed cannon ===================
		{"m1917_30cal_stat" inherit "vehicle fixed_mgun.m1917_30cal"}
		
		{"m2_30cal_tripod_stat" inherit "vehicle fixed_mgun.m2_30cal_stand"}
		{"m2_30cal_tripod_bunker" inherit "vehicle fixed_mgun.m2_30cal_stand"}
		{"m2_30cal_tripod_stand_stat" inherit "vehicle fixed_mgun.m2_30cal_stand"}
		{"m2_30cal_squat_stat" inherit "vehicle fixed_mgun.m2_30cal_squat"}		
		
		{"m2_50cal_aa_stat" inherit "vehicle fixed_mgun.m2_50cal_tripod_stand"}	
		{"m2_50cal_tripod_stand_stat" inherit "vehicle fixed_mgun.m2_50cal_tripod_sandbag_bunker"}		
		{"m2_50cal_tripod_bunker" inherit "vehicle fixed_mgun.m2_50cal_tripod_sandbag_bunker"}	
		{"m2_50cal_tripod_squat_stat" inherit "vehicle fixed_mgun.m2_50cal_tripod_squat"}
		{"m2_50cal_tripod_stat" inherit "vehicle fixed_mgun.m2_50cal_tripod_prone"}
		
		{"browning_m2_tower" inherit "vehicle fixed_mgun.browning_m2_tower"}		

		{"50cal_quad_m45_stat" inherit "vehicle aamg.m45_quad"}
		
		{"37mm_m3_stat" inherit "vehicle atgun.37mm_m3_stat"}
		{"37mm_m3a1_stat" inherit "vehicle atgun.37mm_m3_stat"}

		{"40mm_m1_stat" inherit "vehicle atgun.40mm_m1_stat"}
		{"57mm_m1_stat" inherit "vehicle atgun.57mm_m1_stat"}

		{"60mm_m2_stat" inherit "vehicle mortar.common"}
		{"60mm_m2_late_stat" inherit "vehicle mortar.common"}
		{"76mm_m5_m1_stat" inherit "vehicle atgun.76mm_m5_stat"}
		{"76mm_m5_m6_stat" inherit "vehicle atgun.76mm_m5_stat"}
		{"90mm_m1a1_stat" inherit "vehicle atgun.90mm_m1a1_stat"}
		{"90mm_m1a1_stat_foxhole" inherit "vehicle atgun.90mm_m1a1"}		
		
		
		{"90mm_m2_stat" inherit "vehicle atgun.90mm_m1a1"}
	
		{"75mm_m1a1_stat" inherit "vehicle 75mm_m1a1_stat.common"}
		{"75mm_m3a3_stat" inherit "vehicle 75mm_m3a3_stat.common"}
	
		{"81mm_m1_stat" inherit "vehicle mortar.common"}	
		{"107mm_m2_stat" inherit "vehicle mortar.common"}
		{"105mm_m2a1_stat" inherit "vehicle artillery.common"}

;=================== vehicle ===================

		{"m3a1_command_vehicle" inherit "vehicle vehicle.m3a1_commander"}		
;_____________________________________________________
;|                  Moded Special                     |
;|____________________________________________________|
;=================== Fixed cannon ===================		
		{"150mm_sw34_stat" inherit "vehicle generic.searchlight"}

;===================  Moded units cannon end ===================