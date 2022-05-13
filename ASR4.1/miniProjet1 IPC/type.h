


typedef struct {
	char demande; // Cela peut être consultation(fournir), archivage, effacement
	int num_theme;
	int num_article;
	char text_article [3];

}
requete_journaliste;



typedef enum { 
	false, //A mal fait son travail
	true //A bien fait son travail
} bool;


/*Réponse archiviste s'il a bien fait son travail*/
typedef struct {
	bool fait; 
}
reponse_archiviste;

