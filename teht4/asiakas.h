#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"
#include "pankkitili.h"


class asiakas
{
public:
    asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, asiakas& vastaanottaja );

private:
    string nimi;
    pankkitili kayttotili;
    luottotili luottotili;


};

#endif // ASIAKAS_H
