//namespaces
#include <iostream>
using namespace std;

namespace myNamespace {
    int a,b;
}

namespace foo {
    int value() {return 5;}
}
namespace bar {
    const double pi = 3.1416;
    double value() {return 2*pi;}
}

int main() {

    myNamespace::a = 100;
    myNamespace::b = 200;

    cout<<myNamespace::a<<endl;
    cout<<myNamespace::b<<endl;

    cout<<foo::value()<<endl;
    cout<<bar::pi<<endl;
    cout<<bar::value()<<endl;

    return 0;
}