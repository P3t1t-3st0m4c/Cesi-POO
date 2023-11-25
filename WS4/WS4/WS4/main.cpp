#include <iostream>
#include <string>

using namespace std;

class b
{
public:
	b() : data("Test") {}
	~b(){}
	string envoyerData() {
		return data;
	}

private:
	string data;

};

class a {
public:
	a() {}
	~a() {}
	void recevoirData(b* _, string(b::*c)(void)) {
		data = (_->*c)();
		cout << data << endl;
	}
	void recevoirData(b* _) {
		data = _->envoyerData();
		cout << data << endl;
	}

private:
	string data;
};



int main() {
	a a1;
	b b1;
	string(b::*c)(void) = &b::envoyerData;
	a1.recevoirData(&b1, c);
	a1.recevoirData(&b1);
	return 0;
}