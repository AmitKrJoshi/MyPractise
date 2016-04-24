//Program to Write and read data in/from file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char c;
/*
	ofstream out;
	out.open("Output.txt",ios::app);
	if(!out){
		cout << "Error Output\n";
		system("pause");
		exit(1);
	}
*/	
	ifstream in;
	in.open("Output.txt");
	if(!in){
		cout << "Error Input\n";
		system("pause");
		exit(1);
	}

	while(in.eof()==0){
		in.get(c);
		cout << in.eof();
	}
	in.close();
	system("pause");
	return 0;
}