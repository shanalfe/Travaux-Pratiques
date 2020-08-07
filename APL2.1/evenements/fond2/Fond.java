import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


//utilisation de implements car on hérite d'une classe (main) mais on réalise une interface
public class Fond implements ActionListener {


	//déclaration PV d'un paneau
	private JPanel panneau;

		//création de public Fond, création d'un panneau pour les couleurs
		public Fond(JPanel panel) {
			this.panneau = panel;

		}	

	// création de l'évenement

		public void actionPerformed(ActionEvent evenement){
			//variable
			String action = evenement.getActionCommand();


			//condition pour les couleurs
			//on utilise equals pour booleen
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
