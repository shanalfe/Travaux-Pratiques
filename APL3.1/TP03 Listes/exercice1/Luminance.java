import javax.swing.JComponent;
import java.awt.Graphics;
import javax.swing.*;
import java.awt.*;


public class Luminance extends JComponent {
   
   

    private Polygon poly;

    int d = 2, i = 1;


    protected void paintComponent(Graphics c) {
        
        Graphics p = c.create();

        if(this.isOpaque()){
					p.setColor(this.getBackground());
					p.fillRect(0,0, this.getWidth(), this.getHeight());
				}

       // for ( i = 1; i<9; i++) {

            

            int xPoly[] = {120,210,150, 60};
            int yPoly[] = {30,30, 300, 300}; // position hauteur 2
            poly = new Polygon(xPoly, yPoly, xPoly.length);
            
            p.setColor (Color.BLACK);
            p.drawPolygon(poly);
					
				
        //}
            
            

       


    }
}
