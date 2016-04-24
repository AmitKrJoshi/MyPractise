#include"header.h"

class num{
	private:
		int x;
	public:
		num(int x);
		void show();
};

num::num(int x){
	//x = x ;	//This will give junk
	num::x= x;
}

void num::show(){
	cout << " = " <<x<<endl;
}

void main(){
	num A(2),B(3);
	cout << "Before overloading = operator : ";
	cout << "\n A=";
	A.show();
	cout << "\n B=";
	B.show();
	cout << "After IMPLICIT overloading = operator : ";
	B = A;
	cout << "\n A=";
	A.show();
	cout << "\n B=";
	B.show();
	system("pause");
}