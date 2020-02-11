def can_build(env, platform):
    return platform == "android" or platform == "iphone"

def configure(env):
    if (env['platform'] == 'iphone'):
        env.Append(FRAMEWORKPATH=['ios/lib'])
        env.Append(LINKFLAGS=['-ObjC', '-framework','SurveyMonkeyLib'])
    elif env['platform'] == 'android':
        return
        env.android_add_dependency("implementation 'com.surveymonkey:surveymonkey-android-sdk:2.0.0'")
        env.android_appattributes_chunk += ' tools:replace="android:allowBackup" '
        env.android_add_default_config("minSdkVersion 21")
        env.android_add_java_dir("android")
