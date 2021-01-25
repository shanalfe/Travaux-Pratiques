import javax.swing.*;
import java.awt.*;
import java.awt.Dimension;
import javax.swing.JLabel;

public class question {
	public static void main(String[] args) {
			
		// creation de la fenetre
		JFrame fenetre = new JFrame();
		fenetre.setSize(400,200);
		
		// Creation du panneau

		JPanel panneau = new JPanel();
		
		JLabel quest = new JLabel("Aimez-vous les chiens?");
		//placement vertical du texte
		quest.setSize(200,400);
		//permet l'alignement du texte (non modifiable)
		quest.setHorizontalAlignment(JLabel.CENTER);

		// ajout de la question a la fenetre
		fenetre.add(quest, BorderLayout.CENTER); 

		//création des boutons
		JButton oui = new JButton("OUI");
		panneau.add(oui);

		JButton non = new JButton("NON");
		panneau.add(non);

		JButton nspp = new JButton("NSPP");
		panneau.add(nspp);


		// ajoute du panneau à la fenetre, au sud de la fenetre
		fenetre.add(panneau, BorderLayout.SOUTH);
		// affichage de la fenetre
		fenetre.setVisible(true);
	}
}