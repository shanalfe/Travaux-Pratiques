print ("Entrez le montant total :")

montant_total = int (input()) 

franchise = montant_total * 10/100

if franchise < 200:
    if montant_total <= 200:
        print('L\'assurance ne prend pas en charge, vous devez ' + str(montant_total) + ' euros.')
        
    else :
        p = montant_total - 200
        print('La franchise est de 200 euros, l\'assurance paye ' + str(p) + ' euros')

if franchise >= 200 and franchise <= 800:
    p = montant_total - franchise
    print('La franchise est de ' + str(franchise) + 'euros, vous payerez  ' + str(p) + ' euros.')

if franchise>800:
    p = montant_total -800
    print('La franchise est de 800 euros, vous payerez '+ str(p) + ' euros.')