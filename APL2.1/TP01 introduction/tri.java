/**
 *  
 * @author Shana
 * 
 * @version 2
 * 
 * 
 */


import java.util.Arrays;

public class tri{

	static int tab [] = null, i = 0; 

	public static void main(String[] args) {
	
		tab = new int [args.length];

		if (args.length == 0){
			System.out.println ("Erreur d'arguments");
			System.exit(1);
		}
	
		for(i = 0; i< args.length; i++){
			tab[i]= Integer.parseInt(args[i]);	
		}			
		
		Arrays.sort(tab);
		System.out.println("Liste des nombres classés par ordre croissant : ");

		for(int i = 0; i<args.length; i++){
			System.out.println( tab[i]+ "" );

		}		

	}
	
}
