#include "pankkitili.h"
#include <iostream>

using namespace std;

pankkitili::pankkitili(string o){

    omistaja = o;

}

 bool pankkitili::deposit(double d)

{
    if(d<0) {
    cout << "Ei negatiivisia talletuksia!" << endl;

    return false;

    }

    else {

    saldo += d;
    return true;

    }

}

 bool pankkitili::withdraw(double w)
{
    if(w>=saldo){

    cout<<"Liian suuri nosto!";
    return false;

}

else {

    saldo=saldo-w;
    return true;

    }

}

double pankkitili::getBalance()
{
    return saldo;
}
