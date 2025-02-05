#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
class Luottotili : public Pankkitili
{
public:
    Luottotili();
    ~ Luottotili();
     Luottotili(string o, double luottoraja);

    virtual bool withdraw(double amount) override;
     virtual bool deposit (double amount) override;

protected:
     double luottoraja = 1000;
};

#endif // LUOTTOTILI_H
