#import "app_delegate.h"

#import <Foundation/Foundation.h>
#import "./GodotSurveyMonkey.h"
#import <SurveyMonkeyiOSSDK/SurveyMonkeyiOSSDK.h>


GodotSurveyMonkey::GodotSurveyMonkey()
{
}

GodotSurveyMonkey::~GodotSurveyMonkey()
{
}

void GodotSurveyMonkey::showSurvey(const String& surveyHash)
{
    NSString *NSSurveyHash = [NSString stringWithUTF8String:surveyHash.utf8().get_data()];
    SMFeedbackViewController * _feedbackController;

    _feedbackController = [[SMFeedbackViewController alloc] initWithSurvey:{NSSurveyHash}];

    [_feedbackController presentFromViewController:[AppDelegate getViewController] animated:YES completion:nil];
}

void GodotSurveyMonkey::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("showSurvey", "surveyHash"), &GodotSurveyMonkey::showSurvey);
}
