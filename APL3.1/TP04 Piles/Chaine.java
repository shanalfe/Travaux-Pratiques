
/**
 * Interface
 */
public class Chaine<E> implements Pile<E> {

   private Maillon<E> first = null;

   /**
    * Méthode push ajout d'un élément dans la pile
    */
   public void push(E element){
    if (empty()){
        this.first = new Maillon<E>(element);
    }else{
        Maillon<E> newMaillon = new Maillon<E>(element);
        newMaillon.setNext(this.first);
        this.first = newMaillon;
    }

   }

   /**
    * Méthode pop enlève un élément de la pile
    */
    public E pop(){
        E element = this.first.obj();
        this.first = this.first.next();
        return element;
    } 

    /**
     * Méthode empty savoir si la pile est vide
     */
    public boolean empty(){
        if(this.first==null){
            return true;
        }else{
            return false;
        }
    }

}