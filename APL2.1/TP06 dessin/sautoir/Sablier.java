import javax.swing.*;
import java.awt.*;

public class Sablier extends JComponent {

	public Sablier (){
		super();
	}


	@Override
	protected void paintComponent (Graphics g){

		Graphics p = g.create();

		if (this.isOpaque()){			
			p.setColor(this.getBackground());
			p.fillRect(0,0,this.getWidth(), this.getHeight());
		}
		p.setColor (Color.BLUE);
	
		p.fillPolygon (new int [] {0, 135/2, 135}, new int [] {100,50,100 },3); //dessus
		p.fillPolygon (new int [] { 0,135/2, 135 }, new int [] { 0,50,0 }, 3 ); //dessous

	}

}