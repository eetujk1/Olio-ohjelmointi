#include "seuraaja.h"


seuraaja::seuraaja(string n)
{
    nimi = n;

}

seuraaja::~seuraaja()
{

}

string seuraaja::getNimi()
{
    return nimi;

}

void seuraaja::paivitys(string s)
{
    cout << "henkilon " << nimi << " viesti: " << s << endl;
}
