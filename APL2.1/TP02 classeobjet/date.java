/**
* @version 1.1 
* @author Shana Lefèvre
*/

public class date {

	private short a;
	private short m;
	private short j;
	

	public date (short annee, short mois, short jour){
		int i = 0;

		this.a = annee;
		this.m = mois;
		this.j = jour;

		for (i=0; j>31; i++){
			this.m = this.m + 1;
			this.j = this.j - 31;
		}

		for (i=0; i>12; i++){
			this.annee = this.annee+1;
			this.m = this.m - 12;
		}



	}

}