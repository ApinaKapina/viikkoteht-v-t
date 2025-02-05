#include <iostream>
#include "pankkitili.h"
using namespace std;
#include "luottotili.h"
#include "asiakas.h"

int main()
{
    Pankkitili pa("Gordon");

    pa.deposit(50);
    pa.deposit(100);

    pa.withdraw(25);
    pa.withdraw(150);

    Luottotili hp("Jorma", 1000);

    hp.withdraw(900);
    hp.deposit(1100);


   Asiakas A("Aaa", 1000);
    Asiakas B("Bee", 1500);
    Asiakas C("Cee", 2500);

    // tilisiirto a:lta b:lle
    A.tiliSiirto(50, B);
    B.tiliSiirto(100, C);

    Asiakas jorma("Yrjo", 1000);
    jorma.talletus(100);

    jorma.nosto(50);



    return 0;
}
