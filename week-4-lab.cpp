#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// Include the library that will allow you to convert from string to integer

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  int x, y, z, result;
  string mystr;

  cout <<  "Please enter 3 integers while pressing space between each one then enter: " << endl;
  cin >> x >> y >> z;
  result = x * y * z;
  cout <<  x << " * " << y << " * " << z << " = " << result << endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  // Multiply the three integers
  // Output the result of the multiplication

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/

  cout <<  "What's your name? " << endl;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline (cin,mystr);
  cout <<  "Hello " << mystr << endl;
  cout <<  "How old are you? " << endl;
  getline (cin,mystr);
  cout << "So you're " << mystr << ", I'm currently 24 years old" << endl;
  cout << "Are you happy with your life right now? " << endl;
  getline (cin,mystr);
  cout << "You said " << mystr << " to being happy with your life." << endl;
  cout << "If you said no, try and change up something in your routine. " << endl;
  cout << "If you said yes, continue to build on your strong points. " << endl;
  cout << "Here's a Haiku to help you either way: " << endl;
  cout << "For all life on earth" << endl;
  cout << "Death is inevitable" << endl;
  cout << "So make life last long" << endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/

  string myNumber = "1234"; // Convert this string to an integer 
  int myInt;
  stringstream(myNumber) >> myInt;

  cout << myInt << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}