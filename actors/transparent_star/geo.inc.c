#include "src/game/envfx_snow.h"

const GeoLayout transparent_star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(5, transparent_star_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, transparent_star_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, transparent_star_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
