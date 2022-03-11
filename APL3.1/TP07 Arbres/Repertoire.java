import javax.swing.tree.DefaultMutableTreeNode;
import java.util.*;

/**
 * Classe Repertoire
 * */
public class Repertoire {

	/**
	 * Constructeur
	 * 
	 * */
	public Repertoire () {

	}

	/**
	 * Main
	 * */
	public static void main(String[] args) {

		if (args.length !=1 ) {
			System.out.println("Erreur argument");
		
		} else {
			Arbre arbre = new Arbre(args);
			System.out.println(args[0]);
		}
		
	}





}