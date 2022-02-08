import java.awt.Frame;
import java.awt.Label;
import java.awt.TextField;
import java.awt.BorderLayout;
import java.awt.*;
import javax.swing.*;

/**
 * Container for the main method.
 *
 * @author Luc Hernandez
 */
public class Start {
  /**
   * Instanciates the objects composing the program and links them together
   *
   * @param  args
   *         the command line arguments of the program. None are required in this case.
   */
  public static void main(String[] args) {
    JFrame window = new JFrame("Mag8");
    JLabel display = new JLabel("?", JLabel.CENTER);
    TextField input = new TextField();
    History model = new History(display);
    Controler control = new Controler(model);

    // coloration du fond
    display.setOpaque(true);


    display.addMouseWheelListener(control);
    input.addActionListener(control);
    window.addWindowListener(control);

    window.setResizable(false);
    window.setSize(400, 100);
    window.setLocation(100, 100);
    window.setLayout(new BorderLayout());
    window.add(display, BorderLayout.CENTER);
    window.add(input, BorderLayout.SOUTH);
    window.setVisible(true);
  }
}
