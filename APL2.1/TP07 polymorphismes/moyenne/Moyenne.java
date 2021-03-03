public class Moyenne {

 	double s = 0;
 	double compteur = 0;

 	public void add (Number nb){
 		this.s = nb.doubleValue();
 		this.compteur++;
 	}

 	public double getAverrage (){
 		return this.s/this.compteur;
 	}

   

     
 }