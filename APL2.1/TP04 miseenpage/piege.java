import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class piege {

	public static void main(String[] args) {	
	
		JFrame fenetre = new JFrame("Piege");
		fenetre.setIconImage(Toolkit.getDefaultToolkit().getImage("../caca.png"));
		
		GridLayout grid = new GridLayout();
		fenetre.setLayout(null); 

		fenetre.setSize(400,400);
		
		fenetre.setLocation(200,200);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JButton u = new JButton ("1");
		u.setLocation (0,0);
		u.setSize (300,100);

		JButton d = new JButton ("2");
		d.setLocation (300,0);
		d.setSize (100, 300);

		JButton t = new JButton ("3");
		t.setLocation (100,300);
		t.setSize (300, 100);

		JButton q = new JButton ("4");
		q.setLocation (0,100);
		q.setSize (100, 300);

		JButton c = new JButton ("5");
		c.setLocation (100,100);
		c.setSize(200,200);


		fenetre.add (u);
		fenetre.add (d);
		fenetre.add (c);
		fenetre.add (q);
		fenetre.add (t);

		fenetre.setVisible (true);

	}
}