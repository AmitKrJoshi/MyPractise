#include<iostream>
using namespace std;

struct E {
	int i;
	static int count;
	E() { count++; i = count; cout << " E\t" << i <<endl; }
	E(const E& rhs) { count++; i = count ; cout << " E(E&)\t" << i << endl; }
	~E() { cout << " ~E\t" << i <<endl; }
};

int E::count = 0;

void f() {
  E  e;
  throw e;
}

void fun() {
  try {
    f();
  } catch (E  e) {
    cout << "fun\n";
    throw 1;
  }
}

int main() {
  try {
    fun();
  } catch (int i) {
    cout << "main\n";
  }
  system("pause");
}
