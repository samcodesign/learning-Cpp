#include <iostream>
using namespace std;

int main()
{
int i, taille;
int *t ;
float *t1 ;

    cout << "entrez la taille du tableau : ";
    cin >> taille;
    t = new int[taille];
    cout << "allocation de " << taille << " int en : " << t1 << "\n" ;

    for (i = 0; i < taille; i++)
        t[i] = (i+1) * (i+1);

    for (i = 0; i < taille; i++)
       cout << t[i] << endl;

    t1 = new float [30] ;
    cout << "allocation de 30 float en : " << t1 << "\n" ;
    delete t ;
    cout << "liberation des " << taille << " int en : " << t << "\n" ;
    t = new int [50] ;
    cout << "allocation de 50 int en : " << t << "\n" ;
    delete t1 ;
    cout << "liberation des 30 float en : " << t1 << "\n" ;
    t1 = new float [10] ;
    cout << "allocation de 10 float en : " << t1 << "\n" ;



return 0 ;

}