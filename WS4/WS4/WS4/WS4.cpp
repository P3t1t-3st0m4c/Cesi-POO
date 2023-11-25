#include <iostream>

using namespace std;

typedef struct listeChainee {
	int value;
	listeChainee* next;
} liste;

int test2(){
	liste* p = new liste;
	p->value = 1;
	p->next = new liste;
	p->next->value = 2;
	p->next->next = new liste;
	p->next->next->value = 3;
	p->next->next->next = NULL;

	liste* q = p;
	while (q != NULL) {
		cout << q->value << endl;
		q = q->next;
	}

	delete p->next->next;
	delete p->next;
	delete p;

	return 0;
}


void test() {
	int tab[3] = { 1, 2, 3 };
	for (int i = 0; i < 3; i++) {
		cout << *(tab + i) << ",";
	}
	cout << endl;

	int* p = new int[3];
	for (int i = 0; i < 3; i++) {
		p[i] = i + 1;
	}

	for (int i = 0; i < 3; i++) {
		cout << p[i] << ",";
	}
	cout << endl;

	int a = 6;
	int _ = 0;
	int b = 7;
	int __ = 0;
	int c = 5;
	int ___ = 0;

	int* tab2[3] = { &c, &a, &b };

	cout << "Adresses : " << endl;

	for (int i = 0; i < 3; i++) {
		cout << tab2[i] << ",";
	}

	cout << "\nValeurs : " << endl;

	for (int i = 0; i < 3; i++) {
		cout << *tab2[i] << ",";
	}

	cout << endl;

	for (int i = 0; i < 3; i++) {
		cout << *((&a) + (i * 2) * (sizeof(int) * 2)) << ",";
	}

	delete[] p;
}