/**
* @version 1.1 5 mars 2021
* @author Shana Lefevre
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


		/*--- Création des boutons ---*/
		JButton cyan = new JButton("Cyan");
		JButton jaune = new JButton("Jaune");
		JButton magenta = new JButton("Magenta");


		JPanel panneau = new JPanel();

		/*--- Appel de la classe Fond ---*/
		Fond a = new Fond(panneau);

		panneau.add(cyan);
		panneau.add(jaune);
		panneau.add(magenta);

		fenetre.add(panneau, BorderLayout.CENTER);
		
		/*--- Ajout des actions ---*/
		cyan.addActionListener(a);
		jaune.addActionListener(a);
		magenta.addActionListener(a);


		fenetre.setVisible(true);

	}
}