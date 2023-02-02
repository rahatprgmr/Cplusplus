//using
#include <iostream>
using namespace std;

namespace first {
    int x = 5;
    int y = 50;
}

namespace second {
    double a = 3.1416;
    double b = 2.7183;
}

int main() {
    using namespace first;
    cout<<x<<endl;
    cout<<y<<endl;

    {
        using namespace second;
        cout<<a<<endl;
        cout<<b<<endl;
    }

    // cout<<a<<endl;
    // cout<<b<<endl;

    

    cout<<second::a<<endl;
    cout<<second::b<<endl;
    return 0;
}