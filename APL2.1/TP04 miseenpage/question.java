import javax.swing.*;
import java.awt.*;

/**
* @version 1.1 
* @author Shana Lefevre AND Max DUCOUDRE
*/

public class question {
	public static void main(String[] args) {
			
		// creation de la fenetre
		JFrame fenetre = new JFrame();
		fenetre.setSize(400,200);

		Dimension dim = new Dimension (250, 185);
		fenetre.setMinimumSize (dim);
			
		GridLayout gestionnaire = new GridLayout(3, 1);
		fenetre.setLayout(gestionnaire);
					
		JLabel quest = new JLabel("Aimez-vous les chiens?");
		//placement vertical du texte
		quest.setSize(200,400);
		quest.setHorizontalAlignment(JLabel.CENTER);


		JPanel panneau = new JPanel();
		//création des boutons
		JButton oui = new JButton("OUI");
		panneau.add(oui);
		JButton non = new JButton("NON");
		panneau.add(non);
		JButton nspp = new JButton("NSPP");
		panneau.add(nspp);

		JPanel panel = new JPanel ();
		panel.setLayout (new BorderLayout () );
		panel.add (panneau, BorderLayout.CENTER);
		panel.add  (quest, BorderLayout.NORTH);
		fenetre.add (new JLabel ("") );
		fenetre.add (panel);

		
		fenetre.setVisible(true);
		
	}
}
