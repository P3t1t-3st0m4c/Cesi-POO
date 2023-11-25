#include "Emetteur.h"

Emetteur::Emetteur(){
	Emetteur::liste.push_back(this);
}

Emetteur::Emetteur(string t_filename){
	Emetteur::liste.push_back(this);
	filename = filename;
}

Emetteur::~Emetteur(){
}

string Emetteur::get(){
	return data;
}

void Emetteur::putData(){
}