import java.util.Arrays;


public class tri{

	/* déclaration des variable */
		//static int somme = 0, nombre; --
	
		static int tab []= null; 


	public static void main(String[] args) {
	
		/* création d'un tableau pour y mettre les arguments rentrés par l'utilisateur*/	
		tab = new int [args.length];

		/*boucle*/
		for(int i = 0; i< args.length; i++){
			tab[i]= Integer.parseInt(args[i]);	/* i vaut l'argument que l'utilisateur à rentré*/
		}
			
		/* mettre par ordre croissant*/
		Arrays.sort(tab);
		/* affichage*/
		System.out.println("Liste des nombres classés par ordre croissant : ");

		/* boucle pour traité tous les nombres*/
		for(int i = 0; i<args.length; i++){

			/* Affichage du résultat*/
			System.out.println(tab[i]+"");

		}

		System.out.println();
			

			
		}
	


	}
