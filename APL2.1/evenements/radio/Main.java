import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(500,500);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


		//création des différents boutons
		JRadioButton cyan = new JRadioButton("Cyan");
		JRadioButton jaune = new JRadioButton("Jaune");
		JRadioButton magenta = new JRadioButton("Magenta");


		//création d'un panneau pour les boutons
		JPanel panneau = new JPanel();

		//appellation de du fichier Fond puis ajout de panneau au fond
		Radio action = new Radio(panneau);

		//ajout des boutons sur le panneau
		panneau.add(cyan);
		panneau.add(jaune);
		panneau.add(magenta);


		//ajout à la fenetre
		fenetre.add(panneau, BorderLayout.CENTER);
		//ajoute des actions
		cyan.addActionListener(action);
		jaune.addActionListener(action);
		magenta.addActionListener(action);


		fenetre.setVisible(true);

	}
}
