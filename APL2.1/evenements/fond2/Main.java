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
		JCheckBox cyan = new JCheckBox("Cyan");
		JCheckBox jaune = new JCheckBox("Jaune");
		JCheckBox magenta = new JCheckBox("Magenta");


		//création d'un panneau pour les boutons
		JPanel panneau = new JPanel();

		//appellation de du fichier Fond puis ajout de panneau au fond
		Fond action = new Fond(panneau);

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