#include <iostream> //bibliothèque
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <ctime> 
#include <cstdlib> 
#include "Personnage.h"
#include "Duree.h"

using namespace std; //espace de noms 

/*
//un nouveau pointeur
string *jepointe(0);
//on demande une case
jepointe = new string;
//on definis la valeur de la case pointé
*jepointe = "LE POINTEUR";
//montre la valeur
cout << *jepointe << endl;
//libère la mémoire
delete jepointe;
//dépointe le pointeur
pointeur = 0;
*/



int main()
{
	/*Personnage david, goliath("épée de la mort qui tue", 25);

	//Personnage david(goliath); constructeur de copie modifiable si redeclare dans h et dans cpp

	goliath.attaquer(david); //goliath attaque david
	david.boirePotionDeVie(2); //david récupère 20 de vie en buvant une potion
	goliath.attaquer(david); //goliath réattaque david
	david.attaquer(goliath); //david contre-attaque... c'est assez clair non ? 
	goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
	goliath.attaquer(david);

	cout << "David" << endl;
	david.afficherEtat();
	cout << endl << "Goliath" << endl;
	goliath.afficherEtat();*/

	Duree duree1(0, 10, 42), duree2(0, 53, 27);
	Duree resultat;

	duree1.afficher();
	cout << "+" << endl;
	duree2.afficher();

	resultat = duree1 + duree2;

	cout << "=" << endl;
	resultat.afficher();

	return 0;

}
