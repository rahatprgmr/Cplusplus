// initialization of variables
#include <iostream>

int main() {
    //In C++, there are three ways to initialize variables. 

    int a = 5;//initial value: 5
    int b(3);//initial value: 3
    int c{2};//initial value: 2
    int result;//initial value undetermined

    a = a+b;
    result = a-b;
    std::cout<<result<<std::endl;

    return 0;
}