import java.lang.*;
import java.util.Scanner;
/*
* @version 1.1 
* @author Shana Lefèvre
*/

public class Parite {

	static int verification (int n) {

		if (n % 2 == 0) {
			return 1;
		} else {
			return 0;
		}
	}
	
	public static void main(String[] args) {

		int n = (int)(Math.random() * 2);

		System.out.println("choix : " + n);

		if (n == 0) {

			System.out.println("Entrez un nombre paire : ");
			Scanner scanner = new Scanner(System.in);
			int nbre = scanner.nextInt();
			System.out.println("Nombre : " + nbre);
			int verdict = verification (nbre);

			if (verdict == 1) {

				System.out.println ("ok");
			} else {

				System.out.println("NON");
			}

		} else if (n == 1) {

			System.out.println("Entrez un nombre impaire : ");
			Scanner scanner = new Scanner(System.in);
			int nbre = scanner.nextInt();
			System.out.println("Nombre : " + nbre);
			int verdict = verification (nbre);

			if (verdict == 0) {

				System.out.println ("ok");
			} else {

				System.out.println("NON");
			}
		}

	}


}