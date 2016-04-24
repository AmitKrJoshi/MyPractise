#include<iostream>
#include<string.h>

using namespace std;

#include<fstream>

int main(){
	char c;
	ifstream in("File/File.txt");
	if(!in)
		cout << "Error !\n";

	while(in.eof()==0){
		cout << in.get();
		cout << endl;
		cout << (char)in.get() << endl;
	}
	system("pause");
	return 0;
}