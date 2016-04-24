//THIS PROGRAM IS WORKING IN LINUX.

#include"header.h"

class STRING{
	char *str;
	public:
		friend istream & operator >> (istream &istream_Obj, STRING & k){
			cout << "Enter a string :";
			istream_Obj >> k.str;
			return istream_Obj;
		}

		friend ostream & operator << (ostream &ostream_Obj, STRING & k){
			ostream_Obj << k.str;
			return ostream_Obj;
		}
};

int main(){
	STRING strObj ;
	cin >> strObj;
	cout << strObj;
	system("pause");
	return 0;
}