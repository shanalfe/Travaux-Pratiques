
import java.util.List;
import java.util.ArrayList;
import java.util.Random;
import javax.swing.JLabel;

/**
 * Le modèle qui gère toutes les questions et les réponses.
 * @author Luc Hernandez
 */
public class History {

  /**
   * La liste de toutes les réponses possibles
   */
  private static final String[] answerList = {
    "It is certain",
    "It is decidedly so",
    "Without a doubt",
    "Yes – definitely",
    "You may rely on it",
    "As I see it, yes",
    "Most likely",
    "Outlook good",
    "Signs point to yes",
    "Yes",
    "Reply hazy, try again",
    "Ask again later",
    "Better not tell you now",
    "Cannot predict now",
    "Concentrate and ask again",
    "Don't count on it",
    "My reply is no",
    "My sources say no",
    "Outlook not so good",
    "Very doubtful"
  };

  /**
   * La position de la question actuellement affichée dans la liste des questions.
   */
  private int currentSelection;

  /**
   * La liste de toutes les questions déjà posées.
   */
  private List<QuestionAndAnswer> questionList;

  /**
   * L'étiquette responsable de l'affichage de la question sélectionnée et de sa réponse.
   */
  private JLabel view;

  /**
   * Le génrateur pseudoaléatoire responsable du choix des réponses.
   */
  private Random rng;

  //modifié
  private boolean langue_anglais;

  /**
   * Crée un historique vide.
   * @param v L'étiquette responsable de l'affichage de la question sélectionnée et de sa réponse.
   */
  public History(JLabel v) {
    this.currentSelection = -1;
    this.questionList = new ArrayList<>();
    this.view = v;
    this.rng = new Random();
    this.langue_anglais = true;
  }

  /**
   * Met à jour l'affichage en cas de changement de la sélection.
   */
  // modifié en public
  public void display() {
    this.view.setText((currentSelection + 1) +") " + this.questionList.get(currentSelection).toString(langue_anglais));
  }

  /**
   * Ajoute une nouvelle question à l'historique en lui associant une réponse choisie au hasard.
   * @param question Le texte de la question à ajouter.
   */
  public void add(String question) {
    int choice = rng.nextInt(History.answerList.length);
    QuestionAndAnswer qna = new QuestionAndAnswer(question, History.answerList[choice]);
    this.questionList.add(qna);
    this.currentSelection = this.questionList.size() - 1;
    this.display();
  }

  /**
   * Modifie la question sélectionnée en avancant ou en reculant dans la liste. En cas de décalage trop important, la sélection sera limitée à la question la plus ancienne ou la plus récente (suivant la direction choisie).
   * @param offset Le décalage à appliquer à la position courante. Une valeur positive indique que l'on souhaite sélectionner une question plus récente.
   */
  public void shiftSelection(int offset) {
    if (this.currentSelection != -1) {
      int oldSelection = this.currentSelection;
      int size = this.questionList.size();

      this.currentSelection += offset;
      if (this.currentSelection < 0)
        this.currentSelection = 0;
      else if (this.currentSelection >= size)
        this.currentSelection = size - 1;

      if (this.currentSelection != oldSelection)
        this.display();
    }
  }

   //CODE AJOUTE
   public void changeLangue(){
  	if (this.langue_anglais == false) {
  		this.langue_anglais = true;
  	}else{
  		this.langue_anglais = false;
  	}
  }


}