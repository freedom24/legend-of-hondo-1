bolma = Creature:new {
	objectName = "@mob/creature_names:bolma",
	socialGroup = "bolma",
	faction = "",
	level = 19,
	chanceHit = 0.33,
	damageMin = 180,
	damageMax = 190,
	baseXp = 1426,
	baseHAM = 4500,
	baseHAMmax = 5500,
	armor = 0,
	resists = {10,160,10,-1,-1,-1,-1,-1,-1},
	meatType = "meat_wild",
	meatAmount = 150,
	hideType = "hide_leathery",
	hideAmount = 160,
	boneType = "bone_mammal",
	boneAmount = 150,
	milkType = "milk_wild",
	milk = 70,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/bolma.iff"},
	lootGroups = {		{			groups = {				{group = "junk", chance = 7000000},				{group = "wearables_common", chance = 3000000},				{group = "weapons_all", chance = 1000000},			},		}	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack",""},
		{"posturedownattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(bolma, "bolma")
