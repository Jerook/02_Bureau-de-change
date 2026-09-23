#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

/* ---------------------------
Laboratoire : 03
Auteur(s) : Jeroshan Jegatheeswaran
Date : 23.09.2026
But : Bureau de change 
Remarque(s) : 
--------------------------- */

int main() {

    // Infos du compte

    const double capital = 1000.0; // en CHF
    const double tauxChange = 1.024;
    const double frais = 5.0;

    // Pour Afficher dan sle ticket de fin

    double euros;

    // Demande des informations du compte

    string nom;
    int numCompte;


    // Programme initialisation

    cout << "Quel est votre numéro de compte ? "<< endl;
    cin >> numCompte;

    cout << "Quel est votre nom de famille ? "<< endl;
    cin >> nom;

    // Affichage des informations du compte

    cout << "Solde de votre compte CHF : " << capital << endl;
    cout << "Taux de change : 1 CHF = " << tauxChange << " Euro" << endl;
    cout << "Frais d’opération : " << frais << " CHF" << endl;

    // Demande de conversion en Euro

    cout << "Entrez la somme souhaitée en euros : ";
    cin >> euros;

    // Calcul de conversion

    double euroAChf = (euros / tauxChange) + frais;

    double sommeChf = euros / tauxChange;
    double soldeFinal = capital - sommeChf - frais;





    cout << "+-------------------------------+" << endl;
    cout << "|" << endl;
    cout << "|" << nom << endl;
    cout << "|" <<numCompte << endl;
    cout << "|" << endl;
    cout << "| Somme Euro             : " << euros << endl;
    cout << "| 1 CHF en Euro          : " << tauxChange << endl;
    cout << "|" << endl;
    cout << "| Somme CHF              : " << sommeChf << endl;
    cout << "| Frais                  : " << frais << endl;
    cout << "|" << endl;
    cout << "| Solde Compte           : " << soldeFinal << endl;
    cout << "|" << endl;
    cout << "+-------------------------------+" << endl;


    return EXIT_SUCCESS;
}