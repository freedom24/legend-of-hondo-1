deadly_tanc_mite = Creature:new {
	objectName = "@mob/creature_names:tanc_mite_eviscerator",
	socialGroup = "mite",
	faction = "",
	level = 13,
	chanceHit = 0.29,
	damageMin = 80,
	damageMax = 90,
	baseXp = 609,
	baseHAM = 1000,
	baseHAMmax = 1200,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 4,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.05,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + HERD,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/tanc_mite_hue.iff"},
	controlDeviceTemplate = "object/intangible/pet/tanc_mite_hue.iff",
	scale = 1.1,
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"intimidationattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(deadly_tanc_mite, "deadly_tanc_mite")
