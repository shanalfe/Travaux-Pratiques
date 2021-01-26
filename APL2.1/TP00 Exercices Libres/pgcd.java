import java.util.Scanner;

public class pgcd {
    
    private static Scanner recup = new Scanner(System.in);

    public static void main(String[] args) {
        int nb1, nb2;

        System.out.println ("Entrez un premier nombre : ");
        nb1 = recup.nextInt();

        System.out.println ("Entrez un deuxieme nombre : ");
        nb2 = recup.nextInt();

        while (nb1 != nb2) {
            if (nb1 > nb2) {
                nb1 = nb1 - nb2;
            } else {
                nb2 = nb2 - nb1;
            }
        } 
        System.out.println("Le plus grand diviseur commun est " + nb1);

    }
}