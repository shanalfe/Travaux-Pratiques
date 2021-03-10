import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
*@version 1.0
*@author Shana LEFEVRE
* utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
* Création d'une classe Fond qui permet la création d'un panneau pour les couleurs
* Method summary booleen equals : equals (Object obj)
* ActionEvent décrit la source et les circonstances de l'évènement
* Method summary string getActionCommand () : 
*	renvoie le texte du bouton qui est nommé dans Main
*/


public class Fond implements ActionListener {

	private JPanel pan;

	public Fond (JPanel panel) {
		this.pan = panel;
	}	

	/*--- Création de l'évènement ---*/

	public void actionPerformed(ActionEvent e){
			
		String action = e.getActionCommand();
	
		if(action.equals("Cyan")){
			pan.setBackground(Color.CYAN);
		}

		else if(action.equals("Jaune")){
			pan.setBackground(Color.YELLOW);
		}

		else if (action.equals("Magenta")){
			pan.setBackground(Color.MAGENTA);
		}

	}

}