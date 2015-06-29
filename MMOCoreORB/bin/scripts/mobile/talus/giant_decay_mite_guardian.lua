giant_decay_mite_guardian = Creature:new {
	objectName = "@mob/creature_names:giant_decay_mite_royal_guardian",
	socialGroup = "mite",
	faction = "",
	level = 24,
	chanceHit = 0.33,
	damageMin = 220,
	damageMax = 230,
	baseXp = 2443,
	baseHAM = 6300,
	baseHAMmax = 7700,
	armor = 0,
	resists = {130,130,5,5,5,-1,-1,-1,-1},
	meatType = "meat_insect",
	meatAmount = 22,
	hideType = "hide_scaley",
	hideAmount = 18,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/decay_mite.iff"},
	scale = 2,
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"intimidationattack",""},
		{"mildpoison",""}
	}
}

CreatureTemplates:addCreatureTemplate(giant_decay_mite_guardian, "giant_decay_mite_guardian")
