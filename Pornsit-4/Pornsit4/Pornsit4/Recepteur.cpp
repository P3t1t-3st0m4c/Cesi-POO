#include "Recepteur.h"

Recepteur::Recepteur(void){
	size = 1;
	last = 0;
	emetteurs = new Emetteur*[size]();
	messages = new vector<string>*[size]();
	buffer = new vector<string>[size]();
}

Recepteur::Recepteur(int nb){
	size = nb;
	last = 0;
	emetteurs = new Emetteur*[size]();
	messages = new vector<string>*[size]();
	buffer = new vector<string>[size]();
}

Recepteur::~Recepteur(void){
	delete[] emetteurs;
	delete[] messages;
}

void Recepteur::abonner(int i){
	if (last >= size) {
		cout << "Recepteur plein" << endl;
		return;
	}
	i = i > Emetteur::liste.size() ? Emetteur::liste.size() : i;
	emetteurs[last++] = Emetteur::liste[i];
	messages[last++] = Emetteur::liste[i]->get();
	// Faire un thread pour ecouter l'abonnement
}

void Recepteur::check(){
	for (int i = 0; i < size; i++) {
		/*if (emetteurs[i] != NULL) {
			buffer->push_back(emetteurs[i]->getBuffer());
		}*/
		if (messages[i] != NULL) {
			t_message = messages[i];

			buffer[i].push_back();
		}
	}
}

void Recepteur::check(int i){
	if (funcPointers[i] != NULL) {
		buffer[i].push_back();
	}
}

void Recepteur::read(){
	for (int i = 0; i < size; i++) {
		if (buffer[i].size() > 0) {
			cout << buffer[i].front() << endl;
			buffer[i].erase(buffer[i].begin());
		}
	}
}






