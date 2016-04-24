//Program to Write and read data in/from file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char *buffer = new char[80];
	char *name = new char[10];
	int age;
	
	//ofstream out("Output.txt",ios::app);
	ofstream out("Output.txt",'a+');
	//or
	//out.open("Output.txt");
	if(!out){
		cout << "Error Output\n";
		system("pause");
		exit(1);
	}
	cout << "\nName: ";
	cin >> name;
	cout << "\Age: ";
	cin >> age;

	out << name << "\t" << age << "\n";
	out.close();

	ifstream in;
	in.open("Output.txt");
	if(!in){
		cout << "Error Input\n";
		system("pause");
		exit(1);
	}

	while(in.eof()==0){
		in.getline(buffer,80);
		cout << buffer << endl;
	}
	//cout << buffer << endl;
	in.close();
	system("pause");
	return 0;

}