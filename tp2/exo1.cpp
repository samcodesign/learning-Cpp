#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int note;
    cout << "Entrez une note: ";
    cin >> note;
    if (note >= 100)
    {
        cout << "Admis" << endl;
    } else
    {
        cout << "Ajourner" << endl;
    }
    
    
    return 0;
}