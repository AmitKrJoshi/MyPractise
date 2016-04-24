/*A friend require one argument for unary operator and two for binary operators
	While member require one for binary operatores and noe for unary operators*/

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
		friend number operator + (number obj, number obj_2); //OR
		//number friend operator + (number obj, number obj_2); //This also works
		void show(){
			cout << "\n x = "<<x<<" y = "<<y<<endl; 
		}
};

number  operator + (number  obj, number obj_2){
			cout << "In operator +\n";
			number temp;
			temp.x = obj_2.x + obj.x;
			temp.y = obj_2.y + obj.y;
			//obj.x = 1;
			//obj.y = 0;
			return temp;
		}

void main(){
	number A(2,3), B(4,5), C;
	A.show();
	B.show();
	C = A + B;
	C.show();
	//B.show();
	system("pause");
}