#include<header.h>

int main()
{
	char c;
	cout << "Enter text ; F6 to end :";
	while(cin.get(c))
	{
		cout << c;
		while(cin.peek() == '#')
		{
			cin.ignore(2,'#');
		}
	}
	system("pause");
	return 0;
}