/*
For the ostringstream, you write to it using the standard stream methods, 
and then use the special str() member function to retrieve everything that 
was written to the stream as a single string:
*/

#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	ostringstream os;
	os << "the ";
	os << "quick ";
	os << "brown ";
	os << "fox";
	string s = os.str();
	cout << s << endl;
	system("pause");
	return 0;
}