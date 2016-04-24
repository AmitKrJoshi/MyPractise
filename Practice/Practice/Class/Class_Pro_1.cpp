//Program to accept a string and display the string

#include<header.h>

class text{
	char str[50];
	public:

		void get(){
			cout << "Enter text :";
			cin.getline(str,50);
		}
		int show(int x){
			if(str[x]=='\0') return 0;
			else{
				cout << str[x];
				return 1;
			}
		}
};

int main(){
	int k =-1;
	text s;
	s.get();
	cout << "U have entered :";
	while('\0' != s.show(++k));
			//OR
	//while(s.show(++k));
	cout << "\n";
	system("pause");
	return 0;
}