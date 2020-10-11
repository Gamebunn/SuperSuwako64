#include "src/game/envfx_snow.h"

const GeoLayout marios_wing_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(4, 0, 0, 0, 0, 0, 0, marios_wing_cap_skinned_001_mesh),
		GEO_DISPLAY_LIST(0, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, marios_wing_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
