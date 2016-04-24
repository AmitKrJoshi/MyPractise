/*
Ever wanted to convert the value in a double variable to a string? Or to be able to write code like this:

		double d = 123.45;
		string s = "The value of d is " + d;

As things stand, you can’t do it because  operator+() does not (and cannot) supply a suitable overload. 
But if you had some way of converting the variable d in the above code into a string, then it would work.

The osstringstream class allows you to perform conversions from any type that supports the output operator<<() 
for streams to strings. The code is quite straightforward:
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string doubleToStr(double d){
	ostringstream os;
	os << d;
	return os.str();
}

int main(){
	double d = 123.45;
	string s = "The value of d is " + doubleToStr(d);
	cout << s << endl;
	system("pause");
	return 0;
}