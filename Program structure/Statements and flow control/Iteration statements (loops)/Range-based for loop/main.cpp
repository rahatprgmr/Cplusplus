#include <iostream>
using namespace std;

int main() {
    //The for-loop has another syntax, which is used exclusively with ranges:

    //for ( declaration : range ) statement;

    /*
      This kind of for loop iterates over all the elements in range, where declaration declares some variable able to take the value of an element in this range. Ranges are sequences of elements, including arrays, containers, and any other type supporting the functions begin and end; Most of these types have not yet been introduced in this tutorial, but we are already acquainted with at least one kind of range: strings, which are sequences of characters.
    */

     string str{"Hello!"};

     for(char i:str) {
        cout<<"["<<i<<"]";
     }
     
     cout<<endl;

    return 0;
}