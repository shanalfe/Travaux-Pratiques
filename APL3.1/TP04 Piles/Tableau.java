public class Tableau<E> implements Pile<E>{
    private E[] tab = null;
	private E first;

    /**
     * @param element
     */
    public Tableau(E element){
        this.tab = new E[1];
    }

    public void push(E element){
        if(empty()){
            this.first = element;
        }else{
            if(E[]){
                this.tab = Arrays.copyOf();
            }else{
                E element = this.tab[tab.length] = element;
            }
			   
        }
    }

    public E pop() {
		E element = this.tab[tab.length-1];
		this.tab[tab.length-1] = null;
		this.first = this.tab[tab.length-1];

		return element;
	}

	public boolean empty() {
		return (tab.length == 0);
	}
}