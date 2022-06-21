package com.example.tp03evenements;

import android.view.View;
import android.widget.ImageView;

public class Control implements View.OnClickListener {
    
    private ImageView img_view;
    private int map;
    
    @Override
    public void onClick(View view) {
        this.img_view.setImageResource (map);
    }
    
    public OnClickListener (int map_p, ImageView img_view_p) {
        this.img_view = img_view_p;
        this.map = map_p;
    }
}

