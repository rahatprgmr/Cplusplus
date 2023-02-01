//overloading functions
#include <iostream>
using namespace std;

/*
  In C++, two different functions can have the same name if their parameters are different; either because they have a different number of parameters, or because any of their parameters are of a different type. For example:
*/

int operate(int a,int b) {
    return (a*b);
}

double operate(double a,double b) {
    return (a/b);
}

int main() {
     int x=5,y=2;
     double n=5.0,m=2.0;
     cout << operate (x,y) << '\n';
     cout << operate (n,m) << '\n';
    return 0;
}