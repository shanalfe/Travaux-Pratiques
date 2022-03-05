import java.awt.*;

public class Fenetre extends JFrame {

    public Fenetre() {
        super("VueImage");
        this.add (new ControleDeplacement(Point ), BorderLayout.CENTER);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize (300,300);
        this.setVisible(true);
    }
}