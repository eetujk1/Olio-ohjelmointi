#include <iostream>
#include "game.h"

using namespace std;

int main() {

    int maxNumber;

    cout << "Anna suurin etsittava luku: ";
    cin >> maxNumber;

    game peli(maxNumber);
    peli.play();

    return 0;
}
