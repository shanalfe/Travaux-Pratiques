public class documentation2{


	public static void main(String[] args) {

			//valeur rentrée : base 8
			Integer dec = Integer.valueOf(args[0], 8);
			String hex = Integer.toHexString(dec);
		
		System.out.println(hex);
	}
}