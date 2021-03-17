/**
* @version 1.1 
* @author Shana Lefevre
*/


import javax.swing.*;
import java.awt.*;


public class Capture {

	public Capture () {
		int r = 10/0;
	}

	public static void main (String [] args) {
		
		try {
			new Capture ();
		}

		catch (ArithmeticException e1 ){
			System.err.println(" Erreur");
		}
	}
	
}
