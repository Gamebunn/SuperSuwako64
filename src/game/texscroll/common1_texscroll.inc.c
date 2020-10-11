#include "actors/common1.h"
#include "actors/star/texscroll.inc.c"
#include "actors/transparent_star/texscroll.inc.c"
#include "actors/marios_wing_cap/texscroll.inc.c"
#include "actors/marios_cap/texscroll.inc.c"
void scroll_textures_common1() {
	scroll_actor_geo_star();

	scroll_actor_geo_transparent_star();

	scroll_actor_geo_marios_wing_cap();

	scroll_actor_geo_marios_cap();
}
