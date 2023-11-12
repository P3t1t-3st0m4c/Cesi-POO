#include <iostream>

#include "Point.h"

using namespace std;

int main(){
    Point a;
    Point b(1, 1);
    Point c(1, 2);

    cout << "Distance entre A" << a << " et B" << b << " = " << a.distance(b) << "\n" << endl;
    cout << "C" << c << " est entre A" << a << " et B" << b <<" ? : " << (c.entre(a, b) == 0 ? "Faux" : "Vrai") << "\n" << endl;
    cout << "Modification de C" << c << endl;
    c.modifyCoords(0.2, 0.2);
    cout << "C" << c << "\n" << endl;
    cout << "C" << c << " est entre A" << a << " et B" << b << " ? : " << (c.entre(a, b) == 0 ? "Faux" : "Vrai") << endl;
}