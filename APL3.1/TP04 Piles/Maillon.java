/**
 * Classe Maillon
 */
public class Maillon<E>{
    private E obj;
    private Maillon<E> next;

    public Maillon(E element){
        this.obj = element;
        this.next = null;
    }

    public E obj(){
        return obj;
    }

    public Maillon<E> next(){
        return next;
    } 

    public void setNext(Maillon<E> next) {
        this.next = next;
    }
}