package projet;

import javax.swing.*;
import java.awt.*;
import java.lang.ClassLoader;
import java.net.URL;

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

		ClassLoader loader = Thread.currentThread().getContextClassLoader();

		URL url1  = loader.getResource("images/loup.jpg");
		URL url2  = loader.getResource("images/loup2.jpg");
		URL url3  = loader.getResource("images/loup3.jpg");
		URL url4  = loader.getResource("images/ej.jpg");
		URL url5  = loader.getResource("images/montagne.jpg");



		JLabel p1= new JLabel (new ImageIcon ("url1"));
		picture.add(p1);	
		JLabel p2 = new JLabel (new ImageIcon ("url2"));
		picture.add(p2);
		JLabel p3 = new JLabel (new ImageIcon ("url3"));
		picture.add(p3);		
		JLabel p4 = new JLabel (new ImageIcon ("url4"));
		picture.add(p4);
		JLabel p5 = new JLabel (new ImageIcon ("url5"));
		picture.add(p5);

		Event event = new Event (diapo, picture);
		picture.addMouseListener(event);


		
	}
}
