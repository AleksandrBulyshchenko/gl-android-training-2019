package com.gl.serviceskeleton;

import android.os.RemoteException;
import android.util.Log;

import com.gl.serviceskeleton.IServiceSkeleton;

public class ServiceSkeletonImpl extends IServiceSkeleton.Stub {

    private static final String LOG_TAG = "MyServiceImpl";

    private int mValue;

    public void setValue(int newValue) {
        Log.d(LOG_TAG, "-> setValue()");
        mValue = newValue;
    }

    public int getValue(){
        Log.d(LOG_TAG, "-> getValue()");
        return mValue;
    }
}
