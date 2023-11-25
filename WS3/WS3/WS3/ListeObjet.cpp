#include "ListeObjet.h"

int ListeObjet::add(Objet2D* a, int index){
	if (index >= size - 1) index = size - 1;
	if (liste[index] != NULL) delete liste[index];
	liste[index] = a;
	return index;
}

ListeObjet::ListeObjet(void) : size(10), last(0) {
	liste = new Objet2D * [size]();
}

ListeObjet::ListeObjet(int tSize) : size(tSize), last(0) {
	liste = new Objet2D * [size]();
}

ListeObjet::~ListeObjet(){
	for (int i = 0; i <= size - 1; i++) {
		delete liste[i];
	}
	delete[] liste;
}

void ListeObjet::ajouter(Objet2D* a){
	last = add(a, last);
	last++;
}

void ListeObjet::ajouter(Objet2D* a, int index){
	add(a, index);
}

void ListeObjet::afficheInfo(){
	for (int i = 0; i <= size - 1; i++) {
		if (liste[i] != NULL) cout << "Objet n-" << i+1 << "\n" << liste[i]->afficheInfo() << "\n" << endl;
	}
}
