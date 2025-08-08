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
			("tex_mod" args camoss)
			("tex_mod" args camo1)
			("tex_mod" args camo2)
			("tex_mod" args camo22)
			("tex_mod" args camo3)
			("tex_mod" args camo4)
			("tex_mod" args camo44)
			("tex_mod" args desert)
			("tex_mod" args grey)
			("tex_mod" args normandy)
			("tex_mod" args yellow)
			("tex_mod" args uwo1)
			("tex_mod" args uwo2)
			("tex_mod" args uwo3)
			("tex_mod" args uwo4)
			("tex_mod" args uwo5)
			("tex_mod" args uwo6)
			("tex_mod" args uwo7)
			("tex_mod" args uwo8)
			("tex_mod" args uwo9)
			("tex_mod" args uwo10)
			("tex_mod" args uwo11)
			("tex_mod" args uwo12)
			("tex_mod" args ita)
			("tex_mod" args stripes)
			("tex_mod" args stripes2)
			("tex_mod" args cam1)
			("tex_mod" args cam2)
			("tex_mod" args cam3)
			("tex_mod" args cam4)
			("tex_mod" args cam5)
			("tex_mod" args cam6)
			("tex_mod" args cam7)
			("tex_mod" args cam8)
			("tex_mod" args cam9)
			("tex_mod" args cam10)
			("tex_mod" args krake)
			("tex_mod" args uberfall)
			("tex_mod" args late4)
			("tex_mod" args late5)
			("tex_mod" args splinter)
			("tex_mod" args sand)
			("tex_mod" args sand1)
			("tex_mod" args sand2)
			("tex_mod" args sand3)
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