#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "donnez un entier";
    cin >> n;
    switch (n)
    {
    case 0:
        cout << "Zero\n";
    case 1:
        cout << "un\n";
    case 2:
        cout << "deux\n";
    default:
        cout << "grand\n";
    }

    cout << "au revoir\n";
    return 0;
}