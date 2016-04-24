#include<header.h>

int i;
float f;
char c;
void *ptr;

void main(){
	cout << "ptr : " << ptr << " Size of ptr : " << sizeof(ptr) << endl;
	ptr = &i;
	*(int*)ptr = 12;
	cout << "ptr : " << ptr << " Size of ptr : " << sizeof(ptr) << endl;
	cout << "\n i = " << i << endl;

	ptr = &f;
	*(float*)ptr = 5.4;
	cout << "ptr : " << ptr << " Size of ptr : " << sizeof(ptr) << endl;
	cout << "\n f = " << f << endl;

	ptr = &c;
	*(char*)ptr = 'S';
	cout << "ptr : " << ptr << " Size of ptr : " << sizeof(ptr) << endl;
	cout << "\n c = " << c << endl;
	system("pause");
}