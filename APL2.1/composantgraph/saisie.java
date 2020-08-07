import javax.swing.*;
import java.awt.*;

public class saisie{
	public static void main(String[] args) {
	

	JFrame windows = new JFrame();

	windows.setSize (800, 400);
	windows.setLocation(0,0);

	// champ de texte en bas de la fenetre
	JTextField texte = new JTextField("Ecrire ici");
	//texte aligné au centre
	texte.setHorizontalAlignment(JTextField.CENTER);
	windows.add(texte, BorderLayout.SOUTH);
	texte.setBackground(Color.GRAY); 	// couleur fond
	texte.setForeground(Color.GREEN); 	//couleur police
	// fond vert 


	// texte sur le reste de la zone, couleur vert sur fond gris
	JTextField divers = new JTextField("Ecrire ici");
	divers.setHorizontalAlignment(JTextField.CENTER);
	windows.add(divers, BorderLayout.CENTER); // affichage dans la fenetre 

	divers.setBackground(Color.BLACK);
	divers.setForeground(Color.GREEN);

	windows.setVisible(true);

}
}