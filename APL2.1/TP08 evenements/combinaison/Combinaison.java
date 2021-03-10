import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
*
*Permet de voir la derniere case cochée
*if (source == magenta){
			panneau.setBackground(Color.MAGENTA);
		}
*/


public class Combinaison implements ItemListener {

	private JPanel panneau;
	private JCheckBox cyan;
	private JCheckBox jaune;
	private JCheckBox magenta;

	public Combinaison(JPanel panel, JCheckBox cy, JCheckBox ja, JCheckBox ma) {
		this.panneau = panel;
		this.cyan = cy;
		this.jaune = ja;
		this.magenta = ma;
	}

	/*--- Création de l'évènement ---*/

	public void itemStateChanged (ItemEvent e) {

		//int status = e.getStateChange ();		

		/*récupérer la référence à cette case */
		JCheckBox source = (JCheckBox) e.getSource();

		if (jaune.isSelected() ){
			panneau.setBackground(Color.YELLOW);
		}

		if (magenta.isSelected() ){
			panneau.setBackground(Color.MAGENTA);
		}

		if (cyan.isSelected() ){
			panneau.setBackground(Color.CYAN);
		}

		if ( (cyan.isSelected() ) && (jaune.isSelected() ) && (magenta.isSelected() ) ){
			panneau.setBackground(Color.BLACK);
		}

	}

}

