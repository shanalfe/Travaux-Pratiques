/**
 * Le modèle qui gère une question et sa réponse associée.
 * @author Luc Hernandez
 */
public class QuestionAndAnswer {

 // boolean langue_anglais = true;
  /**
   * Le texte de la question.
   */
  private String question;

  /**
   * Le texte de la réponse.
   */
  private String answer;

  /**
   * Crée un objet qui associe une question et une réponse données.
   * @param q Le texte de la question.
   * @param a Le texte de la réponse.
   */
  public QuestionAndAnswer(String q, String a) {
    this.question = q.split("\\s*\\?",2)[0];
    this.answer = a;
  }

  /**
   * Construit une représentation textuelle de l'objet, combinant le texte de la question et de la réponse.
   * @return Une représentation textuelle de l'objet.
   */
  public String toString(boolean langue_anglais) {

    //modifié
    if (langue_anglais == true ) {
      
      if (answer == "It is certain") {
        answer = "C'est certain";
      }


    } else {
        switch (answer) {
          case ("C'est certain") :
            answer = "It is certain";
            break;
       
        
        }
          

    }

    return question + " ? " + answer + ".";
  }

}