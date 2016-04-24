/*
When an exception object is rethrown, the entire exception 
object caught is rethrown, not just the part that was 
accessible to the rethrowing catch handler.
*/
#include<iostream>
using namespace std;

struct A {
  A() { cout << " A "; }
  A(const A& rhs) { cout << " A(A&) "; }
  ~A() { cout << " ~A " ;  }  };

struct B : public A {
  B() { cout << " B "; }
  B(const B& rhs) { cout << " B(B&) "; }
  ~B() { cout << " ~B " ;  }  };

void f() {
  try {
    B b1;
    throw b1;
  } catch (A a) {
    cout << " f-caught ";
    throw;
  }
}
int main() {
  try {   f();  } 
  catch (B b) { 
    cout << " main-caught ";    
  }
  system("pause");
}
