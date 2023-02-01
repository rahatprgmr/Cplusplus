// default values in functions
#include <iostream>
using namespace std;

/*
  In C++, functions can also have optional parameters, for which no arguments are required in the call, in such a way that, for example, a function with three parameters may be called with only two. For this, the function shall include a default value for its last parameter, which is used by the function when called with fewer arguments. For example:
*/

int divide(int a,int b = 2) {
    int r;
    r = a/b;
    return (r);
}

int main() {

    cout<<divide(12)<<endl;
    cout<<divide(12,4)<<endl;

    return 0;
}