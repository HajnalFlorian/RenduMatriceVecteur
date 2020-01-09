#pragma once

class Vecteur;

class Matrice
{
private:
	float fTab[3][3] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
public:
	//contructeur
	Matrice();
	// get
	float getTab(int i, int j);
	//mutateur
	void setTab(int i, int j, float k);
	//Procédure Amie
	void prod(Vecteur& vA, Vecteur& vB);


	

};

