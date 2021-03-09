import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
*
*/


public class Combinaison implements ItemListener {

	private JPanel panneau;
	private JCheckBox cyan;
	private JCheckBox jaune;
	private JCheckBox magenta;

	public Combinaison(JPanel panel) {
		this.panneau = panel;
	}	

	public Combinaison (JCheckBox cy){
		this.cyan = cy;
	}
	public Combinaison (JCheckBox ja){
		this.jaune = ja;
	}
	public Combinaison (JCheckBox ma){
		this.magenta = ma;
	}

	

	/*--- Création de l'évènement ---*/

	public void itemStateChanged (ItemEvent e) {

		//int status = e.getStateChange ();		

		/*récupérer la référence à cette case */
		JCheckBox source = (JCheckBox) e.getSource();

		/** Transtypage */
		

		
		/*Comparaison*/ 		
		if( source == cyan ) {
			panneau.setBackground(Color.CYAN);
		}

		if (source == jaune){
			panneau.setBackground(Color.YELLOW);
		}

		if (source == magenta){
			panneau.setBackground(Color.MAGENTA);
		}

		if ( (source == magenta) && (source == cyan) && (source == jaune) ){
			panneau.setBackground(Color.BLACK);
		}


	}

}

