#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // avec la boucle while
    int n, somme = 0;
    int i = 10;
    cout << "Quand on le demande, tapez un entier suivi de <entree>\n";
    int moyenne=0;
    
    // while (i < 10) {
    //     cout << "Entree ? ";
    //     cin >> n;
    //     somme += n;
    //     i++;
    // }

    // avec la boucle do
    do {
        cout << "Entree ? ";
        cin >> n;
        somme += n;
        i++;

        
    } while (i < 10);

    // avec la boucle for
    //  for (i = 0; i < 10; i++) // boucle version for
    //  {
    //      cout << "Entree ? ";
    //      cin >> n;
    //      somme += n;
    //  }
    moyenne = somme/i;
    cout << "La moyenne est " << moyenne ;
    return 0;
}