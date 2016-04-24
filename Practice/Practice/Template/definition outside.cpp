#include<iostream>
using namespace std;

template <class T>
class data{
	public :
		data(T c);
};

template<class T> data<T>::data(T c){
	cout << "\n C = " << c <<endl;
}

int main(){
	data<int> i(12);
	data<char> c('A');
	//data<string> s("Amit");
	system("pause");
	return 0;
}

