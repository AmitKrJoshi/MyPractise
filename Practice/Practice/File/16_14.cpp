#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream out;
	out.open("File/File.txt",ios::out);
	char data[25];
	cout << "Enter test\n";
	cin.getline(data,25);
	out << data;
	out.seekp(0,ios::beg);
	cout << "Enter New Text\n";
	cin.getline(data,25);
	out << data;
	out.close();
	fstream in;
	in.open("File/File.txt",ios::in);
	cout << "New Contents\n";
	while(in.eof()!=1){
		in >> data;
		cout << data;
	}
	system("pause");
	return 0;
}