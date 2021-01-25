import javax.swing.*;
import java.awt.*;


public class Gris extends Color {

	public Gris (int rgb){
		super(rgb, rgb, rgb);
	}

	public static void main (String [] args){
		Gris gris = new Gris(100);
		JFrame fenetre = new JFrame();

		fenetre.setSize(500,200);
		fenetre.setLocation(0,0);

		fenetre.getContentPane().setBackground(gris); 


		fenetre.setVisible(true);
	}
	

}