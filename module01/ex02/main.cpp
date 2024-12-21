#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str = "HI THIS IS BRAIN";
  string *stringPTR = &str;
  string &stringREF = str;

  cout << "The Address in memory of the string: " << &str << endl;
	cout << "The Address of the string using stringPTR: " << stringPTR << endl;
	cout << "The Address of the string using stringERF: " << &stringREF << endl;
	cout	<< "-----------------------------------------------------------------" << endl;
  cout << "Display the value of the string: " << str << endl;
	cout << "Display the string using the pointer: " << *stringPTR << endl;
	cout << "Display the string using the reference: " << stringREF<< endl;
}