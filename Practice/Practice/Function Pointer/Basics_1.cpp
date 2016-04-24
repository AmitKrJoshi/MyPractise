#include<iostream>
using namespace std;

void show(int x){
	cout << "Called " << __FUNCTION__ << "() value " << x <<endl;
}
int main(){
	void (*fp_show)(int);	//Declaring Function Pointer 
	fp_show = &show;		//Initializing Function Pointers
	fp_show(4);				//Using a Function Pointer
	//OR
	(*fp_show)(5);				//Using a Function Pointer	PREFER THIS ONE
	system("pause");
	return 0;
}