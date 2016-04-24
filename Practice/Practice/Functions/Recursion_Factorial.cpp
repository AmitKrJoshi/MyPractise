#include "header.h"

UINT32 factorial(int);

int main()
{
	int f,x;
	cout << "Enter number :\t";
	cin >> x;
	f = factorial(x);
	cout << "factorial of "<< x <<" is :\t" << f << endl;
	system("pause");
	return 0;
}

UINT32 factorial(int a)
{
	UINT32 fact;
	
	if(a==1)
		return 1;
	else
		fact = a*factorial(a-1);
	
	return fact;
}