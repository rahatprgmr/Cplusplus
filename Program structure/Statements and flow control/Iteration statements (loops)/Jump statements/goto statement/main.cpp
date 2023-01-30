//goto statement
#include <iostream>
using namespace std;

int main() {
    int n = 1;

    mylabe:
    cout<<n<<" ";
    n+=2;
    if(n < 10) goto mylabe; 
    cout<<endl;
    return 0;
}