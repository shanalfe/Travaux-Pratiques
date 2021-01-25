
public class grille {

	
	static int i,j;

	public static void main(String[] args) {
	
		int taille= Integer.parseInt(args[0]);

		System.out.println ("+-+-+");


		for(i=0; i< taille; i++){ 

			System.out.println("| | |");
			System.out.println("+-+-+");

		}		

		if (args.length != 1) {
			System.out.println("Pas de taille de grille.");
			System.exit(1);
		}

	}
}