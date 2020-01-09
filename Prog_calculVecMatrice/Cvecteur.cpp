#include "Cvecteur.h"
#include <cstdio>
#include <iostream>
using namespace std;

float Vecteur::getfX()
{
	return fX;
}

float Vecteur::getfY()
{
	return 0.0f;
}

float Vecteur::getfZ()
{
	return 0.0f;
}

Vecteur::Vecteur(float x, float y, float z)
{
	this->fX = x;
	this->fY = y;
	this->fZ = z;
}

void Vecteur::setfX(float x)
{
	this->fX = x;
}

void Vecteur::setfY(float y)
{
	this->fY = y;
}

void Vecteur::setfZ(float z)
{
	this->fZ = z;
}

void Vecteur::afficher()
{
	cout << "le produit vectoriel X: " << this->fX << " Y: " << this->fY << " Z:" << this->fZ << endl;
}
