#include<iostream>
using namespace std;


struct E {
  E() { cout << " E() "; }
  E(const E& rhs) { cout << " E(E&) "; }
};

int main() {
  try {
    E e1;            
    throw e1; 
  } catch (E e3) {/*catch(...)*/
    cout << " caught ";
  }
  system("pause");
}
