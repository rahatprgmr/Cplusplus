#include <iostream>
using namespace std;

void printmessage() {
    cout << "I'm a function!"<<endl;
}

void printmessages (void)
{
  cout << "I'm a function!";
}

int main() {
    /*
      The syntax shown above for functions:

        type name ( argument1, argument2 ...) { statements }

        Requires the declaration to begin with a type. This is the type of the value returned by the function. But what if the function does not need to return a value? In this case, the type to be used is void, which is a special type to represent the absence of value. For example, a function that simply prints a message may not need to return any value:
    */
     printmessage ();
     printmessages();

    return 0;
}