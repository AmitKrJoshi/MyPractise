#include "header.h"

void main()
{
	cout << "using comma op\n",
	cout << endl;

	int x ;
	x =15,
	cout << "New int value using comma op : " << x,
	cout << endl,
	x = 10;				//Before if block ';' should present. , will through error

	if(x == 10)			//If block with out {
		cout << x << endl,
		cout << x+1 << endl,
		cout << "End of IF" << endl;
	else
		cout << "False",
		cout << endl;	//END of ELSE


	system("pause");
}