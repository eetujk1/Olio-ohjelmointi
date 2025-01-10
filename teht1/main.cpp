#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnum;

    cout << "Anna suurin etsittava luku ";
    cin >> maxnum;

    int arvaustenmaara = game(maxnum);
    cout << "Peli paattyi. Kaytit " << arvaustenmaara << " arvausta." << endl;
    return 0;

}

int game(int maxnum) {

    srand((unsigned)time(0));
    int satunnaisluku = (rand()%maxnum)+1;
    int arvaus=-1;
    int arvaustenmaara=0;


    while(arvaus !=satunnaisluku) {

        cout << "Arvaa luku 1-" << maxnum << " valilta" << endl;

        cin >> arvaus;

        arvaustenmaara++;

        if(arvaus>satunnaisluku) {
            cout << "Arvauksesi on liian suuri" << endl;

        }

        if(arvaus<satunnaisluku) {
            cout << "Arvauksesi on liian pieni" << endl;

        }

        if(arvaus==satunnaisluku) {
            cout << "Arvauksesi on oikein" << endl;

        }

    }

    return arvaustenmaara;

}
