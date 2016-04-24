#include"header.h"

class A{
	public:
		int x;
		A() { x =10; }

		class B{
			public:
				int y;
				B() { y =20; }

				void show(){
					A a;
					cout << "x= "<<a.x <<endl;
					cout << "y= " <<y<<endl;
				}
		};
};

void main(){
	A::B b;
	b.show();
	system("pause");
}