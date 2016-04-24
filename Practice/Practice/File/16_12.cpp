#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream out;
	out.open("File/File.txt",ios::out);
	char data[25];
	cout << "Enter Data : \n";
	cin.getline(data,25);
	out << data;
	out.close();
	fstream in;
	in.open("File/File.txt",ios::in);
	cout << "\nContent of Fil\n";
	int pos;
	while(in.eof()==0){
		in >> data;
		cout << data;
		pos = in.tellg();
		cout << " (" << pos <<") ";
	}
	system("pause");
	return 0;
}