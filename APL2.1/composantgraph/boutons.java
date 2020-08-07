import javax.swing.*;
import java.awt.*;
import javax.swing.JButton;

public class boutons {
	public static void main(String[] args) {
		
	
	JFrame windows = new JFrame();

	windows.setSize (800, 400);
	windows.setLocation(0,0);


	// creation du bouton 1

	JButton bouton1 = new JButton("1"); // on peut utiliser JRadioButton a la place de JButton -> rond à cocher
 
 	windows.add(bouton1, BorderLayout.NORTH);

 	// création des autres bouton

 	JButton bouton2 = new JButton("2");
 	windows.add(bouton2, BorderLayout.SOUTH);

 	JButton bouton3 = new JButton("3");
 	windows.add(bouton3, BorderLayout.WEST);

 	JButton bouton4 = new JButton("4");
 	windows.add(bouton4, BorderLayout.EAST);

 	JButton bouton5 = new JButton("5");
 	windows.add(bouton5, BorderLayout.CENTER);


	windows.setVisible(true);
}

}
