#include "Etudiant.h"
#include "Promo.h"

int main(void) {
	string nomFichier;
	Promo* promo1;
	promo1 = new Promo;
	cout << "Nombre d'etudiant dans promo1 : " << promo1->getNbEtudiants() << "\nEtudiants :" << endl;
	promo1->afficherEtudiants();
	cout << "Nom fichier : ";
	getline(cin, nomFichier);
	promo1->outputNotesDUfichier(nomFichier);
	delete promo1;
}