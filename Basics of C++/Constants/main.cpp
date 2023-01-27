#include <iostream>

#define PI 3.1415936
#define NEWLINE '\n'

const double pi = 3.1415936;
const char newline = '\t';

int main() {
    //Integer Numerals
    /*
    1776
    707
    -
    */

   /*
   In addition to decimal numbers (those that most of us use every day), C++ allows the use of octal numbers (base 8) and hexadecimal numbers (base 16) as literal constants. For octal literals, the digits are preceded with a 0 (zero) character. And for hexadecimal, they are preceded by the characters 0x (zero, x). For example, the following literal constants are all equivalent to each other:
   */
  /*
  75 --> decimal
  0113 --> octal
  ox4b --> hexadecimal
  */

 /*
 These literal constants have a type, just like variables. By default, integer literals are of type int. However, certain suffixes may be appended to an integer literal to specify a different integer type:

 u or U --> unsigned
 l or L --> long
 ll or LL --> long long

 Unsigned may be combined with any of the other two in any order to form unsigned long or unsigned long long.

 75 --> int
 75u --> unsigned int
 75l --> long
 75ul --> unsigned long
 75lu --> unsigned long
 */

  //Here you have a list of the single character escape codes:

    /*
      \n --> newline
      \r --> carriage return
      \t --> tabe
      \v --> verical tab
      \b --> backspace
      \f --> from feed (page feed)
      \a --> alert(beep)
      \' --> single quote(')
      \" --> double quote(")
      \? --> question mark(?)
      \\ --> backslash(\)
    */

   //For example:
   std::cout<<"Hello world!\n";
   std::cout<<"Hello\tworld!\n";
   std::cout<<"Hello\v world!\n";
   std::cout<<"Hello \b world!\n";
   std::cout<<"Hello \f world!\n";


   //Typed constant expressions
   double r = 5.0;   //radius
   double circle;

   circle = 2 * pi * r;
   std::cout<<circle;
   std::cout<<newline;


   std::cout<<std::endl;

   //Preprocessor definitions (#define)

   double R = 5.0;
   double circles ;
   
   circles = 2 * PI * R;

   std::cout<<circles;
   std::cout<<NEWLINE;


    return 0;
}