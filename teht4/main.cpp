#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    /*pankkitili olio1("Kalle");

    olio1.deposit(400);
    cout << "Pankkiilin saldo on " << olio1.getBalance() << endl;

    olio1.withdraw(50);
    cout << "Pankkitilin saldo noston jalkeen " << olio1.getBalance()<<endl;

    luottotili olio2("Kalle", 1500);

    olio2.withdraw(1000);

    cout << "Luottotilin saldo " << olio2.getBalance() << endl;*/

    asiakas asiakas1("Kalle", 500);


    asiakas1.talletus(500);
    asiakas1.showSaldo();

    asiakas asiakas2("Mikko", 1000);

    asiakas2.talletus(1000);
    asiakas2.luotonNosto(500);
    asiakas2.luotonMaksu(5000);

    asiakas2.showSaldo();

    asiakas1.tiliSiirto(300, asiakas2);

    asiakas1.showSaldo();
    asiakas2.showSaldo();
    }
