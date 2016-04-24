/*
An object that is partially constructed or partially destroyed
will have destructors executed for all of its fully constructed sub-objects.
*/

#include<iostream>
using namespace std;

struct O {
  O() { cout << "O\n"; }
 ~O() { cout << "~O\n"; }
};
 
struct A : public O {
  A() try{  
    cout << " A\n";
    throw 1;
  } catch (int i) {
     cout << "ctor-try\n"; 
  }
  ~A() { cout << " ~A \n"; }
};

int main() {
  try {
    A a1;
  } catch (int i) {
    cout << "main\n";
  }
  system("pause");
}
