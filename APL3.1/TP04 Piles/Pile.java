/**
 * Interface Pile
 */
public interface Pile<E> {
    public void push(E element);
    public E pop();
    public boolean empty();
}