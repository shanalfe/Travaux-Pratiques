/**
* @version 1.1 
* @author Shana Lefevre
*/


public class Date {

	public static void main (String [] args) {

		/* Appel du fichier / class Recuperation */
		Recuperation d = new Recuperation (); 
		/* Appel de la méthode Recup de la classe Recuperation*/
		d.Recup();
		System.out.println (d); // Affichage
		/*Appel de la méthode  Lendemain de la classe Recuperation*/
		d.Lendemain();
		System.out.println (d); // affichage
	}

}

