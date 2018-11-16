#include <iostream>
#include <string>
#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier()
{
}

Guerrier::~Guerrier()
{
}

void Guerrier::frapperCommeUnSourdAvecUnMarteau() const
{
}

void Guerrier::coupDePoing(Personnage &cible) const
{
	cible.recevoirDegats(20);
}

void Guerrier::sePresenter() const
{
	Personnage::sePresenter();
	cout << "Je suis un Guerrier redoutable." << endl;
}
