import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;


public class Cercle extends JComponent{


	@Override

	protected void paintComponent(Graphics c){
		Graphics p = c.create();


		if(this.isOpaque()){
			p.setColor(this.getBackground());
			p.fillRect(0,0, this.getWidth(), this.getHeight());
		}

	//un cercle magenta

		p.setColor(Color.MAGENTA);
		p.fillOval(150,50,50,50);
	}


}