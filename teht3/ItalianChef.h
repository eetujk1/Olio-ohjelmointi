#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"


using namespace std;

class italianChef : public Chef{

public:
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int, int);

};

#endif // ITALIANCHEF_H
