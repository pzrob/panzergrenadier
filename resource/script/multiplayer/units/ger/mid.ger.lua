Purchases["mid.ger"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry Squads
				--[[
				-- Old Squads
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_strafbatallion(ger)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon(ger)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_regular(ger)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_regular_armored(ger)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pionier(ger)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_regular_vet(ger)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_gd_mid(ger)"},
				--]]

				-- All-round Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ersatz_rifle_mid_all(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_all(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_all(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_motor_mid_all_1(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_motor_mid_all_2(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_motor_mid_all_3(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_vet_mid_all(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_gebirgs_recon_mid_all(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gebirgs_mid_all(ger)"},
					--]]

				-- Defensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ost_rifle_mid_def(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_recon_mid_def(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_def(ger)"},
					--{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pio_mid_def_1(ger)"},
					--{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pio_mid_def_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pio_mid_def_3(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_blau_mid_def(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gd_mid_def(ger)"},
					--]]

				-- Irregular Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_straf_mid_irr_1(ger)"},
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_straf_mid_irr_2(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_straf_mid_irr_3(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_irr(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_irr(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_sturm_pio_mid_irr(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_recon_mid_irr(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_pio_mid_irr(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_fallschirm_mid_irr(ger)"},
					--]]

				-- Offensive Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ersatz_rifle_mid_off(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_recon_mid_off(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_rifle_mid_off(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_pz_pio_mid_off(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_pz_rifle_vet_mid_off(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gd_pio_mid_off(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gd_mid_off(ger)"},
					--]]

				-- Support Doctrine Squads
					---[[
					{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "squad_ersatz_rifle_mid_sup(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_recon_mid_sup(ger)"},
					{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "squad_rifle_mid_sup(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_rifle_vet_mid_sup(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gebirgs_pio_mid_sup(ger)"},
					{priority = 1.0, type = {"Class1", "Infantry", "Squad",}, unit = "squad_gebirgs_mid_sup(ger)"},
					--]]

			-- Infantry Singles / Teams
				---[[
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_rifle(ger)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team", "Aux",}, unit = "single_smg(ger)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team",}, unit = "single_mg(ger)"},
				{priority = 1.0, type = {"Class1", "Infantry", "Team", "AT",}, unit = "single_at(ger)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_riflegrenade(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_ap_miner(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_at_miner(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_engineer(ger)"},
				{priority = 1.0, type = {"Class3", "Infantry", "Team",}, unit = "single_flamer(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_tankman(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_medic(ger)"},
				{priority = 1.0, type = {"Class2", "Infantry", "Team",}, unit = "single_sniper(ger)"},
				--{priority = 1.0, type = {"Class", "Infantry", "Team",}, unit = "single_officer(ger)"},
				--]]

			-- Cannons
				---[[
				--{priority = 1.0, type = {"Cannon", "Supply", "Ammo",}, unit = "inf_crate_ger"},

				{priority = 1.0, type = {"Class2", "Cannon", "MG",}, unit = "mg34_lafette"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flak30"},
				{priority = 1.0, type = {"Class2", "Cannon", "AA",}, unit = "20mm_flakvierling38"},

				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "28mm_pzb41"},
				{priority = 1.0, type = {"Class3", "Cannon", "AT",}, unit = "37mm_pak36"},
				{priority = 1.0, type = {"Class2", "Cannon", "AT",}, unit = "50mm_pak38"},
				{priority = 1.0, type = {"Class1", "Cannon", "AT",}, unit = "75mm_pak40"},

				{priority = 1.0, type = {"Class1", "Cannon", "Support",}, unit = "75mm_leig18"},
				{priority = 1.0, type = {"Class1", "Cannon", "Mortar",}, unit = "80mm_sgrw34"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_lefh18"},
				{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "105mm_lefh18_40"},
				--]]

			-- Wheeled vehicles
				---[[
				{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "bmw_r71"},
				{priority = 1.0, type = {"Class3", "Vehicle", "MG",}, unit = "kubelwagen_mg"},
				{priority = 1.0, type = {"Class2", "Vehicle", "AA",}, unit = "blitz3_6_flak30"},

				{priority = 1.0, type = {"Class2", "Armored", "MG",}, unit = "sdkfz221"},
				{priority = 1.0, type = {"Class3", "Armored", "AA",}, unit = "sdkfz222a"},
				{priority = 1.0, type = {"Class1", "Armored", "AA",}, unit = "sdkfz231"},

				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "blitz3_6"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Ammo",}, unit = "blitz3_6_art_ammo"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Fuel",}, unit = "blitz3_6_fuel"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Supply", "Engineer",}, unit = "blitz3_6_engineering"},
				--]]

			-- Half Tracks
				---[[
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "kettenkrad"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "sdkfz10"},
				--{priority = 1.0, type = {"Class", "Vehicle", "Unarmed", "Transport",}, unit = "sdkfz7"},
				{priority = 1.0, type = {"Class3", "Armored", "MG", "Transport",}, unit = "sdkfz251c"},
				{priority = 1.0, type = {"Class3", "Armored", "AT",}, unit = "sdkfz250a_11"},
				--]]

			-- Tanks
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "panzer1b"},
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "panzer2c"},
				{priority = 1.0, type = {"Class2", "Tank", "Light",}, unit = "panzer2f"},
				{priority = 1.0, type = {"Class1", "Tank", "Light",}, unit = "pz38t_f"},

				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "panzer3j"},
				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer3j1"},
				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "panzer4f1"},
				{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "panzer4f2"},
				--]]

			-- Self-Propelled Guns
				---[[
				{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "panzerjager1"},
				{priority = 1.0, type = {"Class2", "Tank", "Medium", "AT",}, unit = "stug3b"},
				--]]


			-- Doctrine Point Units

				--  All-round Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored",}, unit = "doctrine_p204_f"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Cannon", "AT",}, unit = "doctrine_towed_pak34t_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_pz35t"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Infantry", "Team",}, unit = "doctrine_squad_ger_signaller_mid(ger)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_200mm_ldgw40_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Tank", "Medium", "AT",}, unit = "doctrine_stug3f"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_105mm_sk18_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_150mm_nebelwerfer41"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Medium", "AT",}, unit = "doctrine_sig33b"},
					--]]

				--  Defensive Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Vehicle", "Unarmed", "Support", "Engineer",}, unit = "doctrine_kettenkrad_goliath_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Cannon", "AA",}, unit = "doctrine_37mm_flak37_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Vehicle", "AT",}, unit = "doctrine_sdkfz10_pak38"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "Mortar",}, unit = "doctrine_120mm_sgrw42_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Cannon", "AA",}, unit = "doctrine_50mm_flak41_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Tank", "Light", "AT",}, unit = "doctrine_marder2"},

					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_sfh18"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_210mm_morser18_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "AA", "AT",}, unit = "doctrine_88mm_flak18_mid"},
					--]]

				--  Irregular Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry",}, unit = "doctrine_squad_brandenburger_mid(ger)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Infantry", "Team",}, unit = "doctrine_squad_vetsniper(ger)"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_panzer742r"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Airstrike",}, unit = "doctrine_bf109_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Cannon", "Support",}, unit = "doctrine_150mm_sig33_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_panzer3flamm"},

					--{priority = 1.0, type = {"Class", "Doctrine", "Tier3", "Plane", "Airstrike",}, unit = "doctrine_bf110_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_210mm_nebelwerfer42_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_pz756r"},
					--]]

				--  Offensive Doctrine
					---[[
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "MG",}, unit = "doctrine_sdkfz250a_3_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_panzer2f_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier1", "Tank", "Light",}, unit = "doctrine_pz38t_g"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Infantry", "Armored", "MG",}, unit = "doctrine_squad_stosstrupp"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Tank", "Support", "Light",}, unit = "doctrine_bison_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier2", "Tank", "Medium",}, unit = "doctrine_panzer3l"},

					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Armored", "AA", "AT",}, unit = "doctrine_sdkfz8_flak18_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Tank", "Medium",}, unit = "doctrine_panzer4g"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Tank", "Heavy",}, unit = "doctrine_tiger1h"},
					--]]

				--  Support Doctrine
					---[[
					--{priority = 1.0, type = {"Class", "Doctrine", "Tier1", "Infantry", "Team",}, unit = "doctrine_squad_ger_officer_lw_mid(ger)"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "AA",}, unit = "doctrine_sdkfz250a_9_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier1", "Armored", "Mortar",}, unit = "doctrine_sdkfz251c_2_mid"},


					--{priority = 1.0, type = {"Class", "Doctrine", "Tier2", "Plane", "Recon",}, unit = "doctrine_fi156_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier2", "Armored", "AA",}, unit = "doctrine_sdkfz7_2_mid"},
					{priority = 1.0, type = {"Class2", "Doctrine", "Tier2", "Cannon", "AT",}, unit = "doctrine_75mm_pak9738_mid"},

					{priority = 1.0, type = {"Class2", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_600mm_thor_mid"},
					{priority = 1.0, type = {"Class3", "Doctrine", "Tier3", "Cannon", "Artillery",}, unit = "doctrine_170mm_k18_mid"},
					{priority = 1.0, type = {"Class1", "Doctrine", "Tier3", "Cannon", "AT",}, unit = "doctrine_88mm_pak43_mid"},
					--]]
			--]====]
		}
	}
}
