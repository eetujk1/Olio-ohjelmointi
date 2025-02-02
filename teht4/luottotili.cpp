#include "luottotili.h"
#include "pankkitili.h"



luottotili::luottotili(string o, double l) : pankkitili(o)
{
    luottoRaja = -l;
    cout << "Luottotili luotu asiakkaalle: " << o << ", Luottoraja: " << luottoRaja << endl;


}


bool luottotili::deposit(double d) {
    if (d < 0) {
        cout << "Ei negatiivisia talletuksia!" << endl;
        return false;
    }

    saldo += d;

    if (saldo > 0) {
        saldo = 0;
        cout << "Luottotili on maksettu takaisin!" << endl;
    }

    return true;

}

bool luottotili::withdraw(double w)
{
    if (saldo - w < luottoRaja) {
        cout << "Luottoraja ylitetty" << endl;
        return false;

    } else {
        saldo -= w;
        return saldo;
    }

}
