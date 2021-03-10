import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class ControllerMouse implements MouseWheelListener {

	Cercle d;

	public ControllerMouse (Cercle d){

		this.d = d;
	}



	public void mouseWheelMoved (MouseWheelEvent e){

		if (e.getWheelRotation() > 0){
			d.dwV();
		} else {
			d.upV();
		}
	}

}