#include<fstream>
#include<iostream>
using namespace std;

int main(){
	fstream out;
	char data[25];
	out.open("File/File.txt", ios::out);
	cout << "Enter \n";
	cin.getline(data,25);
	out << data;
	out.close();

	fstream in;
	in.open("File/File.txt",ios::in);
	cout << endl << "Reverse :\n";
	in.seekg(0,ios::end);
	int m = in.tellg();
	//cout << "Current position :" << m << endl;
	char ch;
	for(int i=1; i<=m; i++){
		in.seekg(-i,ios::end);
		in >> ch;
		cout << ch;
	}
	cout << endl;
	system("pause");
	return 0;
}
