#include"header.h"

#define PETROL 1
#define DISEL 2
#define TWO_WH 3
#define FOUR_WH 4
#define OLD 5
#define NEW 6

class vehicle {
	unsigned  type :3;
	unsigned  fuel :2;
	unsigned  model :3;

public:
	vehicle(){
		type = FOUR_WH; //IF i put 8 here, which is ! in b/w 0-7, than value of type will come as 0 because we have given bit field as 3  
		fuel = PETROL;
		model =  NEW;
	}
	void show(){
		if(model == NEW){
			cout << "\n New Model";
		}
		else{
			cout << "\nOld Model";
		}
		cout << "\nType of Vehicle :" << type;
		cout << "\nFuel :" << fuel<<endl;
	}
};

int main(){
	vehicle v;
	cout << "Size of Object :" <<sizeof(v) <<endl;
	cout << "Size of int :" << sizeof(int) << endl << "Size of unsigned :" << sizeof(unsigned) << endl;

	v.show();
	system("pause");
	return 0;
}

/*
typedef struct size
{
        unsigned int a:1;
        unsigned int b:1;
        unsigned int c:1;
}mystruct;
int main()
{
        mystruct a;
        printf("%d",sizeof(a));
		system("pause");
        return 0;
}*/