#include "Recepteur.h"
#include "Emetteur.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	//Cr�ation des objets
	Emetteur emetteur;
	Recepteur recepteur;
	
	recepteur.abonner(
		(emetteur.get)
	);

	recepteur.check();
	recepteur.read();
}