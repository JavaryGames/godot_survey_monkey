#include "register_types.h"
#include "core/class_db.h"
#include "core/engine.h"
#ifdef IPHONE_ENABLED
#include "ios/GodotAppsFlyer.h"
#endif

void register_godot_appsflyer_types() {
	#ifdef IPHONE_ENABLED
	Engine::get_singleton()->add_singleton(Engine::Singleton("GodotAppsFlyer", memnew(GodotAppsFlyer)));
	#endif
}

void unregister_godot_appsflyer_types() {
}
