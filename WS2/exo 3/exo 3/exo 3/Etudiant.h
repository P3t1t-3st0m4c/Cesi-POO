#pragma once
#include <string>
#include <iostream>

using namespace std;

class Etudiant {
public:
	Etudiant();
	Etudiant(const string t_nom, const int t_moyenne);
	Etudiant(const Etudiant& t_etudiant);
	string getNom();
	int getMoyenne();
	void setNom(string t_nom);
	void setMoyenne(int t_moyenne);
private:
	string nom;
	int moyenne;
};