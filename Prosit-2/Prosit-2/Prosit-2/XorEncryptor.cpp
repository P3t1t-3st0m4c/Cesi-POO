#include "XorEncryptor.h"

XorEncryptor::XorEncryptor(){
	string line = "a";
	while (!is_number(line)) {
		cout << "Key : ";
		getline(cin, line);
		cout << endl;
	}
	key = stoi(line);
	cout << "Key : " << key << endl;
}

XorEncryptor::XorEncryptor(char* t_buffer, int t_size){
	XorEncryptor();
	setBuffer(t_buffer, t_size);
}

XorEncryptor::XorEncryptor(char* t_buffer, int t_key, int t_size){
	buffer = t_buffer;
	key = t_key;
	size = t_size;
}

void XorEncryptor::setBuffer(char* t_buffer, int t_size){
	buffer = t_buffer;
	size = t_size;
}

char* XorEncryptor::encrypt(){
	for (int i = 0; i <= size / 4; i++) {
		buffer[8 * 4 * i] ^= key;
	}
}