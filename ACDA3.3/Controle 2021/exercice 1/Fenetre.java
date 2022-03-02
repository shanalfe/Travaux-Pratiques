import java.awt.*;
import java.util.*;
import javax.swing.*;

/**
 * Classe <Fenetre>
 * C'est la vue du programme
 */
public class Fenetre extends JFrame {

    /**
     * Constructeur Fenetre
     */
    public Fenetre() {

        super("Dessin");
        this.add(new Dessin (), BorderLayout.CENTER);
        this.pack();
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

    }
}
