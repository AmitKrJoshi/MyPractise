#include"header.h"

class Base{
	int x;
	static int count;
	static int ParaCount;
	public:
		Base(){
			x = 50;
			count++;
		}
		Base(int temp){
			x = temp;
			ParaCount++;
		}
		void showBase(){
			cout << "\n X :" << x;
		}
		void Count(){
			cout << "\nBase class Default ctor called " << count << " times\n";
			cout << "\nBase class Default Paractor called " << ParaCount << " times\n";
		}
		
};

int Base::count = 0;
int Base::ParaCount = 0;

class Derived:public Base{
	public:
		Derived(){};
		Derived(int x) : Base(5){
			y = x;
		}
		int y;
		void showDerived(){
			showBase();
			cout << "\n Y :"<<y;
		}
};

int main(){
	Base b;
	Derived d(10);
	Derived dobj;
	//b.x = 10;												//Only when x is public
	//cout << "\nBASE::x " <<b.x;							//Only when x is public
	//d.x = 20;												//Only when x is public
	//cout << "\nDerived OBJ::x " <<d.x <<endl;				//Only when x is public
	b.showBase();
	d.showBase();
	d.showDerived();
	d.y = 1;
	d.showDerived();

	b.Count();
	cout << endl;
	system("pause");
	return 0;

}