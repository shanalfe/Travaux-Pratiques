/**
 * @version 3 mars 2020
 * @author Shana LEFEVRE
 */

import javax.swing.JOptionPane;

public class Test {
	public static void main(String[] args) {
		
		Vehicule v; /* Appel de l'interface */
		Object[] choix = {"Voiture", "Moto"}; /* Appel de classe abstract */

		int reponse = JOptionPane.showOptionDialog(null, "Quel v\u00E9hicule choisissez-vous ?", 
			"question",
			JOptionPane.DEFAULT_OPTION,
			JOptionPane.QUESTION_MESSAGE,
			null, 
			choix,
			null );

		if (reponse == 0)
			v = new Voiture();
		else
			v = new Moto();

		System.out.println("Une " + v.sorte() + " poss\u00E8de " +v.nbRoues()+ " roues.");
	}
}