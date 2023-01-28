//logical operators
#include <iostream>
using namespace std;

int main() {

    //Logical operators ( !, &&, || )

    //! operators

    cout<<!(5==5)<<endl;// evaluates to false because the expression at its right (5 == 5) is true
    cout<<!(6 <= 4)<<endl; // evaluates to true because (6 <= 4) would be false
    cout<<!true<<endl; // evaluates to false
    cout<<!false<<endl; // evaluates to true

    //&& operators

    cout<<((5 == 5) && (3 >= 6))<<endl; //evaluates to false ( true && false )

    //|| operators

    cout<<( (5 == 5) || (3 >= 6) )<<endl; //evaluates to true ( true && false )


    return 0;
}