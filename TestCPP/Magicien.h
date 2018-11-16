#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage
{
public:
	Magicien();
	Magicien(std::string nom);
	~Magicien();
	void bouleDeFeu(Personnage &cible) const;
	void bouleDeGlace(Personnage &cible) const;

private:
	int m_mana;
};

#endif