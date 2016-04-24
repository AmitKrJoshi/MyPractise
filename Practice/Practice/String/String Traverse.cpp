#include<iostream>
using namespace std;


int main(){
std::string str = "Hello";
for(std::string::iterator it = str.begin(); it != str.end(); ++it) {
    cout << (*it) << endl;
	}
system("pause");
}