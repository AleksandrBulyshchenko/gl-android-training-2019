package com.gl.serviceskeleton;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import android.view.View;
import android.widget.Button;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private static final String LOG_TAG = "MyApp";
    private IServiceSkeleton mService;
    private ServiceConnection mConnection = new ServiceConnection() {
        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            Log.d(LOG_TAG, "-> onServiceConnected()");
            mService = IServiceSkeleton.Stub.asInterface(iBinder);
            try {
                mService.setValue(777);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            Log.d(LOG_TAG, "-> onServiceDisconnected()");
            mService = null;
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.d(LOG_TAG, "-> onCreate()");
        Button button = findViewById(R.id.startSrv);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Log.d(LOG_TAG, "-> onClick()");
                startSrv();
            }
        });
    }

    private void startSrv() {
        Intent intent = new Intent(this, ServiceSkeleton.class);
        bindService(intent, mConnection, Context.BIND_AUTO_CREATE);

    }
}
