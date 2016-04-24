//SWAP of two number using Friend
#include "header.h"

class second;

class first{
	int j;
public : 
	void input(){
		cout << "Enter value_1 : ";
		cin >>j;
	}
	void show(){
		cout << "Value 1 =" <<j << "\n";
	}
	friend void change(first &f, second &s);
};

class second{
	int k;
public:
	void input(){
		cout << "Enter value_2 : ";
		cin >>k;
	}
	void show(){
		cout << "Value 2 =" <<k << "\n";
	}
	friend void change(first &f, second &s);
};

void change(first &x, second &y){
	int temp=x.j;
	x.j = y.k;
	y.k = temp;
}

int main(){
	first f1;
	second s1;
	f1.input();
	s1.input();
	change(f1,s1);
	cout << "After change values are : \n";
	f1.show();
	s1.show();
	system("pause");
	return 0;
}