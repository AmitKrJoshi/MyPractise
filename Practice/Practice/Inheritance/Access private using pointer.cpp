#include<header.h>

class A{
	private:
		int x;
		int y;
	public:
		A(){
			x = 10;
			y = 33;
		}
};

class B: private A{
	public:
		int z;
		B(){
			z =3;
		}
};

int main(){
	B b;
	int *p;
	p = &b.z;
	cout << endl << "Address of z: "<< p << " Value : " << *p;
	p--;
	cout << endl << "Address of y: "<< p << " Value : " << *p;
	p--;
	cout << endl << "Address of x: "<< p << " Value : " << *p <<endl;
	system("pause");
	return 0;
}