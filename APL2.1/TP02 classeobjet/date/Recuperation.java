import java.util.Scanner;

public class Recuperation {

	/*Attribut*/
	private int m;
	private int a;
	private int j;

	private static Scanner recup = new Scanner (System.in);

	/*Méthode*/
	public void Recup () {

		System.out.println ("Entrez un mois : ");
		this.m = recup.nextInt();
		System.out.println ("Entrez une année : ");
		this.a = recup.nextInt();
		System.out.println ("Entrez le jour : ");
		this.j = recup.nextInt();

		if( (this.m > 13) && (this.j>32) ){
			System.out.println ("Erreur");
			System.exit (1);
		}

	}

	public String toString(){
		return this.a+"-"+this.m+"-"+this.j;
	}

	
		

}