#include <iostream>

using namespace std;

int main()
{
    int a=1; 
    int b=3; 
    int c=7;
    char nom[34];
    char prenom[34];

    cout << "Entrez votre nom: ";
    cin >> nom;
    cout << "Entrez votre Prenom: ";
    cin >> prenom;
    cout << "Votre nom: \"" << nom << "\"" << endl;
    cout << "Votre prenom: \"" << prenom << "\"" << endl;
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    cout << "c " << c << endl;

    return 0;
}