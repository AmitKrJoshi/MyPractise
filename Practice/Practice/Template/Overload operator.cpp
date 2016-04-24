#include<iostream>
using namespace std;

template<class T>
class num{
	T n;
	public:
		num() : n(0){}
		void input(){
			cout << "Enter \n";
			cin >> n;
		}
		num operator + (num);
		void show() {cout << n << endl;}
};

template<class T>
num<T> num<T>::operator +(num<T> c){
	num<T> temp;
	temp.n = n + c.n;
	return temp;
}

int main(){
	num<int> n1,n2,n3;
	n1.input();
	n2.input();
	//n3.input();
	n3 = n1 + n2;
	cout << "\nN3 = ";
	n3.show();
	system("pause");
	return 0;
}