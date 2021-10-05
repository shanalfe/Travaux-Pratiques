import javax.swing.*;
import java.awt.*;


public class Main {
    
    public static void main(String[] args) {
        
        JFrame frame = new JFrame();
        frame.setSize(1000, 500);
        frame.setLocation(0, 0);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Luminance lum = new Luminance();
        frame.add(lum, BorderLayout.CENTER);

        frame.setVisible(true);
    }
}