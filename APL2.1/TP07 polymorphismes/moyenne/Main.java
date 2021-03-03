
public class Main {

	public static void main(String[] args) {

		Moyenne moy = new Moyenne ();

		moy.add (5.0);
		moy.add (3);
		moy.add (20);

		System.out.println (moy.getAverrage());
	}
}