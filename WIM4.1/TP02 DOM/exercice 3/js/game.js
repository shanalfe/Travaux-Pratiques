// TODO	

let btn = document.getElementsByTagName("button")[0]
let img = document.getElementsByTagName("img")[0]
let p = document.getElementsByTagName("p")[0]
let figure = document.getElementsByTagName("figure")[0]
let span = document.getElementsByTagName("figure")[0].lastElementChild


function Fin() {
	btn.removeEventListener("click", Score, false)
}

/*Fonction de l'évenement bouton start*/
function ReponseClick (e) {
	btn.classList.add("hidden") //permet de cacher le bouton
	p.classList.remove("hidden") //permet d'afficher la mamie
	setTimeout(Fin, 2000)
}

/*Crétion de l'évenement bouton start*/
btn.addEventListener("click", ReponseClick, false)



function Score () {
	span.innerText = Number(span.innerText) + 1
}