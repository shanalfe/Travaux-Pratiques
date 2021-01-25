
public class progression {

	public static void main(String[] args) {

		Compteur compte = new Compteur();
		
		for(int i=0; i<5; i++){
			compte.plusUn();
		}

		System.out.println(compte.toString());

		for(int i=0; i<4; i++){
			compte.plusUn();
		
		}
		System.out.println(compte.toString());

	}
}
	


