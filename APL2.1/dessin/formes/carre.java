import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;

// ATTENTION DE NE PAS OUBLIER LES IMPORT! 


//JComponent obligatoire pour ce que l'on veut faire

public class carre extends JComponent {

	//attention, le mettre hors de protected ect..
		// importer une image 
		private Image secoupe;
		// on utilise classe "carre" car nom de public class
		public carre () {
			super();
			//ou récupérer l'image
			secoupe = Toolkit.getDefaultToolkit().getImage("secoupe.png");
		}


@Override


	protected void paintComponent(Graphics carre){

		// création d'un nouveau pinceau
		Graphics secondCarre = carre.create();


			//composant non transparant donc on écrit:
			if (this.isOpaque()){
				// remplissage de la couleur 
				secondCarre.setColor(this.getBackground());
				//remplir un rectangle plat avec fillrect
				secondCarre.fillRect(0,0,this.getWidth(), this.getHeight());
			}


		// on déssine ce que l'on veut		
		// un carré
			secondCarre.setColor(Color.BLUE);
			secondCarre.drawRect(50,50,50,50);

		// un disque 
			//couleur
			secondCarre.setColor(Color.GREEN);
			//disque -> fillOval
			secondCarre.fillOval(150,50,50,50);


		//text
			/*Couleur violet, on utilise new car la couleur désirée
			n'existe pas*/
			secondCarre.setColor(new Color(150,131,236));
			//gras corps 24
			secondCarre.setFont(new Font("gras", Font.BOLD, 24));
			//ecriture texte
			secondCarre.drawString(">o<", 250,75);


		//Image ajouté
			secondCarre.drawImage(secoupe, 350,50,this);

	}
}



	
	
	
	
