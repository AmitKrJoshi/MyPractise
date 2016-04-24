#include<iostream>
using namespace std;

template<class T>
void show(T );

void show(int);
int main(){
	show('C');
	show(50);
	show(50.25);
	system("pause");
	return 0;
}

template<class T> void show(T x){
	cout << "Template :" <<x << endl;
}

void show(int x){
	cout << " Integer :" <<x << endl;
}