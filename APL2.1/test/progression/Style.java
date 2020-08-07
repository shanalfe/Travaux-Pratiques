import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;
import java.awt.Color;


public class Style extends JComponent {

	@Override

	protected void paintComponent (Graphics Style){
		Graphics carre = Style.create();
	


		if (this.isOpaque()){
			carre.setColor(this.getBackground());
			carre.fillRect(0,0, this.getWidth(), this.getHeight());
		}
		carre.setColor(Color.BLACK);
		carre.drawRect(15,75, 170,50);

	}

	
}