1. Traces. 
Employez la méthode getAllStackTraces de la classe Thread afin d'écrire une application qui affiche à la console le nom de tous les processus en cours ainsi que la pile des appels de chacun.



![image-20220217191823582](/home/shanou/snap/typora/49/.config/Typora/typora-user-images/image-20220217191823582.png)

2 Couleurs. 
Le fichier rgb.txt est une version du fichier qui permet le choix des couleurs dans un serveur X. Écrivez une application qui lit dans ce fichier et ouvre une fenêtre contenant une liste non déroulante (JList<E>) et un panneau. La liste offrira le choix entre tous les noms de couleur définis dans le fichier, et sélectionner l'un de ces noms provoquera la coloration du panneau en conséquence.





![image-20220217191920574](/home/shanou/snap/typora/49/.config/Typora/typora-user-images/image-20220217191920574.png)



La lecture de ce fichier se fait par le biais d'un *flux d'entrée* de la classe [`BufferedReader`](http://www.iut-fbleau.fr/docs/java/api/java/io/BufferedReader.html) :

```java
try {
  BufferedReader lecture = new BufferedReader(
                           new FileReader("rgb.txt"));
  try {
    while((ligne = lecture.readLine()) != null) {
      ...
    }
  } catch(IOException e) {
    System.err.println("Erreur de lecture dans rgb.txt !");
  }
  try {
    lecture.close();
  } catch(IOException e) {
    System.err.println("Erreur de fermeture de rgb.txt !");
  }
} catch(FileNotFoundException e) {
  System.err.println("Erreur d'ouverture de rgb.txt !");
}
```

**Remarque** Utilisez les méthodes `split` et `trim` de la classe [`String`](http://www.iut-fbleau.fr/docs/java/api/java/lang/String.html) pour décomposer les lignes ainsi obtenues.



3. **Hachage.** Écrivez votre propre classe pour remplacer le dictionnaire de l'exercice précédent. Vous ne réaliserez pas l'interface [`Map`](http://www.iut-fbleau.fr/docs/java/api/java/util/Map.html) au complet pour ne pas y passer trop de temps.

4. **Compteur.** Écrivez une application qui demande en boucle des phrases, et qui affiche en réponse le nombre de fois que cette phrase a déjà été saisie. L'application s'arrêtera si la saisie est vide.

La lecture à la console se fait à nouveau à l'aide d'un *flux d'entrée* :

```java
BufferedReader lecture = new BufferedReader(
                         new InputStreamReader(
                         System.in));
```

