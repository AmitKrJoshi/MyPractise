#include<iostream>
using namespace std;

class A{
public:
	void show(){
		cout << "IN A\n";
	}
};

class B : virtual public A{};	//Mandatory

class C : virtual public A{};	//Mandatory

class D : public B, public C{};

int main(){
	D dObj;
	dObj.show();
	system("pause");
	return 0;
}