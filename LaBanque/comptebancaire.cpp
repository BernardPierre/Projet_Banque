#include <comptebancaire.h>
CompteBancaire::CompteBancaire(float in_solde)
{
    solde=in_solde;
}

CompteBancaire::~CompteBancaire()
{
}

void CompteBancaire::Deposer(float in_montant)
{
    cout << "montant de la somme à déposer :";
    cin >> in_montant;
    solde = solde + in_montant;
}

bool CompteBancaire::Retirer(float in_montant)
{
     bool retirerOK = 0;
     cout << "montant de la somme à retirer :";
     cin >> in_montant;
     if (in_montant > solde) {
         cout << "solde insuffisant"<< endl;

     }else {
         solde = solde - in_montant;
         retirerOK = 1;
     }
         return retirerOK;
}

float CompteBancaire::ConsulterSolde()
{
    cout << "votre solde actuel est de :"<< solde << " euros"<<endl;
}


