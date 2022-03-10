import java.awt.event.*;

/**
 * Contrôleur qui réagit à la validation d'un texte en soumettant ce texte comme nouvelle question.
 * @author Luc Hernandez
 */
public class QuestionControl implements ActionListener {

  /**
   * Le modèle qui accepte les nouvelles questions.
   */
  private History model;

  /**
   * Crée un contrôleur qui instruit le modèle donné.
   * @param m Le modèle qui accepte les nouvelles questions.
   */
  public QuestionControl(History m) {
    this.model = m;
  }

  /**
   * Réagit à la validation d'un texte.
   * @param e L'évènement qui décrit les circonstances de la validation.
   */
  public void actionPerformed(ActionEvent e) {
    ((javax.swing.JTextField) e.getSource()).setText("");
    this.model.add(e.getActionCommand());
  }
}