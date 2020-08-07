public class somme {

	/* déclaration des variable */
		static int somme=0, nombre;

	public static void main(String[] args) {
		
	// déclaration des variables
		int somme = 0;

		for(int i=0; i< args.length; i++){
			
			somme = somme + Integer.parseInt(args[i]); /* integer.parseInt = nombre vaut args[i]*/



			/* Affichage du résultat*/
			System.out.println("La somme est de = " +String.valueOf(somme)); 	/* valueOf convertit un entier en chaine de caractère*/

		}
	}

}