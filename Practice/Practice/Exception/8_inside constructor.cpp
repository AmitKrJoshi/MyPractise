//INSIDE CONSTRUCTOR
#include<iostream>
using namespace std;

struct A {
  A() { 
    cout << " A ";
    throw 1; // Note: Constructor didn’t complete normally !
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
