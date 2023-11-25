#include "Carre.h"

Carre::Carre(void) : Rectangle() {}

Carre::Carre(int tcote) : Rectangle(tcote, tcote) {}

int Carre::getCote(){
    return dim1;
}

string Carre::afficheInfo(){
    return "Carre : \nCote : " + to_string(dim1) + "\nPerimetre : " +
        to_string(getPerimetre()) + "; Aire : " + to_string(getAire());
}
