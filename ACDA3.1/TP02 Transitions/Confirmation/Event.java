import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


/**
* Class Event qui gère les évenements de la souris pour défiler les images.
*/
public class Event implements MouseListener {


	private CardLayout diapo;
	private JPanel picture;

	
	public Event (CardLayout d, JPanel p){
		diapo = d;
		picture = p;	
	}
	

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

