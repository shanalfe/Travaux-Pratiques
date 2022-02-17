Dans tous les exercices qui suivent vous devrez concevoir les applications sous StarUML avec au moins un diagramme de cas d’utilisation, un diagramme de classe et plusieurs diagrammes de séquences, avant de vous lancer dans le codage.

1. **Amélioration.** Modifiez l’application Mag8+ pour que lorsque l'utilisateur tape `purge` à la place de la question, la base de données se débarrasse de toutes les questions sauf les 5 dernières.

2. **Statistiques.** Écrivez une nouvelle application utilisant la même base de données qui affiche une barre verticale pour chaque réponse possible dont la hauteur est proportionnelle au nombre de questions qui ont reçu cette réponse.

   ![img](http://www.iut-fbleau.fr/sitebp/acda33/bases/Histogramme.svg)

3. **Annuaire.** Réalisez une application possédant un champ de texte `Nom` et un champ de texte `Numéro`.

   ![img](http://www.iut-fbleau.fr/sitebp/acda33/bases/annuaire.png)

   La validation d'un nom provoquera l'apparition du numéro de téléphone correspondant à ce nom s'il est déjà connu de l'application. La validation d'un numéro provoquera l'ajout (ou la mise à jour) de ces informations dans l'application. Pour assurer la persistance des informations, les noms et les numéros de téléphone seront stockés dans une base de données.