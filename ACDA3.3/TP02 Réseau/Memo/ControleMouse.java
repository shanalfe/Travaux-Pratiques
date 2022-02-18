import java.awt.event.*;
import java.awt.*;
import java.util.ArrayList;
import java.util.List;
import java.awt.Color;

public class ControleMouse implements MouseWheelListener {

	private List<Color> couleurs = new ArrayList<Color>(); 
	private int position = 0;
	private Color color;
	

	public ControleMouse () {
		
		this.color = Color.RED;

		this.couleurs.add(Color.RED);
		this.couleurs.add(Color.GRAY);
		this.couleurs.add(Color.BLACK);
		this.couleurs.add(Color.ORANGE);
	}

	
	public void mouseWheelMoved(MouseWheelEvent e) {
        
        if (e.getWheelRotation() < 0) {
        	if (this.position == 3) {
        		this.couleurs.get(this.position = 0);
        	} else {
        		this.couleurs.get(this.position = this.position + 1);
        	}

        } else { 

        	if(this.position == 0) {
        		this.couleurs.get(this.position = 3);
        	} else {
        		this.couleurs.get(this.position = this.position - 1);
        	}
        }

        color = this.couleurs.get(this.position);
       
    }

    public Color getCouleur () {
    	return this.color;
    }


	
}