1. **Véhicules.** Faites marcher ce programme incomplet :

   

   ```
   import javax.swing.JOptionPane;
    
   public class Test {
     public static void main(String[] args) {
       Vehicule v;
       Object[] choix = {"Voiture", "Moto"};
    
       int reponse = JOptionPane.showOptionDialog(null,
         "Quel v\u00E9hicule choisissez-vous ?",
         "Question",
         JOptionPane.DEFAULT_OPTION,
         JOptionPane.QUESTION_MESSAGE,
         null,
         choix,
         null);
       if (reponse == 0)
         v = new Voiture();
       else
         v = new Moto();
       System.out.println("Une "+v.sorte()+" poss\u00E8de "+v.nbRoues()+" roues.");
     }
   }
   ```

   

   Il n'y a pas besoin de modifier ce code ; il suffit de le placer dans un fichier nommé `Test.java`. Par contre, il ne pourra compiler que quand vous aurez écrit des définitions pour les classes `Voiture` et `Moto` ainsi que pour l'interface `Vehicule`.

2. **Moyenne.** On désire concevoir une classe qui puisse calculer la moyenne d'une collection hétéroclite de valeurs. On imagine une méthode `add` pour ajouter une valeur, et une méthode `getAverage` pour obtenir la moyenne des valeurs données jusque là. Le problème est que les valeurs peuvent appartenir à n'importe quel type primitif parmi `byte`, `short`, `int`, `long`, `float` et `double`.

   1. La solution la plus simple consiste à exploiter la surcharge. Définissez la classe demandée en fournissant une version différente de la méthode `add` pour chaque type possible.
   2. La première solution est longue à écrire, et nécessite une évolution si on ajoute un nouveau type à la liste. Nous allons profiter du fait que tous les valeurs d'un type primitif peuvent être transformées en objets, et que les classes de ces objets héritent toutes de la classe abstraite [`Number`](http://www.iut-fbleau.fr/docs/java/api/java/lang/Number.html). Modifiez la définition de la classe précédente pour qu'il n'y ait plus qu'une seule version de la méthode `add`.

   

3. **Polyligne.** Écrivez un programme qui ouvre une fenêtre affichant une polyligne : une ligne brisée reliant une suite de points.

   Ce programme est un *consommateur* : il ne peut pas fonctionner sans qu'on lui donne les coordonnées des points à relier. Nous allons donc devoir lui fournir un *service* qui remplit ce besoin. Les termes de ce service sont explicités sous la forme d'une interface :

   

   ```
   import java.awt.Point;
    
   public interface ProducteurDePoints {
     Point suivant();
   }
   ```

   

   Chaque appel à la méthode `suivant` fournira le point suivant à relier, jusqu'à ce qu'il n'y ait plus de point, auquel cas la méthode renvoie `null`. Après cela, l'objet est réinitialisé et les prochains appels à `suivant` donneront à nouveau la suite des points depuis le début.

   Pour vous aider à écrire le programme, voici un fournisseur possible pour ce service :

   

   ```
   import java.awt.Point;
    
   public class Etoile implements ProducteurDePoints {
     private static final int xCentre = 100;
     private static final int yCentre = 100;
     private static final double rayon = 90.0;
     private static final double angleDepart = Math.PI/4.0;
     private static final double angleIncrement = (4.0*Math.PI)/5.0;
     private double numero;
     public Etoile() {
       this.numero = 0.0;
     }
     public Point suivant() {
       Point p = null;
       if (this.numero < 6.0) {
         double angle = Etoile.angleDepart+this.numero*Etoile.angleIncrement;
         p = new Point((int) (Etoile.rayon*Math.cos(angle)),
                       (int) (Etoile.rayon*Math.sin(angle)));
         p.translate(Etoile.xCentre, Etoile.yCentre);
         this.numero++;
       } else {
         this.numero = 0.0;
       }
       return p;
     }
   }
   ```

   

   Une fois que votre programme sera opérationnel, remplacez le fournisseur par votre propre version qui produira des points décrivant une spirale.

   **Remarque** Cette substitution ne devrait nécessiter que de changer un seul mot dans la méthode principale du programme.

   