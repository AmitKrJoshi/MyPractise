#include"header.h"

class data{
	int x;
	float f;
	public:
		data(){
			x =0;
			f =0;
		}
		data(float m){
			x =2;
			f =m;
		}
		void show(){
			cout << "\n X = "<<x <<" F = "<<f<<endl;
			cout << "\n X = "<<x <<" F = "<<f<<endl;
		}
		/*
		operator data_type (){
			//definition
		}
		1. No argument
		2. no return type
		3. must be member function
		*/
		operator int(){
			return x;
		}
		operator float(){
			return f;
		}

};

void main(){
	int j;
	float k;
	data obj;
	obj = 5.5;		//object is initilized to 5.5, So ctor with float argument will be called. so x =2, f =5.5
	j = obj;		//For this we need conversion function.
	k = obj;
	cout << "\n J = " << j << endl;
	cout << "\n K = " << k << endl;
	obj.show();
	cout << "*******************\n";
	obj = 7;		//object is initilized to 5.5, So ctor with float argument will be called. so x =2, f =5.5
	j = obj;		//For this we need conversion function.
	k = obj;
	cout << "\n J = " << j << endl;
	cout << "\n K = " << k << endl;
	system("pause");
}