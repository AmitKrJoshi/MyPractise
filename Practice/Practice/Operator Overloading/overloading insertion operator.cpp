#include"header.h"

class STRING{
	char *str;
	public:
		STRING(char *temp){
			str = temp;
		}
		friend ostream & operator << (ostream &ostream_Obj, STRING & k){
			ostream_Obj << k.str;
			return ostream_Obj;
		}
};

int main(){
	STRING strObj = "INDIA";
	cout << strObj;
	
	system("pause");
	return 0;
}