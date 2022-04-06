Mécanismes IPC. Files de messages
Ex1
On se propose dans ce TP de mettre en place une architecture clients/serveur. Le serveur est un serveur de calcul, qui effectue les traitements demandés par les clients. Les clients transmettent leurs requêtes au serveur via une file de message. Le serveur récupère les requêtes, les traite, et poste dans la même file les résultats. Les calculs demandés seront simplement une opération sur deux opérandes entiers.

Il faut donc écrire 2 programmes :

un programme serveur : sans arguments, il crée une IPC file de messages, puis, indéfiniment, il se met en attente d'une requête d'un client. À la réception d'une requête, il fait le calcul demandé, et poste le résultat. Le serveur s'arrête à la réception du signal SIGINT.
un programme client : prenant comme arguments les opérandes de l'opération ainsi que l'opération, il envoie l'opération au serveur, attend la réponse, l'affiche quand elle arrive, puis se termine.
Conseils :

La clé de la file de messge sera obtenu par les clients et le serveur avec ftok en utilisant le fichier cle.serv.
Vous aurez à résoudre le problème de l'identification du client à l'origine d'une requête.
Nettoyez l'IPC derrière vous (msgctl) à la mort du serveur par SIGINT.
Pour vous aider, vous disposez des squelettes des programmes à écrire dans le répertoire src.

Trace d'une exécution :

[denis@portabledenis TP7]$ ./serveur &
[1] 960413
[denis@portabledenis TP7]$ ./client 1 + 3
		Le client 960433 envoie : 1 + 3
(Serveur) Requete recue de 960433
	op = +, g = 1, d = 3
		Le client 960433 recoit le resultat 4
[denis@portabledenis TP7]$ ./client 10 \* 154
		Le client 960466 envoie : 10 * 154
(Serveur) Requete recue de 960466
	op = *, g = 10, d = 154
		Le client 960466 recoit le resultat 1540
[denis@portabledenis TP7]$ kill -INT 960413
Serveur s'arrete
[1]+  Fini                    ./serveur
[denis@portabledenis TP7]$
Ex2
Modifiez votre application en faisant en sorte qu'il y ait un serveur dédié pour chaque type d'opérations (+,-,/ *).