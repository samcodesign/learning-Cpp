#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // avec la boucle while
     int n, somme = 0;
     int i = 0;
    // cout << "Quand on le demande, tapez un entier suivi de <entr´ ee>\n";
    // while (i < 10) // boucle version while
    // {
    //     cout << "Entree ? ";
    //     cin >> n;
    //     somme += n;
    //     i++;
    // }
    // cout << "La moyenne est " << somme / 10.0;

    // avec la boucle do
    // do // boucle version do
    // {
    //     cout << "Entr´ ee ? ";
    //     cin >> n;
    //     somme += n;
    //     i++;
    // } while (i < 10);

    // avec la boucle for
     for (i = 0; i < 10; i++) // boucle version for
     {
         cout << "Entr´ ee ? ";
         cin >> n;
         somme += n;
     }

    return 0;
}