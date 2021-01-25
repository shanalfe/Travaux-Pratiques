import javax.swing.*;
import java.awt.*;
import javax.swing.JButton;
import javax.swing.ButtonGroup;



public class choix {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();

		JPanel panneau = new JPanel();


		fenetre.setSize(800,400);
		fenetre.setLocation(0,0);

		//création des differents bouttons
		JButton a = new JButton("Gryffondor");		
		JButton b = new JButton("Serdaigle");			
		JButton c = new JButton("Serpentard");
	
		//création et ajout au group de boutton
		ButtonGroup classe = new ButtonGroup();		
		classe.add(a);
		classe.add(b);
		classe.add(c);

		//ajout au panneau
		panneau.add(a, BorderLayout.CENTER);
		panneau.add(b, BorderLayout.CENTER);
		panneau.add(c, BorderLayout.CENTER);

		
		fenetre.add(panneau, BorderLayout.CENTER);	
		fenetre.setVisible(true);
	}
}