import javax.swing.JComponent;
import java.awt.Color;
import javax.swing.*;
import java.awt.*;
import java.awt.Graphics;

public class Volume extends JComponent{

	public Volume(){
		super();
	}
	
	@Override

	protected void paintComponent(Graphics Volume){
		Graphics cercle = Volume.create();


	if(this.isOpaque()){
		cercle.setColor(this.getBackground());
		cercle.fillRect(0,0, this.getWidth(), this.getHeight());
	}
	


	//création d'un cercle, boucle de 10 cercle dans le main
	cercle.setColor(Color.YELLOW);
	cercle.fillOval(10,50,50,50);


	cercle.drawOval(10,50,50,50);


	}


}
