package com.example.dessin;
/*Imports */
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.View;
import android.view.contentcapture.ContentCaptureSession;
import android.graphics.Paint;


/*Class Vue */
public class Vue extends View {

    /*Déclaration des variables*/
    private Paint paint;
    private Resources res;
    private Bitmap img;

    /*Constructeur*/
   public Vue (Context context, AttributeSet attrs) {
      super(context, attrs);
       this.paint = new Paint(Paint.FAKE_BOLD_TEXT_FLAG);
       this.res = this.getResources();
       this.img = BitmapFactory.decodeResource(this.res, R.drawable.cercles);

   }

   /*Méthode création des déssins*/
    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        paint.setColor(Color.BLUE);
        canvas.drawRect(100, 70, 300, 200, this.paint);

        paint.setColor(Color.YELLOW);
        canvas.drawCircle(600, 100, 35, this.paint);

        canvas.drawBitmap(this.img, 100,300, this.paint);

        paint.setColor(Color.BLACK);
        canvas.drawText("Ceci est un test", 100,460, this.paint);
        paint.setTextSize(60);




    }


}
