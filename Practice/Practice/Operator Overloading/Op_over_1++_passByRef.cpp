#include"header.h"

class number{
	private:
		int x;
		int y;
	public:
		number(){cout<< "In default ctor\n";}
		number(int i, int j){
			cout << "In 2 argu ctor\n";
			x =i;
			y =j;
		}

		number & operator + (number & obj){
			cout << "In operator +\n";
			number temp;
			temp.x = x + obj.x;
			temp.y = y + obj.y;
			//obj.x = 1;
			//obj.y = 0;
			return temp;
		}
		void show(){
			cout << "\n x = "<<x<<" y = "<<y<<endl; 
		}
};

void main(){
	number A(2,3), B(4,5), C;
	A.show();
	B.show();
	C = A + B;
	C.show();
	//B.show();
	system("pause");
}