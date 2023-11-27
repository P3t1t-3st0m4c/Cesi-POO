#include "Recepteur.h"
#include "Emetteur.h"

int main(int argc, char *argv[]){
	int i;
	string line;

	//Création des objets
	Emetteur *emetteur1 = new Emetteur;
	Emetteur emetteur2("Données.txt");
	Emetteur emetteur3;
	Emetteur emetteur4;
	Emetteur emetteur5;

	// Créer les threads des émetteurs
	thread t1(&Emetteur::main, emetteur1);
	thread t2(&Emetteur::main, emetteur2);
	thread t3(&Emetteur::main, emetteur3);
	thread t4(&Emetteur::main, emetteur4);
	thread t5(&Emetteur::main, emetteur5);

	// Démarrer les threads
	t1.detach();
	t2.detach();
	t3.detach();
	t4.detach();
	t5.detach();

	Recepteur recepteur(5);
	this_thread::sleep_for(chrono::milliseconds(1000));
	for (int i = 0; i < 5; i++) {
		cout << Emetteur::liste[i] << endl;
	}

	// Lecture des messages via une commande
	while (true) {
		getline(cin, line);
		if (line == "exit") {
			break;
		}
		else if (line == "check") {
			getline(cin, line);
			if (line == "") {
				recepteur.check();
			}
			else {
				i = stoi(line);
				recepteur.check(i);
			}
		}
		else if (line == "abonnement") {
			cout << "Abonner a l'emetteur numero : ";
			getline(cin, line);
			i = stoi(line);
			recepteur.abonner(i);
		}
		else if (line == "desabonnement") {
			cout << "Desabonner a l'emetteur numero : ";
			getline(cin, line);
			i = stoi(line);
			recepteur.desabonner(i);
		}
		else {
			cout << "Commande inconnue" << endl;
		}
	}
	delete emetteur1;
}