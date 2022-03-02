import javax.swing.JFrame;
import java.awt.Dimension;


public class Fenetre extends JFrame {

	public Fenetre () {

		JFrame fenetre = new JFrame ();	
		fenetre.setPreferredSize(new Dimension(300, 200));
      	fenetre.setLocation(100,100);
      	fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      	fenetre.setVisible (true);
	}

}