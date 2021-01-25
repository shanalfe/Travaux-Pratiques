public class arguments{
	public static void main(String[] args) {

		/* boucle, 1 affichage pour 1 argument*/
		for(int i=0;i<args.length;i++){ 	/*args: arguments donné en ligne de commande, length : chaine de caractère*/
			/* affichage */
			System.out.println("Bonjour " +args[i]);
		}	
}
}
