import java.io.*;
import java.util.*;
import java.awt.*; 

/**
 * Class Couleurs
 * Main
 * Lecteur du fichier
 */
public class Couleurs {

	private Map<String, Color> traces; //Recherche par nom couleur pour avoir une couleur
	

	public static void main(String[] args) {

		String ligne;

		Fenetre fenetre = new Fenetre ();

		try {

			BufferedReader lecture = new BufferedReader(new FileReader("rgb.txt"));

			try {

				while((ligne = lecture.readLine()) != null) {

					//String[] arrOfStr = ligne.split("\\s", +); //séparation pour condition : caractère blanc et au moins 1

					//System.out.println(Arrays.toString(arrOfStr)); 
				}

				
			} catch(IOException e) {
				System.err.println("Erreur de lecture dans rgb.txt !");
			}
			try {
				lecture.close();
			} catch(IOException e) {
				System.err.println("Erreur de fermeture de rgb.txt !");
			}
		} catch(FileNotFoundException e) {
			System.err.println("Erreur d'ouverture de rgb.txt !");
		}

	}

}