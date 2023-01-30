#include <iostream>
using namespace std;

int main() {
    //selection statement: switch
    int n;
    cout<<"Type your value: ";
    cin>>n;

    switch(n) {
        case 0:
        cout<<"Zeor!"<<endl;
        break;
        case 1:
        cout<<"One!"<<endl;
        break;
        case 2:
        cout<<"Two!"<<endl;
        break;
        default:
        cout<<"$$^!"<<endl;
        
    }
    return 0;
}