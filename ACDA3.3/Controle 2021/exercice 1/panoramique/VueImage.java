import java.awt.Image;
import javax.swing.JComponent;
import java.awt.Point;
import java.awt.Graphics;
import java.awt.Toolkit;

/**
 * Class VueImage
 */
public class VueImage extends JComponent {

    private Image image;
    private Point positionImage;

    public VueImage() {
        super();
        this.addMouseListener(new ControleDeplacement(positionImage) );
        this.addMouseMotionListener(new ControleDeplacement(positionImage)); 
       
        this.positionImage = new Point();
        this.image = Toolkit.getDefaultToolkit().getImage("charlie.jpg");

    }

    /**
     * Méthode
     */
    public void paintComponent(Graphics pinceau) {
        
        Graphics secondPinceau = pinceau.create();
       
        if (this.isOpaque()) {
            secondPinceau.setColor(this.getBackground());
            secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
        }

        secondPinceau.drawImage (image, )

      

       
   }

}