import java.util.Scanner;

public class pair_impair {
    
    private static Scanner recup = new Scanner(System.in); 

    public static void main(String[] args) {
        int nombre;

        System.out.println("Entrez un nombre : ");     
        
        nombre = recup.nextInt();//Récupération des données

        if (nombre == 0){
            System.out.println("Le chiffre est pair ");
        }else if (nombre < 0){
            System.out.println ("le nombre est négatif");
        }else if (nombre >0){
            System.out.println ("le nombres est positif");
        }

        if (nombre %2 == 0){
            System.out.println ( nombre + " est pair");
        }else{
            System.out.println ( nombre + " est impaire");
        }
        
    }


}