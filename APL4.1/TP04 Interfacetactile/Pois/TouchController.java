package com.example.myapplication;

import android.graphics.Paint;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/**
 * Controller
 */
public class TouchController implements View.OnTouchListener {

    private PoisModel pm;
    private TouchView view;

    /**
     * Constructor
     * @param view
     * @param motionEvent
     * @return
     */
    public TouchController(PoisModel p, TouchView v) {
        this.pm = p;
        this.view = v;
    }

    /**
     * Méthode onTouch
     * @param view
     * @param motionEvent
     * @return
     */
    @Override
    public boolean onTouch(View view, MotionEvent motionEvent) {
        float x, y;
        String message = "";

        x = motionEvent.getX(0);
        y = motionEvent.getY(0);

       switch (motionEvent.getAction()) {
           case MotionEvent.ACTION_DOWN:
               message = "ACTION_DOWN";
               pm.SetCoord(x,y);
               break;
           case MotionEvent.ACTION_UP:
               message = "ACTION_UP";
               break;
           case MotionEvent.ACTION_MOVE:
               message = "ACTION_MOVE";
               message = "ACTION_MOVE";
               break;
       }

       view.invalidate();

        return true;
    }


}

