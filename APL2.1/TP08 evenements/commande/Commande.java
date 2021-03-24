/**
*@version 2.0
*@author Shana LEFEVRE
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
*
* Permet de voir la derniere case cochée
* if (source == magenta){
*			panneau.setBackground(Color.MAGENTA);
*		}
*
* SELECTED : public static final int SELECTED
*/

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Commande implements ActionListener {

	private JPanel panneau;
	private JButton valider
	private JTextField choix;

	public Commande (JPanel panel, JButton val, JTextField ch) {
		this.panneau = panel;
		this.valider = val;
		this.choix = ch;
	}

	/*--- Création de l'évènement ---*/

	public void actionPerformed (ActionEvent e){


		if (source == choix){
			
		}
	}

	

}

