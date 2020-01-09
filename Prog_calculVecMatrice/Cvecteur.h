#pragma once
#include "Cmatrice.h"
class Vecteur {

private:
	float fX, fY, fZ;
public:
// accesseur
	float getfX();
	float getfY();
	float getfZ();
//consrtucteur
	Vecteur(float x, float y, float z);
	friend void Matrice::prod(Vecteur& vA, Vecteur& vB);
	//mutateur
	void setfX(float x);
	void setfY(float x);
	void setfZ(float x);
	void afficher();
};