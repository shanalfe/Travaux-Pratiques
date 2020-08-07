import javax.swing.*;
import java.awt.*;
import javax.swing.JPanel;
import java.awt.GridLayout;
import javax.swing.JFrame;


public class damier{
	public static void main(String[] args) {
		

		JFrame windows = new JFrame();

		windows.setSize(400,400);
		windows.setLocation(0,0);
		

		JPanel jeu = new JPanel();

		GridLayout carre = new GridLayout (3,3,0,0);



		
		windows.add(jeu);

	

		// affichzgr de la fenetre
		windows.setVisible(true);
	}
}