/**
* @version 1.1 
* @author Shana Lefèvre
* 
*/


import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {

	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(500,500);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JTextField choix = new JTextField();
		JButton valider = new JButton ("Valider");

		JPanel panneau = new JPanel();
		
		panneau.add(choix);
		panneau.add (valider);

		fenetre.add(panneau, BorderLayout.CENTER);

		Commande a = new Commande(panneau, choix, valider);
	
		choix.addTextListener (a);
		valider.addActionListener (a);


		fenetre.setVisible(true);

	}
}