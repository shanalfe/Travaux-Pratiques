// TODO	

/*Déclaration des variables*/
let btn = document.getElementsByTagName("button")[0]
let img = document.getElementsByTagName("img")[0]
let p = document.getElementsByTagName("p")[0]
let figure = document.getElementsByTagName("figure")[0]
let span = document.getElementsByTagName("figure")[0].lastElementChild

var bool = new Boolean(false);



/**Fonction quand le timer est finit */
function Fin() {
	bool = false;
	alert("stop");
	btn.removeEventListener("click", Score, false)

}

/*Fonction de l'évenement bouton start*/
function ReponseClick (e) {
	btn.classList.add("hidden") //permet de cacher le bouton
	p.classList.remove("hidden") //permet d'afficher la mamie
	bool = true;

	setTimeout(Fin, 2000)
}



/**Fonction permet d'afficher le score à chaque clique */
function Score (e) {
	if (bool == true) {
		span.innerText = Number(span.innerText) + 1
	}
	
}




/*Crétion de l'évenement bouton start*/
btn.addEventListener("click", ReponseClick, false)

/**Création évenement cookie score */
img.addEventListener("click", Score, false);



