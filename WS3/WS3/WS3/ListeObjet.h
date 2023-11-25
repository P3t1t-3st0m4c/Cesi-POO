#pragma once
#include "Objet2D.h"
#include <iostream>

using namespace std;
class ListeObjet{
private:
	int size;
	int last;
	Objet2D** liste;
	int add(Objet2D* a, int index);

public:
	ListeObjet(void);
	ListeObjet(int tSize);
	~ListeObjet();
	void ajouter(Objet2D* a);
	void ajouter(Objet2D* a, int index);
	void afficheInfo();
};

