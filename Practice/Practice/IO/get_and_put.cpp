#include<iostream>
using namespace std;

int main()
{
#if 0
	//GET
	char ch,newch[3];
	cout << "Enter char\n";
	cin.get(ch);
	cout.put(ch);

	cout << "Enter 3 more\n";
	cin.get(newch[0]).get(newch[1]).get(newch[2]);
	cout.put(newch[0]).put(newch[1]).put(newch[2]);
#endif
	//PUT
#if 0
	int a = 100;
	cout.put('A');										//Type 1 Normal
	cout.put('\n');										//Type 2 escape seq.
	cout.put(a);										//Type 3 Variable
	cout.put('\n');
	cout.put('C').put('+').put('+').put('\n');			//Type 4 Multiple
#endif

#if 1
	//Pro to read and display string using GET and PUT
	char j=0;
	char x[20];
	
	cout<<"Enter string\n";
	while(x[j++]!='\n')
		cin.get(x[j]);
	j=0;
	cout<<"u have entered\n";
	while(x[j++]!='\n')
		cout.put(x[j]);
#endif
	system("pause");
}
