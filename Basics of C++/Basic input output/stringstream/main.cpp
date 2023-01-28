//stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    //stringstream

    /*
      The standard header <sstream> defines a type called stringstream that allows a string to be treated as a stream, and thus allowing extraction or insertion operations from/to strings in the same way as they are performed on cin and cout. This feature is most useful to convert strings to numerical values and vice versa. For example, in order to extract an integer from a string we can write:
    */

    string mystrs("1304");
    int myint;

    stringstream(mystrs) >> myint;

    cout<<myint<<endl;

    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;

    return 0;
    
}
