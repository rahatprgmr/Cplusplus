// continue statement
#include <iostream>
using namespace std;

int main() {
    //Continue statement

    /*
      The continue statement causes the program to skip the rest of the loop in the current iteration, as if the end of the statement block had been reached, causing it to jump to the start of the following iteration. For example, let's skip number 5 in our countdown:
    */
     

     for(int i = 10; i >= 0; --i) {
        if(i == 5) continue;
        cout<<i<<", ";
     }


    return 0;
}