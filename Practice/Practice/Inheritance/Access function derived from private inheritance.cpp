#include	<header.h>

class B{
	public:
		void one(){	cout << endl << "one \n"; }
		void two(){	cout << endl << "two \n"; }
};

class C{
	public:
		void three(){	cout << endl << "three \n"; }
};

class D : private B,public C{
	public:
		//B::one();//class contains explicit override 'one' but does not derive from an interface that contains the function declaration
				//this method was not introduced by 'B'
		B::one;
		C::three;
};               

int main(){
	D obj;
	obj.one();
	//obj.two();		Error Not accessible
	obj.three();
	system("pause");
	return 0;
}