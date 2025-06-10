
; Presets for health and stamina levels

(include "/set/breed/presets/perks/skills.inc")
(include "/set/breed/presets/perks/skill_engineer_fin.inc")
(include "/set/breed/presets/perks/skill_engineer_generic.inc")
(include "/set/breed/presets/perks/skill_engineer_ger.inc")
(include "/set/breed/presets/perks/skill_engineer_rus.inc")
(include "/set/breed/presets/perks/skill_engineer_usa.inc")

;(include "/set/breed/presets/perks/specialties_mod.inc")
;/*=========== Unique Presets Begin ===========*/

(define "medic"
	{"medic" 5.0}
	{"speed" 1.20}
	{"stamina" "180%"}
	{barricade
		{"fortifications" "auto_medic_place_flag"}
	}
)

(define "stealth"
	{"stealth"}
	("recon_vision") 
	{"speed" 1.20}
	{barricade
		{"fortifications" "bush_cover"}
	}
	{"resources" "20%"}
	{"resources_regeneration" "10%"}
)

(define "marksman"		;// elite sharpshooters (non sniper)
	{"rifle" lvl_8}
)

(define "tank_commander"	;// Tank Commander
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "450%"}
	("expert_gun")
)

(define "tankman"			;// Tank Crew
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "350%"}
	("skilled_gun")
)


;/*=========== Unique Presets End ===========*/

;/*=========== removed Presets Begin ===========*/

(define "spetsnaz"			;// Soviet Spetsnaz
	{"stealth"}
	{"stamina" "400%"}
	{"telescope"}
	{"vision" human_elite}
	{"aimedshot"}			;// Silenced Nagant Pistol
	{barricade
		{"fortifications" "bush_cover"}
	}
	{"resources" "20%"}
	{"resources_regeneration" "10%"}
)

(define "sniper_rus"		;// Soviet Snipers
	{"stamina" "300%"}
)

(define "paratrooper"		;// Soviet Paratroopers
	{"speed" 1.10}
	{"health" "300%"}
	{"stamina" "250%"}
)

(define "mountain_rifle"	;// Soviet Mountain rifles
	{"speed" 1.10}
	{"health" "300%"}
	{"stamina" "300%"}
)

(define "assault_sapper"	;// Soviet Assault Sappers
	{"speed" 0.80}
	{"health" "400%"}
)

(define "guards"			;// Soviet Guards infantry
	{"health" "300%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "125%"}
	{tags add "female"}
	
)

(define "guards_marines"	;// Soviet Guards marine infantry
	{"health" "350%"}
	{"stamina" "220%"}
	{"stamina_regeneration" "175%"}
)

(define "blau"				;// Blau division
	{"speed" 0.80}
	{"health" "300%"}
)

(define "brandenburger"		;// German Brandenburgers
	{"stealth"}
	{"speed" 1.20}
	{"health" "300%"}
	{"stamina" "250%"}
	{barricade
		{"fortifications" "bush_cover"}
	}
	{"resources" "20%"}
	{"resources_regeneration" "10%"}
)

(define "vet_reg"			;// Veteran regular units
	{"health" "300%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "120%"}
)

(define "grossdeutschland"	;// German Grossdeutschland division inf/panzergrenadiers
	{"health" "350%"}
	{"stamina" "180%"}
	{"stamina_regeneration" "150%"}
)

(define "gebirgsjager"		;// German Gebirgsjäger
	{"health" "300%"}
	{"stamina" "350%"}
)

(define "fallschirmjager"	;// German Fallschirmjäger
	{"health" "350%"}
	{"stamina" "300%"}
)

(define "marksman"		;// elite sharpshooters (non sniper)
	{"rifle" lvl_6}
)

(define "partisan"		;// Partisans
	{"speed" 0.90}
)

(define "finnish_elite"		;// Finland Tier 3 and Tier 4
	{"speed" 1.15}
	{"health_regeneration" "85%"}
)

(define "volkssturm"
	{"pistol" lvl_1}
	{"smg" lvl_1}
	{"mgun" lvl_1}
	{"rifle" lvl_1}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("at_rank_1")
	;("health_rank_2")
	("fortification")
	("basic_repair")
)

(define "recon"				;// recon soldiers
	{"health" "200%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "110%"}
	("recon_vision")
	{barricade
		{"fortifications" "bush_cover"}
	}
	{"resources" "20%"}
	{"resources_regeneration" "10%"}
)

(define "tank_commander"	;// Tank Commander
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "150%"}
	("expert_gun")
)

;/*=========== Unique Presets End ===========*/

