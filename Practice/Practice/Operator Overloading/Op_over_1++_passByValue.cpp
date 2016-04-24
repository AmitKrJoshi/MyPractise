#include"header.h"

class number{
	public:
		int x;
		int y;
		number(){cout<< "In default ctor\n";}
		number(int i, int j){
			cout << "In 2 argu ctor\n";
			x =i;
			y =j;
		}

		number operator + (number obj){
			cout << "In operator Obj + Obj\n";
			number temp;
			temp.x = x + obj.x;
			temp.y = y + obj.y;
			return temp;
		}
		number operator + (int i){
			cout << "In operator Obj + int \n";
			number temp;
			temp.x = x + i;
			temp.y = y + i;
			return temp;
		}
		void show(){
			cout << "\n x = "<<x<<" y = "<<y<<endl; 
		}
};

void main(){
	number A(2,3), B(4,5), C,D;
	A.show();
	B.show();
	C = A + B;	//obj A will call + operator function to add with another obj
	C.show();
	D = A + 5;	//obj A will call + operator function to add with int
	D.show();
	//D = 5 + A;	//We can not do this its an error because int will call +, does not make any sense. Compiler does not inbuild definition of this
	system("pause");
}