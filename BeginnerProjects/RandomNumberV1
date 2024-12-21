#include <iostream>
#include <vector>
#include <cstdlib>
#include <random> //générateur de nombres aléatoires uniformes (URNG) dans une plage spécifique
#include <stdlib.h>
#include <time.h>


using namespace std;

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
cout << "Dans un premier temps, comment vous appellez-vous ?" << endl;

// declaration du prénom//
string prenom; 
cin >> prenom;
puts("\n");
////

// déclaration des règles
cout << "Bonjour " << prenom << "." << endl;
cout << "Les règles sont très simples, l'ordinateur va générer un nombre pseudo-aléatoire entre 0 et 20." << endl;
cout << "Commençons, choisissez un chiffre" << endl;
////

srand(time(nullptr));
int i = 0;

int nombremystere = rand()%21;

printf("\n");
int essai = 1;
int choixjoueur = -1;

while (choixjoueur != nombremystere) {
    scanf("%d", &choixjoueur);
    if (choixjoueur == nombremystere) {
        printf("C'est gagné \n");
    }
    else if (choixjoueur < nombremystere) {
        printf("Trop petit ! \n");
    }
    else if (choixjoueur > nombremystere) {
    printf("Trop grand ! \n");
    }
    printf("Nombre d'essai(s) : %d \n", essai);
    essai++;
    


}




    return 0;
}
