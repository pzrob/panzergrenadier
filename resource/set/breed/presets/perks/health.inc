
; Presets for health and stamina levels

(include "/set/breed/presets/perks/vision.inc")

;/*=========== Standard Presets End ===========*/

(define "civilian"
	{"health" "100%"}
	{"health_regeneration" "10%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	("standard_vision")
	{"speed" 0.90}
)

;// TIER I // 

(define "tier1_standard"
	{"health" "300%"}
	{"health_regeneration" "100%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "175%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier1_recon"
	{"health" "300%"}
	{"health_regeneration" "100%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "175%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.15}
)

(define "tier1_defense"
	{"health" "300%"}
	{"health_regeneration" "200%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "175%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)


;// TIER II // 

(define "tier2_standard"
	{"health" "300%"}
	{"health_regeneration" "100%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier2_recon"
	{"health" "300%"}
	{"health_regeneration" "100%"}
	{"stamina" "225%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.15}
)

(define "tier2_defense"
	{"health" "300%"}
	{"health_regeneration" "250%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

;// TIER III // 

(define "tier3_standard"
	{"health" "300%"}
	{"health_regeneration" "100%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

(define "tier3_recon"
	{"health" "350%"}
	{"health_regeneration" "100%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("recon_vision")
	{"speed" 1.15}
)

(define "tier3_defense"
	{"health" "300%"}
	{"health_regeneration" "200%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 1.00}
)

;// TIER IV // 

(define "tier4_standard"
	{"health" "375%"}
	{"health_regeneration" "100%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 1.10}
)

(define "tier4_recon"
	{"health" "325%"}
	{"health_regeneration" "100%"}
	{"stamina" "400%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("recon_vision")
	{"speed" 1.15}
)

(define "tier4_defense"
	{"health" "375%"}
	{"health_regeneration" "150%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 1.10}
)

;// TIER V // Reserved for special singleplayer hero breeds

(define "tier5_standard"
	{"health" "500%"}
	{"health_regeneration" "200%"}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	;("elite_vision")
	("standard_vision")
	{"speed" 1.20}
)
