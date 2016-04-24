#include<iostream>
using namespace std;

template <class T, int size = 100>
class Array{
	T arr[size];
public:
	T & operator[](int index){
		return arr[index];
	}

	int length() const{
		return size;
	}
};

class Number{
	float f;
public:
	Number(float ff = 0.0f) : f(ff){}

	Number & operator = (const Number & n){
		f = n.f;
		return *this;
	}


};