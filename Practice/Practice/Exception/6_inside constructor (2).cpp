//INSIDE CONSTRUCTOR
#include<iostream>
using namespace std;

struct A {
  A() { 
    cout << " A ";
	try{
    throw 1; // Note: Constructor didn’t complete normally !
	} catch (int i) {
     cout << i; 
	}
  }
  ~A() { cout << " ~A "; }
};

int main() {
  try {
    A a1;
  } catch (int i) {
    cout << i;
  }
  system("pause");
}
