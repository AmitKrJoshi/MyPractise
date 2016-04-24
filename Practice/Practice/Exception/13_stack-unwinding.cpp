#include<iostream>
using namespace std;

struct A {
  int i;
  static int count;
  A() { count++; i = count; cout << " A" << i; }
  A(const A& rhs) { count++; i = count ; cout << " A(A&)" << i; }
 ~A() { cout << " ~A" << i; }
};

int A::count = 0;

void f2() {
  A a6;
  throw a6;
}
void f1() {
  static A a4;
  A a5;
  f2();
}

A a1;

int main() {
  try {
    A a2;
    A* a3 = new A;
    f1();
  } catch (...) {
    cout << " caught ";
  }
  system("pause");
}
