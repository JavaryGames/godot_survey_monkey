# AppsFlyer module for [Godot Game Engine](http://godotengine.org/) (for Android  and iOS).

## Install

Edit your `engine.cfg` and add this line:
```
[android]

modules="org/godotengine/godot/GodotAppsFlyer"
```

## Use


```gdscript
if(Globals.has_singleton("GodotAppsFlyer")):
	instance = Globals.get_singleton("GodotAppsFlyer")
	instance.init("key", "app_id")
	instance.track_event("event", {"param1": 42})
```
