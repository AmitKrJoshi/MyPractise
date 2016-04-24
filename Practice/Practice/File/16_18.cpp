#include<iostream>
using namespace std;
#include<fstream>

class Boy{
	char name[20];
	int age;
	float height;
public:
	void get(){
		cout << "Name :";		cin >> name;
		cout << "Age :";		cin >> age;
		cout << "Height :";		cin >> height;
	}
	void show(){
		cout << "\n" << name << "\t" << age << "\t" << height << endl;
	}
};

int main(){
	Boy bObj[3];
	fstream io;
	io.open("Boy.txt",ios:: in | ios :: out );
	if(!io)
		cout << "Error!\n";
	cout << "Enter the Details\n";
	for(int i = 0; i<3; i++){
		bObj[i].get();
		io.write((char*)&bObj[i],sizeof(bObj[i]));
	}
	io.seekg(0);
	cout << "You have entered\n";
	cout << "Name	Age	Height";
	for(int i=0;i<3;i++){
		io.read((char*)&bObj[i],sizeof(bObj[i]));
		bObj[i].show();
	}
	io.close();
	system("pause");
	return 0;
}