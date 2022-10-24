#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool OutOfGuesses = false;

    while (secretNum != guess && !OutOfGuesses)
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else
        {
            OutOfGuesses = true;
        }
        cout << "BAD GUESS" << endl;
        
    }
    if (OutOfGuesses)
    {
        cout << "You loose!";
    }else
    {
        cout << "You Win!";
    }
    return 0;
}
