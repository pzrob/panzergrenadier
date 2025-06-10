Purchases["conquest.ger"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				---[[
				--{priority = 1.0, type = {"Infantry", "Team", "Command",}, unit = "single_officer(ger)"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Command",}, unit = "squad_officer_con(ger)"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Command",}, unit = "squad_officer_kubel_con"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Command",}, unit = "squad_officer_250_3_con"},

				--T1
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_osttruppen_con(ger)"},
				{priority = 0.8, type = {"Infantry", "Squad",}, unit = "squad_strafbatallion_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_luftwaffe_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volkssturm_con(ger)"},

				--T2
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_sicherung_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_recon_con(ger)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_regular_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_pionier_con(ger)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_lw_jaeger_con(ger)"},
				{priority = 3.5, type = {"Infantry", "Squad",}, unit = "squad_grenadier_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturmgren_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturmgren_heavy_con(ger)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volksg_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volksg_sturm_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volksg_sturm_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volksg_heavy_con(ger)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_recon_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_regular_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_recon_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pz_recon_armor_late_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_regular_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzgren_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzgren_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_panzergren_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_panzergren_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_gren_sturm_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_volksg_sturm_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturm_pzgren_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pz_pio_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pz_pio_late_con"},

				--T2+
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_regular_vet_con(ger)"},

				--T3
				{priority = 2.0, type = {"Infantry", "Squad",}, unit = "squad_fusilier_late_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fusilier_smg_late_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_jaeger_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturmjager_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturm_begleitgren_motor_con"},

				--T3+
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_gd_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzg_gd_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzg_lehr_armor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_sturm_pzg_lehr_armor_con"},

				--T4
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_blau_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_gebirgsjaeger_late_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_gebirgs_recon_late_con(ger)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_brandenburger_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_brandenburger_44_con(ger)"},

				{priority = 1.5, type = {"Infantry", "Squad",}, unit = "squad_fallschirmjaeger_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fallschirmjaeger_motor_con"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fallschirm_recon_late_con(ger)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fallschirmjaeger_late_motor_con"},

				--Singles/Teams
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(ger)"},
				{priority = 1.5, type = {"Infantry", "Team", "AT",}, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, type = {"Infantry", "Team", "AT",}, unit = "squad_at_late_con(ger)"},

				--{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_medic(ger)"},
				{priority = 1.5, type = {"Infantry", "Team", "AT",}, unit = "single_riflegrenade(ger)"},
				{priority = 0.5, type = {"Infantry", "Team",}, unit = "single_ap_miner(ger)"},
				{priority = 0.5, type = {"Infantry", "Team",}, unit = "single_at_miner(ger)"},
				{priority = 0.5, type = {"Infantry", "Team",}, unit = "single_engineer(ger)"},
				{priority = 1.5, type = {"Infantry", "Team",}, unit = "single_flamer(ger)"},
				--{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_tankman(ger)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(ger)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "inf_crate_ger"},
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "infantry_cart_if8"},
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "ammo_trailer"},
				--{priority = 1.0, type = {"Cannon", "Spotlight",}, unit = "150mm_sw34_ger"},

				--HMGs
				{priority = 1.5, type = {"Cannon", "MG",}, unit = "mg34_lafette"},
				{priority = 1.5, type = {"Cannon", "MG",}, unit = "mg42_lafette"},
				{priority = 0.1, type = {"Cannon", "MG",}, unit = "panzernest_krab_ger"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "20mm_flak30"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "20mm_flak38"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "20mm_flakvierling38"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "37mm_flak37"},
				{priority = 0.1, type = {"Cannon", "AA",}, unit = "50mm_flak41"},
				{priority = 1.0, type = {"Cannon", "AA", "AT",}, unit = "88mm_flak18"},
				{priority = 1.0, type = {"Cannon", "AA", "AT",}, unit = "88mm_flak36"},
				--Anti Tank
				{priority = 0.5, type = {"Cannon", "AT",}, unit = "28mm_pzb41"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "37mm_pak36"},
				{priority = 0.5, type = {"Cannon", "AT",}, unit = "47mm_pakt"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "50mm_pak38"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "75mm_pak9738"},
				{priority = 1.5, type = {"Cannon", "AT",}, unit = "75mm_pak40"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "88mm_pak4341"},
				--Mortars
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "80mm_sgrw34"},
				{priority = 0.5, type = {"Cannon", "Mortar",}, unit = "100mm_nbw35"},
				{priority = 1.0, type = {"Cannon", "Mortar",}, unit = "120mm_sgrw42"},
				{priority = 0.1, type = {"Cannon", "Mortar",}, unit = "200mm_ldgw40"},
				--Infantry Support
				{priority = 1.5, type = {"Cannon", "Support",}, unit = "75mm_leig18"},
				{priority = 0.5, type = {"Cannon", "Support",}, unit = "75mm_lg40"},
				{priority = 0.5, type = {"Cannon", "Support",}, unit = "150mm_sig33"},
				--Artillery
				{priority = 1.5, type = {"Cannon", "Artillery",}, unit = "105mm_lefh18"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "105mm_lefh18_40"},
				{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "105mm_sk18"},
				{priority = 2.0, type = {"Cannon", "Artillery",}, unit = "150mm_sfh18"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "155mm_gpf_ger"},
				{priority = 2.0, type = {"Cannon", "Artillery",}, unit = "170mm_k18"},
				{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "210mm_morser18"},
				{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "600mm_thor"},
				--Rocket Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "150mm_nebelwerfer41"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "210mm_nebelwerfer42"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "300mm_nebelwerfer42"},
				--]]

			-- Wheel vehicles
				---[[
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "bmw_r71"},
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "kfz15"},
				--{priority = 0.5, type = {"Vehicle", "Unarmed", "Transport",}, unit = "kubelwagen"},
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "kubelwagen_mg"},
				{priority = 0.1, type = {"Vehicle", "MG",}, unit = "kubelwagen_dak"},
				{priority = 2.0, type = {"Vehicle", "AA",}, unit = "blitz3_6_flak30"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "kfz13"},
				{priority = 1.5, type = {"Armored", "MG",}, unit = "sdkfz221"},
				{priority = 1.5, type = {"Armored", "AA",}, unit = "sdkfz222a"},
				{priority = 1.5, type = {"Armored", "AA",}, unit = "sdkfz231"},
				{priority = 0.1, type = {"Armored",}, unit = "p204_f"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "sdkfz234_1"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "sdkfz234_2"},
				{priority = 0.5, type = {"Armored", "Support",}, unit = "sdkfz234_3"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "sdkfz234_4"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "blitz3_6"},
                                --{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "blitz3_6_transport"},
                                --{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "opel_maultier_transport"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "blitz3_6_art_ammo"},
                                --{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "opel_maultier"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "blitz3_6_fuel"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed","Supply", "Engineer",}, unit = "blitz3_6_engineering"},
                                --{priority = 1.0, type = {"Vehicle", "Unarmed","Supply", "Engineer",}, unit = "opel_maultier_engineering"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed","Supply", "Ammo",}, unit = "sdkfz6_ammo"},

				--]]

			-- Halftracks
				---[[
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "kettenkrad_eng"},
				--{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "sdkfz10"},
                                --{priority = 1.0, type = {"Vehicle", "Unarmed", "Transport",}, unit = "sdkfz7"},
				{priority = 2.0, type = {"Armored", "MG",}, unit = "sdkfz250a_1"},
				{priority = 2.0, type = {"Armored", "AA",}, unit = "sdkfz250a_9"},
				{priority = 0.1, type = {"Armored", "AT",}, unit = "sdkfz250a_11"},
				{priority = 1.0, type = {"Armored", "MG", "Transport",}, unit = "sdkfz251c"},
                                {priority = 0.1, type = {"Armored", "MG", "Transport",}, unit = "sdkfz251c_tarp"},
				{priority = 0.5, type = {"Armored", "Mortar",}, unit = "sdkfz251c_2"},
				{priority = 1.0, type = {"Armored", "MG", "Transport",}, unit = "sdkfz251d_1"},
				{priority = 0.5, type = {"Armored", "Artillery",}, unit = "sdkfz251d_1_stuka"},
				{priority = 0.5, type = {"Armored", "MG",}, unit = "sdkfz251d_16"},
				{priority = 0.1, type = {"Armored", "AA",}, unit = "sdkfz251d_17"},
				{priority = 0.1, type = {"Armored", "AA",}, unit = "sdkfz251d_21"},
				{priority = 0.1, type = {"Armored", "AT",}, unit = "sdkfz251d_22"},
				{priority = 0.1, type = {"Vehicle", "AA",}, unit = "sdkfz10_4"},
				{priority = 1.0, type = {"Vehicle", "AA",}, unit = "sdkfz6_2"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "sdkfz7_1"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "sdkfz7_2"},
				{priority = 0.1, type = {"Vehicle", "AT",}, unit = "sdkfz10_pak38"},
				{priority = 0.1, type = {"Armored", "AA", "AT",}, unit = "sdkfz8_flak18"},
				{priority = 0.5, type = {"Armored", "Artillery",}, unit = "panzerwerfer42"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Tank", "Light",}, unit = "panzer1b"},
				{priority = 0.1, type = {"Tank", "Light",}, unit = "panzer1f"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "panzer2c"},
				{priority = 2.0, type = {"Tank", "Light",}, unit = "panzer2f"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "panzer2l"},
				{priority = 1.5, type = {"Tank", "Light",}, unit = "pz35t"},
				{priority = 2.5, type = {"Tank", "Light",}, unit = "pz38t_a"},
				{priority = 2.5, type = {"Tank", "Light",}, unit = "pz38t_f"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "pz38t_g"},
				{priority = 0.1, type = {"Tank", "Light",}, unit = "pz38h_735"},

				{priority = 0.1, type = {"Tank", "Medium",}, unit = "panzer35s"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "panzer3e"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "panzer3f"},
				{priority = 3.5, type = {"Tank", "Medium",}, unit = "panzer3j"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "panzer3j1"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "panzer3l"},
				{priority = 2.5, type = {"Tank", "Medium",}, unit = "panzer3m"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "panzer3n"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "panzer3_flamm"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "panzer4d"},
				{priority = 1.5, type = {"Tank", "Medium",}, unit = "panzer4f1"},
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "panzer4f2"},
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "panzer4g"},
				{priority = 3.5, type = {"Tank", "Medium",}, unit = "panzer4h"},
				{priority = 3.0, type = {"Tank", "Medium",}, unit = "panzer4j"},

				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "panzer5d"},
				{priority = 2.5, type = {"Tank", "Heavy",}, unit = "panzer5a"},
				{priority = 2.5, type = {"Tank", "Heavy",}, unit = "panzer5g"},

				{priority = 0.1, type = {"Tank", "Heavy",}, unit = "panzerb2"},
				{priority = 0.5, type = {"Tank", "Heavy",}, unit = "tiger1h"},
				{priority = 1.5, type = {"Tank", "Heavy",}, unit = "tiger1e"},
			--	{priority = 0.1, type = {"Tank", "Heavy",}, unit = "tiger1hunt"},
				{priority = 0.5, type = {"Tank", "Heavy",}, unit = "tiger2p"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "tiger2h"},
				--]]

			-- Self-Propelled Guns
				---[[
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "panzerjager1"},
				{priority = 2.0, type = {"Tank", "Light", "AT",}, unit = "marder2"},
				{priority = 2.5, type = {"Tank", "Light", "AT",}, unit = "marder3m"},
				{priority = 2.5, type = {"Tank", "Light", "AT",}, unit = "hetzer"},

				{priority = 0.1, type = {"Tank", "Light", "AA",}, unit = "grille_m"},

				{priority = 0.1, type = {"Tank", "Light", "Support",}, unit = "bison"},
				{priority = 0.1, type = {"Tank", "Light", "Artillery",}, unit = "pz38h_w40"},
				{priority = 1.0, type = {"Tank", "Light", "Artillery",}, unit = "grille_k"},
				{priority = 1.0, type = {"Tank", "Light", "Artillery",}, unit = "wespe"},

				{priority = 1.5, type = {"Tank", "Medium", "AT",}, unit = "stug3b"},
				{priority = 1.5, type = {"Tank", "Medium", "AT",}, unit = "stug3f"},
				{priority = 3.0, type = {"Tank", "Medium", "AT",}, unit = "stug3g"},
				{priority = 0.5, type = {"Tank", "Medium", "AT",}, unit = "stug3g_late"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48_early"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "jagdpanzer4_l48"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "panzer4_70_v"},
				{priority = 1.0, type = {"Tank", "Medium", "AT",}, unit = "nashorn"},

				{priority = 0.5, type = {"Tank", "Medium", "AA",}, unit = "wirbelwind"},
				{priority = 0.1, type = {"Tank", "Medium", "AA",}, unit = "ostwind"},

				{priority = 2.0, type = {"Tank", "Medium", "Support",}, unit = "stuh42"},
				{priority = 0.1, type = {"Tank", "Medium", "Support",}, unit = "sig33b"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "sturmpanzer4"},
				{priority = 1.0, type = {"Tank", "Medium", "Artillery",}, unit = "hummel"},

				{priority = 0.1, type = {"Tank", "Heavy", "AT",}, unit = "ferdinand"},
				{priority = 1.0, type = {"Tank", "Heavy", "AT",}, unit = "jagdpanther"},
				{priority = 0.1, type = {"Tank", "Heavy", "AT",}, unit = "jagdtiger"},
				{priority = 0.1, type = {"Tank", "Heavy", "AT",}, unit = "sturmtiger"},
				--]]
			---]====]
		}
	}
}
