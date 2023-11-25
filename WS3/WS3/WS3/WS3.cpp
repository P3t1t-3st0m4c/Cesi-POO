#include "Carre.h"
#include "ListeObjet2D.h"

#include <iostream>

using namespace std;


int main() {
	int largeur = 0;
	string choice;
	ListeObjet2D* liste = new ListeObjet2D;
	Carre* carre;
	do {
		cout << "Veuillez saisir la largeur du carre : ";
		cin >> largeur;
		carre = new Carre(largeur);
		liste->ajouterAtTail(carre);
		cout << "Voulez-vous continuer ? (o/n) : ";
		cin >> choice;
	} while (choice == "o");

	liste->afficheInfos();

	// Ajouter un carre de largeur 5 a la liste a l'index 2
	cout << "\n\nAjout d'un carre de largeur 5 a l'index 2" << endl;
	carre = new Carre(5);
	liste->ajouterAtIndex(carre, 2);

	// Afficher les informations de la liste
	liste->afficheInfos();

	// Ajouter un carre de largeur 10 a la liste a l'index 0
	cout << "\n\nAjout d'un carre de largeur 10 a l'index 0" << endl;
	carre = new Carre(10);
	liste->ajouterAtHead(carre);

	// Afficher les informations de la liste
	liste->afficheInfos();

	// Ajouter un carre de largeur 15 a la liste a l'index 25
	cout << "\n\nAjout d'un carre de largeur 15 a l'index 25" << endl;
	carre = new Carre(15);
	liste->ajouterAtIndex(carre, 25);

	// Afficher les informations de la liste
	liste->afficheInfos();

	// Supprimer le carre a l'index 2
	cout << "\n\nSuppression du carre a l'index 2" << endl;
	liste->supprimerAtIndex(2);

	// Afficher les informations de la liste
	liste->afficheInfos();

	// Supprimer le carre a l'index 0
	cout << "\n\nSuppression du carre a l'index 0" << endl;
	liste->supprimerAtHead();

	// Afficher les informations de la liste
	liste->afficheInfos();

	// Supprimer le carre a l'index 25
	cout << "\n\nSuppression du carre a l'index 25" << endl;
	liste->supprimerAtIndex(25);

	// Afficher les informations de la liste
	liste->afficheInfos();

	delete liste;

	// Check memory leaks
	cout << carre->afficheInfo() << endl;
}