import.lang.Object;



public class Exo1 {
    public void leverException() throws ArrayIndexOutOfBoundsException {
        //...

        throw new ArrayIndexOutOfBoundsException("Il y a un problème");
    }


    public static void main(String[] args) {
        Exo1 application = new Exo1();
            try {
                application.leverException();
            } catch (ArrayIndexOutOfBoundsException me){
                System.err.println("je crois" + me.getMessage());
            }
    }




}
