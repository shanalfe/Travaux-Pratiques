function Separation (cs, w, h, matiere) {

  
}




let cs = document.getElementById('camember').getContext('2d');
cs.beginPath();
cs.lineWidth="2";
cs.arc(100, 100, 90, 0, 2 * Math.PI);
cs.stroke();

var valeur= new Array(50, 100, 20, 60); 
var matiere = new Array('blue', 'red', 'orange', 'yellow');




/*

function matiere() {
	var nomMatiere = new Array();
	
	for( var l in data) {
		nomMatiere.push(data[l]);
	}
	
	return nomMatiere;
};*/