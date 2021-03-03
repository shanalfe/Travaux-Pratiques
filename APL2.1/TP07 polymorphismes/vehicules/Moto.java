/**
 * Classe Moto qui hérite de l'interface Véhicule donc on utilise implments
 */

public class Moto implements  Vehicule  {
	
	int nbRoues = 2;

	public String sorte(){

		return "Moto";
	}

	public int nbRoues(){
		return nbRoues;
	}
	
}
