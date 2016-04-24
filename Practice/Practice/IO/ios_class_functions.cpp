#include<header.h>

int main()
{
	cout << "Fill & Width" << endl;
	cout.fill('*');
	cout.width(10);
	cout<<"Hello"<<endl;
	char f = cout.fill();
	cout.fill('$');
	cout.width(10);
	cout << "H" << endl;
	cout << "Filled with : " << f;
		
	cout << "\nPrecision" << endl;
	cout.precision(4);
	cout<< 3.1452 <<endl;
	cout << "Prevoius precision :" << cout.precision();


	cout << endl;
	system("pause");
	return 0;
	
}