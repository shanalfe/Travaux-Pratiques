import java.util.*;



public class Arithmetique {

	public static void main (String[] args) {
		
		int i = 1;
				
		
		//Gestion des erreurs
		if (args.length == 1) {
			System.out.println ("Il manque des arguments");
		

		}

		Deque<String> liste = new ArrayDeque<>();
		
		for (i = 0; i<args.length; i++) {	

			liste.push(args[i]);	

			System.out.println(liste);
				
			if (args[i].equals("+") ) {

				liste.pop(); // On enlève le signe que l'on a ajout
				int nb1 = Integer.parseInt(liste.pop());
				int nb2 = Integer.parseInt(liste.pop());
				System.out.println(nb2+" "+ nb1);

				String res = String.valueOf(nb1 + nb2);
				
				liste.push(res);
				
			
			} else if (args[i].equals("-") ) {
				liste.pop();
				int nb1 = Integer.parseInt(liste.pop());
				int nb2 = Integer.parseInt(liste.pop());
				
				String res = String.valueOf(nb2 - nb1);				
				liste.push(res);
			
			} else if (args[i].equals("/") ) {
				liste.pop();
				int nb1 = Integer.parseInt(liste.pop());
				int nb2 = Integer.parseInt(liste.pop());
				String res = String.valueOf(nb1 / nb2);				
				liste.push(res);
				
			
			}else if (args[i].equals("x") ) {
				liste.pop();
				int nb1 = Integer.parseInt(liste.pop());
				int nb2 = Integer.parseInt(liste.pop());
				String res = String.valueOf(nb1 * nb2);				
				liste.push(res);
				
			
			} 

		}
		
		System.out.println ("Pile finale : " + liste);

	}
	


}
