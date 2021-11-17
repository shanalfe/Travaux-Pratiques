import javax.swing.*;
import java.awt.*;

public class Fenetre extends JFrame {
	
	private CardLayout diapo;
	private JPanel picture;

	public Fenetre () {
		
		this.setSize(500,500);
		this.setLocation(50,50);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel picture = new JPanel ();
		this.add (picture);	

		CardLayout diapo = new CardLayout();
		picture.setLayout (diapo);


		JLabel p1= new JLabel (new ImageIcon ("images/loup.jpg"));
		picture.add(p1);	
		JLabel p2 = new JLabel (new ImageIcon ("images/loup2.jpg"));
		picture.add(p2);
		JLabel p3 = new JLabel (new ImageIcon ("images/loup3.jpg"));
		picture.add(p3);		
		JLabel p4 = new JLabel (new ImageIcon ("images/ej.jpg"));
		picture.add(p4);
		JLabel p5 = new JLabel (new ImageIcon ("images/montagne.jpg"));
		picture.add(p5);

		Event event = new Event (diapo, picture);
		picture.addMouseListener(event);


		
	}
}
