/**
 * ClientStart class definition
 * generated from StarUML project Memo on 18/06/2012
 *
 * @author Luc Hernandez
 */




public class ClientStart implements java.lang.Runnable {
  public static void main(String[] args) {
    javax.swing.SwingUtilities.invokeLater(new ClientStart());
  }
  public void run() {
    (new Fenetre()).setVisible(true);
  }
}
