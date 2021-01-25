import javax.swing.*;
import java.awt.*;

public class rose2{

	public static void main(String[] args) {

		// création de la fenetre
		JFrame page = new JFrame("Rose");
		//besoin pour disposer le texte 
		Dimension size = new Dimension(200,200);

		// gridlayout divise l'espace dispo en ligne et colonne
		GridLayout grid = new GridLayout(3,3);// 3 car: 3 parties
		page.setLayout(grid); // ajout


		// taille de la fenetre
		page.setSize(500,500);
		page.setMinimumSize(size);
		page.setLocation(200,200);
		page.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

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
		page.add(mystral);
		page.add(tramontane);
		page.add(grec);
		page.add(ponant);
		page.add(blanc);
		page.add(levant);
		page.add(libeccio);
		page.add(marin);
		page.add(sirocco);


		// affichage de la fenetre
		page.setVisible(true);
	}
}