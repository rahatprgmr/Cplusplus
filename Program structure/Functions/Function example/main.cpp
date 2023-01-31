//function example
#include <iostream>
using namespace std;

int addition(int a,int b) {
    int r;
    r = a+b;
    return r;
}

int subtraction(int a,int b) {
    int r;
    r = a-b;
    return r;
}

int main() {
    /*
      In C++, a function is a group of statements that is given a name, and which can be called from some point of the program. The most common syntax to define a function is:
    */

    //type name ( parameter1, parameter2, ...) { statements }

   int z;
   z = addition(5,4);
   cout<<"The result is: "<<z<<endl;

   int x,y;
   x = 10;
   y = 5;

   z = subtraction(7,2);
   cout<<"The first result is:"<<z<<endl;
   cout<<"The second result is: "<<subtraction(7,2)<<endl;
   cout<<"The third result is: "<<subtraction(x,y)<<endl;

   z = 4 + subtraction(x,y);

   cout<<"The fourth result is: "<<z<<endl;

    return 0;
}