import javax.swing.JComponent;
import java.awt.Color;
import javax.swing.*;
import java.awt.*;



public class Couleur extends JComponent {

	//initialisation des variables
	boolean t = true;

	public Couleur(){
		super();
	}



	public boolean setOn(){
		t = true;
	}

	public boolean setOff(){
		t = false;
	}



@Override

protected void paintComponent(Graphics Couleur){
	

	// condition des couleurs
	if (setOn()){
		cercle.setColor(Color.YELLOW);
	}else if (setOff()){
		cercle.setColor(Color.GRAY);
	}



	cercle.fillOval(10,50,50,50);
	cercle.drawOval(10,50,50,50);



	}
}