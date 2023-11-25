#include "Point2D.h"

Point2D::Point2D(void) {
	_coordinates.push_back(0);
	_coordinates.push_back(0);
}

Point2D::Point2D(double t_x, double t_y){
	_coordinates.push_back(t_x);
	_coordinates.push_back(t_y);
}

double Point2D::distance(Point& a){
	vector<double> coordinates = a.getCoordinates();
	return sqrt(pow(_coordinates[0] - coordinates[0], 2) + pow(_coordinates[1] - coordinates[1], 2));
}

double Point2D::x(){
	return _coordinates[0];
}

double Point2D::y(){
	return _coordinates[1];
}

void Point2D::x(double t_x){
	_coordinates[0] = t_x;
}

void Point2D::y(double t_y){
	_coordinates[1] = t_y;
}

vector<double> Point2D::getCoordinates(){
	return _coordinates;
}
