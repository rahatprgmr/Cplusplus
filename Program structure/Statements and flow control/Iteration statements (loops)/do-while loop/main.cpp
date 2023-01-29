//echo machine
#include <iostream>
#include <string>
using namespace std;

int main() {
    //do-while loop
    
    //do statement while (condition);

    /*
      It behaves like a while-loop, except that condition is evaluated after the execution of statement instead of before, guaranteeing at least one execution of statement, even if condition is never fulfilled. For example, the following example program echoes any text the user introduces until the user enters goodbye:

    */

    string str;

    do{
        cout<<"Enter text: ";
        getline(cin,str);
        cout<<"You entered: "<<str<<endl;
    }while(str != "goodbye");

    return 0;
}