#include <iostream>

int main() {
    /*
      They can represent a single character such as 'A' or '$'. The most basic type is cher, which is a one-byte chearacter.Other types are also provided for wider characters,
    */
    char ch; // Exactly 1 byte in size. At least 8 bits.
    std::cout<<"size of cher-> "<<sizeof(ch)<<std::endl;
    ch = 'R';
    std::cout<<ch<<std::endl;
    char ch1 = '$';
    std::cout<<ch1<<std::endl;

    char16_t ch2;//Exactly 2 byte in size. At least 16 bits.
    std::cout<<"size of char16_t-> "<<sizeof(ch2)<<std::endl;
    ch2 = 10;
    std::cout<<ch2<<std::endl;

    char32_t ch3;//Exactly 4 byte in size. At least 32 bits.
    std::cout<<"size of char32_t-> "<<sizeof(ch3)<<std::endl;
    ch3 = 1232;
    std::cout<<ch3<<std::endl;

    wchar_t ch4;//	Can represent the largest supported character set.
    std::cout<<"size of wchar_t-> "<<sizeof(ch4)<<std::endl;
    ch4 = 142345;
    std::cout<<ch4<<std::endl;

    return 0;
}