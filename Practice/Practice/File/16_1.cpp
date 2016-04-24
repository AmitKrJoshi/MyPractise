//Program to open an output file using "fstream" class

#include<fstream>
#include<iostream>
using namespace std;

int main(){
	ofstream out("Output.txt");
	out << "One Two Three\n";
	out << "1 2 3\n";
	out << "\n** The End**\n";
	out.close();
	system("pause");
	return 0;
}