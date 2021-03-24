import javax.swing.*;
import java.awt.*;
import java.io.*;


public class Polygone extends JComponent {

	public Polygone () {

		super ();
	}

	@Override
	protected void paintComponent(Graphics pinceau) {
		Graphics secondPinceau = pinceau.create();


		if (this.isOpaque()) {

			secondPinceau.setColor(this.getBackground());
			secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
		}


		try{
			
			FileInputStream fichier = new FileInputStream("polygone.bin");
			DataInputStream flux = new DataInputStream(fichier);
			
			try {

				Polygone poly = new Polygone ();

				while (n >= 4) {

					x = flux.readInt ();
					y = flux.readInt ();

					polygone.addPoint (x,y);
				}
				
				secondPinceau.fillPolygon(poly);

			catch(IOException e) {
				System.err.println("Impossible de lire dans le fichier reels.bin !");
			}


			try {

				flux.close();
			} 

			catch(IOException e) {
			
				System.err.println("Impossible de fermer le fichier reels.bin !");
			}

		}

		catch(FileNotFoundException e) {
			System.err.println("Impossible d'ouvrir le fichier reels.bin en lecture !");
		}


		

	}





}