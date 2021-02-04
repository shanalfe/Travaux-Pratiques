import javax.swing.*;
import java.awt.*;

/**
* @version 1.1 
* @author Shana Lefèvre
*/

public class damier{

	public static void main(String[] args) {

		int i = 0;
   		int j = 0; 
   		int size = Integer.parseInt(args[0]); 

		JFrame fenetre = new JFrame("Damier"); 

		System.out.println(args.length);

		/*-- Condition abscence d'arg --*/
		if (args.length != 1) {
			System.out.println("Pas d'argument donné");
			System.exit(1);
		}

		
		fenetre.setSize(100*size,100*size); 
		fenetre.setLocation(200,200);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		GridLayout grid = new GridLayout(size,size);
		fenetre.setLayout(grid);

	   	
		for ( i = 0;i < size ;i++ ) {
			
			for ( j = 0;j < size ;j++ ) {
				
				JPanel panneau = new JPanel();

				if ((i+j)%2 == 0) { // permet de décaler 1/2
					panneau.setBackground(Color.WHITE);
				}

				else{
	                panneau.setBackground(Color.CYAN);
           		}

           		fenetre.add(panneau); 
			}			
		}


		fenetre.setVisible(true); 
	}
}
