/**
* @version 1.1 
* @author Shana Lefèvre
*/

import javax.swing.*;
import java.awt.*;


public class contingences {
	
	public static void main(String[] args) {
	

		JFrame windows = new JFrame();
		windows.setSize (800, 400);
		windows.setLocation(0,0);


		/*--- champ haut de fenetre ---*/
		JTextArea divers = new JTextArea("Ecrire ici"); // ecrire plusieurs lignes
		JScrollPane scroll = new JScrollPane (divers); // ajout de divers à scroll
		/*VERTICAL_SCROLLBAR_AS_NEEDED
		VERTICAL_SCROLLBAR_NEVER*/
		scroll.setVerticalScrollBarPolicy (JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);
		windows.add (scroll, BorderLayout.CENTER);	// ajout de scroll a la fenetre
		divers.setLineWrap (true); //retour a la ligne
		/*couleurs*/
		divers.setBackground(Color.BLACK); //fond
		divers.setForeground(Color.GREEN); //police
		

		/*--- champ de texte en bas de la fenetre ---*/
		JTextField texte = new JTextField("Ecrire ici"); //Ecrire une ligne
		texte.setHorizontalAlignment(JTextField.CENTER); //texte aligné au centre
		windows.add(texte, BorderLayout.SOUTH);
		/*couleurs*/
		texte.setBackground(Color.GRAY); 	// couleur fond
		texte.setForeground(Color.GREEN); 	//couleur police
		


		windows.setVisible(true);

	}
}