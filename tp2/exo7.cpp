#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, ppt, x;
    for (i = 0; i < 10; i++)
    {
        cout <<"Tapez un entier : ";
        cin >> x;
        if (i == 0)
            ppt = x;
        else if (x < ppt)
            ppt = x;
    }
    cout <<"Le plus petit vaut vaut "<< ppt;
    cout <<"\n";
    system("pause");
    return 0;
}
