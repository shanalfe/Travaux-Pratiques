/**
* @version 1.1 
* @author Shana Lefèvre
*/

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JComponent;
import java.awt.Graphics;

public class Fenetre extends JFrame {
	
	/**
	* Classe Fenetre pour la création de la fenetre ainsi que son aspect
	*/

	public Fenetre () {

		/*--- Déclaration des variables ---*/
		int i = 0;

		this.setResizable (false);
		this.setLocation (200,200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Cercle draw = new Cercle();
		JPanel panneau = new JPanel ();
		panneau.addMouseWheelListener (new ControllerMouse (draw));
		panneau.add(draw, BorderLayout.CENTER);
		this.add(panneau);
		this.pack();
	}

}