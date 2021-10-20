import java.util.*;
import java.lang.Object.*;


public class Arithmetique {

	public static void main (String[] args) {
		int i = 1;
				
		
		//Gestion des erreurs
		if (args.length == 1) {
			System.out.println ("Error");
		
		}

		Deque<Integer> deque = new ArrayDeque<>();
		
		for (i=1; i<args.length; i++) {
			
			deque.push(Integer.parseInt(args[i]));

			if (args[i].equals("+") ) {

				deque.pop();
				deque.pop();
			
			}

			if (args[i].equals("-") ) {
				System.out.println ("PLus");
			
			}

			if (args[i].equals("/") ) {
				System.out.println ("PLus");
			
			}

			if (args[i].equals("x") ) {
				System.out.println ("PLus");
			
			}



		}

	}
	


}
