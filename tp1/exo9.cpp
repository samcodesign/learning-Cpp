#include <iostream>
using namespace std ;
main()
{ int n, p, q ;
/* cas 1 */
n = 5 ; p = 2 ;
q = n++ >p || p++ != 3 ;
cout << "A : n = " << n << " p = " << p << " q = " << q << "\n" ;
/* cas 2 */
n = 5 ; p = 2 ;
q = n++<p || p++ != 3 ;
cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;
/* cas 3 */
n = 5 ; p = 2 ;
q = ++n == 3 && ++p == 3 ;
cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;
/* cas 4 */
n = 5 ; p = 2 ;
q = ++n == 6 && ++p == 3 ;
cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;
}