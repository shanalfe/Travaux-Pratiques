import java.util.*;
import java.awt.*;
import java.awt.image.*;
import javax.swing.*;

/**
 * Class Dessin permet de déssiner
 */
public class Dessin extends JComponent {

   private BufferedImage modele;
    /**
     * Constructeur
     */
    public Dessin () {
        super();
        this.modele = new BufferedImage (300,300, BufferedImage.TYPE_BYTE_BINARY);
        this.addMouseListener(new ControleClic (modele));
        this.setPreferredSize (new Dimension(300,300));
    }

    /**
     * Méthode paintComponent
     * @param pinceau
     */
    protected void paintComponent (Graphics pinceau) {
        Graphics secondPinceau = pinceau.create();
        if (this.isOpaque()) {
            secondPinceau.setColor(this.getBackground());
            secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
        }
        //permet la couleur noir fond
        secondPinceau.drawImage(this.modele, 0,0,300,300,null);
    }
}