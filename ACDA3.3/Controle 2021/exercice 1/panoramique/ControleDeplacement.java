import java.awt.event.*;
import java.awt.Point;


public class ControleDeplacement implements MouseListener, MouseMotionListener {
    
    private Point position;

    private int deltaX;
    private int deltaY;

    public ControleDeplacement(Point origine) {
        this.position = origine;
    }

    public void mouseClicked(MouseEvent evenement) {}
    public void mouseEntered(MouseEvent evenement) {}
    public void mouseExited(MouseEvent evenement) {}
    public void mousePressed(MouseEvent evenement){}
    public void mouseReleased(MouseEvent evenement){}
    public void mouseMoved(MouseEvent evenement){}

    public void mouseDragged(MouseEvent evenement){

       
        this.positionImage.move(evenement.getX(), evenement.getY());
        
        repaint();
        
    }

}