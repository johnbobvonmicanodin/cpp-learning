#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en h�riter !

class Guerrier : public Personnage
	//Signifie : cr�er une classe Guerrier qui h�rite de la classe Personnage
{
public:
	Guerrier();
	~Guerrier();
	void frapperCommeUnSourdAvecUnMarteau() const;
	void coupDePoing(Personnage &cible) const;
	void sePresenter() const;
};

#endif

