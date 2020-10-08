#include <iostream>
#include <menu.h>
#include <comptebancaire.h>
#include <compteEpargne.h>
#include <compteClient.h>
using namespace std;

/*enum CHOIX_MENU{
    OPTION_1 =1,OPTION_2,OPTION_3,QUITTER
};
//main compteBancaire
int main()
{
   int choix;

        CompteBancaire unCompte(64);
   do {
       try {

           Menu leMenu("compteBancaire.txt");
           //affichage du menu
           choix = leMenu.Afficher();
           //choix d'option pour le menu
           switch (choix) {
           case OPTION_1:
               cout << "vous avez choisi l'option n°1" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.ConsulterSolde();
               break;

           case OPTION_2:
               cout << "vous avez choisi l'option n°2" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.Deposer();
               break;
           case OPTION_3:
               cout << "vous avez choisi l'option n°3" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.Retirer();
               break;
           case QUITTER:
               cout << "vous avez choisi l'option Quitter" << endl;
               Menu::AttendreAppuiTouche();
               break;

           }
       }catch (Exception const &exp) {
               cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
               cout << exp.ObtenirMessage() <<endl;
               exit (EXIT_FAILURE);
       }
       } while (choix != QUITTER);

    return 0;
}
*/

//main compteEpargne
/*
enum CHOIX_MENU{
    OPTION_1 =1,OPTION_2,OPTION_3,OPTION_4,QUITTER
};

int main()
{
   int choix;
        //création d'un compte Epargne
        CompteEpargne unCompteEpargne(64);
   do {
       try {

           Menu leMenu("compteEpargne.txt");
           //affichage du menu
           choix = leMenu.Afficher();
           //choix d'option pour le menu
           switch (choix) {
           case OPTION_1:
               cout << "vous avez choisi l'option n°1" << endl;
               Menu::AttendreAppuiTouche();
               unCompteEpargne.ConsulterSolde();
               break;

           case OPTION_2:
               cout << "vous avez choisi l'option n°2" << endl;
               Menu::AttendreAppuiTouche();
               unCompteEpargne.Deposer();
               break;
           case OPTION_3:
               cout << "vous avez choisi l'option n°3" << endl;
               Menu::AttendreAppuiTouche();
               unCompteEpargne.Retirer();
               break;
           case OPTION_4:
               cout << "vous avez choisi l'option Quitter" << endl;
               Menu::AttendreAppuiTouche();
               unCompteEpargne.ClaculerInteret();
               break;
           case QUITTER:
               cout << "vous avez choisi l'option Quitter" << endl;
               Menu::AttendreAppuiTouche();
               break;

           }
       }catch (Exception const &exp) {
               cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
               cout << exp.ObtenirMessage() <<endl;
               exit (EXIT_FAILURE);
       }

       } while (choix != QUITTER);

    return 0;
}
*/
enum CHOIX_MENU{
    OPTION_1 =1,OPTION_2,OPTION_3,QUITTER
};
//main compte Client
int main()
{
   int choix;

        CompteClient unCompte(64);
   do {
       try {

           Menu leMenu("client.txt");
           //affichage du menu
           choix = leMenu.Afficher();
           //choix d'option pour le menu
           switch (choix) {
           case OPTION_1:
               cout << "vous avez choisi l'option n°1" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.OuvrirCompteEpargne();
               break;

           case OPTION_2:
               cout << "vous avez choisi l'option n°2" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.GererCompteBancaire();
               break;
           case OPTION_3:
               cout << "vous avez choisi l'option n°3" << endl;
               Menu::AttendreAppuiTouche();
               unCompte.GererCompteEpargne();
               break;
           case QUITTER:
               cout << "vous avez choisi l'option Quitter" << endl;
               Menu::AttendreAppuiTouche();
               break;

           }
       }catch (Exception const &exp) {
               cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
               cout << exp.ObtenirMessage() <<endl;
               exit (EXIT_FAILURE);
       }
       } while (choix != QUITTER);

    return 0;
}
