#pragma once
#include <vector>
#include <math.h>

using namespace std;

class Point{
public:
	Point(void);
	virtual double distance(Point& a) = 0;
	unsigned int getDimension() const;
	vector<double> getVecteur() const;
	vector<double> convDim(Point& a);
protected:
	vector<double> vecteur;
	unsigned int dimension;
};