#include <iostream>
#include <iomanip>


int main() {
    /*
     They can represent real values, such as 3.14 or 0.01, with different levels of precision, depending on which of the three floating-point types is used.
    */
     // creating float type variables
    float num1 = 3.0f;
    float num2 = 3.5f;
    float num3 = 3E-5f; // 3x10^-5

    // creating double type variables
    double num4 = 3.0;
    double num5 = 3.5;
    double num6 = 3E-5; // 3x10^-5

    std::cout<<"size of float: "<<sizeof(float)<<std::endl;
    std::cout<<"size of double: "<<sizeof(double)<<std::endl;

    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Printing the two variables
    std::cout << "Double Type Number  = " << a << std::endl;
    std::cout << "Float Type Number  = " << b << std::endl;

    std::cout<<std::setprecision(11)<<a<<std::endl;
     
    return 0;
}