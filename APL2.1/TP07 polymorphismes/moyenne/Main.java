
public class Main {

	public static void main(String[] args) {

		Moyenne moy = new Moyenne ();

		moy.add (10);
		moy.add (10);
		moy.add (19);
		
		System.out.println (moy.getAverrage());
	}
}