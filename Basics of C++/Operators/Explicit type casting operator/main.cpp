//explicit type casting operator
#include <iostream>
using namespace std;

int main() {
    //Explicit type casting operator
    /*
      Type casting operators allow to convert a value of a given type to another type. There are several ways to do this in C++. The simplest one, which has been inherited from the C language, is to precede the expression to be converted by the new type enclosed between parentheses (()):
    */

    int i;
    float f = 3.14;
    i = (int) f;

    cout<<i<<endl;
}