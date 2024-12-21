#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool demanderRejouer() {
    char choix;
    cout << "Voulez-vous rejouer ? (O/N) : ";
    cin >> choix;
    return toupper(choix) == 'O'; // Retourne true si l'utilisateur entre 'O'
}

int main() {
    cout << " _______  ___   _______  __    _  __   __  _______  __    _  __   __  _______ " << endl;
    cout << "|  _    ||   | |       ||  |  | ||  | |  ||       ||  |  | ||  | |  ||       |" << endl;
    cout << "| |_|   ||   | |    ___||   |_| ||  |_|  ||    ___||   |_| ||  | |  ||    ___|" << endl;
    cout << "|       ||   | |   |___ |       ||       ||   |___ |       ||  |_|  ||   |___ " << endl;
    cout << "|  _   | |   | |    ___||  _    ||       ||    ___||  _    ||       ||    ___|" << endl;
    cout << "| |_|   ||   | |   |___ | | |   | |     | |   |___ | | |   ||       ||   |___ " << endl;
    cout << "|_______||___| |_______||_|  |__|  |___|  |_______||_|  |__||_______||_______|" << endl;

    puts("\n");
    cout << "Bonjour et bienvenue dans le code du jeu mystère" << endl;
    cout << "Ceci fait office de premier petit projet de test afin de savoir mes limites ou ce que je suis capable de faire dans un intervalle de temps réduit" << endl;                                  
    cout << "Dans un premier temps, comment vous appelez-vous ?" << endl;

    // Déclaration du prénom
    string prenom; 
    cin >> prenom;
    puts("\n");

    // Affichage des règles
    cout << "Bonjour " << prenom << "." << endl;
    cout << "Les règles sont très simples, l'ordinateur va générer un nombre pseudo-aléatoire entre 0 et 100" << endl;

    do {
        srand(time(0));
        int nessais = 0;
        int njoueur = -1;
        int binf = 1, bsup = 100; // Bornes dynamiques
        int mystere = rand() % (bsup - binf + 1) + binf; // Génération du nombre mystère



        // Boucle principale du jeu
        while (njoueur != mystere) {
            cout << "Votre entier à trouver est compris entre l'intervalle [" << binf << ".." << bsup << "]\n" << endl;
            cout << "Entrez votre proposition : ";
            cin >> njoueur; // Lecture de l'entrée utilisateur
            ++nessais;

            if (njoueur < binf || njoueur > bsup) {
                cout << "Veuillez entrer un nombre valide dans l'intervalle [" << binf << ".." << bsup << "]\n";
                continue;
            }

            if (njoueur == mystere) {
                cout << "==> Gagné !" << endl;
            } else if (njoueur < mystere) {
                cout << "==> Trop petit ! \n" << endl;
                binf = njoueur + 1;
            } else {
                cout << "==> Trop grand ! \n" << endl;
                bsup = njoueur - 1;
            }
        }

        cout << "Trouvé en " << nessais << " essai(s) !" << endl;
        cout << "\n";

    } while (demanderRejouer());

    cout << "Merci d'avoir joué, " << prenom << "! À bientôt !" << endl;
    return 0;
}
