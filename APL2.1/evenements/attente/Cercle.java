import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;


public class Cercle  extends JComponent{


	@Override

	protected void paintComponent(Graphics Cercle){
		Graphics disque = Cercle.create();


	if(this.isOpaque()){
		disque.setColor(this.getBackground());
		disque.fillRect(0,0, this.getWidth(), this.getHeight());
	}

	//un cercle magenta

	disque.setColor(Color.MAGENTA);
	disque.fillOval(150,50,50,50);






	}




}