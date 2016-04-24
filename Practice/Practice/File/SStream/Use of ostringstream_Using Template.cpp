#include <iostream>
#include <sstream>
#include <string>
//using namespace std;

template <class T>
std::string toStr(T d){
	std::ostringstream os;
	os << d;
	return os.str();
}

int main(){
	double d = 123.45;
	std::string s1 = "The value of d is " + toStr(d);
	int i = 12;
	std::string s2 = "The value of d is " + toStr(i);
	std::cout << s1 << "\n" << s2 << std::endl;
	system("pause");
	return 0;
}