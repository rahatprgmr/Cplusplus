//character sequences
#include <iostream>
using namespace std;

int main() {

    //character sequences
    char foo[20];

    //Initialization of null-terminated character sequences
    char myword1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char myword2[] = "Hello";

    myword1[0] = 'B';
    myword1[1] = 'y';
    myword1[2] = 'e';
    myword1[3] = '\0';

    //Strings and null-terminated character sequences

    char question1[] = "What is your name? ";
    string question2 = "Where do you live? ";
    char answer1 [80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << " from " << answer2 << "!\n";


    char myntcs[] = "some text";
    string mystring = myntcs;  // convert c-string to string
    cout << mystring;          // printed as a library string
    cout << mystring.c_str();  // printed as a c-string
    return 0;
}