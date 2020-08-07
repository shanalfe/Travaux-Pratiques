import javax.swing.*;
import java.awt.*;


public class Composition {
	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
		fenetre.setSize(400,400);
		fenetre.setLocation(0,0);


		for (int i = 0; i<args.length; i ++){
			JLabel argument = new JLabel();

			System.out.println(args[i]);
		}

	fenetre.add(argument);
	fenetre.setVisible(true);
	}
}