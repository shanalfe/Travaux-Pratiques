import java.util.*;
import java.awt.*;
import java.awt.image.*;
import javax.swing.*;
import java.awt.event.*;

/**
 * Class ControleClic est l'évènement
 */
public class ControleClic implements MouseListener {

    private BufferedImage modele;

    public ControleClic (BufferedImage m) {
        this.modele = m;
    }

    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}

    public void mouseClicked(MouseEvent e) {
        System.out.println("Cliqué");

        if(e.getButton()==MouseEvent.BUTTON1) { //BUTTON1 -> clique gauche 
            this.modele.setRGB(e.getX(), e.getY(), Color.WHITE.getRGB());
            Component comp = e.getComponent();
            comp.repaint(); // repeindre en noir
        }

    }
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

}