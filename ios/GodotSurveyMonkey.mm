
#import <Foundation/Foundation.h>
#import "./GodotSurveyMonkey.h"
#import <SurveyMonkeyLib/SurveyMonkeyTracker.h>


GodotSurveyMonkey::GodotSurveyMonkey()
{
}

GodotSurveyMonkey::~GodotSurveyMonkey()
{
}
//@property (nonatomic, strong) SMFeedbackViewController * feedbackController;


void GodotSurveyMonkey::showSurvey(const String& surveyHash)
{
    NSString *NSSurveyHash = [NSString stringWithUTF8String:surveyHash.utf8().get_data()];
    SMFeedbackViewController * feedbackController;

    _feedbackController = [[SMFeedbackViewController alloc] initWithSurvey:{NSSurveyHash}];
    _feedbackController.delegate = self;

    [_feedbackController presentFromViewController:self animated:YES completion:nil];
}

void GodotSurveyMonkey::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("showSurvey", "surveyHash"), &GodotSurveyMonkey::showSurvey);
}
