#include <compteEpargne.h>
CompteEpargne::CompteEpargne(float in_solde)
{
    solde = in_solde;
}

void CompteEpargne::Deposer(float in_montant)
{
    cout << "montant de la somme à déposer :";
    cin >> in_montant;
    solde = solde + in_montant;
}

bool CompteEpargne::Retirer(float in_montant)
{
     bool retirerOK = 0;
     cout << "montant de la somme à retirer :";
     cin >> in_montant;
     if (in_montant > solde) {
         cout << "solde insuffisant"<<endl;

     }else {
         solde = solde - in_montant;
         retirerOK = 1;
     }
         return retirerOK;
}

float CompteEpargne::ConsulterSolde()
{
    cout << "votre solde actuel est de :"<< solde << "euros"<<endl;
}

CompteEpargne::~CompteEpargne()
{

}

void CompteEpargne::TauxInterets()
{
    cout << "le taux d'interet est de :"<< interets << "%"<<endl;
}

void CompteEpargne::ClaculerInteret()
{
    gainInteret = solde * interets * 12/12 ;

    cout << "le gain apporté par les interets est de :"<< gainInteret << " euros"<<endl;
}

void CompteEpargne::ModifierTaux(const float in_interet)
{
    cout << "l'interet est passé de "<< interets << "% à ";
    interets = in_interet;
    cout << interets << "%"<<endl;
}
