#include "register_types.h"
#include "core/class_db.h"
#include "core/engine.h"
#ifdef IPHONE_ENABLED
#include "ios/GodotSurveyMonkey.h"
#endif

void register_godot_survey_monkey_types() {
	#ifdef IPHONE_ENABLED
	Engine::get_singleton()->add_singleton(Engine::Singleton("GodotSurveyMonkey", memnew(GodotSurveyMonkey)));
	#endif
}

void unregister_godot_survey_monkey_types() {
}
