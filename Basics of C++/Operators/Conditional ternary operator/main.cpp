//conditional terbary operator
#include <iostream>
using namespace std;

int main() {

    //Conditional ternary operator ( ? )

    /*
        7==5 ? 4 : 3   evaluates to 3, since 7 is not equal to 5.
        7==5+2 ? 4 : 3  evaluates to 4, since 7 is equal to 5+2.
        5>3 ? a : b  evaluates to the value of a, since 5 is greater than 3.
        a>b ? a : b  evaluates to whichever is greater, a or b
    */

     int a,b,c;

     a = 2;
     b = 7;

     c = a > b ? a : b;

     cout<<c<<endl;

    return 0;
}