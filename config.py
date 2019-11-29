def can_build(env, platform):
    if platform == "iphone":
        return True
    return False

def configure(env):
    if (env['platform'] == 'iphone'):
        env.Append(FRAMEWORKPATH=['ios/lib'])
        env.Append(LINKFLAGS=['-ObjC', '-framework','SurveyMonkeyLib'])

