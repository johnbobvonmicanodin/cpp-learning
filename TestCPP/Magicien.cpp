#include <iostream>
#include <string>
#include "Magicien.h"


using namespace std;

Magicien::Magicien() : Personnage()
{

}

Magicien::Magicien(string nom) : Personnage(nom), m_mana(200)
{
	
}

Magicien::~Magicien()
{
}

void Magicien::bouleDeFeu(Personnage &cible) const
{
	cible.recevoirDegats(50);
}

void Magicien::bouleDeGlace(Personnage &cible) const
{
	cible.recevoirDegats(50);
}
