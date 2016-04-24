#include<iostream>
using namespace std;
struct A {
  A() { cout << " A\n ";   }
  A(const A& rhs) { cout << "A(A&) \n"; }
  ~A() { 
    cout << "~A \n" ; 
    throw 1; 
  }
};

int main() {
  try {
    A a1;
  } catch (...) {
    cout << "caught\n";
  }
  system("pause");
}
