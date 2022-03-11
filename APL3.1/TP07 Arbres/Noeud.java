import java.io.File;
import java.util.ArrayList;

/**
 * Classe Noeud
 * */
public class Noeud <E> {

	private E element;
	private ArrayList<Noeud> enfant;


	/**
	 * Constructeur
	 * */
	public Noeud (E contenu)  {
		
		this.enfant = new ArrayList<Noeud>;
		this.element = contenu;

	}


	public void ajouter(Noeud fils) {

		enfant.add(fils);


	}

	public String toString () {
		return element.toString();
	}



}