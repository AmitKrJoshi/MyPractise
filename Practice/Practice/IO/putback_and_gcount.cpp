#  include<header.h>

int main()
{
	char c;
	char text[20];
	cout << "Enter text ; F6 to end :";
	cin.getline(text,19);
	int len = cin.gcount();
	cout << "Total Charecter :"<< len << endl;
	while(cin.get(c))
	{
		if(c == ' ')
			cin.putback ('.');
		//else
			//cout << c;
		while(cin.peek() == '#')
			cin.ignore(1,'#');
		cout.put(c);		
	}
	system("pause");
	return 0;
}