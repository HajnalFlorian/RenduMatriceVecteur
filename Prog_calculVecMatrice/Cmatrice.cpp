#include "Cmatrice.h"
#include "Cvecteur.h"
#include <cstdio>
#include <iostream>
using namespace std;

Matrice::Matrice()
{
}
float Matrice::getTab(int i, int j)
{
	return fTab[i][j];
}

void Matrice::setTab(int i, int j, float k)
{
	this->fTab[i][j] = k;
}

void Matrice::prod(Vecteur& vA, Vecteur& vB)
{
	float k = 0.f;
	for (int i = 0; i < 3; i++) {

		k = vA.fX * this->fTab[0][i];
		this->setTab(0, i, k);
		k = vA.fY * this->fTab[1][i];
		this->setTab(1, i, k);
		k = vA.fZ * this->fTab[2][i];
		this->setTab(2, i, k);
	}
	k = 0.0f;
	k = fTab[0][0] + fTab[0][1] + fTab[0][2];
	vB.setfX(k);
	k = 0.0f;
	k = fTab[1][0] + fTab[1][1] + fTab[1][2];
	vB.setfY(k);
	k = 0.0f;
	k = fTab[2][0] + fTab[2][1] + fTab[2][2];
	vB.setfZ(k);

	
		
	
}
