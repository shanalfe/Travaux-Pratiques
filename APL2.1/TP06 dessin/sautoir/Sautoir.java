import javax.swing.*;
import java.awt.*;

/**
* @version 2.1 12 février 2021
* @author Shana Lefevre
*/


public class Sautoir {


	public static void main(String[] args) {

		int i=0;
		
		JFrame fenetre = new JFrame ();
		fenetre.setSize(855,530);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);

		fenetre.setLayout (new GridLayout (5,5));
	
		for (i = 0; i<25; i++){
			fenetre.add(new Sablier() );
		}

		fenetre.setVisible(true);

	}
}
