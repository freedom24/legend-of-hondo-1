domestic_eopie = Creature:new {
	objectName = "@mob/creature_names:domestic_eopie",
	socialGroup = "eopie",
	faction = "",
	level = 4,
	chanceHit = 0.24,
	damageMin = 40,
	damageMax = 45,
	baseXp = 62,
	baseHAM = 113,
	baseHAMmax = 138,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_domesticated",
	meatAmount = 335,
	hideType = "hide_leathery",
	hideAmount = 260,
	boneType = "bone_mammal",
	boneAmount = 190,
	milkType = "milk_domesticated",
	milk = 175,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = HERD,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/eopie.iff"},
	scale = 0.9,
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(domestic_eopie, "domestic_eopie")
