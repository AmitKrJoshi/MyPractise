#include"header.h"

class Base{
	int x;
	public:
		Base(){
			x = 50;
		}
		Base(int temp){
			x = temp;
		}
		void showBase(){
			cout << "\n X :" << x;
		}
};

class Derived:private Base{
	public:
		int y;
		Derived(){
			//x = 25;			// X is private
			y = 100;
		};
		Derived(int x) : Base(5){
			y = x;
		}
		
		void showDerived(){
			cout << "\n Y :"<<y;
			showBase();
		}
};

int main(){
	Base bObj;
	bObj.showBase();			//Base obj can access
	Derived dObj;
	//dObj.showBase();			//Derived obj can not access showBase, private;

	dObj.showDerived();
	cout << endl;
	system("pause");
	return 0;

}