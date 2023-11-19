#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <fstream>

#include "Etudiant.h"

using namespace std;

class Promo{
public:
	Promo();
	~Promo();
	int getNbEtudiants();
	void inputNotesUtilisateur();
	void afficherEtudiants();
	void inputNotesAUFichier(string t_fileName);
	void outputNotesDUfichier(string t_fileName);
private:
	vector<Etudiant*> listEtudiants;
	int nb_etudiants;
};

