package com.example.myapplication;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.View;

import androidx.annotation.Nullable;

/***
 * Vue
 *
 */


public class TouchView extends View {

    private Paint paint;
    private PoisModel pm;


    public TouchView(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        this.pm = new PoisModel();
        TouchController touchController = new TouchController(pm, this);
        this.setOnTouchListener(touchController);
        this.paint = new Paint();
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        this.paint.setColor(Color.GRAY);
        canvas.drawCircle(pm.getX(), pm.getY(),100,paint);

    }


}

