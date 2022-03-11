print('Entrez la hauteur du sapin : ')
hauteur = int (input())



for i in range(0, hauteur):
    for j in range(0, hauteur-i):
        print (" ")
    print('*')
    for j in range(0, i):
        print ("**")
    print("\n")
    