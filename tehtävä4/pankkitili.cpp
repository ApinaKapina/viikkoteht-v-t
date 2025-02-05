#include "pankkitili.h"



Pankkitili::Pankkitili()
{

}

Pankkitili::Pankkitili(string o) {

}


bool Pankkitili::withdraw(double amount)
{
    if (amount < 0) {
        cout << "nosto epäonnistui!" << endl;
         return false;
    }

    if (amount > saldo) {
        cout << "nosto epäonnistui!" << endl;
        return false;
    }

        saldo -= amount;
    cout << "nosto onnistui!\n" << "Uusi saldo on: " << saldo << endl;
        return true;

}

bool Pankkitili::deposit(double amount)
{
    if (amount <=0) {
        return false;
        cout << "nosto epäonnistui" << endl;
    }

        saldo += amount;
        cout << "Talletus onnistui!\n" << "Uusi saldo on: " << saldo << endl;
        return true;


}
