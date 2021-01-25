import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Commande implements ActionListener{

	//déclaration des variables
	private JPanel panneau;


	public void mouseWeelMoved(MouseWeelEvent evenement){
		
		//création d'une variables nommée rotate

		int rotate = evenement.getWeelRotation();

		//condition
		if (rotate>0){
			setOff();
		}else if (rotate<0){
			setOn();
		}

	}


}
