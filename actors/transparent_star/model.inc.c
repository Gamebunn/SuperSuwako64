Lights2 transparent_star_sm64_material_004_lights = gdSPDefLights2(
	0x3, 0x5, 0x17,
	0x1D, 0x32, 0xE6, 0x59, 0x3F, 0xC1,
	0x1D, 0x32, 0xE6, 0xA7, 0x59, 0x0);

Vtx transparent_star_000_displaylist_mesh_vtx_0[24] = {
	{{{-80, -207, -7},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-80, 246, -7},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{80, 246, -7},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{80, -207, -7},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-80, -207, -7},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{80, -207, -7},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{80, -207, 3},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-80, -207, 3},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-80, 246, -7},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-80, -207, -7},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-80, -207, 3},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-80, 246, 3},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{80, -207, -7},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, 246, -7},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, 246, 3},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, -207, 3},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, 246, -7},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-80, 246, -7},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-80, 246, 3},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{80, 246, 3},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-80, -207, 3},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{80, 246, 3},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-80, 246, 3},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{80, -207, 3},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx transparent_star_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(transparent_star_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(transparent_star_000_displaylist_mesh_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_transparent_star_sm64_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_PATTERN),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetEnvColor(187, 187, 187, 119),
	gsSPSetLights2(transparent_star_sm64_material_004_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_transparent_star_sm64_material_004[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPEndDisplayList(),
};


Gfx transparent_star_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_transparent_star_sm64_material_004),
	gsSPDisplayList(transparent_star_000_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_revert_transparent_star_sm64_material_004),
	gsSPEndDisplayList(),
};



Gfx transparent_star_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
