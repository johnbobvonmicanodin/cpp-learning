#ifndef DEF_FRACTION
#define DEF_FRACTION


#include <iostream>
#pragma once

using namespace std;

class ZFraction
{
public:
	ZFraction();
	ZFraction(int n);
	ZFraction(int n, int b);
	void affiche(ostream& flux) const;
	ZFraction& operator+=(ZFraction const& autre);
	ZFraction& operator*=(ZFraction const& autre);
	bool estEgal(ZFraction const& autre) const;
	bool estPlusPetitQue(ZFraction const& autre) const;
	void simplifie();

private: 
	int m_numerateur;
	int m_denominateur;

};

ostream& operator<<(ostream& flux, ZFraction const& fraction);

ZFraction operator+(ZFraction const& a, ZFraction const& b);

ZFraction operator*(ZFraction const& a, ZFraction const& b);

bool operator==(ZFraction const& a, ZFraction const& b);

bool operator!=(ZFraction const& a, ZFraction const& b);

bool operator>(ZFraction const& a, ZFraction const& b);

bool operator<(ZFraction const& a, ZFraction const& b);

int pgcd(int a, int b);

#endif

