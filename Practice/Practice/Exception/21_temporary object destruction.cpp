#include<iostream>
using namespace std;
struct E {
  int i;
  static int count;
  E() { count++; i = count; cout << " E" << i; }
  E(const E& rhs) { count++; i = count ; cout << " E(E&)" << i; }
 ~E() { cout << " ~E" << i; }
};

int E::count = 0;

int main() {
  try {
    E e1;                   // Line1
    throw e1;               // Line2
  } catch (E e3) {          // Line3
    cout <<  " " <<  e3.i ; // Line4
  }                         // Line5
  system("pause");
}
