#include<header.h>
/*getline : Reads string including space also. cin() doesn't allow to enter string with blank spaces.

	cin.getline(variable,size). Object of istream will call this function.
 write: Same as getline except it will display string.
		Display specified no. of char. given in 2nd arg.
		 Object of ostream will call this function.
	cout.write(variable,size)

	variable : any character type
	size : size of char array
*/
int main()
{
	cout.write("INDIA",5).put('\n');
	cout.write("INDIA",4).put('\n');
	cout.write("INDIA",8);
	cout.write("INDIA",3).put('\n');

	char x[20];
	cout << "Enter String\n";
	cin.getline(x,20);
	cout << "1. Entered String:\t"<<x;
	cout<< "\n2. Entered String:\t";
	cout.write(x,20);
	cout<< "\n3. Entered String:\t";
	cout.write(x,strlen(x));
	system("pause");
}