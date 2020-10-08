#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class CompteBancaire{

public:
    CompteBancaire(const float in_solde);
    void Deposer(const float in_montant=0);
    bool Retirer(const float in_montant=0);
    float ConsulterSolde();
    ~CompteBancaire();
protected:
    float solde=0;
};

#endif // COMPTEBANCAIRE_H
