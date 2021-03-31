import javax.swing.*;
import java.awt.*;
import java.io.*;

public class  Image  extends JComponent{

	private static Color[][] val=new Color[1024][768];

	public Image(){
	super();

	}

	@Override
	protected void paintComponent(Graphics pinceau) {
		Graphics secondPinceau = pinceau.create();
		if (this.isOpaque()) {

			secondPinceau.setColor(this.getBackground());
			secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
		}
		for(int i=0;i<1024;i++){
			for (int y=0;y<768;y++){
				 secondPinceau.setColor(this.getBackground());
				secondPinceau.setColor(val[i][y]);
				secondPinceau.fillRect(i,y,1, 1);


			}
		}

	}

	public static void main(String[] args) {
		int r,v,b;
		
		JFrame fenetre=new JFrame();
		fenetre.setSize(1024, 768);
		fenetre.setLocationRelativeTo(null);
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


		try{
			
			FileInputStream fichier = new FileInputStream("image.bin");
			DataInputStream flux = new DataInputStream(fichier);
			
			try {
				
				for(int i=0;i<1024;i++){
				
					for(int y=0;y<768;y++){
				
						r=flux.readByte();
						v=flux.readByte();
						b=flux.readByte();

						//System.err.println(r + v + b);
						if (r < 0) {
							r = 0;
						}

						if (v < 0) {
							v = 0;
						}
						if (b < 0) {
							b = 0;
						}

						val[i][y]=new Color(r,v,b);
					}
				}
			} 

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

		Image m = new Image();
		fenetre.add(m);
		fenetre.setVisible(true);

	}

}





