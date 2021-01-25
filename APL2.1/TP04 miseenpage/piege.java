import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class piege {

	public static void main(String[] args) {	
	
		JFrame fenetre = new JFrame("Piege");
		Dimension size = new Dimension(200,200);
		GridLayout grid = new GridLayout();
		fenetre.setLayout(null); 

		fenetre.setSize(500,500);
		fenetre.setMinimumSize(size);
		fenetre.setLocation(200,200);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JButton un = new JButton ("1");
		un.setLocation (100,200);


		fenetre.add (un);

		fenetre.setVisible (true);



	}
}