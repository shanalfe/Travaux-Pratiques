import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.GridLayout;



/**
* Class Fenetre qui est la vue 
*/
public class Fenetre {

	public Fenetre () {

		//private JList<String> liste_couleur;

		JFrame window = new JFrame ();
		window.setSize(500, 300);  
		GridLayout grid = new GridLayout (1,2);
	

		JPanel panneau = new JPanel ();
		panneau.setBackground(Color.BLACK);
		panneau.setLayout(grid);
		
	
		
		window.add(panneau);
		window.setVisible(true);
		
	}

}