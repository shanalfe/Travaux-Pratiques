package com.example.myapplication;

/**
 * Modèle
 */
public class PoisModel {
    private float x0;
    private float y0;

    public void SetCoord (float x, float y) {
        x0 = x;
        y0 = y;
    }


    public float getX() {
        return x0;
    }

    public float getY() {
        return y0;
    }


}

