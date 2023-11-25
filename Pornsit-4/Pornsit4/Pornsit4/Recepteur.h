#pragma once
#include <vector>
#include <string>
#include <iostream>

#include "Emetteur.h"

using namespace std;

class Recepteur{
public:
	Recepteur(void);
	Recepteur(int nb);
	~Recepteur(void);
	// Func pointer
	void abonner(int i);
	void check();
	void check(int i);
	void read();
private:
	vector<string> *buffer;
	// Array of pointers to emetteurs
	Emetteur **emetteurs;
	// Array of pointers to vectors of string
	vector<string> **messages;
	int size;
	int last;
};
