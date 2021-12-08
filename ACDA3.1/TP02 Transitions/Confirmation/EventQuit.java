import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


/**
* Class EventQuit qui gère les évenements de la fenêtre principale.
*/
public class EventQuit implements ActionListener {

	private JButton quit;



	public EventQuit(JButton q, JFrame f) {

		this.quit = q;
		
	}


	public void actionPerformed (ActionEvent e) {
		
		Object ae = e.getSource(); 

        if(ae == quit) {
        	System.out.println("quitter");
        	//fenetre.dispose();
        	//System.exit(0);
        	Choix c = new Choix ();
        }
	}

}