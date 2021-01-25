// on en a besoin car on utilise JFrame ect..
import javax.swing.*;
import java.awt.*;

public class sirocco {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();


		// configuration de la fenêtre 

		//config taille de la fenêtre
		fenetre.setSize(500,300);	// long : 500; hauteur 300

		// position de la fenetre sur l'écran en haut à gauche
		fenetre.setLocation(0,0); 	// position horizontale; position verticale


		// création de texte
		JLabel txt = new JLabel("Sirocco");

		//on veut le texte en bas à droite
		// config du texte a droit
		txt.setHorizontalAlignment(JLabel.RIGHT); // affichage horizontal

		//ajout affichage en bas 
		fenetre.add(txt, BorderLayout.SOUTH); // affichage dans la zone souahitée -- NORTH, WEST, CENTER, EAST, SOUTH
		
		

		// affichage de la fenêtre 
		fenetre.setVisible(true);
	}
}