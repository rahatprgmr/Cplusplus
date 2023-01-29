#include <iostream>
using namespace std;

int main() {
    /*
      break leaves a loop, even if the condition for its end is not fulfilled. It can be used to end an infinite loop, or to force it to end before its natural end. For example, let's stop the countdown before its natural end:
    */
     
     for(int i = 10; i >= 0; --i) {
        cout<<i<<", ";
        if (i == 3) 
          cout<<"countdown aborted!";
          break;
     }
    return 0;
}