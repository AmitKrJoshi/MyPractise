#include<header.h>

int main()
{
	//POINTER TO CONSTANT
	int i =5;
	int const *pi = &i;	//Ponter to constant ... pointer is not constant.
	i =6;
	//*pi = 7;		cannot assign to a variable that is const
	pi++;

	int const j = 5;
	int const *pj = &j;
	//j = 6 ;		cannot assign to a variable that is const
	//*pj = 8;		cannot assign to a variable that is const
	pj++;
	
	//CONSTANT POINTER
	char *str = "String";
	char *pstr = str;
	cout << pstr << tab << *pstr << newline;
	pstr = "New String";
	cout << pstr << tab << *pstr << newline;

	char *const ptrStr = str;
	//char *const ptrStr = "String";
	//ptrStr = "Wrong";		Can't do .
	//++ptrStr;				Can't do .

	//POINTER AND VARIABLE BOTH CONSTANT
	const char *const ptr = "All Const";

	//CONSTANT DEFINED USING ENUM
	enum var
	{	
		a,b,c
	};
	cout << a << endl;
	//a++;
	

	system("pause");
	return 0;
}