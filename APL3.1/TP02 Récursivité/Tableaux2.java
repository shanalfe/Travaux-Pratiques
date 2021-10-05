import java.util.Arrays;

public class Tableaux2{

    public static int[] tab(int size, String[] argstab, int[] nbrtab){
        if (size > 0) {
            nbrtab[size-1] = Integer.parseInt(argstab[size-1]);
            tab(size-1, argstab, nbrtab);
        }
        return nbrtab;
    }

    public static void main(String[] args) {
        
        int sizeargs = args.length;
        
        int[] argnbr = new int[sizeargs];

        argnbr = tab(sizeargs, args, argnbr);
        System.out.println(Arrays.toString(argnbr));
    }
}