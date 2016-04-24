#include"header.h"

class A{
	private : 
		int a;
	public:
		A(){
			a = 20;
		}
		void show(){
			cout << "\n a = " << this->a;
		}
};

int main(){
	A *p, *q;
	*q = p->A::A();		//error: cannot call constructor ‘A::A’ directly
	p->show();
	system("pause");
	return 0;
}
