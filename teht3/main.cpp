#include <iostream>
#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef olio("Gordon");
    italianChef olio2("Mario");

    cout << "Gordon valmisti " << olio.makeSalad(20) << " annosta salaattia" << endl;
    cout << "Gordon valmisti " << olio.makeSoup(20) << " annosta keittoa" << endl;

    olio2.askSecret("pizza", 20, 20);

    return 0;
}
