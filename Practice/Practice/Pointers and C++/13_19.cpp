#include"header.h"

int main(){
	struct c{
		char *name;
	};
	c b, *pb;
	pb->name = " CPP";	//CRASH	.. Comment it
	b.name = "C &";	
	cout << b.name;
	system("pause");
	return 0;
}

