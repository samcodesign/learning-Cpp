#include <iostream>
using namespace std;

int main()
{
    int tab[10] = {9, 1, 5, 2, 3, 11, 6, 15, 12, 10};
    int N;
    int Nb=0 ;
    float s = 0 , moy = 0;

    for (int i=0; i<10; i++)
    {
        s = s + tab[i];
    }

    moy = s / 10;
    cout << "la moyenne est : " << moy ;


    for (int i=0; i<10; i++)
    {
        if (tab[i] >moy) Nb++;
    }
    if (Nb==0) cout << "Il n'y a aucun nombre supérieur ou égal à la moyenne." << endl;
    else cout << " Il y a " << Nb << " nombres superieurs ou egaux à la moyenne." << endl;

    return 0;
}