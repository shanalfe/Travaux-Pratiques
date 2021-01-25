import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;




public class style extends JComponent {





//photo
	private Image secoupe;
	public style (){
		super();
		secoupe = Toolkit.getDefaultToolkit().getImage("secoupe.png");
	}




@Override


protected void paintComponent(Graphics style){ 

	//création d'un nouveau pinceau
	Graphics fig = style.create();

	//composant non transparant donc on écrit:
			if (this.isOpaque()){
				// remplissage de la couleur 
				fig.setColor(this.getBackground());
				//remplir un rectangle plat avec fillrect
				fig.fillRect(0,0,this.getWidth(), this.getHeight());
			}

	// TEXTE

		//création du texte IUT
			fig.setColor(Color.WHITE); //couleur police
			fig.setFont(new Font("gras", Font.BOLD, 50));
			fig.drawString("IUT", 25, 85); // vertical, hauteur
		// création du texte départements
			fig.setColor(Color.WHITE);
			fig.drawString("départements", 160, 85); 
		// création du texte informatique
			fig.setColor(Color.WHITE);
			fig.drawString("informatique", 180, 150); 
		// création du texte login
			fig.setColor(Color.WHITE);
			fig.drawString("login", 10, 225); 
		// création du texte password
			fig.setColor(Color.WHITE);
			fig.drawString("password", 10, 265); 

			
	// IMAGE
		fig.drawImage(secoupe, 0, 85, this);


}
	
}


