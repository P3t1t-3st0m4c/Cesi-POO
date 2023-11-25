#include "Objet2D.h"

Objet2D::Objet2D(void) : dim1(0), dim2(0) {}

Objet2D::Objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2) {}

Objet2D* Objet2D::getSuivant(){
	return suivant;
}

void Objet2D::setSuivant(Objet2D* tsuivant){
	suivant = tsuivant;
}
