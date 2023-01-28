//cin and strings
#include <iostream>
using namespace std;

int main() {
    string mystring;
    cin>>mystring;

    cout<<mystring<<endl;

    /*
      cin extraction always considers spaces (whitespaces, tabs, new-line...) as terminating the value being extracted, and thus extracting a string means to always extract a single word, not a phrase or an entire sentence.
    */

    string name;
    cout<<"What is your name?"<<endl;
    getline(cin,name);

    cout<<"Your name is: "<<name<<endl;

    string mystr;

    cout << "What is your favorite team? ";
    getline (cin, mystr);
   cout << "I like " << mystr << " too!\n";



    return 0;
}