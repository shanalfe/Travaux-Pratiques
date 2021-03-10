/**
Classe ControllerMouse qui gère l'evenement
Fait appel à la au méthode dwV et upV de la classe Cercle pour la condition
*/

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class ControllerMouse implements MouseWheelListener {

	Cercle d;

	public ControllerMouse (Cercle d){

		this.d = d;
	}


	public void mouseWheelMoved (MouseWheelEvent e){

		/*--- Condition si on scrol vers le haut ou vers le bas ---*/
		
		if (e.getWheelRotation() > 0){
			/*Appel de la méthode dwV*/
			d.dwV();

		} else {
			/*Appel de la méthode upV*/
			d.upV();
		}
	}


}