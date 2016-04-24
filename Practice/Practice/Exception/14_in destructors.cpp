/*
If a destructor called during ‘stack unwinding’ 
exits with an exception, “terminate()” is called.
*/
#include<iostream>
using namespace std;
struct A {
  A() { cout << " A ";   }
  A(const A& rhs) { cout << " A(A&) \n"; }
  ~A() { throw 1; }
};

int main() {
  try {
    A a1;
    throw a1;
  } catch (...) {
    cout << "caught\n";
  }
  system("pause");
}