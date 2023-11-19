#include "Promo.h"

Promo::Promo(){
	string rep;
	cout << "Voulez-vous ajouter manuelement une promo ou utiliser un fichier [M/A] : ";
	getline(cin, rep);
	switch (rep[0]) {
	case 'M':
		inputNotesUtilisateur();
		break;
	case 'A':
		cout << "Path du fichier : ";
		getline(cin, rep);
		inputNotesAUFichier(rep);
		break;
	default:
		cout << "Erreur";
		break;
	}
}

Promo::~Promo() {
	for (auto& elem : listEtudiants) {
		delete elem;
	}
}

int Promo::getNbEtudiants(){
	return nb_etudiants;
}

void Promo::inputNotesUtilisateur(){
	string ans = "O";
	while (ans[0] == 'O') {
		listEtudiants.push_back(new Etudiant);
		nb_etudiants++;
		cout << "Continuer ? [O/n] : " << endl;
		getline(cin, ans);
	}
}

void Promo::afficherEtudiants(){
	for (auto& elem : listEtudiants) {
		cout << elem->getNom() << ", Moyenne :" << elem->getMoyenne() << endl;
	}
}

void Promo::inputNotesAUFichier(string t_fileName){
	string line;
	ifstream inp(t_fileName);
	if (!inp) {
		cout << "Erreur fichier" << endl;
		return;
	}
	while (getline(inp, line)) {
		int i = line.find(';');
		listEtudiants.push_back(
			new Etudiant(
				line.substr(0, i), stoi(line.substr(i+1, line.length()))
			)
		);
		nb_etudiants++;
	}
}

void Promo::outputNotesDUfichier(string t_fileName){
	ofstream out(t_fileName);
	if (!out) {
		cout << "Erreur fichier" << endl;
		return;
	}
	for (auto& elem : listEtudiants) {
		out << elem->getNom() << ";" << elem->getMoyenne() << endl;
	}
	out.close();
}
