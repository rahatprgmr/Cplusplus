//bitwise operators
#include <iostream>
using namespace std;

int main() {

    //Bitwise operators ( &, |, ^, ~, <<, >> )

    //Bitwise operators modify variables considering the bit patterns that represent the values they store.

    /*
      & --> AND --> Bitwise AND.
      | --> OR --> Bitwise inclusiv OR.
      ^ --> XOR --> Bitwise exclusive OR.
      ~ --> NOT --> Unary complement (bit inversion).
      << --> SHL --> Shift bits left.
      >> --> SHR --> shift bits right.

    */

    int a = 5, b = 7;

    cout<<"AND --> "<<(a & b)<<endl;
    cout<<"OR --> "<<(a | b)<<endl;
    cout<<"XOR --> "<<(a ^ b)<<endl;
    cout<<"NOT --><< "<<(a & b)<<endl;
    cout<<"<< --> "<<(a << 1)<<endl;
    cout<<">> --> "<<(b >> 2)<<endl;

    
    return 0;
}