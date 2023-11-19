#pragma once
#include <iostream>
#include <fstream>
#include <string>

#include "XorEncryptor.h"
#include "CesarEncryptor.h"


using namespace std;

class File{
public:
	File();
	File(string t_filename);
	File(File& t_file);
	~File();
	void encrypt(int mode);
	void decrypt(int mode);
	void save(string t_filename, int mode);
	void open(string t_filename, int mode);
	void close();
private:
	string data;
	CesarEncryptor cesarEncryptor;
	XorEncryptor xorEncryptor;
	string filename;
	fstream* flux;
	char* buffer;
	int size;
	bool isOpen = false;
};

