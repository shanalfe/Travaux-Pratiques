1. Choix. 

Reprenez l'exercice 4 du sujet sur les composants et ajoutez la quatrième maison, Poufsouffle.

La mise en page reste peu satisfaisante lorsque la fenêtre est trop petite. Limitez sa taille à des dimensions raisonnables.

2 Damier. 
Écrivez une application qui ouvre une fenêtre ayant l'apparence suivante :

![image](https://user-images.githubusercontent.com/69315804/153002604-dd028d63-a929-424e-9929-540be0c2f9ea.png)

Le nombre de lignes (qui est égal au nombre de colonnes) devra être passé sur la ligne de commande.

3 Question. 
Écrivez une application qui ouvre une fenêtre ayant l'apparence suivante :

![image](https://user-images.githubusercontent.com/69315804/153002694-e6cf6cd0-d4fb-43f2-afa6-2e417099685b.png)


La question et les réponses devront rester au centre de la fenêtre en cas de redimensionnement.

 4 Rose. 
 Écrivez une application qui ouvre une fenêtre ayant l'apparence suivante :

![image](https://user-images.githubusercontent.com/69315804/153002989-25e92ac7-981b-4ab3-aea3-a0bded8e8195.png)

 5 Piège. 
 Écrivez une application qui ouvre une fenêtre ayant l'apparence suivante :

![image](https://user-images.githubusercontent.com/69315804/153003074-7268c22c-dfc2-4776-9f2c-ca3eaef12e44.png)
Cet exercice est un piège ! Les gestionnaires de mise en page que nous avons vu ne permettent pas de réaliser une telle configuration, même en combinaison. Il est possible dans ce cas de poser les composants «manuellement». On désactive d'abord le gestionnaire actuel avec :

fenetre.setLayout(null);
Puis on peut décider de la position et de la taille d'un composant en utilisant ses méthodes setLocation et setSize (comme pour une fenêtre).

Remarque Cette façon de faire est rarement employée car la mise en page n'est plus dynamique : en cas de redimensionnement, les composants ne s'adaptent pas.
