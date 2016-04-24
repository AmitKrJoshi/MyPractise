#include<header.h>

/*
v1 is FLAG
v2 is BI TFIELD
Syntax : cout.setf(v1 ,v2)
Syntax : cout.unsetf(v1)
		 v1						v2
	ios: left				ios:adjustify
	ios: right				ios:adjustify
	ios: internal			ios:adjustify
	ios: scientific			ios:floatfield
	ios: fixed				ios:floatfield
	ios: dec				ios:basefield
	ios: oct				ios:basefield
	ios: hex				ios:basefield
	
	IMPORTANT : Every ios member function has two formats. 
		1. For setting 
		2. To understand the previous setting.
*/
int main()
{
	cout.fill('=');
	cout.setf(ios::right, ios::adjustfield);
	cout.width(20);
	cout<<"Figure"<<endl;
	
	cout.setf(ios::left, ios::adjustfield);
	cout.width(20);
	cout<<"Figure" << endl;
	
	cout.fill('*');
	cout.setf(ios::internal, ios::adjustfield);
	cout.width(20);
	cout << -1.121 << endl;
	
	cout.setf(ios::scientific, ios::floatfield);
	cout.width(20);
	cout << -2.121 << endl;

	cout.unsetf(ios::internal);
	cout.setf(ios::scientific, ios::floatfield);
	cout.width(20);
	cout << -3.121 << endl;

	cout << "\n\n\nConversion\n" << endl;
	cout.setf(ios::hex, ios::basefield);
	cout<< "Hexa of 184 : " << 184 << endl;
	cout.setf(ios::oct, ios::basefield);
	cout<< "Oct of 184 : " << 184 << endl;
	cout.setf(ios::dec, ios::basefield);
	cout<< "Dec of b8 : " << 0xb8 << endl;
	system("pause");
	return 0;
}