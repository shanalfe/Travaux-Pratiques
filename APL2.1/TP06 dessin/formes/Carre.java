import javax.swing.*;
import java.awt.*;

public class Carre extends JComponent {
	
	private Image s;
	public Carre (){
		super ();
		s = Toolkit.getDefaultToolkit().getImage("secoupe.png");
	}

	@Override

	protected void paintComponent (Graphics c){

		Graphics p = c.create();

		if (this.isOpaque()){			
			p.setColor(this.getBackground());
			p.fillRect(0,0,this.getWidth(), this.getHeight());
		}

		/*--- Carre ---*/
		p.setColor(Color.BLUE);
		p.drawRoundRect(50,50,50,50,10,10);
		/*--- Disque ---*/				
		p.setColor(Color.GREEN);			
		p.fillOval(150,50,50,50);
		/*--- Ecriture ---*/
		p.setColor(new Color(150,131,236));
		p.setFont(new Font("gras", Font.BOLD, 24));
		p.drawString(">o<", 250,75);
		/*--- Secoupe ---*/
		p.drawImage(s, 350,50,this);

	}

}