//while loops
#include <iostream>
using namespace std;

int main() {

    //While loops

    //The simplest kind of loop is the while-loop. Its syntax is:

    //while (expression) statement

    /*
      The while-loop simply repeats statement while expression is true. If, after any execution of statement, expression is no longer true, the loop ends, and the program continues right after the loop. For example, let's have a look at a countdown using a while-loop:
    */

     int n = 10;
    
     while(n > 0) {
        cout<<n<<", ";
        n--;
     }
     cout<<"liftoff"<<endl;

    return 0;
}