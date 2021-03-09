import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

public class ScrollListener implements MouseWheelListener{
	private int taille;
	private Dessin circle;
	private JFrame vue;

	public ScrollListener(JFrame frame,Dessin cercle){
		this.vue = frame;
		this.circle = cercle;
	}
	public void mouseWheelMoved(MouseWheelEvent e)
	{
		int i = 0;
		taille = taille + e.getWheelRotation();
		if (taille <= 0) {
			taille = 0;
		}
		if (taille >= 10) {
			taille = 10;
		}
		System.out.println(taille);
		circle.newSize(taille);
		this.vue.repaint();
		e.consume();
	}
}