import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
* Création d'une classe Fond qui permet la création d'un panneau pour les couleurs
* equal utilisé comme booleen
* ActionEvent décrit la source et les circonstances de l'évènement
* getActionCommand renvoie le texte du bouton qui est nommé dans Main
*/


public class Fond implements ActionListener {

	private JPanel panneau;

	public Fond(JPanel panel) {
		this.panneau = panel;
	}	

	/*--- Création de l'évènement ---*/

	public void actionPerformed(ActionEvent e){
			
		String action = e.getActionCommand();
	
		if(action.equals("Cyan")){
			panneau.setBackground(Color.CYAN);
		}

		else if(action.equals("Jaune")){
			panneau.setBackground(Color.YELLOW);
		}

		else if (action.equals("Magenta")){
			panneau.setBackground(Color.MAGENTA);
		}

	}

}