import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
*
*/


public class Combinaison implements ItemListener {

	private JPanel panneau;

	public Combinaison(JPanel panel) {
		this.panneau = panel;
	}	

	/*--- Création de l'évènement ---*/

	public void itemStateChanged (ItemEvent e) {

		int status = e.getStateChange ();


		if (status == ItemEvent.SELECTED) {

		}
			
	
	
		if(e.getsource() == cyan ) {
			panneau.setBackground(Color.CYAN);
		}



		/*
		else if(action.equals("Jaune")){
			panneau.setBackground(Color.YELLOW);
		}*/


	}

}

