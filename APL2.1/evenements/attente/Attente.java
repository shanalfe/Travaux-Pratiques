import javax.swing.*;
import java.awt.*;


public class Attente {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(500,500);
		fenetre.setLocation(0,0);



		Cercle dessin = new Cercle();
		

		JPanel panneau = new JPanel();
		panneau.setBackground(Color.GREEN);


		panneau.add(dessin, BorderLayout.CENTER);

		fenetre.add(panneau);

		fenetre.setVisible(true);


	}
}
