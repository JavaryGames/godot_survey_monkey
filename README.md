# AppsFlyer module for [Godot Game Engine](http://godotengine.org/) (for Android  and iOS).

## Install

Edit your `engine.cfg` and add this line:
```
[android]

modules="org/godotengine/godot/GodotAppsFlyer"
```

## Use


```gdscript
if(Engine.has_singleton("GodotAppsFlyer")):
	apps_flyer = Engine.get_singleton("GodotAppsFlyer")
	apps_flyer.init("key", "app_id")
	apps_flyer.track_event("event", {"param1": 42})
```
