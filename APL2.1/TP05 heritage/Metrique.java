import java.awt.print.Paper;

public class Metrique extends Paper {
	
	public Metrique(){
		super();
	}

	public double getMetricHeight()	{
		return super.getHeight() ;
	}

	static public void main(String[] args){
		Metrique oui = new Metrique();

		System.out.println(oui.getHeight() + "  " + oui.getWidth());
	}
}