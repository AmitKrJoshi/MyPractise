#include"header.h"

class Object{
	public:
		void show(char *str){
			cout << str << endl;	
		}
};

Object obj;	//Global

void main(){
	Object obj;	//Local
	::obj.show("Global");
	obj.show("Local	");

	system("pause");
}