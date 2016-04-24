#include<iostream>
using namespace std;

template <class Base>
class one{
protected:
	Base x, y;
	void show(){
		cout << x;
	}
};

template <class Child>
class two : public one<Child>{
	Child z;
public:
	two(Child a, Child b, Child c):z(c){
		x = a;
		y = b;
	}
	void show(){
		cout << "\n x =" << x << " y =" <<y << " z = "<<z<<endl; 
	}
};

int main(){
	two<int>i(1,2,3);
	i.show();
	system("pause");
	return 0;
}