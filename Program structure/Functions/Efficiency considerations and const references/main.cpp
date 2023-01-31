#include <iostream>
using namespace std;

/*
  Calling a function with parameters taken by value causes copies of the values to be made. This is a relatively inexpensive operation for fundamental types such as int, but if the parameter is of a large compound type, it may result on certain overhead. For example, consider the following function:
*/

string concatenate(string a,string b) {
    return a+b;
}

/*
  This function takes two strings as parameters (by value), and returns the result of concatenating them. By passing the arguments by value, the function forces a and b to be copies of the arguments passed to the function when it is called. And if these are long strings, it may mean copying large quantities of data just for the function call.
*/

//But this copy can be avoided altogether if both parameters are made references:

string concatenat1(string& a,string& b) {
    return a+b;
}

/*
  
Arguments by reference do not require a copy. The function operates directly on (aliases of) the strings passed as arguments, and, at most, it might mean the transfer of certain pointers to the function. In this regard, the version of concatenate taking references is more efficient than the version taking values, since it does not need to copy expensive-to-copy strings.

On the flip side, functions with reference parameters are generally perceived as functions that modify the arguments passed, because that is why reference parameters are actually for.

The solution is for the function to guarantee that its reference parameters are not going to be modified by this function. This can be done by qualifying the parameters as constant:
*/

string concatenatConstant(const string& a,const string& b) {
    return a+b;
}


int main() {
    string str1 = "rahat";
    string str2 = "rakib";

    string x = concatenate(str1,str2);
    cout<<x<<endl;
    x = concatenat1(str1,str2);

    cout<<x<<endl;

    x = concatenatConstant(str1,str2);

    cout<<x<<endl;

    return 0;
}