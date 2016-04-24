#include "header.h"

int main()
{
	int & min(int &j, int &k);

	int a =18, b =11, c;
	c = min(a,b);
	cout << "Min Val = " << c;
	system("pause");
	return 0;
}

int & min(int &i, int &l)
{
	return (i > l ? l : i);
}