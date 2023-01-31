// passing parameters by reference
#include <iostream>
using namespace std;

void duplicate(int& a,int& b,int& c) {

    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
    /*
      In the functions seen earlier, arguments have always been passed by value. This means that, when calling a function, what is passed to the function are the values of these arguments on the moment of the call, which are copied into the variables represented by the function parameters. For example, take:
    */
    int x = 1, y = 3, z = 7;
     duplicate (x, y, z);
     cout << "x=" << x << ", y=" << y << ", z=" << z<<endl;
    return 0;
}