#include "notifikaattori.h"

notifikaattori::notifikaattori()
{
    seuraajat = nullptr;

}

notifikaattori::~notifikaattori()
{

}

void notifikaattori::lisaa(seuraaja * s)
{
    if(seuraajat ==nullptr) {
        seuraajat = s;
        return;
    }

    s->next = seuraajat; // laitetaan vanha alkupiste uuden seuraajan nextiin

    seuraajat = s; // uusi seuraaja uudeksi alkupisteeksi
}

void notifikaattori::poista(seuraaja * o)
{
    if (seuraajat == o) {
        seuraajat = seuraajat->next;
        cout << "Seuraaja " << o->getNimi() << " poistettu." << endl;
        return;

    }

    seuraaja * n = seuraajat;

    while (n != nullptr) {

        if (n->next == o) {
            n->next = o->next;
            cout << "Seuraaja " << o->getNimi() << " poistettu." << endl;
            return;
        }
        n = n->next;
    }
}

void notifikaattori::tulosta()
{
    seuraaja* o = seuraajat; // alustetaan o listan alkuun

    while (o->next != nullptr) {
        cout << "Seuraaja = " << o->getNimi() << endl;

        o = o->next;
    }

    cout << "Seuraaja = " << o->getNimi() << endl;
}

void notifikaattori::postita(string n)
{
    cout << "Notifikaattori lahettaa viestin:" << n << endl;

    seuraaja * o = seuraajat;

    while (o != nullptr) {
        o->paivitys(n);
        o = o->next;

}

}

