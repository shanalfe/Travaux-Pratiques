import javax.swing.*;
import java.awt.*;
import java.io.File;

/**
* @version 1.1 
* @author Shana Lefèvre
*/

public class Conversion {
	
	


	public static void main(String[] args) {

		String = name;
		
		 try {
  
            // Recevoir le fichier 
            File f = new File(name);
  
            if ( f.createNewFile() ) {

                System.out.println("File created");
            }

            else {                
            	System.out.println("File already exists");
            }
        }

        catch (Exception e) {

            System.err.println(e);
        }

	
	}


}