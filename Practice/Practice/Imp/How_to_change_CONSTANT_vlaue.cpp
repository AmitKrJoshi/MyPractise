#include"header.h"

int main()
{
	cout << __FUNCTION__ << endl;
	/*
		int min(int const a =10, int b =12);
		int a = 4, b =5;
		b = min(a);
		cout << "\na = " << a << "\nb = " << b << endl;
	*/
	int const x =1;
	//x++;				INVALID
	//cin >> x;			INVALID : binary '>>' : no operator found which takes a left-hand operand of type 'std::istream' (or there is no acceptable conversion)
	
	cout << "x =" << x << "\tAddress = " << &x <<newline ;
	
	//TO CHANGE CONDSTANT VAR value
	//(*(int *)&x = 2;
    ++(*(int *)&x) ;					//DOES NOT change anything : Need to do R&D
	cout << "\nNew \n x =" << *(&x) << "\tAddress = " << &x <<newline ;
	system("pause");
	return 0;
}

/*
int min(int const j, int k)
{
	cout << __FUNCTION__ << endl;
	cout << "j = " <<  j  << "k  =" << k << endl;
	//j++;		//Error j is const
	return (j > k ? k : j);
}
*/