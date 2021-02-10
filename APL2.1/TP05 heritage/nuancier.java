import javax.swing.*;
import java.awt.*;

/**
* @version 1.1 
* @author Shana Lefèvre
*/


public class nuancier {

	private int r;
	private int b;
	private int v;
	private Color c;

	/*--- Methode ---*/
	public nuancier (String h){
		//Convertit a Stringen entier et renvoie l'opaque spécifié Color.
		//Cette méthode gère les formats de chaîne utilisés pour représenter les nombres octaux et hexadécimaux.
		this.c = c.decode (h);
		
		//Renvoie le composant rouge dans la plage 0-255 dans l'espace sRGB par défaut.
		this.r = c.getRed();
		this.b = c.getBlue();
		this.v = c.getGreen();
	}
	

	public Component pan () {
		JPanel panneau = new JPanel ();		
		panneau.setMinimumSize (new Dimension (100,100));
		panneau.setMaximumSize (new Dimension (100,100));
		panneau.setLayout (new BorderLayout ()); //par défaut du JPanel : flo donc alors que l'on veut un borderlayout
		panneau.setBorder(BorderFactory.createEmptyBorder(5, 2, 5, 2)); // aspect bordure

		/*--- Inscription de la couleur ---*/
		JLabel h = new JLabel (this.r + "," + this.v + "," + this.b); // Affichage
		h.setOpaque (true);
		h.setBackground (Color.BLACK);
		h.setForeground (Color.WHITE);
		h.setHorizontalAlignment (JLabel.CENTER);
		panneau.add (h, BorderLayout.NORTH);
		
		/*--- Carré de couleur ---*/
		JLabel color = new JLabel ();
		color.setBackground (c);
		color.setOpaque (true);
		panneau.add (color, BorderLayout.CENTER);

		return panneau;

	}

	public static void main(String[] args) {	
		int i;
		JFrame w = new JFrame ("Nuancier"); // Appel de la classe Nuancier
		w.setSize (500,500);
		w.setLocation (100,100);
		w.setLayout (new GridLayout (1,args.length));

		for (i = 0; i< args.length; i++){
			w.add (new nuancier ( args[i]).pan () );
		}

		w.setVisible (true);
	

	}

}
