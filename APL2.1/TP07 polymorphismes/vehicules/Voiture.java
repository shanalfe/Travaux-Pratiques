/**
 * Classe Voiture qui hérite de l'interface Vehicule donc on utilise implements
 */

public class Voiture implements Vehicule {
	
	int nbRoues = 4;

	public String sorte(){
		return "Voiture";
	}

	public int nbRoues(){
		return nbRoues;

	}
}