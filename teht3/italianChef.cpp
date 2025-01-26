#include "ItalianChef.h"
#include <iostream>

using namespace std;


italianChef::italianChef(string name) : Chef(name)
{

}

italianChef::~italianChef()
{

}

bool italianChef::askSecret(string pass, int f, int w)
{
    if(pass==password) {
        cout << "salasana oikein!" << endl;

        return makepizza(f,w);
    }

    else {
        cout<<"Virheellinen salasana!" << endl;
        return false;
    }

}

int italianChef::makepizza(int f, int w)
{
    int pizzamaara = 0;
    while(f>=5 && w>=5) {
        f-=5;
        w-=5;
        pizzamaara++;

    }
        cout<<chefName<<" teki "<<pizzamaara<<" pizzaa" << endl;
        flour = f;
        water = w;

        return pizzamaara;


    }





