#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class CompteClient{

private:
    string nom;
    int numero;
public:
    CompteClient(const float in_solde);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();

};
#endif // COMPTECLIENT_H
