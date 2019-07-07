package com.gl.serviceskeleton;

import android.util.Log;

public class ServiceSkeletonImpl extends IServiceSkeleton.Stub {

    private static final String LOG_TAG = "MyServiceImpl";

    private int mValue;

    public int getValue() {
        Log.d(LOG_TAG, "-> getValue()");
        return mValue;
    }

    public void setValue(int newValue) {
        Log.d(LOG_TAG, "-> setValue()");
        mValue = newValue;
    }
}
