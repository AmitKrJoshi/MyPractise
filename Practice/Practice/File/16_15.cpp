#include<iostream>
#include<fstream>

using namespace std;

int main(){
	char text[50];
	cout << "Enter Text\n";
	cin.getline(text,50);
	int pos =0;
	fstream io;
	io.open("File/File.txt",ios::in | ios::out);
	while(text[pos]!='\0'){
		io.put(text[pos++]);
	}

	io.seekg(0,ios::beg);
	char c;
	cout << "Entered->>\n";
	while(io){
		io.get(c);
		cout << c;
	}
	system("pause");
	return 0;
}