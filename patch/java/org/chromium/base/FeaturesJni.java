package org.chromium.base;

public class FeaturesJni {
    public static FeaturesJni get() {
        return null;
    }

    public boolean getFieldTrialParamByFeatureAsBoolean(long featurePointer, String paramName, boolean defaultValue) {
        return false;
    }

    public String getFieldTrialParamByFeatureAsString(long featurePointer, String paramName) {
        return null;
    }

    public boolean isEnabled(long featurePointer) {
        return false;
    }
}
