
	(include "/properties/building.inc")
	{obstacleid "unbreakable"}
	{props "concrete" "construction"}
	("armor_heavy")

	{volume "body01"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body02"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body03"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body04"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body05"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body06"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body07"
		{Tags "body"}
		{thickness 100}
	}
	{volume "body08"
		{Tags "body"}
		{thickness 100}
		{able {visible 0}{Obstacle 0}}
	}
	{volume "body11"
		{Tags "body"}
		{thickness 100}
		{able {Obstacle 0}{contact 0}}
	}
	{volume "body12"
		{Tags "body"}
		{thickness 100}
		{able {Obstacle 0}{contact 0}}
	}
	{volume "body13"
		{Tags "body"}
		{thickness 10}
		{material "steel"}
	}
	{volume "hole01"
		{able clear {hole}}
	}
	{volume "hole02"
		{able clear {hole}}
	}
	{volume "hole03"
		{able clear {hole}}
	}
	{volume "hole04"
		{able clear {hole}}
	}

	{volume "roof01"
		{Tags "body"}
		{thickness 100}
		{able {visible 0}{holed}{Obstacle 0}}
	}
	{volume "roof02"
		{Tags "body"}
		{thickness 100}
		{able {visible 0}{holed}{Obstacle 0}}
	}
	{Extender "land_patch"
		{TerrainType "road" "bridge"}
	}
