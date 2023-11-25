#pragma once
#include "Objet2D.h"
#include <iostream>

using namespace std;
class ListeObjet2D {
private:
	Objet2D* head;
	Objet2D* tail;

public:
	ListeObjet2D(void);
	~ListeObjet2D();
	void ajouterAtHead(Objet2D* a);
	void ajouterAtTail(Objet2D* a);
	void ajouterAtIndex(Objet2D* a, int index);
	void supprimerAtHead();
	void supprimerAtTail();
	void supprimerAtIndex(int index);
	void afficheInfos();
};