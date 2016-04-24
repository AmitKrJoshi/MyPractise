/*
An object that is partially constructed or partially destroyed 
will have destructors executed for all of its fully constructed sub-objects.

Note ‘when’ the dtor is called. It is not ‘just before’ leaving the destructor.
It is just before leaving the ‘try’ block of the ctor
*/

#include<iostream>
using namespace std;

struct O {
  O() { cout << "O\n"; }
 ~O() { cout << "~O\n"; }
};
 
struct A {
  A() try{  
    cout << " A\n";
    throw 1;
  } catch (int i) {
     cout << "ctor-try\n"; 
  }
  ~A() { cout << " ~A \n"; }
 private:
  O obj;  // data-member
};

int main() {
  try {
    A a1;
  } catch (int i) {
    cout << "main\n";
  }
  system("pause");
}