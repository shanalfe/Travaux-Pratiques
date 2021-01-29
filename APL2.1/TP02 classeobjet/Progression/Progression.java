
/**
* @version 1.1 
* @author Shana Lefevre
*/

public class Progression {


	public static void main (String [] args) {

		int i = 0;

		Compteur c = new Compteur (); // Appel du fichier Compteur.java

		for (i = 0; i<5; i++){
			c.plusUn();
			System.out.println(c);
		}

	}

}
