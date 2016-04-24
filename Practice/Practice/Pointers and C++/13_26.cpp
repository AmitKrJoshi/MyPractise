#include"header.h"

class A{
	private:
		int x,y;
	public:
		void show(int *ax,int *ay){
			x = *ax;
			y = *ay;
			cout << endl << "x = "<<x<<" y "<<y<<endl;
		}
};

int main(){
	A a;
	int *px,*py;
	int *p = (int *)&a;
	*p = 3;
	px = p;
	p++;
	*p = 9;
	py = p;
	a.show(px,py);
	system("pause");
	
	return 0;
}
