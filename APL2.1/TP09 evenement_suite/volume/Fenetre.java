/**
* @version 1.1 
* @author Shana Lefèvre
*/

import javax.swing.*;
import java.awt.event.*;

public class Fenetre extends JFrame {
	

	public Fenetre () {

		/**
		* Création de la fentre et ajout du controller
		*/

		super ("Volume");
		this.setSize (1000,300);
		this.setLocation (200,200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setVisible (true);

		ControllerMouse control = new ControllerMouse (this);
		this.addMouseListener (control);


	}

}