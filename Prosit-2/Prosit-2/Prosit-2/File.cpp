#include "File.h"

File::File(){
	cout << "Path : ";
	getline(cin, filename);
}

File::File(string t_filename){
	filename = t_filename;
}

File::File(File& t_file){
	filename = t_file.filename;
	flux = t_file.flux;
	buffer = t_file.buffer;
	isOpen = t_file.isOpen;
}

File::~File(){
	if (isOpen) flux->close();
	delete flux;

	delete buffer;
}

void File::encrypt(int mode){
	switch (mode){
	case 1:
		// XOR
		xorEncryptor.setBuffer(buffer, size);
		xorEncryptor.encrypt();
		save(filename + ".XorEncrypted", 0);
		break;
	case 2:
		// César
		save(filename + ".CesarEncrypted", 1);
		break;
	case 3:
		// Les 2
		break;
	default:
		cout << "Erreur !!" << endl;
		break;
	}
}

void File::decrypt(int mode){
	// Detect mode
}

void File::save(string t_filename, int mode){
	switch (mode){
	case 0:
		flux = new fstream(t_filename, ios::in | ios::out | ios::binary);
		flux->write(buffer, size);
		break;
	case 1:
		flux = new fstream(t_filename, ios::in | ios::out);
		*flux << data;
	default:
		cout << "Error while saving" << endl;
		return;
	}
	flux->close();
}

void File::open(string t_filename, int mode) {
	string line;
	switch (mode) {
	case 0:
		flux = new fstream(filename, ios::in | ios::out | ios::binary);
		flux->seekg(0, ios::end);
		size = flux->tellg();
		flux->seekg(0, ios::beg);
		buffer = new char[size];
		flux->read(buffer, size);
		break;
	case 1:
		flux = new fstream(filename, ios::in | ios::out);
		while (getline(*flux, line)) { data += line; }
		break;
	default:
		return;
	}
	flux->close();
	delete flux;
}

bool is_number(const string& s) {
	return(strspn(s.c_str(), "0123456789") == s.size());
}
