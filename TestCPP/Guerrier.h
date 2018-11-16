#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !

class Guerrier : public Personnage
	//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
{
public:
	Guerrier();
	~Guerrier();
	void frapperCommeUnSourdAvecUnMarteau() const;
	void coupDePoing(Personnage &cible) const;
	void sePresenter() const;
};

#endif

