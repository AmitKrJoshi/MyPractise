#include"header.h"

class number{
	private:
		int w;
		int x;
		int y;
		int z;
	public:
		number(){cout<< "In default ctor\n";}
		number(int i, int j, int k, int l){
			cout << "In 2 argu ctor\n";
			w =i;
			x =j;
			y =k;
			z =l;
		}
		void show();
		void operator ++();
};
/*		number operator + (number obj){
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
		}*/

void number::show(){
	cout << "\nW: "<<w<<" x = "<<x<<" y = "<<y<<" Z: "<<z<<endl; 
}
void number::operator ++(){
	//++w; ++x; ++y; ++z;
	w++; x++; y++; z++;	//It deosn't matter what we do here;
}

void main(){
	number A(1,2,3,4);
	cout << "Before increment A :";
	A.show();
	cout<< "After :";
	++A;
	//A++;	//Doing this will show warning :  no postfix form of 'operator ++' found for type 'number', using prefix form
	A.show();
	system("pause");
}