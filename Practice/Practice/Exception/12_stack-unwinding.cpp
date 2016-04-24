#include<iostream>
using namespace std;

 /*
 The process of calling destructors for automatic objects constructed 
 on the path from a try block to a throw-expression is called ‘stack unwinding’.
 */

  struct A {
  A() { cout << " A \n";   }
  ~A() { cout << " ~A \n"; }
};

int main() {
  try {
    A a1, a2;
    throw 1;
  } catch (int i) {
    cout << "caught\n";
  }
  system("pause");
}
