import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Choix extends JFrame {

	private JButton oui;
	private JButton non;
	private JDialog dialog;
	

	/**
	* Méthode Choix
	*/
	public Choix () {


		JDialog dialog = new JDialog ();
		dialog.setSize(400,300);
		dialog.setLocation(50,50);
		dialog.setVisible(true);

		JLabel confirmation = new JLabel ("Etes-vous sûr de vouloir quitter l'application ? ");
		dialog.add(confirmation, BorderLayout.NORTH);
		
		JPanel boutonConfirmation = new JPanel ();
		dialog.add(boutonConfirmation, BorderLayout.SOUTH);

		JButton oui = new JButton ("Oui");
		boutonConfirmation.add(oui, BorderLayout.WEST);

		JButton non = new JButton ("Non");
		boutonConfirmation.add(non, BorderLayout.EAST);

		EventChoix eventChoix = new EventChoix (oui, non, dialog);
		oui.addActionListener(eventChoix);
		non.addActionListener(eventChoix);


	}
}