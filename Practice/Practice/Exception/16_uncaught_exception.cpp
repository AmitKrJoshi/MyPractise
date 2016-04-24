#include<iostream>
using namespace std;

class A {
    int instId;
    static int noOfInst;
  public:
    A() {
      instId = ++noOfInst;
      cout << "Ctor" << instId << "(" << uncaught_exception() << ") " <<endl;
    }
    A(const A& a) {
      instId = ++noOfInst;
      cout << "CopyCtor" << instId << "(" << uncaught_exception() << ") " << endl;	//It is supposed to print 1
    }
    void print() { cout << instId; }
};

int A::noOfInst = 0;
int main() {
  try {
    A a1;
    throw a1;
  } catch (A& a2) {
      cout << "inside-handler";
      a2.print();
      cout <<endl<< "(" << uncaught_exception() << ") " <<endl;
  }
  cout << "main(" << uncaught_exception() << ") "<<endl;
  system("pause");
}