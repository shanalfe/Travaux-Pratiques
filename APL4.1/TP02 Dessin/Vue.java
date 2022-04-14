package com.example.dessin;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.View;
import android.view.contentcapture.ContentCaptureSession;
import android.graphics.Paint;



public class Vue extends View {

    private Paint paint;

   public Vue (Context context, AttributeSet attrs) {
      super(context, attrs);
       this.paint = new Paint(Paint.FAKE_BOLD_TEXT_FLAG);

   }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawRect(100, 70, 300, 200, this.paint);
        paint.setColor(Color.BLACK);




    }


}
