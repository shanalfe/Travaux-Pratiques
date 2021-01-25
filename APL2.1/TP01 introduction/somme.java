public class somme {

	public static void main(String[] args) {
		
	// déclaration des variables
		int somme = 0, i=0;

		for(i=0; i< args.length; i++){
			
			/* integer.parseInt = nombre vaut args[i]*/
			somme = somme + Integer.parseInt(args[i]);
			
		}

		/* valueOf convertit un entier en chaine de caractère*/
		System.out.println("La somme est " +String.valueOf(somme)); 	
	}

}