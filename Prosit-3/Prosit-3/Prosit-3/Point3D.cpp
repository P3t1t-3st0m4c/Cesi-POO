#include "Point3D.h"

Point3D::Point3D(void) {
	_coordinates.push_back(0);
	_coordinates.push_back(0);
	_coordinates.push_back(0);
}

Point3D::Point3D(double t_x, double t_y, double t_z) {
	_coordinates.push_back(t_x);
	_coordinates.push_back(t_y);
	_coordinates.push_back(t_z);
}

double Point3D::distance(Point& a) {
	vector<double> coordinates = a.getCoordinates();
	return sqrt(pow(_coordinates[0] - coordinates[0], 2) + pow(_coordinates[1] - coordinates[1], 2) + pow(_coordinates[2] - coordinates[2], 2));
}

double Point3D::x() {
	return _coordinates[0];
}

double Point3D::y() {
	return _coordinates[1];
}

double Point3D::z() {
	return _coordinates[2];
}

void Point3D::x(double t_x) {
	_coordinates[0] = t_x;
}

void Point3D::y(double t_y) {
	_coordinates[1] = t_y;
}

void Point3D::z(double t_z) {
	_coordinates[2] = t_z;
}

vector<double> Point3D::getCoordinates() {
	return _coordinates;
}