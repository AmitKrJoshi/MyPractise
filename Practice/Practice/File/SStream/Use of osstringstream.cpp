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

int main(){
	double d = 123.45;
	ostringstream os;
	os << d;
	string s = "The value of d is " + os.str();
	cout << s << endl;
	system("pause");
	return 0;
}
/*
Here you write a double out to the ostringstream using the same operator<<() that you would use if you were writing it to cout. 
You then grab all the contents of the stream using the stream’s  str() member function. 
This function returns as a string everything that has been written to the stream, which in this case is the double "123.45". 
As str() returns a string, you can use operator+() to concatenate it with the string literal.
*/