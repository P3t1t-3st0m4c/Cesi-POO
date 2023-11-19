#include "Point2D.h"

Point2D::Point2D(void){
	dimension = 2;
	vecteur = { 0, 0 };
}

Point2D::Point2D(double x, double y){
	dimension = 2;
	vecteur = { x, y };
}


Point2D::~Point2D(){
}

double Point2D::distance(Point& a) const {
	Point2D conv = a;
	return sqrt(pow((vecteur[0] - a.getVecteur()[0]), 2) + pow((vecteur[1] - a.getVecteur()[1]), 2));
}
