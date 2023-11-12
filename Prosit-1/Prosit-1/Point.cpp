#include "Point.h"
#include <math.h>
#include <iostream>

Point::Point() : x(0), y(0) {}

Point::Point(double inpX, double inpY) : x(inpX), y(inpY) {}

double Point::distance(const Point& a){
	return sqrt(pow((x - a.getX()), 2) + pow((y - a.getY()), 2));
}

bool Point::entre(const Point& a, const Point& b){
	// y = mx + p
	// Recuperation du coef directeur
	if (b.getX() - a.getX() == 0) {
		return 0;
	}
	double m = (b.getY() - a.getY()) / (b.getX() - a.getX());

	// Recuperation de l'ordonnée a l'origine
	double p = a.getY() - m * a.getX();

	// Verif
	return (y == m * x + p);
}

double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}

void Point::modifyCoords(const double inpX, const double inpY){
	x = inpX; y = inpY;
}

std::ostream& operator<<(std::ostream& flux, const Point& a){
	return flux << "(" << a.x << "," << a.y << ")";
}
