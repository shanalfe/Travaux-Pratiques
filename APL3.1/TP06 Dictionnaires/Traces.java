import java.lang.Thread;
import java.util.*;

public class Traces {


	public static void main(String[] args) {


		Map<Thread, StackTraceElement[]> traces = Thread.getAllStackTraces();

		for (Map.Entry<Thread, StackTraceElement[]> entry : Traces.entrySet()) {

	        System.err.println("Stack Trace for " + entry.getKey().getName()); //Informations du Thread et récupération
	        StackTraceElement[] elements = entry.getValue(); // StackTraceElement [] Récupération
	       
	        for (StackTraceElement element : elements) {
	            System.err.println("\tat " + element.toString()); // affichage de tous les éléments
	        }

	        System.err.println();
	    }

	}
	
}