#pragma once
#include <iostream>
#include <string>

#include "main.h"

using namespace std;

class XorEncryptor{
public:
	XorEncryptor();
	XorEncryptor(char* t_buffer, int t_size);
	XorEncryptor(char* t_buffer, int t_key, int t_size);
	void setBuffer(char* t_buffer, int t_size);
	char* encrypt();
private:
	char* buffer;
	int key;
	int size;
};

