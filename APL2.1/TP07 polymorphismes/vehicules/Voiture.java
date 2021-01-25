// on utilise implements car hérite d'une interface
public class Voiture implements Vehicule {
	//initialisation des variables
	int nbRoues = 4;
	//création 
	public String sorte(){
		return "Voiture";
	}

	public int nbRoues(){
		return nbRoues;

	}
}