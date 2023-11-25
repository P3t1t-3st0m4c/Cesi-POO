#pragma once
#include "Objet2D.h"
class Rectangle :
    public Objet2D
{
public:
    Rectangle(void);
    Rectangle(int tdim1, int tdim2);
    int getLongueur();
    int getLargeur();
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
};

