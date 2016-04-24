#include<header.h>

int main()
{
	cout.setf(ios::showbase);
	cout << 10 << endl;

	cout.setf(ios::showpos);
	cout << -123 << endl;
	cout << 123 << endl;

	cout.setf(ios::showpoint);
	cout << 12.34 << endl;

	cout.setf(ios::hex , ios::basefield);
	cout << 15 << endl;
	cout.setf(ios::uppercase);
	cout << 15 << endl;
	system("pause");
}