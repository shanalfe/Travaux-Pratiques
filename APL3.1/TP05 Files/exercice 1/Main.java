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
		
		while (! q.isEmpty() && bool == true) {

			if (q.isEmpty() ) {

				bool = false; // On sort de la boucle

			} else {
			
				a = q.remove();
				q1.add(a);

				b = q.remove();
				q2.add(b);

				bool = true;

			}

		}

		System.out.println ("Q1 : " + q1);
		System.out.println ("Q2 : " + q2);

	}

	/**
	* Deuxième phase : tri de chaque moitié (par deux appels récursifs),
	* ALGO : On récupère les 2 files, et on les tri en ordre croissant respectivement
	*/
	public void Trier () {

	}


	/**
	* Rassemble toutes les étapes : fusion des deux moitiés.
	* ALGO : on compare la x ieme d'une file et la x ieme del'autre file. On ajoute la plus petite dans dans la nouvelle file
	*/
	public void Fusionner () {

	}



}

