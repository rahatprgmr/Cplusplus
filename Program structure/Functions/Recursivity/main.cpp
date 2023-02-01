#include <iostream>
using namespace std;

/*
    Recursivity is the property that functions have to be called by themselves. It is useful for some tasks, such as sorting elements, or calculating the factorial of numbers. For example, in order to obtain the factorial of a number (n!) the mathematical formula would be:

    n! = n * (n-1) * (n-2) * (n-3) ... * 1
    More concretely, 5! (factorial of 5) would be:

    5! = 5 * 4 * 3 * 2 * 1 = 120
    And a recursive function to calculate this in C++ could be:
*/

long factorial(long n) {
    if(n > 0)
      return n * factorial(n-1);
    else
      return 1;  
}

int main() {
    long number;
    cin>>number;
    cout << number << "! = " << factorial (number)<<endl;
    return 0;
}