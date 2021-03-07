import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(500,500);
		fenetre.setLocation(0,0);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JCheckBox cyan = new JCheckBox("Cyan");
		JCheckBox jaune = new JCheckBox("Jaune");
		JCheckBox magenta = new JCheckBox("Magenta");		
		JPanel panneau = new JPanel();

		
		panneau.add(cyan);
		panneau.add(jaune);
		panneau.add(magenta);


		fenetre.add(panneau, BorderLayout.CENTER);


		Combinaison a = new Combinaison(panneau);
	
		/*--- Aj ---*/
		cyan.addItemListener(a);
		jaune.addItemListener(a);
		magenta.addItemListener(a);


		fenetre.setVisible(true);

	}
}