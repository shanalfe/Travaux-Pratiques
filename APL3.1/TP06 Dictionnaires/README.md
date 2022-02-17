Dictionnaires

1. Traces. 
Employez la méthode getAllStackTraces de la classe Thread afin d'écrire une application qui affiche à la console le nom de tous les processus en cours ainsi que la pile des appels de chacun.

```
bob@box:~$ java Traces
Finalizer :
  java.lang.Object.wait(Native Method)
  java.lang.ref.ReferenceQueue.remove(Unknown Source)
  java.lang.ref.ReferenceQueue.remove(Unknown Source)
  java.lang.ref.Finalizer$FinalizerThread.run(Unknown Source)

main :
  java.lang.Thread.dumpThreads(Native Method)
  java.lang.Thread.getAllStackTraces(Unknown Source)
  Question1.main(Question1.java:6)

...
```


2 Couleurs. 
Le fichier rgb.txt est une version du fichier qui permet le choix des couleurs dans un serveur X. Écrivez une application qui lit dans ce fichier et ouvre une fenêtre contenant une liste non déroulante (JList<E>) et un panneau. La liste offrira le choix entre tous les noms de couleur définis dans le fichier, et sélectionner l'un de ces noms provoquera la coloration du panneau en conséquence.






![image](https://user-images.githubusercontent.com/69315804/154546038-d8cdf390-d4ca-4883-a096-23e8d3635793.png)



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

