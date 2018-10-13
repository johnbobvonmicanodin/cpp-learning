#include <iostream>
#include "ZFraction.h"

using namespace std;

ZFraction::ZFraction()
	:m_numerateur(0),m_denominateur(1)
{
	
}


ZFraction::ZFraction(int n)
	:m_numerateur(n),m_denominateur(1)
{

}

ZFraction::ZFraction(int n, int d): m_numerateur(n), m_denominateur(d)
{
	simplifie();
}


ostream& operator<<(ostream& flux, ZFraction const& fraction)
{
	fraction.affiche(flux);
	return flux;
	
}

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
	ZFraction copie(a);
	copie += b;
	return copie;
}

ZFraction& ZFraction::operator+=(ZFraction const& autre)
{
	m_numerateur = autre.m_denominateur * m_numerateur + m_denominateur * autre.m_numerateur;
	m_denominateur = m_denominateur * autre.m_denominateur;

	simplifie();
	return *this;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
	ZFraction copie(a);
	copie *= b;
	return copie;
}

ZFraction& ZFraction::operator*=(ZFraction const& autre)
{
	m_numerateur *= autre.m_numerateur;
	m_denominateur *= autre.m_denominateur;

	simplifie();
	return *this;
}

int pgcd(int a, int b)
{
	while (b != 0)
	{
		const int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void ZFraction::affiche(ostream& flux) const
{
	if (m_denominateur == 1)
	{
		flux << m_numerateur;
	}
	else
	{
		flux << m_numerateur << '/' << m_denominateur;
	}
}

bool ZFraction::estEgal(ZFraction const& autre) const
{
	if (m_numerateur == autre.m_numerateur && m_denominateur == autre.m_denominateur)
		return true;
	else
		return false;
}

bool operator==(ZFraction const& a, ZFraction const& b)
{
	if (a.estEgal(b))
		return true;
	else
		return false;
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
	if (a.estEgal(b))
		return false;
	else
		return true;
}

bool ZFraction::estPlusPetitQue(ZFraction const& autre) const
{
	if (m_numerateur * autre.m_denominateur < m_denominateur * autre.m_numerateur)
		return true;
	else
		return false;
}

bool operator<(ZFraction const& a, ZFraction const& b) //Vrai si a<b donc si a est plus petit que b
{
	return a.estPlusPetitQue(b);
}

bool operator>(ZFraction const& a, ZFraction const& b) //Vrai si a>b donc si b est plus petit que a
{
	return b.estPlusPetitQue(a);
}

bool operator<=(ZFraction const& a, ZFraction const& b) //Vrai si a<=b donc si b n'est pas plus petit que a
{
	return !(b.estPlusPetitQue(a));
}

bool operator>=(ZFraction const& a, ZFraction const& b) //Vrai si a>=b donc si a n'est pas plus petit que b
{
	return !(a.estPlusPetitQue(b));
}

void ZFraction::simplifie()
{
	int nombre = pgcd(m_numerateur, m_denominateur); //Calcul du pgcd

	m_numerateur /= nombre;     //Et on simplifie
	m_denominateur /= nombre;
}