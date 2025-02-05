#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    nimi=n;
}

bool Asiakas::talletus(double amount)
{
    cout << "asiaks " << nimi << "tallettaa";
    bool onnistuiko = kayttotili.deposit(amount);
    if (onnistuiko == false) {
        cout << "meni pieleen" << endl;
    }


}

bool Asiakas::tiliSiirto(double amount, Asiakas &saaja)
{
    bool onnistuiko = nosto(amount);
    if (onnistuiko == true) {
        saaja.talletus(amount);
    }

}

    bool Asiakas::nosto(double amount)
    {
        cout << "Asiakas "<< nimi << "nostaa";
        bool onnistuiko = kayttotili.withdraw(amount);
        if (onnistuiko == false) {
            cout << "meni pieleen" << endl;
        }

    }

    bool Asiakas::luotonMaksu(double amount)
    {
        cout << "Asiakas " << nimi <<  "maksaa luottotilille";
        bool onnistuiko = luottotili.deposit(amount);
        if (onnistuiko == false) {
            cout << "meni pieleen" << endl;
        }
    }

    bool Asiakas::luotonNosto(double amount)
    {
        cout << "Asiakas " << nimi << "nostaa luottotililta";
        bool onnistuiko = luottotili.withdraw(amount);
        if (onnistuiko == false) {
            cout << "Pieleen meni" << endl;
        }
    }



string Asiakas::getNimi() const
{
    return nimi;
}

