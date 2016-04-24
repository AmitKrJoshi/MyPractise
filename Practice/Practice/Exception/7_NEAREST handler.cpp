#include<iostream>
using namespace std;

void f(int i) {
  throw i;
}

void fun(int i) {
  try {
    f(i);
  } catch (int x) {
	  //throw x;		//If we enable this than main will be called
    cout << "fun\n";
  }
}

int main() {
  try {
    fun(2);
  } catch (int x) {
    cout << "main\n";
  }
  system("pause");
}