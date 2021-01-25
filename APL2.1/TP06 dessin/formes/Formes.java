import javax.swing.*;
import java.awt.*;


public class Formes {


	//pas besoin d'un import car carré est dans le même repertoire


	public static void main(String[] args) {
		

		
		JFrame fenetre = new JFrame ();
		fenetre.setSize(800,450);
		fenetre.setLocation(0,0);


		//création de la classe carré ; first est la variable
		carre first = new carre();

		
		//ajout de la classe carré à la fenetre
		fenetre.add(first, BorderLayout.CENTER);

		fenetre.setVisible(true);


	}
}