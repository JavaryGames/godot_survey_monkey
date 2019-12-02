//
//  GodotSurveyMonkey.h
//
//  Created by Vasiliy on 13.05.19.
//
//

#ifndef GodotSurveyMonkey_h
#define GodotSurveyMonkey_h


#include "core/reference.h"
 
class GodotSurveyMonkey : public Reference {
    GDCLASS(GodotSurveyMonkey, Reference);

    static void _bind_methods();

public:
    GodotSurveyMonkey();
    ~GodotSurveyMonkey();

    void showSurvey(const String& surveyHash);
};

#endif /* GodotSurveyMonkey_h */
