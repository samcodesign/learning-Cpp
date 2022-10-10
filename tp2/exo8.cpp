#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float note;
    cout << "Entrer votre note: ";
    cin >> note;

    if (note <= 12 && note >= 11)
    {
        cout << "Mention P";
    } else if (note >= 12 && note <= 13)
    {
        cout << "Mention AB";

    }else if (note >= 14 && note <= 16)
    {
        cout << "Mention B";

    }else if (note >= 16 && note <= 17)
    {
        cout << "Mention TP";

    } else cout << "Mention inexistante pour cette note";
    
    
    return 0;
}
