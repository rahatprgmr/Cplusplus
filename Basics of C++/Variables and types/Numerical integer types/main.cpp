#include <iostream>

int main() {
    /*
     They can store a whole number value, such as 7 or 1024. They exist in a variety of sizes, and can either be signed or unsigned, depending on whether they support negative values or not.
    */
     
     int n1;
     signed short int n2;
     signed int n3;
     signed long int n4;

     unsigned short int n5;
     unsigned int n6;
     unsigned long int n7;
     unsigned long long int n8;

     std::cout<<"size of int-> "<<sizeof(n1)<<std::endl;
     std::cout<<"size of signed short int-> "<<sizeof(n2)<<std::endl;
     std::cout<<"size of signed int-> "<<sizeof(n3)<<std::endl;
     std::cout<<"size of signed long int-> "<<sizeof(n4)<<std::endl;

     
     std::cout<<"size of unsigned short int-> "<<sizeof(n5)<<std::endl;
     std::cout<<"size of unsigned int-> "<<sizeof(n6)<<std::endl;
     std::cout<<"size of unsigned long int-> "<<sizeof(n7)<<std::endl;
     std::cout<<"size of unsigned long long int-> "<<sizeof(n7)<<std::endl;

     

    return 0;
}