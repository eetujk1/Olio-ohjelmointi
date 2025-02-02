#include "asiakas.h"

asiakas::asiakas(string o, double l) : kayttotili(o), luottotili(o, l)
{
    nimi = o;
}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout << "Asiakkaan " << nimi << " kayttotilin saldo: " << this->kayttotili.getBalance() << endl;
    cout << "Asiakkaan " << nimi << " luottotilin saldo: " << this->luottotili.getBalance() << endl;
}

bool asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}

bool asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool asiakas::luotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}

bool asiakas::luotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}

bool asiakas::tiliSiirto(double summa, asiakas& vastaanottaja)
{
    if(summa <= 0) {
        cout << "Et voi siirtaa negatiivista summaa" << endl;
        return false;
    }

    if(!kayttotili.withdraw(summa)) {
        cout << "Ei riittävästi varoja" << endl;
        return false;
    }

    if(!vastaanottaja.kayttotili.deposit(summa)) {
        cout << "Siirto epäonnistui: tilivirhe" << endl;
        return false;
    }

    cout << "Siirto onnistui: " << summa << " siirretty " << vastaanottaja.getNimi() << " tilille." << endl;
    cout << "Siirto tapahtui asiakkaalta: " << this->getNimi() << " asiakkaalle: " << vastaanottaja.getNimi() << endl;

    return true;
}
