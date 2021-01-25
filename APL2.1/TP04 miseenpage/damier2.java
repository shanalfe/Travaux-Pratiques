import javax.swing.*;
import java.awt.*;


public class damier2{
	public static void main(String[] args) {
		

		JFrame fenetre = new JFrame("Damier"); // creation de la fenetre

		System.out.println(args.length);

		//condition si l'utilisateur à rentré ou pas un argument
		if (args.length != 1) {
			System.out.println("Pas d'argument donné");
			System.exit(1);
		}

		int size = Integer.parseInt(args[0]); //prend en compte un entier ; size vaut l'argument

		fenetre.setSize(100*size,100*size); // taille = 100 * argument
		fenetre.setLocation(200,200);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		GridLayout grid = new GridLayout(size,size);
		fenetre.setLayout(grid);

		//déclaration des variables
		int pannelNumber = 0;
		int i = 0; // colonnes 
   		int j = 0; // lignes


   		//boucle
		for ( i = 0;i < size ;i++ ) {
			
			for ( j = 0;j < size ;j++ ) {
				
				//annelNumber = i+j+1;
				JPanel panneau = new JPanel();

				if ((i+j)%2 == 0) { // permet de décaler 1/2
					panneau.setBackground(Color.WHITE);
				}

				else{
	                panneau.setBackground(Color.CYAN);
           		}
           		fenetre.add(panneau); // ajout du panneau à la fenetre 
			}			
		}


		fenetre.setVisible(true); // affichage de la fenetre
	}
}
