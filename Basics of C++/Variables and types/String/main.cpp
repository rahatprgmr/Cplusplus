#include <iostream>
#include <string>

int main() {
    std::string mystring;
    mystring = "This is a string";

    std::cout<<mystring<<std::endl;

    std::string mystring = "This is a string";
    std::string mystring ("This is a string");
    std::string mystring {"This is a string"};

    std::string mystring;
    mystring = "This is the initial string content";
    std::cout << mystring << std::endl;
    mystring = "This is a different string content";
    std::cout << mystring << std::endl;
}