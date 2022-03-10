import javax.swing.*;
import java.awt.BorderLayout;

/**
 * Le point d'entrée de l'application.
 * @author Luc Hernandez
 */
public class Mag8 {

  /**
   * La méthode principale.
   * @param args Les arguments de la ligne de commande, qui sont ignorés.
   */
  public static void main(String[] args) {
    JFrame fenetre = new JFrame("Mag8");
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    JLabel etiquette = new JLabel("?", JLabel.CENTER);
    fenetre.add(etiquette, BorderLayout.CENTER);
    JTextField champ = new JTextField();
    fenetre.add(champ, BorderLayout.SOUTH);
    History modele = new History(etiquette);
    champ.addActionListener(new QuestionControl(modele));
    etiquette.addMouseWheelListener(new SelectionControl(modele));

    //modifié
    etiquette.addMouseListener(new MouseControl (modele));

    fenetre.setSize(500, 150);
    fenetre.setVisible(true);
  }

}