
; Presets for all melee, small arm weapons and avoidance skills

(include "/set/breed/presets/perks/health.inc")


;/* - Fortification Building Skills - */

(define "fortification"
	{barricade
		{"fortifications" "foxhole"}
		{"fortifications" "medic_rally"}
		{"fortifications" "auto_medic_place_flag"}
	}
	{"resources" "10%"}
)

(define "engineer"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}

		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "mortar_pit"}
		{"fortifications" "tank_cover"}

		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
		{"fortifications" "heavy_mg_maxim_m1910_30"}
		{"fortifications" "heavy_mg_m1917_30cal"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)

(define "engineer_heavy_fin"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}

		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
		{"fortifications" "tank_cover"}

		{"fortifications" "fin_bunker"}
		{"fortifications" "fin_coastal_gun"}

		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
		{"fortifications" "heavy_mg_maxim_m1910_30"}
		{"fortifications" "heavy_mg_m1917_30cal"}

	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)


;/* - Repair Skills - */

(define "skilled_repair"
	{mechanic factor 1.0}
)

(define "basic_repair"
	{mechanic factor 0.5}
)


;/* - Tank and Cannon Main Gun Weapon Skills - */

(define "elite_gun"
	{"tank_gun" lvl_6}
)

(define "expert_gun"
	{"tank_gun" lvl_4}
)

(define "skilled_gun"
	{"tank_gun" lvl_3}
)

(define "basic_gun"
	{"tank_gun" lvl_1}
)

;/* - Anti-Tank Weapon Skills - */

(define "at_rank_1"
	{"rocketlauncher" lvl_1}
	{"rifle" lvl_1}
)

(define "at_rank_2"
	{"rocketlauncher" lvl_2}
	{"rifle" lvl_2}
)

(define "at_rank_3"
	{"rocketlauncher" lvl_3}
	{"rifle" lvl_3}
)

(define "at_rank_4"
	{"rocketlauncher" lvl_4}
	{"rifle" lvl_4}
)

(define "at_rank_5"
	{"rocketlauncher" lvl_5}
	{"rifle" lvl_5}
)

(define "at_rank_6"
	{"rocketlauncher" lvl_6}
	{"rifle" lvl_6}
)

;/* - Skill zero, civilians or useless sods like volkssturm */

(define "skill_rank_0"
	("at_rank_1")
	{"pistol" lvl_1}
	{"smg" lvl_1}
	{"mgun" lvl_1}
	{"mgun_light" lvl_1}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Sub-Machine Gunner Levels - ; Soldiers with an sub-machine gun their for primary weapon */


(define "smg_skill_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_2}
	{"mgun" lvl_1}
	{"mgun_light" lvl_1}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "smg_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Rifleman Levels - ; Soldiers with an rifle for their primary weapon */

(define "rifle_skill_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_1}
	{"mgun" lvl_1}
	{"mgun_light" lvl_1}
	{"rifle" lvl_2}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_3}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_4}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_5}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "rifle_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_6}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)


;/* - MG Loaders/assistant Levels - ; Soldiers with an rifle/pistol for their primary weapon, but are also trained for MG use */

(define "loader_skill_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_1}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_2}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_3}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_4}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_5}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_6}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_2}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "loader_skill_smg_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)

;/* - Machine Gunner Levels - ; Soldiers with an machine gun for their primary weapon */

(define "mg_skill_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_1}
	{"mgun" lvl_2}
	{"mgun_light" lvl_2}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_2}
	{"mgun" lvl_3}
	{"mgun_light" lvl_3}
	{"rifle" lvl_2}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_3}
	{"mgun" lvl_4}
	{"mgun_light" lvl_4}
	{"rifle" lvl_3}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_4}
	{"mgun" lvl_5}
	{"mgun_light" lvl_5}
	{"rifle" lvl_4}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("fortification")
	("basic_repair")
	("basic_gun")
)

(define "mg_skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_5}
	{"mgun" lvl_6}
	{"mgun_light" lvl_6}
	{"rifle" lvl_5}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("fortification")
	("basic_repair")
	("basic_gun")
)
