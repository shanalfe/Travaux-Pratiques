import javax.swing.*;
import java.awt.*;

public class rose {

	public static void main(String[] args) {

		// création de la fenetre
		JFrame fenetre = new JFrame("Rose");
		//besoin pour disposer le texte 
		Dimension size = new Dimension(200,200);

		// gridlayout divise l'espace dispo en ligne et colonne
		GridLayout grid = new GridLayout(3,3);// 3 car: 3 parties
		fenetre.setLayout(grid); // ajout


		// taille de la fenetre
		fenetre.setSize(500,500);
		fenetre.setMinimumSize(size);
		fenetre.setLocation(200,200);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		// création du texte
		JLabel mystral = new JLabel("Mystral");
		JLabel tramontane = new JLabel("Tramontane");
		JLabel grec = new JLabel("Grec");
		JLabel ponant = new JLabel("Ponant");
		JLabel blanc = new JLabel();
		JLabel levant = new JLabel("Levant");
		JLabel libeccio = new JLabel("Libeccio");
		JLabel marin = new JLabel("Marin");
		JLabel sirocco = new JLabel("Sirocco");


		// configuration du texte:position ect..

		mystral.setHorizontalAlignment(JLabel.LEFT);
		mystral.setVerticalAlignment(JLabel.TOP);

		tramontane.setHorizontalAlignment(JLabel.CENTER);
		tramontane.setVerticalAlignment(JLabel.TOP);

		grec.setHorizontalAlignment(JLabel.RIGHT);
		grec.setVerticalAlignment(JLabel.TOP);

		ponant.setHorizontalAlignment(JLabel.LEFT);
		ponant.setVerticalAlignment(JLabel.CENTER);

		levant.setHorizontalAlignment(JLabel.RIGHT);
		levant.setVerticalAlignment(JLabel.CENTER);

		libeccio.setHorizontalAlignment(JLabel.LEFT);
		libeccio.setVerticalAlignment(JLabel.BOTTOM);

		marin.setHorizontalAlignment(JLabel.CENTER);
		marin.setVerticalAlignment(JLabel.BOTTOM);

		sirocco.setHorizontalAlignment(JLabel.RIGHT);
		sirocco.setVerticalAlignment(JLabel.BOTTOM);



		//ajout du text à l'application
		fenetre.add(mystral);
		fenetre.add(tramontane);
		fenetre.add(grec);
		fenetre.add(ponant);
		fenetre.add(blanc);
		fenetre.add(levant);
		fenetre.add(libeccio);
		fenetre.add(marin);
		fenetre.add(sirocco);


		// affichage de la fenetre
		fenetre.setVisible(true);
	}
}