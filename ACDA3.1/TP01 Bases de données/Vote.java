//import org.mariadb.jdbc.*;
import java.sql.*;
/*import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Connection;
*/

public class Vote {
	
	
		public static void main (String[] args) {
			
			int i = 0;
	
			// Connexion à la BD
			try {

				Connection cnx = DriverManager.getConnection("jdbc:mariadb://dwarves.iut-fbleau.fr/lefevres", "lefevres", "");
				System.out.println("Connection validate");

				if (args.length == 0) {
					System.err.println ("No arguments");
				}
				
				for (i=0; i<args.length; i++){
					System.out.println(args[i]);

					PreparedStatement rq1 = cnx.prepareStatement ("SELECT Id FROM Pays WHERE nom = ?");
					rq1.setString (1, args[i]); // N° du ? et le remplacement
					ResultSet rs1 = rq1.executeQuery();
					

					//Affichage
					/*
					getInt (nb de colonne)
					getString (nb de colonne)
					*/

					/*rs.next();
					rs.getInt(1);*/

					while(rs1.next()) {	

						rs1.getInt(1);
						int id_pays = rs1.getInt(1);
						System.out.println (id_pays);
					}
		

					PreparedStatement rq2 = cnx.prepareStatement ("SELECT idChoix, Points FROM Vote WHERE idPays = ?");
					rq2.setInt (1, rs1.getInt(1) );
					ResultSet rs2 = rq2.executeQuery();


					while(rs2.next()) {	
						System.out.println ("id choix : " + rs2.getInt(1));
						System.out.println ("points : " + rs2.getInt (2));
					}

				}	


				cnx.close();

			} 
		

			catch (final SQLException ex){
				
			}



		}
		
}
