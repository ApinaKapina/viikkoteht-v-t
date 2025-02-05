#ifndef ASIAKAS_H
#define ASIAKAS_H
# include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double lr);
    bool talletus(double amount);
    bool tiliSiirto(double amount, Asiakas &saaja);
    string getNimi() const;
    void showSaldo();
    bool nosto(double);
    bool luotonMaksu(double amount);
        bool luotonNosto(double amount);

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;
};

#endif // ASIAKAS_H
