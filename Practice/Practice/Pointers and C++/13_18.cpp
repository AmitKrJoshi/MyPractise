#include"header.h"

class A{
	private:
		int a;
	public:
		A(){
			a = 30;
		}
		void show(){
			cout << "\na = "<<a;
		}
		A(int x){
			this->a = x;
		}
};

int main(){
	A k, b, a,*ptr;
	*ptr = 60;	//Can't do .. Crash.. Comment it
	ptr->show();	//It will show junk 
	b = 50;	
	k = b;
	b.show();
	k.show();
	a.show();
	system("pause");
	return 0;
}
