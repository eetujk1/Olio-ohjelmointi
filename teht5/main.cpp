#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    seuraaja Mikko("Mikko");
    seuraaja Seppo("Seppo");
    seuraaja Kalle("Kalle");
    cout << Mikko.getNimi() << endl;
    Mikko.paivitys("toimii");

    notifikaattori olio2;
    olio2.lisaa(&Mikko);
    olio2.lisaa(&Seppo);
    olio2.lisaa(&Kalle);
    olio2.tulosta();
    olio2.postita("Tama on viesti 1");
    olio2.poista(&Kalle);
    olio2.postita("Tama on viesti 2");

    return 0;
}
