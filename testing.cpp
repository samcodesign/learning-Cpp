#include <iostream>

using namespace std;
//if example//

int getMax(int num1, int num2) {
    int result;
    if (num1>num2)
    {
        result = num1;
    } else
    {
        result = num2;
    }
    return result;
    
}

int main()
{
    cout << getMax(3445, 2341);
    return 0;
}
