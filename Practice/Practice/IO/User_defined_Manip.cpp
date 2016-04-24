#include<header.h>

/* Syntax : 
				ostream & manip_name( ostream & obj)
				{
					statements...
					return obj;
				}

********SHIFTED TO HEADER FILE********
ostream & tab (ostream & obj)
{
	obj << "\t";
	return obj;
}
*/

ostream & Neg (ostream & obj)
{
	obj << "Negative no" << newline;
	return obj;
}

ostream & Pos (ostream & obj)
{
	obj << "Positive no" << newline;
	return obj;
}

int main()
{
	cout << "Hello" << tab << "world" << newline;

	int i ;
	cout << "Enter a no :" << tab;
	
	cin >> i;
	cout << (i >=0 ? Pos : Neg);
	system("pause");
	return 0;
}