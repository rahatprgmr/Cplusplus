#include <iostream>

int main() {
    /*
     The boolean type, known in C++ as bool, can only represent one of two states, true or false.
    */
     
     bool b;
     std::cout<<"size of bool-> "<<sizeof(bool)<<std::endl;

     b = (10 < 20);
     std::cout<<b<<std::endl;

     if(b) {
        std::cout<<"true"<<std::endl;
     }
     else{
        std::cout<<"false"<<std::endl;
     }

    return 0;
}