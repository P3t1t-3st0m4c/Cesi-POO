#pragma once
#include "Rectangle.h"
class Carre :
    public Rectangle
{
public:
    Carre(void);
    Carre(int tcote);
    int getCote();
    string afficheInfo();
};