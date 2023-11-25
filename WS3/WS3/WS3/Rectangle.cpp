#include "Rectangle.h"

Rectangle::Rectangle(void) : Objet2D() {}

Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2) {}

int Rectangle::getLongueur(){
	return dim1;
}

int Rectangle::getLargeur(){
	return dim2;
}

int Rectangle::getPerimetre(){
	return 2 * ( dim1 + dim2 );
}

int Rectangle::getAire(){
	return dim1 * dim2;
}

string Rectangle::afficheInfo(){
	return "Rectangle : \nLongueur : " + to_string(dim1) + "; Largeur : " + to_string(dim2) +
		"\nPerimetre : " + to_string(getPerimetre()) + "; Aire : " + to_string(getAire());
}
