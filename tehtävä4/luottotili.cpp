#include "luottotili.h"
Luottotili::Luottotili()
{


}

Luottotili:: ~Luottotili()
{

}
Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    luottoraja = lr;
    cout << "luottoraja: " << luottoraja << endl;
}

bool Luottotili::withdraw(double amount)
{
    if (amount < 0) {
        return false;
    }

    if ((saldo + amount) > luottoraja) {
        cout << "nosto epäonnistui!" << endl;
        return false;
    }

    saldo += amount;
   cout << "Nosto onnistui, velka on: " << saldo << endl;
    return true;
}

bool Luottotili::deposit(double amount)
{
    if (amount < 0) {
        cout << "talletus epaonnistui!" << endl;
        return false;

    }



    saldo -= amount;
    cout << "Talletus onnistui!\n" << "Velkaa on jaljella: " << saldo << endl;


if (amount >= saldo) {
    cout << "Talletus epaonnistui, tilin saldo ei voi ylittaa 0" << endl;
}
}
