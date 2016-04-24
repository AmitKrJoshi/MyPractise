#include "header.h"

class A{
	public:
		int main(int i){
			cout << endl << "In MAIN(INT) :" << i;
			return 0;
		}
		int main(double i){
			cout << endl << "In MAIN(DOUBLE) :" << i;
			return 0;
		}
		int main(char *i){
			cout << endl << "In MAIN(CHAR) :" << i <<newline;
			return 0;
		}
};

int main(){
	A *a = new A;
	a->main(5);
	a->main(5.2);
	a->main("C++");
	delete(a);
	system("pause");
	return 0;
}