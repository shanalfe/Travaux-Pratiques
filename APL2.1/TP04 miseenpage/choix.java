import javax.swing.*;
import java.awt.*;

/**
* @version 1.1 
* @author Shana Lefèvre
*/


public class choix {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();

		Dimension dim = new Dimension (200,200);

		fenetre.setSize(300,300);
		fenetre.setLocation(100,100);

		fenetre.setMinimumSize (dim);
		fenetre.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);

		JPanel panneau = new JPanel();
		/*Empile les élément du panneau avec boxlayout*/
		
		panneau.setLayout (new BoxLayout (panneau, BoxLayout.PAGE_AXIS));

		//création et ajout au group de boutton
		ButtonGroup classe = new ButtonGroup();	
		

		//création des differents bouttons
		JRadioButton g = new JRadioButton("Gryffondor");		
		JRadioButton sdl = new JRadioButton("Serdaigle");			
		JRadioButton spd = new JRadioButton("Serpentard");
		JRadioButton p = new JRadioButton ("Poufsouffle");
	
		/*Ajout des boutons à la classe*/
		classe.add(g);
		classe.add(sdl);
		classe.add(spd);
		classe.add (p);

		/*Ajout des boutons au panneau*/
		panneau.add(g);
		panneau.add(sdl);
		panneau.add(spd);
		panneau.add (p);
		
		fenetre.add(panneau, BorderLayout.CENTER);	
		fenetre.setVisible(true);
	}
}