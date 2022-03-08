/**
 * Fenetre class definition
 * generated from StarUML project Memo on 18/06/2012
 *
 * @author Luc Hernandez
 */




public class Fenetre extends javax.swing.JFrame {
  private ClientDepot depot;
  private ControleColorFenetre control;
  javax.swing.JTextArea zone;
  public Fenetre() {
    depot = new ClientDepot("localhost", 11111);
   /* modifier */  String[] tab = depot.extraire();
    zone = new javax.swing.JTextArea(tab[0]);
   /* ajout*/ this.control =  new ControleColorFenetre(zone, Integer.parseInt(tab[1]));
    add(zone);
    addWindowListener(new ControleFenetre());
  /* ajout */  addMouseWheelListener(this.control);
    setDefaultCloseOperation(javax.swing.WindowConstants.DO_NOTHING_ON_CLOSE);
    setSize(200, 200);
    setTitle("Memo");
    setLocation(200, 200);
  }

  public void destroy() {
    int position = this.control.getPositionColor();
   /* modifier */ depot.entreposer(zone.getText(), new Integer(position));
    dispose();
  }
}