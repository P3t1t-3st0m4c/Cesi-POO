#include "ListeObjet2D.h"

ListeObjet2D::ListeObjet2D(void) {
	head = NULL;
	tail = NULL;
}

ListeObjet2D::~ListeObjet2D() {
	Objet2D* t_head = head;
	while (t_head != NULL) {
		Objet2D* t_suivant = t_head->getSuivant();
		delete t_head;
		t_head = t_suivant;
	}
}

void ListeObjet2D::ajouterAtHead(Objet2D* a) {
	Objet2D* t_head = head;
	head = a;
	a->setSuivant(t_head);
	if (tail == NULL) {
		tail = head;
	}
}

void ListeObjet2D::ajouterAtTail(Objet2D* a) {
	Objet2D* t_tail = tail;
	if (head == NULL) {
		ajouterAtHead(a);
		return;
	}
	tail = a;
	t_tail->setSuivant(tail);
}

void ListeObjet2D::ajouterAtIndex(Objet2D* a, int index) {
	Objet2D* t_head = head;
	if (head == NULL) {
		ajouterAtHead(a);
		return;
	}

	if (index == 0) {
		ajouterAtHead(a);
		return;
	}

	while (t_head->getSuivant() != NULL) {
		if (index-- == 0) {
			Objet2D* t_suivant = t_head->getSuivant();
			t_head->setSuivant(a);
			a->setSuivant(t_suivant);
			break;
		}
		t_head = t_head->getSuivant();
	}

	if (index >= 0 && t_head->getSuivant() == NULL) {
		cout << "Index out of range, adding at tail" << endl;
		ajouterAtTail(a);
	}
}

void ListeObjet2D::supprimerAtHead(){
	Objet2D* t_head = head;
	if (head == NULL) {
		cout << "Liste vide" << endl;
		return;
	}
	head = t_head->getSuivant();
	delete t_head;
}

void ListeObjet2D::supprimerAtTail(){
	Objet2D* t_head = head;
	if (head == NULL) {
		cout << "Liste vide" << endl;
		return;
	}

	if (head->getSuivant() == NULL) {
		supprimerAtHead();
		return;
	}

	while (t_head != NULL) {
		if (t_head->getSuivant() == tail) {
			delete tail;
			tail = t_head;
			tail->setSuivant(NULL);
			break;
		}
		t_head = t_head->getSuivant();
	}
}

void ListeObjet2D::supprimerAtIndex(int index){
	Objet2D* t_head = head;
	if (head == NULL) {
		cout << "Liste vide" << endl;
		return;
	}

	if (index == 0) {
		supprimerAtHead();
		return;
	}

	while (t_head != NULL) {
		if (index == 1) {
			Objet2D* t_suivant = t_head->getSuivant();
			if (t_suivant == tail) {
				supprimerAtTail();
				return;
			}
			t_head->setSuivant(t_suivant->getSuivant());
			delete t_suivant;
			break;
		}
		t_head = t_head->getSuivant();
		index--;
	}

	if (index >= 0 && t_head == NULL) {
		cout << "Index out of range" << endl;
		supprimerAtTail();
	}
}

void ListeObjet2D::afficheInfos() {
	Objet2D* t_head = head;
	cout << "Liste des objets 2D :" << endl;
	while (t_head != NULL) {
		cout << t_head->afficheInfo() << endl;
		t_head = t_head->getSuivant();
	}
}
