#include <iostream>
using namespace std;

int main() {
    //Address-of operator (&)
    //foo = &myvar

    //Dereference operator (*)


    //Declaring pointers

    int * number;
    char * character;
    double * decimals;

    int firstvalue, secondvalue;
    int * mypointer;

     mypointer = &firstvalue;
    *mypointer = 10;
     mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    int firstvalue1 = 5, secondvalue1 = 15;
    int * p1, * p2;

    p1 = &firstvalue1;  // p1 = address of firstvalue
    p2 = &secondvalue1; // p2 = address of secondvalue
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    *p1 = 20;          // value pointed to by p1 = 20
    
    cout << "firstvalue is " << firstvalue1 << '\n';
    cout << "secondvalue is " << secondvalue1 << '\n';

}