import javax.swing.*;
import java.awt.*;

public class fenetre extends JFrame{

	public fenetre (){
		Dimension d = new Dimension(1500, 200);

		this.setSize(1500, 200);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setMinimumSize(d);
		this.setLocation(200, 200);

		Dessin circle = new Dessin(5);
		this.add(circle);

		Commande listen = new Commande (this.circle);
		this.addMouseWheelListener(listen);
	}
}