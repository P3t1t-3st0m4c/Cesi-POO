#include "Point.h"

Point::Point(void){
	dimension = 0;
	vecteur = {};
}

unsigned int Point::getDimension() const{
    return dimension;
}

vector<double> Point::getVecteur() const{
    return vecteur;
}

vector<double> Point::convDim(Point& a){
	vec
	for (unsigned int i = 0; i < 2; i++) {
		vecteur.push_back(
			i >= a.getDimension() ? 0 : a.getVecteur()[i]
		);
	}

}
