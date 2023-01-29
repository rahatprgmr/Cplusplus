#include <iostream>
using namespace std;

int main() {
    //The if keyword is used to execute a statement or block, if, and only if, a condition is fulfilled. Its syntax is:
    //if (condition) statement

    int x{100};
    
    if(x == 100) 
      cout<<"x is 100"<<endl;

    //If you want to include more than a single statement to be executed when the condition is fulfilled, these statements shall be enclosed in braces ({}), forming a block:

    if(x == 100)
      cout<<"x is ";
      cout<<x<<endl;

    //As usual, indentation and line breaks in the code have no effect, so the above code is equivalent to:

    if(x == 100) {cout<<"x is ";cout<<x;}    

    //Selection statements with if can also specify what happens when the condition is not fulfilled, by using the else keyword to introduce an alternative statement. Its syntax is

    //if (condition) statement1 else statement2

    if(x == 100)
      cout<<"x is 100"<<endl;
    else 
      cout<<"x is not 100"<<endl;


    /*
      This prints x is 100, if indeed x has a value of 100, but if it does not, and only if it does not, it prints x is not 100 instead.
     checking a range of values. For example:
    */  

    if(x > 0)
      cout<<"x is positive!"<<endl;
    else if(x < 0)    
      cout<<"x is nagitev!"<<endl;
    else 
      cout<<"x is 0"<<endl;  

    return 0;

}