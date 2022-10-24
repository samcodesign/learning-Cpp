#include <iostream>

using namespace std;
int main ()
{
int n = 5, p = 9 ; int q ; float x ;
//q = n < p ; /* 1 */

//q = n == p ; /* 2 */

q = p % n + p > n ; /* 3 */
cout << q<< endl;

//x = p / n ; /* 4 */

//x = (float) p / n ; /* 5 */

//x = (p + 0.5) / n ; /* 6 */

x = (int) (p + 0.5) / n ; /* 7 */
cout << x;
return 0;
}