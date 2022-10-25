#include <iostream>
using namespace std;

int main()
{
    int a=2;
    int b=5;
    int *ptr1(0);
    int *ptr2(0);
    ptr1 = &a;
    ptr2 = &b;
    *ptr1 = *ptr2 + 2;
    cout << "adresse de a:" << &a << endl;
    cout << "adresse de b:" << &b << endl;
    cout << "pointeur 1 :" << ptr1 << endl;
    cout << "pointeur 2 :" << ptr2 << endl;
    cout << "valeur de ptr1 :" << *ptr1 << endl;

    return 0;
}