/*
https://latedev.wordpress.com/2011/11/16/c-stringstreams/
Strings To Things

If you can convert objects to strings using an ostringstream and operator<<(), 
it should come as no surprise that you can convert strings to objects using the 
istringstream class and operator>>(). Here’s a template function that converts a 
string to any type that supports operator>>() and is default-constructible and copyable.

*/

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

template <class T>
T toType(const string &str){
	istringstream is(str);
	T tempStr;
	is >> tempStr;
	return tempStr;
}

int main(){
	string s1 = "123.45", s2 = "12";
	cout << toType<double>(s1) << endl<<toType<int>(s2)<<endl;
	cout << toType<double>(s1) + toType<int>(s2)<<endl;
	system("pause");
	return 0;
}
/*
The function described above requires the user to specify the type being 
converted using the funcname<type> syntax, which many consider ugly.  
It also requires that the type being converted have a default constructor,
m so that the temporary object temp can be created, and a copy constructor 
so that its value can be returned. You can get around these problems by re-writing the function
See Program : "Use of istringstream_Using Template_2.cpp"
*/