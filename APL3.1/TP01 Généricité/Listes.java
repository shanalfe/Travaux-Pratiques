import java.util.*;

public class Listes {

	public static void main (String [] args){
		
		ArrayList<Integer> l1 = new ArrayList<Integer> ();
		ArrayList<Float> l2 = new ArrayList<Float>();
		ArrayList<Number> l3 = new ArrayList<Number>();


		l1.add(21, 45);
		//l2.add(1.5f,3.1f);
		l3.add(23);


		/*Affichage*/
		for (Integer e : l1){
			System.out.println (e);
		}
	}
}




