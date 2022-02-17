1. **Progressions.** Écrivez un programme où les tableaux `t1`, `t2` et `t3` contiennent les valeurs suivantes :

   

   | 1    | 2    | 3    | 4    | 5    |
   | ---- | ---- | ---- | ---- | ---- |
   | 1    | 2    | 3    | 4    | 5    |

   | 1    | 2    | 3    | 4    | 5    |
   | ---- | ---- | ---- | ---- | ---- |
   | 6    | 7    | 8    | 9    | 10   |
   | 11   | 12   | 13   | 14   | 15   |

   | 0    | 0    | 0    | 0    | 0    |
   | ---- | ---- | ---- | ---- | ---- |
   | 1    | 0    | 0    | 0    | 0    |
   | 1    | 2    | 0    | 0    | 0    |
   | 1    | 2    | 3    | 0    | 0    |
   | 1    | 2    | 3    | 4    | 0    |

   

   Utilisez des boucles (pas des listes) pour placer ces valeurs dans les tableaux. Affichez les tableaux les uns au-dessus des autres. Puis affichez-les à nouveau, en inversant lignes et colonnes.

2. **Horizontal.** Reprenez l'exercice précédent, et cette fois affichez les tableaux côte-à-côte (comme sur la figure ci-dessus).

3. **Triangle.** Écrivez un programme qui place dans un tableau à deux dimensions un triangle de Pascal de hauteur 30 puis l'affiche.

   

   ```
    1
    1   1
    1   2   1
    1   3   3   1
    1   4   6   4   1
    1   5  10  10   5   1
    1   6  15  20  15   6   1
    ...
   ```

   

   On rappelle la relation de récurrence :

   ![img](http://www.iut-fbleau.fr/sitebp/apl11/tableaux2/binomial.svg)

   

4.  **Balayage.** Reprenez l'exercice précédent, en utilisant cette fois un tableau à une seule dimension.

5.  **Magique.** Un carré magique est une grille de trois lignes et trois colonnes contenant tous les chiffres de 1 à 9. Si on additionne les trois chiffres sur une ligne, une colonne ou une diagonale, on obtient toujours la même valeur.

   

   ```
   8  3  4
   1  5  9
   6  7  2
   ```

   

   Écrivez un programme qui demande à l'utilisateur la valeur à mettre dans chacune des neuf cases, puis indique si le carré est magique. On s'attachera à vérifier que :

   - chaque valeur est comprise entre 1 et 9,
   - aucune valeur n'est répétée,
   - les sommes des lignes sont identiques,
   - les sommes des colonnes sont identiques (à la somme trouvée plus haut),
   - les sommes des diagonales sont identiques (à la somme trouvée plus haut).

   