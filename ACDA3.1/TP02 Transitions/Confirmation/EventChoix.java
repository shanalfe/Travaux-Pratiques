import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


/**
* Class EventChoix qui gère les évenements du JDialog, savoir si l'utilisateur est sûr de vouloir quitter ou non l'application.
*/
public class EventChoix implements ActionListener {

	private JButton oui;
	private JButton non;
	private JDialog dialog;	
	private JPanel boutonConfirmation;


	public EventQuit(JButton o, JButton n, JDialog d, JPanel bc) {

		this.oui = o;
		this.non = n;
		this.dialog = d;
		this.boutonConfirmation = bc;
		
	}


	public void actionPerformed (ActionEvent e) {
		
		Object ae = e.getSource(); 

        if(ae == oui) {
        	//System.exit (0);
        	System.out.println ("Fermer");
        } else if (ae == non) {
        	//d.dispose();
        	System.out.println ("RIenf aire");
        }
	}

}