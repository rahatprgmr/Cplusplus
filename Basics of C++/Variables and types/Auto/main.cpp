#include <iostream>

int main() {

    /*
    When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer. For this, it suffices to use auto as the type specifier for the variable:
    */
    int foo = 0;
    auto bar = foo;//the same as: int bar = foo

    decltype(foo) bar;



    return 0;
}