//relational and comparison operators
#include <iostream>
using namespace std;

int main() {
    //Relational and comparison operators ( ==, !=, >, <, >=, <= )

    /*
      Two expressions can be compared using relational and equality operators. For example, to know if two values are equal or if one is greater than the other.
      The result of such an operation is either true or false (i.e., a Boolean value).

     The relational operators in C++ are:

     == --> equal to.
     != --> not equal to
     < --> Less than
     > --> Greater than
     <= --> Less than or Greater then
     >= --> Greater then or Less than

    */

    int a,b,c,d,e,f;

    a = (7 == 5); // evaluates to false
    b = (4 != 8); // evaluates to true
    c = (5 > 4); //evaluates to true
    d = (6 > 6); //evaluates to false
    e = (5 >= 5); //valuates to true
    f = (7 <= 4); //valuates to false

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    
    /*
       (a == 5)   evaluates to false, since a is not equal to 5
       (a*b >= c)  evaluates to true, since (2*3 >= 6) is true
       (b+4 > a*c)  evaluates to false, since (3+4 > 2*6) is false
       ((b=2) == a)  evaluates to true 
    */

    return 0;
}