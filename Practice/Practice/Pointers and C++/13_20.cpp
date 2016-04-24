#include"header.h"

struct data{
	int x;
	float y;
};

int main(){
	int data ::*px = &data::x;
	float data ::*py = &data::y;

	data obj = {11, 1.14};
	cout <<endl<<obj.*px<<endl<<obj.*py<<endl;
	data *pp;
	pp = &obj;
	cout <<endl<<pp->*px<<endl<<pp->*py<<endl;
	obj.*px = 22;
	pp->*py = 8.35;
	cout <<endl<<pp->*px<<endl<<pp->*py<<endl;
	system("pause");
	
	return 0;
}
