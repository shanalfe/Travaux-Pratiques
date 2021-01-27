--- SGBD.2.1-TD01 ---



--- Exercice 1 ---

-- soit number (type nombre) soit Vin.NumVIn%TYPE (le type de l'attribut numvin de la table Vin)

create or replace procedure AfficheVin (p_Numvin Vin.NumVin%TYPE) IS

	--- Déclaration des variables ---
	V_NumVin Vin.NumVin%TYPE;
	V_Cru Vin.Cru%TYPE;
	V_Milessime Vin.Millesime%TYPE;
	V_Nom Viticulteur.Nom%TYPE;

	BEGIN
		--- Requete SQL ---
		--into permet de stocker dans les variables
		select Nom, NumVin, Cru, Millesime INTO Viticulteur_Nom, V_NumVin, V_Cru, V_Milessime
		from Viticulteur natural join Vin
		where numvin = p_Numvin;

		--- Affichage ---
		dbms_output.put_line ('Nom Viticulteur : ' ||  V_Nom || 'Numéro vin : ' || V_NumVin 'Cru :' || V_Cru || 'Millesime : ' || V_Milessime );


	--- Gestion des erreurs ---
	--no data found avec le select into
	EXCEPTION
		WHEN no_data_found THEN
			dbms_output.put_line ('Numéro de vin existant');

END;
/

--- Exercice 2 ---

create or replace AfficheCru (p_Region Vin.Region%TYPE) IS

	CURSOR crs_AfficherCru IS 

		--- Requete sql ---
		select distinct Cru
		From Vin 
		where region = p_Region;

		--- Declaration de variable --- 
		V_Cru Vin.Cru%TYPE;

	BEGIN
		OPEN crs_AfficherCru;

		LOOP 
			FETCH crs_AfficherCru INTO V_Cru;
			EXIT WHEN crs_AfficherCru%NOTFOUND;
			--- Affichage des données ---
			dbms_output.put_line ('Cru:' || V_Cru);
		END LOOP;

		--- Gestion des erreurs si la région n'existe pas ---
		IF crs_AfficherCru%rowcount = 0  THEN
			dbms_output.put_line ('Région non existante');
		END IF;


	CLOSE crs_AfficherCru;

END;
/



--- Exercice 3 ---

create or replace AfficherVin (p_Numvin Vin.NumVin%TYPE) IS

	CURSOR crs_AffcherVin IS 

		--- Requete sql ---
		select Nom, NumVin, Cru, Millesime 
		from Viticulteur natural join Vin
		where numvin = p_Numvin;


		--- Declaration de variable --- 
		V_NumVin Vin.NumVin%TYPE;
		V_Cru Vin.Cru%TYPE;
		V_Milessime Vin.Millesime%TYPE;
		V_Nom Viticulteur.Nom%TYPE;

	BEGIN
		OPEN crs_AfficherVin;

		FETCH crs_AfficherVin INTO V_Nom, V_NumVin, V_Millesime, V_Cru;
		dbms_output.put_line ('Nom Viticulteur : ' ||  V_Nom || 'Numéro vin : ' || V_NumVin 'Cru :' || V_Cru || 'Millesime : ' || V_Milessime );

		--- Gestion des erreurs si le numvin n'existe pas ---
		IF crs_AfficherVin%rowcount = 0  THEN
			dbms_output.put_line ('Num Vin non existant');
		END IF;

	CLOSE crs_AfficherVin;

END;
/
