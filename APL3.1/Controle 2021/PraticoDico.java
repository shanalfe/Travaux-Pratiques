import java.util.Map.Entry;
import java.util.*;

/**
 * Class PraticoDico permet de comprendre le fonctionnement d'un dicionnaire
 * @author Shana
 */
public class PraticoDico {
    
    public static void main(String[] args) {

        // Création d'un dictionnaire
        Map<String, Integer> ages = new HashMap<>();
        // Ajout 
        ages.put("Shana", 20); //clé , valeur
        ages.put("Clara", 16);
        ages.put("Bob", 47);
        ages.put("Alice", 67);

        //Condition si la valeur ou la clé existe
        if (ages.containsKey("Clara")) {
            System.out.println("La clé Clara existe bien");
        } else {
            System.out.println("La clé est non existante");
        }
        if (ages.containsValue(3)) {
            System.out.println("La valeur existe");
        } else {
            System.out.println("La valeur n'existe pas");
        }


        //Récupération toutes les valeurs
        for (Entry <String, Integer> element : ages.entrySet()) {

            System.out.println("La clé est : " +element.getKey() + " et la valeur " +element.getValue() );
        }

        //ages.remove("Shana"); Permet de supprimer une valeur
        System.out.println(ages.toString());
        System.out.println(ages.get("Shana")); // Affichage de la valeur grace à la clé

        ages.clear();
    }
}