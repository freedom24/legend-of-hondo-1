verne = Creature:new {
	objectName = "@mob/creature_names:verne",
	socialGroup = "verne",
	faction = "",
	level = 17,
	chanceHit = 0.31,
	damageMin = 170,
	damageMax = 180,
	baseXp = 1102,
	baseHAM = 3500,
	baseHAMmax = 4300,
	armor = 0,
	resists = {5,5,5,-1,-1,125,125,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 125,
	hideType = "hide_leathery ",
	hideAmount = 90,
	boneType = "bone_mammal",
	boneAmount = 80,
	milk = 0,
	tamingChance = 0.25,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	optionsBitmask = 0,
	diet = HERBIVORE,

	templates = {"object/mobile/verne.iff"},
	controlDeviceTemplate = "object/intangible/pet/verne_hue.iff",
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"",""},
		{"intimidationattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(verne, "verne")
