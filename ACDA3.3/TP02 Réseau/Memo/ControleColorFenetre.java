import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.ArrayList;

public class ControleColorFenetre implements MouseWheelListener {

    private ArrayList<Color> list;

    private int position;

    private JComponent comp;

    public ControleColorFenetre(JComponent p_comp) {

        this.position = 0;

        this.comp = p_comp;

        this.list = new ArrayList<Color>();

        this.list.add(Color.BLUE);
        this.list.add(Color.GREEN);
        this.list.add(Color.RED);
        this.list.add(Color.YELLOW);
        this.list.add(Color.GRAY);
        this.list.add(Color.MAGENTA);
        this.list.add(Color.ORANGE);
        this.list.add(Color.PINK);
        this.list.add(Color.CYAN);
        this.list.add(Color.WHITE);

    }

    public ControleColorFenetre(JComponent p_comp, Integer p_position) {

        this.comp = p_comp;

        this.position = p_position;

        this.list = new ArrayList<Color>();

        this.list.add(Color.BLUE);
        this.list.add(Color.GREEN);
        this.list.add(Color.RED);
        this.list.add(Color.YELLOW);
        this.list.add(Color.GRAY);
        this.list.add(Color.MAGENTA);
        this.list.add(Color.ORANGE);
        this.list.add(Color.PINK);
        this.list.add(Color.CYAN);
        this.list.add(Color.WHITE);

        this.comp.setBackground(this.list.get(this.position));

    }

    public int getPositionColor() {
        return this.position;
    }

    public void mouseWheelMoved(MouseWheelEvent e) {

        e.consume();

        if(e.getWheelRotation() > 0) {// tourne vers le bas
            this.position++;
            this.position %= 10;

            this.comp.setBackground(list.get(this.position));

            
        }
        else {

            this.position--;
            this.position %= 10;

            if(this.position < 0) {  this.position += 10;}

            this.comp.setBackground(list.get(this.position));

                
            
        }
    }
    
}