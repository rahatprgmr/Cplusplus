#include <iostream>
using namespace std;

//Overloaded functions may have the same definition. For example:

template <class SumType>
SumType sum (SumType a,SumType b) {
    return a+b;
}

template <class SumType,class SumType1>
SumType sum1(SumType a,SumType1 b) {
    return a+b;
}

//Non-type template arguments

template <class T,int N>
T fixed_multiply(T val) {
    return val*N;
}


int main() {

    cout<<sum(4,10)<<endl;
    cout<<sum(3.23,5.20)<<endl;

    cout<<sum1<int>(10,3.14)<<endl;

    cout<<fixed_multiply<int,2>(10)<<endl;
    cout<<fixed_multiply<int,3>(2)<<endl;

    return 0;
}