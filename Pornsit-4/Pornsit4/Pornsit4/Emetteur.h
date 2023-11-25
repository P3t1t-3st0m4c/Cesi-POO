#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Emetteur{
public:
	Emetteur();
	Emetteur(string t_filename);
	~Emetteur();
	static vector<Emetteur*> liste;
	string get(void);
	void putData();

private:
	string data;
	string filename;
};