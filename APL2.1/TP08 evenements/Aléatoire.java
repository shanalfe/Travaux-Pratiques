package jeu;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import javax.swing.event.*;

public class Aléatoire extends JFrame {   
   private int nombre, nombreAléatoire, tentative, maximum = 10, coup = 3;
   private ArrayList<Integer> historique = new ArrayList<Integer>();
   private boolean gagné = false;
   
   private Configuration configuration = new Configuration();
   private Jeu jeu = new Jeu();
   private Résultat résultat = new Résultat();
   private CardLayout pile = new CardLayout();
   
   public Aléatoire() {
      super("Nombre aléatoire");
      setLayout(pile);
      add(configuration, "configuration");
      add(jeu, "jeu");
      add(résultat, "résultat");      
      pack();
      setDefaultCloseOperation(EXIT_ON_CLOSE);
      setResizable(false);
      setVisible(true);
   }
   
   public static void main(String[] args) { new  Aléatoire(); }
   
   private class Etiquette extends JLabel {
      public Etiquette(String intitulé) {
         super(intitulé);
         setHorizontalAlignment(RIGHT);
         setBorder(BorderFactory.createEtchedBorder());         
         setPreferredSize(new Dimension(112, 22));
      }
   }
   
   abstract private class Panneau extends JPanel implements ActionListener, FocusListener {
      protected JPanel panneau = new JPanel();
      protected JButton continuer = new JButton("Continuer");
      
      public Panneau() {
         setLayout(new BorderLayout());
         panneau.setBackground(Color.ORANGE);
         panneau.setLayout(new GridLayout(0, 2));
         add(panneau);
         add(continuer, BorderLayout.SOUTH);
         continuer.addActionListener(this);
         addFocusListener(this);
         setFocusable(true);
      }

      public void focusGained(FocusEvent e) { }
      public void focusLost(FocusEvent e) {}
   }
   
   private class Configuration extends Panneau implements ChangeListener, ActionListener {
      private JSpinner saisieMaximum = new JSpinner(new SpinnerNumberModel(10, 7, 100, 5));
      private JSpinner saisieCoup = new JSpinner(new SpinnerNumberModel(3, 3, 10, 1));
            
      public Configuration() {        
         panneau.add(new Etiquette("Maximum : "));
         panneau.add(saisieMaximum);
         panneau.add(new Etiquette("Coup : "));
         panneau.add(saisieCoup);        
         saisieMaximum.addChangeListener(this);        
         saisieCoup.addChangeListener(this);
      }

      @Override
      public void actionPerformed(ActionEvent e) {
         pile.next(getContentPane());
         jeu.requestFocus();
      }

      public void stateChanged(ChangeEvent e) {
         if (e.getSource() == saisieMaximum) maximum = (Integer)saisieMaximum.getValue();
         if (e.getSource() == saisieCoup) coup = (Integer)saisieCoup.getValue();
      }  
   }
   
   private class Jeu extends Panneau {
      private JTextField saisieNombre = new JTextField(nombre);
      private JLabel afficheRésultat = new JLabel("Tentez votre chance...");
      private JTextField lectureTentative = new JTextField("0");
      
      public Jeu() {
         panneau.add(new Etiquette("Valeur : "));
         panneau.add(saisieNombre);
         panneau.add(new Etiquette("Tentatives : "));
         lectureTentative.setEditable(false);
         panneau.add(lectureTentative);
         add(afficheRésultat, BorderLayout.SOUTH);
         saisieNombre.addActionListener(this);
      }

      @Override
      public void actionPerformed(ActionEvent e) {
         historique.add(nombre = Integer.parseInt(saisieNombre.getText()));
         tentative++;
         gagné = nombre == nombreAléatoire;
         if (gagné || tentative==coup) {
            pile.next(getContentPane());
            résultat.requestFocus();
         }      
         else {
            lectureTentative.setText(""+tentative);
            afficheRésultat.setText(" Le nombre est "+(nombreAléatoire>nombre ? "plus grand" : "plus petit"));
         }
      }
      
      @Override
      public void focusGained(FocusEvent e) {
         nombreAléatoire = (int)(Math.random()*maximum)+1;
         tentative = 0;
         afficheRésultat.setText("Tentez votre chance...");
         lectureTentative.setText("0");
         saisieNombre.setText("0");
         historique.clear();      
         pack();
      }
   }
   
   private class Résultat extends Panneau {
      @Override
      public void actionPerformed(ActionEvent e) {
         continuer.setText("Continuer");
         pile.next(getContentPane());
      }
      
      public void focusGained(FocusEvent e) {
         continuer.setText("Recommencer");
         panneau.removeAll();
         if (gagné) panneau.add(new JLabel(" Bravo ..."));
         else {
            panneau.add(new Etiquette("Nombre à trouver : "));
            panneau.add(new Etiquette(nombreAléatoire+" "));
            for (int i=0; i<historique.size(); i++) {
               panneau.add(new Etiquette("Coup n°"+(i+1)+" : "));
               panneau.add(new Etiquette(historique.get(i)+" "));
            } 
         } 
         pack();
      }
   }
}
