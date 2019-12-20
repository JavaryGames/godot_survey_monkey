package org.godotengine.godot;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.util.Log;
import android.support.annotation.NonNull;

import com.surveymonkey.surveymonkeyandroidsdk.SurveyMonkey;
import com.surveymonkey.surveymonkeyandroidsdk.utils.SMError;

public class GodotSurveyMonkey extends Godot.SingletonBase {
    private Activity activity = null;
    private Context context;

    private SurveyMonkey sdkInstance = new SurveyMonkey();
    private int request_code = 0;


    static public Godot.SingletonBase initialize(Activity p_activity) {
        return new GodotSurveyMonkey(p_activity);
    }


    public GodotSurveyMonkey(Activity p_activity) {
        registerClass("GodotSurveyMonkey", new String[]{
            "showSurvey"
        });

        activity = p_activity;
        context = activity.getApplicationContext();
    }


    public void showSurvey(String surveyHash){
        sdkInstance.onStart(this.activity, "Mathy Survey", request_code, surveyHash);
        sdkInstance.startSMFeedbackActivityForResult(this.activity, request_code, surveyHash);
    }
}