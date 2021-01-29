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
	}

	public void Lendemain (){
		int[] tab = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
		this.j = this.j + 1;

		if(this.j == tab[this.m-1]+1) {
			this.j = 1;
			this.m = this.m + 1;
		}
		if(this.m == 13) {
			this.m = 1;
			this.a = this.a + 1;
		}

	}

	public String toString(){
		return this.a+"-"+this.m+"-"+this.j;
	}



	
		

}