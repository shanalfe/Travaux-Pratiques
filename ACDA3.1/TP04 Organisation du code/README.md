1 alerie. 
Reprenez le premier exercice du sujet sur les transitions (n’importe quelle version) et générez une archive exécutable. Attention aux images…

2 Quiz. 
Écrivez une application qui propose un QCM à l’utilisateur. Un QCM est une série de questions. Une question est composée du texte de la question, du texte de chaque réponse proposée (entre 2 et 5), et de l’identification de la bonne réponse.

L’utilisateur devra répondre à 10 questions. Chaque question aura son propre écran, et l’utilisateur pourra naviguer de l’un à l’autre sans contrainte. Une fois qu’il a sélectionné une réponse pour chaque question, il peut valider ses choix. On lui donne alors le pourcentage de bonnes réponses, et si il revient sur les écrans précédents, il peut comparer ses réponses avec la solution attendue (mais ne peut plus les changer).

Pour simplifier, on choisit de générer les questions aléatoirement. Elles seront toutes de la forme « AxB=? », où A et B seront des chiffres. Ce choix ne doit pas influer sur le code de vos classes (à part le générateur).

Pour le modèle, vous définirez :

une classe qui représente une question
une classe qui représente les choix de l’utilisateur
une classe qui représente la source des questions
Pour la vue, vous définirez :

une classe qui affiche une question, soit en mode choix, soit en mode solution
une classe qui demande la validation des choix, puis affiche le résultat
une classe qui représente la fenêtre entière du quiz
Pour le contrôleur, vous définirez :

une classe qui gère le démarrage
une classe qui gère la navigation entre les écrans (suivant/précédent)
une classe qui gère la validation des choix
Pour cet exercice vous devrez respecter toutes les consignes indiquées plus haut : répertoires du projet, packages, Makefile, archivage.
