package com.example.tp03evenements;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        //Récupération des id
        
        Button btt_left = this.findViewById(R.id.button_left);
        Button btt_right = this.findViewById(R.id.button_right);

        ImageView img_view = this.findViewById(R.id.toto);


        // Création des évenements
        btt_left.setOnClickListener(new Control (R.drawable.fleche_gauche, img_view) );
        btt_right.setOnClickListener(new Control (R.drawable.fleche_droite, img_view));



    }
}
