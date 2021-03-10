/**
* @version 1.1 
* @author Shana Lefèvre
* Classe Fenetre qui gère la création de la fenetre
*/

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JComponent;
import java.awt.Graphics;

public class Fenetre extends JFrame {
	
	/*Création de la méthode*/
	
	public Fenetre () {

		this.setResizable (false);
		this.setLocation (200,200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panneau = new JPanel ();
		panneau.setBackground (Color.BLUE);
		
		Cercle draw = new Cercle();
		/**
		Ajout de l'évenement Mouse et de sa classe au panneau ainsi 
		que la partie graphique de la classe Cercle à controlleur
		*/
		panneau.addMouseWheelListener (new ControllerMouse (draw));
		panneau.add(draw, BorderLayout.CENTER);

		this.add(panneau);

		this.pack();
	}

}