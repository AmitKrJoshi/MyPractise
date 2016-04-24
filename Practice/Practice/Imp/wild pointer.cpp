#include<header.h>

char *instring();
char *inchar();

void main(){
	char *ps, *pc;
	ps = instring();
	pc = inchar();

	cout << "String : " << *ps << endl;
	cout << "char : " << *pc << endl;
	system("pause");
}

char *instring(){
	char str[] = "CPP";
	return str;
}

char *inchar(){
	char ch = 'g';
	return &ch;
}
