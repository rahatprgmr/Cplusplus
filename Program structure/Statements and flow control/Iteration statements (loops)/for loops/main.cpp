#include <iostream>
using namespace std;

int main() {

    //for (initialization; condition; increase) statement;

    for(int i = 0; i < 10; i++) {
        cout<<i<<" ,";
    }
    cout << "liftoff!\n";

    //

    int n;
    cin>>n;
    int fac = 1;

    for(int i = 1; i < n; i++) {
        fac *= i;
    }

    cout<<fac<<endl;

    return 0;
}