//Program to read data from file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char *buf = new char[80];
	ifstream in("Output.txt");	//Open file in read mode
	if(!in)
		cout << "error\n";
	in >> buf;
	cout << buf << " ";		//Prints One
	
	in >> buf;
	cout << buf << " ";		//Prints Two

	in >> buf;
	cout << buf << " ";
	
	in.close();
	system("pause");
	return 0;
}