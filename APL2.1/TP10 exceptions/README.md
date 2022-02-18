1. **Plantages.** Écrivez cinq applications qui lèvent chacune une exception sans l'attraper. La classe de l'exception sera suivant les cas :

   - une [`ArrayIndexOutOfBoundsException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/ArrayIndexOutOfBoundsException.html),
   - une [`NumberFormatException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/NumberFormatException.html),
   - une [`ArithmeticException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/ArithmeticException.html),
   - une [`NullPointerException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/NullPointerException.html),
   - une [`RuntimeException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/RuntimeException.html).

   

   **Remarque** Aucune méthode ou opération connue ne lève cette dernière sorte d'exception...

2. **Capture.** Reprenez l'application de l'exercice précédent qui lève une [`ArithmeticException`](http://www.iut-fbleau.fr/docs/java/api/java/lang/ArithmeticException.html). Mettez l'instruction responsable de l'exception dans une autre méthode que `main`, et invoquez cette méthode dans le `main`. Qu'est-ce qui change lors de l'exécution ?

   Ajoutez dans la méthode secondaire un bloc `try`...`catch` pour capturer l'exception et afficher un message d'erreur de votre choix.

   Enlevez ensuite le bloc `try`...`catch` de la méthode secondaire, et placez-le dans le `main` de façon à tout de même capturer l'exception. Quest-ce que ça change ?

3. **Incomplet.** Le programme suivant est bien écrit, cependant à la compilation il reste une erreur. Sans toucher aux lignes existantes, ajoutez ce qui manque pour que l'application compile et s'exécute.

   

   ```
   public class Incomplet {
   	public static void main(String[] args) {
   		byte[] txt = {0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x0D, 0x0A};
   		System.out.write(txt);
   	}
   }
   ```

   

4.  **Apparences.** Reprenez le premier exercice du [premier sujet sur les évènements](http://www.iut-fbleau.fr/sitebp/apl21/evenements1/) et ajoutez au début de la méthode principale l'instruction suivante :

   

   ```
   UIManager.setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel");
   ```

   

   Que faut-il ajouter pour que ça compile ? Que constatez-vous lorsque vous exécutez cette application ?

   Remplacez la chaîne de caractère par `"javax.swing.JFrame"`. Que fait alors l'application ? Et pour la chaîne `"toto"` ? Si ce n'est pas déjà le cas, faites en sorte d'afficher un message d'erreur différent pour ces deux situations.

5.  **Degrés.** Écrivez une application qui ouvre une fenêtre contenant deux champs de texte. En tapant une température en degrés Celsius dans le premier champ de texte, on fait apparaître la conversion en degrés Farenheit dans le second, et vice-versa. Si le texte tapé n'est pas un réel, le résultat sera `???`.

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/exceptions/Degres.jpg)