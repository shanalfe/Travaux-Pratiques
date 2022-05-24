# TP javascript : Ajax, promesses.

Vous disposez tous, à la racine de votre compte, d'un répertoire `public_html` qui est servi (http/https) par le serveur dwarves. Pour accéder à vos pages, utilisez l'url :

> http(s)://dwarves.[arda|iut-fbleau.fr]/~login

#### Ex1

Écrire un client html qui permet d'envoyer en POST des messages (du texte) à un serveur echo. Vous écrirez le serveur en php.

Le client affiche les échos du serveur, avec à chaque fois le temps d'échange.

[![echo](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/exo1.png?style=centerme)](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/exo1.png?style=centerme)

Vous en écrirez deux versions :

- Echange des données au format `application/x-www-form-urlencoded` (données de formulaires).
- Echange des données au format `application/json`.

Le serveur renvoie uniquement du json.

#### Ex2

On veut implanter une autocomplétion sur un champ texte qui permet de saisir le nom d'une commune française.

[![completion](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/comp.png?style=centerme)](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/comp.png?style=centerme)

> L'api libre [api-geo](https://api.gouv.fr/les-api/api-geo) permet de faire des recherches de communes suivant plusieurs critéres, dont le nom de la commune. Testez l'api directement pour savoir comment la mettre en oeuvre dans programme.

Mise en oeuvre

- Utilisez une `datalist` qui contiendra les propositions de communes renvoyées par l'api.

- Évitez de faire une nouvelle requête à l'api à chaque nouveau caractère saisi. Dans `helpers.js`, regardez la fonction

  ```
    function debounce(fn, wait) 
    {
        let timeout;
        return (...args) => {
            clearTimeout(timeout);
            timeout = setTimeout(() => fn(...args), wait);
        }
    }
  ```

- Inutile de rafraîchir la liste des propostiions si elle n'a pas changé.

- Limitez le nombre de résultats renvoyés par l'api.

#### Ex3

Un chat avec Ajax.

On va écrire un chat rudimentaire en faisant sur un serveur du polling. Toutes les secondes, une requête Ajax interroge le serveur pour obtenir les nouveau messages, et actualiser leur liste sur le client.

Au départ, l'interface demande un pseudo.

[![completion](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/chat1.png?style=centerme)](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/chat1.png?style=centerme)

La liste des messages en cours est alors affiché. A chaque fois que le client saisi un message, celui-ci est mémorisé, et sera envoyé avec la prochaîne requête ajax.

[![completion](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/chat2.png?style=centerme)](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/media/branch/master/td_tp/tp3/img/chat2.png?style=centerme)

Il faut évidemment coté serveur un [script](https://dwarves.iut-fbleau.fr/gitiut/FA2_2021/WIM4/src/branch/master/td_tp/tp3/ex3/php/chat.php) php qui mémorise tous les messages, et les envoie sur demande au format json.