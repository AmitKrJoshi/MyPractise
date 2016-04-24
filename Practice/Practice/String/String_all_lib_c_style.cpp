#include<iostream>
using namespace std;
#include<string>

int main(){
	char str[] = "This is a test String number 1";
	char text[] = {'H','i','T','e','s','t'};
	cout << "Length\t: " << strlen(str)<<endl;

	char dest[256]={NULL};
	strcpy_s(dest,str);
	cout << "New Copied String:\t " << dest<<endl;

	memset(&dest,NULL,sizeof(dest));
	strncpy_s(dest,str,5);
	cout << "New Fixed Copied String:\t " << dest<<endl;

	cout << "Reversed:\t " << _strrev(str)<<endl;
	system("pause");
	return 0;
}