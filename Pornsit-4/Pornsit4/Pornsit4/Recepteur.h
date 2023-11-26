#pragma once

#include "Emetteur.h"

using namespace std;

class Recepteur{
public:
	Recepteur(void);
	Recepteur(int nb);
	~Recepteur(void);
	// Func pointer
	void abonner(int i);
	void desabonner(int i);
	void check();
	void check(int i);
	void listen(Emetteur *e, int i);

private:
	// Array of pointers to vectors of string
	vector<string>** messages;
	bool* abonnes;
	int size;
	int last;
};
