import java.util.*;

/**
 * Class Fraction
 */
public class Fraction {

    public static void main(String[] args) {

        int i = 0;
       
        // Création de 2 files 
        Deque<String> liste_string = new ArrayDeque<>(); // Type string
        Deque<Integer> liste_entier = new ArrayDeque<>();  // Type integer
       
        if (args.length == 0) { // Gestion des erreurs
			System.out.println ("Il manque des arguments !");
		
        } else {

            for ( i = 0; i < args.length; i ++ ) { //parcours des arguments en ligne de commande
                try { // Obligatoire pour convertir un caractère en int
                    int c = Integer.parseInt(args[i]);
                    liste_entier.add(c);
                } catch (NumberFormatException e) { // en cas d'impossibilité de conversion
                    liste_string.add(args[i]);
                }
               
            }

            liste_string.removeIf(n -> n.charAt(0) == '-'); // Suppression du charactère - dans la file string

            System.out.println(liste_entier);
            System.out.println(liste_string);
        }

    }
}