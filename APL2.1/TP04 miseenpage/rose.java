import javax.swing.*;
import java.awt.*;


public class rose {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame("Rose");
		Dimension size = new Dimension(200,200);

		GridLayout grille = new GridLayout();
		fenetre.setLayout(grille);

		fenetre.setSize(400,400);
		fenetre.setMinimumSize(size);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		//création d'un panneau
		JPanel panneau = new JPanel();


		// création du texte


		JLabel mystral = new JLabel("Mystral");
		JLabel tramontane = new JLabel ("Tramontane");
		JLabel ponent = new JLabel ("Ponent");
		JLabel grec = new JLabel ("Grec");



		mystral.setHorizontalAlignment(JLabel.LEFT);
		mystral.setVerticalAlignment(JLabel.TOP);



		tramontane.setHorizontalAlignment(JLabel.CENTER);
		tramontane.setVerticalAlignment(JLabel.TOP);



		ponent.setHorizontalAlignment(JLabel.LEFT);
		ponent.setVerticalAlignment(JLabel.CENTER);



		grec.setHorizontalAlignment(JLabel.RIGHT);
		grec.setVerticalAlignment(JLabel.TOP);


		panneau.add(mystral); 
		panneau.add(tramontane);
		panneau.add(grec);
		panneau.add(ponent);

		fenetre.add(panneau);

		fenetre.setVisible(true);
		
	}
}