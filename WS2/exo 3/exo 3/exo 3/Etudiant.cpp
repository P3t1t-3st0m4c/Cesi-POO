#include "Etudiant.h"

Etudiant::Etudiant(){
	string t_nom;
	string t_moyenne;

	cout << "Nom : ";
	getline(cin, t_nom);
	setNom(t_nom);
	cout << endl;

	cout << "Moyenne : ";
	getline(cin, t_moyenne);
	setMoyenne(stoi(t_moyenne));
}

Etudiant::Etudiant(string t_nom, int t_moyenne){
	setNom(t_nom);
	setMoyenne(t_moyenne);
}

Etudiant::Etudiant(const Etudiant& t_etudiant){
	setNom(t_etudiant.nom);
	setMoyenne(t_etudiant.moyenne);
}

string Etudiant::getNom(){
	return nom;
}

int Etudiant::getMoyenne(){
	return moyenne;
}

void Etudiant::setNom(string t_nom){
	nom = t_nom;
}

void Etudiant::setMoyenne(int t_moyenne){
	moyenne = t_moyenne < 0 ? 0 :
		t_moyenne > 20 ? 20 : t_moyenne;
}
