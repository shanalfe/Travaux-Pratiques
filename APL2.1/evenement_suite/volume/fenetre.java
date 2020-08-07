import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class fenetre {

	public static void main(String[] args) {

		// création d'une fenetre
		JFrame fenetre = new JFrame();
		fenetre.setSize(1000,200);
		fenetre.setLocation(0,0);



		// création d'une grille
		GridLayout grille = new GridLayout(1,10);
		//affichage
		fenetre.setLayout(grille);


		//boucle création de 10 cercles
		for (int i=0; i<=10;i++)
			fenetre.add(new Volume());


		Couleur pan = new Couleur();
		Commande action = new Commande (pan);


		fenetre.add(panneau, BorderLayout.CENTER);
		panneau.addActionListener(action);

	



		fenetre.setVisible(true);
	}
}