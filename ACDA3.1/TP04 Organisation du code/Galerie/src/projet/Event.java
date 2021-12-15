package projet;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;



public class Event implements MouseListener {
	
	public Event (CardLayout d, JPanel p){
		diapo = d;
		picture = p;	
	}
	
	private CardLayout diapo;
	private JPanel picture;



	public void mousePressed (MouseEvent e) {
			
	}

	public void mouseReleased(MouseEvent e) {

	}


	public void mouseEntered(MouseEvent e) {

	}


	public void mouseExited(MouseEvent e) {

	}
	
	@Override
	public void mouseClicked(MouseEvent e) {
		
		/*int x = e.getX();
		int y = e.getY();
		*/
		if (e.getX()>250) {
			diapo.next (picture);
		} else if (e.getX() <250) {	
			diapo.previous(picture);
		}

		//System.out.println("x = "+ e.getX() + ", y = " + e.getY());



	}

}

