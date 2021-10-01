public class Tableaux {
    
    static int Remplir (int i, int nombre) {
       
        

        return i;
    }
    
    
    
    public static void main(String[] args) {
    
        int[] tab = new int [args.length]; // taille du tableau en fonction nombre arg
        
        int i = args.length;
        
        int nombre = Integer.parseInt(args[0]); 

        Remplir (i, nombre);
        System.out.println(Remplir(i));

    }
}