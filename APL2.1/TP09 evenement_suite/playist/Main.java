import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Main {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(500,500);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel panneau = new JPanel ();

		JLabel adresse = new JLabel ("L'adresse - 47ter");
		JLabel terre = new JLabel ("La terre est ronde");
		JLabel before = new JLabel ("Before you go ");

		
		panneau.add (adresse);
		panneau.add (terre);
		panneau.add (before);

		fenetre.add (panneau);



		//affichage de la fenetre
		fenetre.setVisible(true);
	}
}
