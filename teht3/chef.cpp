#include "chef.h"


Chef::Chef(string n)
{
    chefName = n;
    cout << "Chef " << n << " konstruktori" << endl;


}

Chef::~Chef()
{
    cout << "Chef " << chefName << " dekonstruktori" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int salaattiAinekset)
{

    int salaattiAnnos=salaattiAinekset/5;
    return salaattiAnnos;

}

int Chef::makeSoup(int keittoAinekset)
{
    int keittoAnnos=keittoAinekset/3;
    return keittoAnnos;
}





