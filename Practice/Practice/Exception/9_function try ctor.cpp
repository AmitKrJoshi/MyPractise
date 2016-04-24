/*The handler of a function try block of a constructor, 
* catches the exception but it cannot continue the 
* object's construction
* Note1: destructor NOT called
* Note2: exception is re-thrown automatically in the ctor and caught in ‘main’ again
*/
#include<iostream>
using namespace std;
struct A {
  A() try{  
    cout << "A\n";
    throw 1;
  } catch (int i) {
     cout << "ctor-try\n"; 
  }
  ~A() { cout << "~A\n"; }
};

int main() {
  try {
    A a1;
  } catch (int i) {
    cout << "main\n";
  }
  system("pause");
}