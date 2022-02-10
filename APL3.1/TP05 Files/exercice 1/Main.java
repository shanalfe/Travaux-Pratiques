import java.lang.Object.*;
import java.util.*;


public class Main {


	/**
	*Main
	* enqueue = add
	*/
	public static void main(String[] args) {


		Queue<Integer> q = new LinkedList<Integer>();
	
		q.add(1);q.add(4);q.add(8);q.add(2);q.add(10);q.add(3);q.add(9);

		System.out.println (q);

		Scinder(q);


	}


	/**
	* Première phase : séparation de la file en deux moitiés égales,
	* ALGO : métaphore : paquet carte : on distribut a l'un puis à l'autre jusqu'a la fin
	* dequeue = remove
	*/
	public static void Scinder (Queue<Integer> q) {

		int a,
			b;
		boolean bool = true;

		Queue<Integer> q1 = new LinkedList<Integer>();
		Queue<Integer> q2 = new LinkedList<Integer>();
		
		while (! q.isEmpty() && bool == true ) {

			if (bool == false) {

				bool = false; // On sort de la boucle

			} else {
			
				a = q.remove();
				q1.add(a);

				if (! q.isEmpty() && bool == true ) {
					b = q.remove();
					q2.add(b);

				} else {

					bool = false; // On sort de la boucle
				}

			}

		}

		System.out.println ("Q1 : " + q1);
		System.out.println ("Q2 : " + q2);
		System.out.println("Premier tri");
		Trier(q1);
		/*System.out.println("Deuxieme tri");
		Trier(q2);*/
		

	}

	/**
	* Deuxième phase : tri de chaque moitié (par deux appels récursifs),
	* ALGO : On récupère les 2 files, et on les tri en ordre croissant respectivement
	*/
	public static void Trier (Queue<Integer> q)  {
		int a;
		int b;
		boolean bool = false;
		System.out.println (q);

		Queue<Integer> q_tri = new LinkedList<Integer>();

		while(! q.isEmpty() ) {
			
			if (bool == false) {
				a = q.remove();
			} else  {
				a = q_tri.remove();
			}
			
			
			//débogage
			System.out.println ("-" +a);
			System.out.println (q);

			if (! q.isEmpty()){
				b = q.remove();
				System.out.println ("-" +b);
			

				if (a > b) {
					System.out.println("a : "+a + " b : "+b);
					q_tri.add(b);
					q_tri.add(a);
					System.out.println("New : " +q_tri);
					System.out.println("Ancien : " +q);
					bool = true;

				} else if (a < b) {
					System.out.println("a : "+a + " b : "+b);
					q_tri.add(a);
					q_tri.add(b);					
					System.out.println("New : " +q_tri);
					System.out.println("Ancien : " +q);
					bool = true;
				}

			} else {
				q_tri.add(a);
			}

		}

		System.out.println(q_tri);
		

	}


	/**
	* Rassemble toutes les étapes : fusion des deux moitiés.
	* ALGO : on compare la x ieme d'une file et la x ieme del'autre file. On ajoute la plus petite dans dans la nouvelle file
	*/
	public void Fusionner () {

	}



}

