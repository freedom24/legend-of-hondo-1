--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.
-- Legend of Hondo Customization
-- Added Heat, Blast, Acid. Made focus on Cold.
-- Modified Encumberance values to make a bonus possible.

fambaa_plates = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/tangible/component/armor/armor_segment_enhancement_fambaa.iff",
	craftingValues = {
		{"armor_special_type",0,0,0},
		{"coldeffectiveness",6,12,10},
		{"heateffectiveness",1,4,10},
		{"blasteffectiveness",1,4,10},
		{"acideffectiveness",1,4,10},
		{"armor_health_encumbrance",2,-6,0},
		{"armor_action_encumbrance",2,-6,0},
		{"armor_mind_encumbrance",2,-6,0},
		{"useCount",1,10,0},
	},
	customizationStringNames = {},
	customizationValues = {},
}
addLootItemTemplate("fambaa_plates", fambaa_plates)