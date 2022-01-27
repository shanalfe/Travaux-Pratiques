import java.util.*;


/**
* Classe Arithmetique qui permet le calcul des piles
*/
public class Arithmetique {


	public static void main (String[] args) {
		
		int i = 1;				
		
		if (args.length == 1) { // Gestion des erreurs
			System.out.println ("Il manque des arguments !");

		} else {

			Deque<String> liste = new ArrayDeque<>(); // Création de la pile de type String
			
			for (i = 0; i < args.length; i ++) {	

				liste.push(args[i]); // Ajout de chaque argument dans la pile

				System.out.println("Pile : " + liste);
					
				if (args[i].equals("+") ) {

					liste.pop(); // On enlève le signe que l'on a ajout
					int nb1 = Integer.parseInt(liste.pop()); // On enlève et on converti en int
					int nb2 = Integer.parseInt(liste.pop()); // On enlève et on converti en int					
					liste.push(String.valueOf(nb1 + nb2)); // On converti en String et on ajoute dans la pile
				
				} else if (args[i].equals("-") ) {
					liste.pop();
					int nb1 = Integer.parseInt(liste.pop());
					int nb2 = Integer.parseInt(liste.pop());			
					liste.push(String.valueOf(nb2 - nb1));
				
				} else if (args[i].equals("/") ) {
					liste.pop();
					int nb1 = Integer.parseInt(liste.pop());
					int nb2 = Integer.parseInt(liste.pop());			
					liste.push(String.valueOf(nb2 / nb1));
					
				} else if (args[i].equals("x") ) {
					liste.pop();
					int nb1 = Integer.parseInt(liste.pop());
					int nb2 = Integer.parseInt(liste.pop());			
					liste.push(String.valueOf(nb1 * nb2));
				} 

			}
			
			System.out.println ("total : " + liste);
		}
	}

}
