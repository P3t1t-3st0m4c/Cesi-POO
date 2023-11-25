#pragma once
#include <string>
using namespace std;

class Objet2D{
protected:
	int dim1;
	int dim2;
	Objet2D* suivant;
public:
	Objet2D(void);
	Objet2D(int tdim1, int tdim2);
	virtual int getPerimetre() = 0;
	virtual int getAire() = 0;
	virtual string afficheInfo() = 0;
	
	Objet2D* getSuivant();
	void setSuivant(Objet2D* tsuivant);
};