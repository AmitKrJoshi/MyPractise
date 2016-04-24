/*
When the handler declares a reference to a non-constant object,
any changes to the referenced object are changes to the 
temporary object and will have effect should that object be rethrown.
An object of ‘A’ is created at Line 1, 2, 3, 4
*/
#include<iostream>
using namespace std;

struct A {
        int m;
        A() { m = 0; cout << " A "; }
        A(const A& rhs) { m = rhs.m; cout << " A(A&) "; }
        ~A() { cout << " ~A " ;  }
};

void f() {
  try {
    A a;				// Line1
    a.m = 5;
    throw a;            // Line2
  } catch (A& a) {       // Line3		//NOTE : // No object is created here 
    cout << " f:" << a.m << " ";
    a.m++;				//Only a copy of the temporary is modified.
    throw;				//The unmodified ‘temporary’ is rethrown. No new copy made here.      
  }
}

int main() {
  try {
    f();
  } catch (A a) {       // Line4
    cout << " main:" << a.m << " ";
  }
  system("pause");
}