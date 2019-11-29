//
//  GodotSurveyMonkey.h
//
//  Created by Vasiliy on 13.05.19.
//
//

#ifndef GodotSurveyMonkey_h
#define GodotSurveyMonkey_h


#import <SurveyMonkeyiOSSDK/SurveyMonkeyiOSSDK.h>
#include "core/object.h"
 
class GodotSurveyMonkey : public Object {
    GDCLASS(GodotSurveyMonkey, Object);

    static void _bind_methods();

public:
    GodotSurveyMonkey();
    ~GodotSurveyMonkey();

    void showSurvey(const String& surveyHash);
};

#endif /* GodotSurveyMonkey_h */
