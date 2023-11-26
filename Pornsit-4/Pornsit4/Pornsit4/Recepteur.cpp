#include "Recepteur.h"

Recepteur::Recepteur(void){
	size = 1;
	last = 0;
	messages = new vector<string>*[size]();
	abonnes = new bool[size]();
}

Recepteur::Recepteur(int nb){
	size = nb;
	last = 0;
	messages = new vector<string>*[size]();
	abonnes = new bool[size]();
}

Recepteur::~Recepteur(void){
	delete[] messages;
}

void Recepteur::abonner(int i){
	if (last >= size) {
		cout << "Recepteur plein" << endl;
		return;
	}

	if (i >= Emetteur::liste.size() - 1) {
		cout << "Emetteur " << i << " n'existe pas" << endl;
		return;
	}

	cout << "Abonnement de l'emetteur " << Emetteur::liste[i] << " au recepteur " << this << endl;
	// Faire un thread pour ecouter l'abonnement
	abonnes[last] = true;
	thread t(&Recepteur::listen, this, Emetteur::liste[i], last);
	t.detach();
	last++;
}

void Recepteur::desabonner(int i){
	if (i >= last || i < 0) {
		cout << "Recepteur " << i << " n'existe pas" << endl;
		return;
	}

	cout << "Desabonnement de l'emetteur " << Emetteur::liste[i] << " au recepteur " << this << endl;
	abonnes[i] = false;
	delete messages[i];
	messages[i] = NULL;
	last--;
}

void Recepteur::check(){
	for (int i = 0; i < last; i++) {
		check(i);
	}
}

void Recepteur::check(int i){
	if (i >= last || i < 0) {
		cout << "Recepteur " << i << " n'existe pas" << endl;
		return;
	}

	if (messages[i] == NULL) {
		cout << "Pas de message" << endl;
		return;
	}

	for (int j = 0; j < messages[i]->size(); j++) {
		cout << messages[i]->at(j) << endl;
	}

	messages[i]->clear();
}

void Recepteur::listen(Emetteur* e, int i){
	if (messages[i] == NULL) {
		messages[i] = new vector<string>();
	}

	while (abonnes[i]) {
		// Check if the vector has more than 50 elements
		// If so, write to file and create an another vector
		if (messages[i]->size() > 50) {
			ofstream file("Recepteur" + to_string(i) + ".txt");
			for (int j = 0; j < messages[i]->size(); j++) {
				file << messages[i]->at(j) << endl;
			}
			file.close();
			messages[i]->clear();
		}
	
		messages[i]->push_back(e->get());
		// Attente de 500 ms
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}






