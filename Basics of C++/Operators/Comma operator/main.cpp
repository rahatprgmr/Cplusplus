//comma operator
#include <iostream>
using namespace std;

int main() {
    // Comma operator ( , )

    /*
      The comma operator (,) is used to separate two or more expressions that are included where only one expression is expected. When the set of expressions has to be evaluated for a value, only the right-most expression is considered.
    */

   //For example, the following code:

    int a,b;
    a = (b = 3, b+2);
    cout<<a<<endl;

    return 0;
}