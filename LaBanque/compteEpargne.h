#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class CompteEpargne{
private:
    float interets=0.5;
public:
    CompteEpargne(const float in_solde);
    void Deposer(const float in_montant=0);
    bool Retirer(const float in_montant=0);
    float ConsulterSolde();
    ~CompteEpargne();
    void TauxInterets();
    void ClaculerInteret();
    void ModifierTaux(const float in_interet);
protected:
    float solde=0;
    float gainInteret=0;
};
#endif // COMPTEEPARGNE_H
