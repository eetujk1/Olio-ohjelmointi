#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


game::game(int num)
{
    maxNumber = num;
    cout << "Peli alustettu, maksiminumero " << maxNumber << endl;
}

game::~game()

{
    cout << "Peli paattyi, vapautetaan resurssit muistista." << endl;
}

void game::play()
{
    srand(time(0));

    randomNumber = (rand() % maxNumber) + 1;

    playerGuess=0;
    numOfGuesses = 0;

    while(playerGuess !=randomNumber) {

        cout << "Arvaa luku 1-" << maxNumber << " valilta" << endl;

        cin >> playerGuess;

        numOfGuesses++;

        if(playerGuess>randomNumber) {
            cout << "Arvauksesi on liian suuri" << endl;

        }

        if(playerGuess<randomNumber) {
            cout << "Arvauksesi on liian pieni" << endl;

        }

        if(playerGuess==randomNumber) {
            cout << "Arvauksesi on oikein" << endl;

            printGameResult();
        }


    }

}

void game::printGameResult()
{
    cout << "Arvasit oikean luvun yhteensa "  << numOfGuesses << " arvauksella" << endl;
}
