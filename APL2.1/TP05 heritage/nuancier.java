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


	public nuancier (String h){
		this.c = c.decode (h);
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

		JLabel h = new JLabel (this.r + "," + this.v + "," + this.b);
		h.setOpaque (true);
		h.setBackground (Color.BLACK);
		h.setForeground (Color.WHITE);
		h.setHorizontalAlignment (JLabel.CENTER);
		panneau.add (h, BorderLayout.NORTH);

		JLabel color = new JLabel ();
		color.setBackground (c);
		color.setOpaque (true);
		panneau.add (color, BorderLayout.CENTER);

		return panneau;

	}

	public static void main(String[] args) {	
		int i;
		JFrame w = new JFrame ("Nuancier");
		w.setSize (500,500);
		w.setLocation (100,100);
		w.setLayout (new GridLayout (1,args.length));

		for (i = 0; i< args.length; i++){
			w.add (new nuancier ( args[i]).pan () );
		}

		w.setVisible (true);
	

	}

}