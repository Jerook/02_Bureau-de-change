/* ---------------------------
Laboratoire : 03
Auteur(s) : Jeroshan Jegatheeswaran
Date : 23.09.2026
But : Bureau de change
Remarque(s) :
--------------------------- */

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    // Infos du compte (constantes)

    const double capital = 1000.0;      // en CHF
    const double tauxChange = 1.024;    // taux de change CHF a Euros
    const double frais = 5.0;           // Frais de services

    // Informations à stocker

    double euros;
    string nom;
    int numCompte;


    // Programme initialisation demande à l'utilisateur d'entrer ses informations

    cout << "Quel est votre numéro de compte ? "<< endl;
    cin >> numCompte;

    cout << "Quel est votre nom de famille ? "<< endl;
    cin >> nom;

    // Affichage des informations du compte

    cout << "Solde de votre compte CHF : " << capital << endl;
    cout << "Taux de change : 1 CHF = " << tauxChange << " Euro" << endl;
    cout << "Frais d’opération : " << frais << " CHF" << endl;

    // Demande de conversion en Euro

    cout << "Entrez la somme souhaitée en euros : " << endl;
    cin >> euros;

    // Calcul de conversion

    double sommeChf = euros / tauxChange;
    double soldeFinal = capital - sommeChf - frais;

    cout << fixed << setprecision(2);
    cout << "Somme CHF : " << sommeChf << ", Solde compte : " << soldeFinal << endl;
    cout << defaultfloat;

    // Affichage du ticket

    cout << "+-------------------------------+" << endl;
    cout << "|" << endl;
    cout << "| " << nom << endl;
    cout << "| " <<numCompte << endl;
    cout << "|" << endl;
    cout << "| Somme Euro             : " << euros << endl;
    cout << "| 1 CHF en Euro          : " << tauxChange << endl;
    cout << "|" << endl;
    cout << fixed << setprecision(2);
    cout << "| Somme CHF              : " << sommeChf << endl;
    cout << defaultfloat;
    cout << "| Frais                  : " << frais << endl;
    cout << "|" << endl;
    cout << fixed << setprecision(2);
    cout << "| Solde Compte           : " << soldeFinal << endl;
    cout << defaultfloat;
    cout << "|" << endl;
    cout << "+-------------------------------+" << endl;

    return EXIT_SUCCESS;
}