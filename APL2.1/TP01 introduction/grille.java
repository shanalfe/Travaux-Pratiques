

public class grille {

	/* déclaration des variables*/
	static int grille, i,j;

	public static void main(String[] args) {
	
	// déclaration des variables	
		int taille= Integer.parseInt(args[0]);	/* taille vaut l'argument rentré par l'utilisateur*/
		int i;

		System.out.println ("+-+-+");

		for(i=0; i< taille; i++){ // car taille vaut l'argument que l'on a transformé en nbre 
			System.out.println("| | |");
			System.out.println("+-+-+");
		}
		

	}
}