#include"header.h"

class main{
	public:
	main(){ cout << "IN main() ctor\n"; }
	~main(){cout << "IN main() Dtor\n"; }
};

void main(){
	class main a;
	system("pause");
}