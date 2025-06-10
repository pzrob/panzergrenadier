{"vehicle"
	{on spawn
		{tags add "tex_mod_1"}
		{link_sound "spray_paint" "vehicle/paint/spray_paint"}
	}

		(define "tex_mod"
			{tags add "tex_mod_%0"}
		else tagged "tex_mod_%0"
			{play_sound "spray_paint"}
			{tex_mod "%0"}
			{tags remove "tex_mod_%0"}
			{if tex_mod "%0"
				{set "tex_work" 1}
			}
	)
	
	{on "change_paint_scheme_toggle"		 ;// UI button to toggle paint scheme
		{set "tex_work" 0}
		{if tagged "tex_mod_1"
			{play_sound "spray_paint"}
			{tex_mod "1"}
			{tags remove "tex_mod_1"}
			{if tex_mod "1"
				{set "tex_work" 1}
			}
			("tex_mod" args b)
			("tex_mod" args d)
			("tex_mod" args camo)
			("tex_mod" args camob)
			("tex_mod" args camo1)
			("tex_mod" args camo2)
			("tex_mod" args camo3)
			("tex_mod" args camo4)
			("tex_mod" args camo44)
			("tex_mod" args desert)
			("tex_mod" args grey)
			("tex_mod" args normandy)
			("tex_mod" args yellow)
			{tags add "tex_mod_"}
		else tagged "tex_mod_"
			{play_sound "spray_paint"}
			{tex_mod ""}
			{tags remove "tex_mod_"}
			{if tex_mod ""
				{set "tex_work" 1}
			}
			{tags add "tex_mod_1"}
		}
		{if not "tex_work"
			{call "change_paint_scheme_toggle"}
		}
	}
}