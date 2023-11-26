#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>

using namespace std;

class Emetteur{
public:
	Emetteur();
	Emetteur(string t_filename);
	~Emetteur();
	static vector<Emetteur*> liste;
	string get(void);
	void main();

private:
	vector<string> data;
	string buffer;
	bool running;
};