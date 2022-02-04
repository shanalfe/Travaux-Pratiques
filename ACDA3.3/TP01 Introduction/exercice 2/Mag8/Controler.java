import java.awt.event.MouseWheelListener;
import java.awt.event.WindowListener;
import java.awt.event.ActionListener;
import java.awt.event.MouseWheelEvent;
import java.awt.event.ActionEvent;
import java.awt.event.WindowEvent;
import java.awt.TextField;
import java.awt.Frame;

/**
 * An instance of this class monitors the view elements for designated
 * events and notifies the relevant object(s).
 *
 * <p>
 * Mouse scroll events are relayed to a {@link History History} instance for
 * navigation between past answers.
 * </p><p>
 * Question validation events are relayed to the same {@link History History}
 * instance for the generation of a new answer.
 * </p><p>
 * Based on Controler class definition
 * generated from StarUML project Mag8 on 04/03/2012
 * </p>
 *
 * @author Luc Hernandez
 */
public class Controler implements MouseWheelListener, WindowListener, ActionListener {
  private History model;

  /**
   * Constructs a <code>Controler</code> object with the specified model.
   *
   * @param  h
   *         the model to be notified in case of an event
   */
  public Controler(History h) {
    model = h;
  }

  /**
   * Reacts to the user validating the text of a question, and empties the input field.
   *
   * @param  e
   *         the object containing the properties of the event.
   */
  public void actionPerformed(ActionEvent e) {
    model.generate(e.getActionCommand());
    ((TextField) e.getSource()).setText("");
  }

  /**
   * Reacts to the user mouse scrolling in the area displaying the answers.
   *
   * @param  e
   *         the object containing the properties of the event.
   */
  public void mouseWheelMoved(MouseWheelEvent e) {
    model.shiftSelection(e.getWheelRotation());
  }

  /**
   * Closes the window when the decoration close button is used
   *
   */
  public void windowClosing(WindowEvent e) {
    ((Frame) e.getSource()).dispose();
  }

  public void windowOpened(WindowEvent e) {}
  public void windowClosed(WindowEvent e) {}
  public void windowIconified(WindowEvent e) {}
  public void windowDeiconified(WindowEvent e) {}
  public void windowActivated(WindowEvent e) {}
  public void windowDeactivated(WindowEvent e) {}

}
