#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n ;
    cout << "donner un entier";
    cin >> n;

    if (n == 0)
    {
        cout << "zero\n";
    }else if (n == 1)
    {
        cout << "un\n";
    }else if (n == 2)
    {
        cout << "deux\n";
    } else
    {
        cout << "grand\n";
    }

    cout << "Au revoir";
    return 0;
}