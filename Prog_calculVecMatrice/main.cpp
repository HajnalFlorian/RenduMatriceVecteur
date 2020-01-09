#include <cstdio>
#include <iostream>
#include "Cvecteur.h"
#include "Cmatrice.h"

using namespace std;

int main(){
	Matrice mat;
	Vecteur vA(3, 4, 7);
	Vecteur vB(0, 0, 0);
	int i = 0, j = 0;
	float k = 1.0f;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat.setTab(i, j, k);
			k += 1.0f;
		}
	}
	cout << mat.getTab(1, 1) << endl;
	mat.prod(vA,vB);
	vB.afficher();

	system("pause");
}