import javax.swing.*;
import java.awt.*;

/**
* @version 2.1 12 février 2021
* @author Shana Lefevre
*/


public class Formes {


	//pas besoin d'un import car carré est dans le même repertoire

	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame ();
		fenetre.setSize(800,450);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		
		//création de la classe carré ; first est la variable
		Carre first = new Carre();
		
		//ajout de la classe carré à la fenetre
		fenetre.add(first, BorderLayout.CENTER);

		fenetre.setVisible(true);


	}
}