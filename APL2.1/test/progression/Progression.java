import javax.swing.*;
import java.awt.*;
import java.awt.Graphics;
import java.awt.Color;


public class Progression {
	public static void main(String[] args) {
		JFrame fenetre = new JFrame();
		fenetre.setSize(200,200);
		fenetre.setLocation(0,0);



		Style barre = new Style();

		barre.setBackground(Color.GREY);

		fenetre.add(barre);
		fenetre.setVisible(true);
		
	}
} 
