#include<iostream>
#include<sstream>
using namespace std;
#include<string>
#include<exception>

template<class T>
void toType(const string &, T &A);

int main(){
	string s1 = "123.45", s2 = "12";
	double d;
	int i;
	toType(s1,d);
	toType(s2,i);
	cout << d+i << endl;
	string s3 = "FooBar";
	//toType(s3,d);		//Uncomment this line to see effect of passing wrong arg
	system("pause");
	return 0;
}

template<class T>
void toType(const string &str, T &t){
	istringstream is(str);
	if(!(is >> t))
		throw bad_cast();

	is>> t;
}
