#include<iostream>
#include<sstream>
using namespace std;
#include<string>

template<class T>
void toType(const string &, T &A);

int main(){
	string s1 = "123.45", s2 = "12";
	double d;
	int i;
	toType(s1,d);
	toType(s2,i);
	cout << d+i << endl;
	system("pause");
	return 0;
}

template<class T>
void toType(const string &str, T &t){
	istringstream is(str);
	is >> t;
}

/*
There is another problem with the ToType function – what happens if the conversion cannot be performed? 
For example, what happens if you say:

			double d = ToType<double>( "foobar" );

You need to detect the conversion failure and indicate an error. 
In this case it is not possible to indicate an error via the return value,
as you don’t know what the actual type of that value is going to be, so you must throw an exception. 
See Program : "Use of istringstream_Using Template_3.cpp"
*/