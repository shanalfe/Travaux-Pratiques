import java.awt.event.*;  

/**
 * Création de la Class permet de faire la traduction
 */
public class MouseControl implements MouseListener {


    private History model;

    public MouseControl (History m) {
        this.model = m;
    }

    public void mouseClicked(MouseEvent e) {  
        System.out.println("Cliqué");
       
        //modifié
        this.model.changeLangue();
        this.model.display();
        
    }  


    public void mouseEntered(MouseEvent e) {}  
    public void mouseExited(MouseEvent e) {}  
    public void mousePressed(MouseEvent e) {}  
    public void mouseReleased(MouseEvent e){}  
    

}