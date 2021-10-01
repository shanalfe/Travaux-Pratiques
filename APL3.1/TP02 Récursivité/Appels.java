import java.lang.*;

public class Appels {

	static int factorielle (int n) {
		if (n == 0) {
			Thread.dumpStack(); // nous montre comment le programme a été exécutée dans la mémoire. Le premier est le plus récent soit le dernier exécuté
			return 1;
		} else {
			return (n*factorielle(n-1));
		}
	}
	
	public static void main(String[] args) {
		int f = 1, nbre;
		
		nbre = Integer.parseInt(args[0]); // récupère en arguement le chiffre/nombre
		f = factorielle (nbre);
		System.out.println ("factorielle de " +nbre+ " est "+ f);		
	}

}