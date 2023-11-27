#include "Emetteur.h"

vector<Emetteur*> Emetteur::liste;

Emetteur::Emetteur(){
	running = true;
	cout << "Emetteur " << this << " cree" << endl;
	for (int i = 0; i < 51; i++) {
		string line = "Emetteur " + to_string((unsigned int)this);
		line += " : " + to_string(i);
		data.push_back(line);
	}
}

Emetteur::Emetteur(string t_filename){
	cout << "Emetteur " << this << " cree !" << endl;
	running = true;
	ifstream file(t_filename);
	string line;
	while (getline(file, line)) {
		data.push_back(line);
	}
	file.close();
}

Emetteur::~Emetteur(){
	running = false;
}

string Emetteur::get(){
	return buffer;
}

void Emetteur::main(){
	Emetteur::liste.push_back(this);
	while (running){
		for (int i = 0; i < data.size(); i++) {
			buffer = data[i];
			// Attente de 500 ms
			this_thread::sleep_for(chrono::milliseconds(500));
		}
	}
}