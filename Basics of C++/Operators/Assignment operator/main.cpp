//assignment operators
#include <iostream>
using namespace std;

int main() {
    //Assignment operators (=)
    //The assingnment oprators assingns a value to variable

    int a,b; //a:? b:?.
    a = 10;  //a:10 b:?
    b = 4;  //a:10 b:4
    a = b;  //a:4 b:4
    b = 7; //a:4 b:7

    cout<<"a:";
    cout<<a;
    cout<<" b:";
    cout<<b;

    int x,y,z,s;
    x = y = z = s = 5;

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;
    cout<<"s: "<<s<<endl;

    return 0;
}