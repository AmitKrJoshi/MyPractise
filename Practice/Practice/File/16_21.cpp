#include<iostream>
using namespace std;
#include<fstream>

int main(){
	ifstream in;
	in.open("File/File.txt");
	if(!in)
		cout << "File not found\n";
	else
		cout << "File :" << in;

	cout << "\n Error State :" << in.rdstate();
	cout << "\n Good ? " << in.good();
	cout << "\n EOF ? " << in.good();
	cout << "\n Fail ? " << in.fail();
	cout << "\n Bad ? " << in.bad();
	in.close();
	system("pause");
	return 0;
}