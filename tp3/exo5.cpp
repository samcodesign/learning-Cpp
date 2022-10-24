#include <iostream>
using namespace std;

int main()
{
    char *t;
    char *adres_ptr;

    t = new char[50];
    adres_ptr = &t[0];
    delete[] t;
    cout << "adresse" << adres_ptr;

    return 0;
}