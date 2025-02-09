#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>

using namespace std;

class seuraaja
{
public:
    seuraaja(string);
    ~seuraaja();
    string getNimi();
    void paivitys(string);
     seuraaja* next = nullptr;

private:
    string nimi;

};

#endif // SEURAAJA_H
