#include "Point3D.h"

Point3D::Point3D(void) {
	dimension = 3;
	vecteur = { 0, 0, 0 };
}

Point3D::Point3D(double x, double y, double z) {
	dimension = 3;
	vecteur = { x, y, z };
}

Point3D::~Point3D() {
}

double Point3D::distance(Point3D& a) const {
	return sqrt(pow((a.getVecteur()[0] - vecteur[0]), 2) + pow((a.getVecteur()[1] - vecteur[1]), 2) + pow((a.getVecteur()[2] - vecteur[2]), 2));
}
