import javax.swing.*;
import java.awt.*;




public class accueil{
	public static void main(String[] args) {
		
		
		// Reglage fenetre
		JFrame fenetre = new JFrame();
		fenetre.setSize(600,400);
		fenetre.setLocation(0,0);		


		//création d'un panneau pour fond de couleur
		JPanel fond = new JPanel();


		//classe style
		style figure = new style();



		//fond couleur
		fond.setBackground(Color.CYAN);

		
		//ajout à la fenetre
		fenetre.add(fond);
		fenetre.add(figure, BorderLayout.CENTER);




		fenetre.setVisible(true);
	}
}
