import javax.swing.*;
import java.awt.*;
 import java.applet.Applet;



public class Boutons extends JFrame {

	public Boutons () {

		JFrame fenetre = new JFrame ();
		fenetre.setSize(500,500);

		JPanel conteneur = new JPanel ();

		GridBagConstraints gbc = new GridBagConstraints();
		GridBagLayout gridbag = new GridBagLayout();
		conteneur.setLayout (gridbag);
		


		JButton un = new JButton("1");
		gbc.gridx = 0;      // la plage de cellules commence à la première colonne
		gbc.gridy = 0;      // la plage de cellules commence à la deuxième ligne
		gbc.gridwidth = 1;  // la plage de cellules englobe deux colonnes
		gbc.gridheight = 1; // la plage de cellules englobe une seule ligne
		//gbc.fill = GridBagConstraints.NONE;     // n'occupe pas tout l'espace de la plage
		//gbc.anchor = GridBagConstraints.CENTER; // se place au centre de la plage
		gbc.weightx = 1.0;  // souhaite plus de largeur si possible
		gbc.weighty = 0.0;  // n'a pas besoin de hauteur supplémentaire
		gbc.insets = new Insets(5, 5, 5, 5);    // laisse 5 pixels de vide autour du composant
		un.setPreferredSize(new Dimension(100, 50));
		conteneur.add(un, gbc);

		JButton deux = new JButton ("2");
		gbc.gridx = 2;     
		gbc.gridy = 1;     
		gbc.gridwidth = 2;  
		gbc.gridheight = 2; 
		gbc.fill = GridBagConstraints.NONE;    
		gbc.anchor = GridBagConstraints.CENTER; 
		gbc.weightx = 1.0; 
		gbc.weighty = 0.0; 
		gbc.insets = new Insets(5, 5, 5, 5);  
		conteneur.add(deux, gbc);

		JButton trois = new JButton ("3");
		gbc.gridx = 1;     
		gbc.gridy = 2;     
		gbc.gridwidth = 2;  
		gbc.gridheight = 2; 
		gbc.fill = GridBagConstraints.NONE;    
		gbc.anchor = GridBagConstraints.CENTER; 
		gbc.weightx = 1.0; 
		gbc.weighty = 0.0; 
		gbc.insets = new Insets(5, 5, 5, 5);  
		conteneur.add(trois, gbc);


		fenetre.add(conteneur);
		fenetre.setVisible (true);

	}
	

	
}