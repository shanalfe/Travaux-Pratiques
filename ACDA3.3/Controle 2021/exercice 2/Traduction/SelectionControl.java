import java.awt.event.*;

/**
 * Contrôleur qui réagit à une manipulation de la molette de la souris en tentant de changer la question couramment affichée.
 * @author Luc Hernandez
 */
public class SelectionControl implements MouseWheelListener {

  /**
   * Le modèle dont la sélection doit changer.
   */
  private History model;

  /**
   * Crée un contrôleur qui instruit le modèle donné.
   * @param m Le modèle dont la sélection doit changer.
   */
  public SelectionControl(History m) {
    this.model = m;
  }

  /**
   * Réagit à une manipulation de la molette de la souris.
   * @param e L'évènement décrivant la manipulation de la molette.
   */
  public void mouseWheelMoved(MouseWheelEvent e) {
    this.model.shiftSelection(e.getWheelRotation());
  }

}