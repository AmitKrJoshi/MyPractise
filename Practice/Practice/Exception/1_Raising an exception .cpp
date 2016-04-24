#include<iostream>
class Overflow { 
  public:
    Overflow(char, double, double) { /* … */ }
};

void f(double x) {
  throw Overflow('+', x , 3.145);
}
int main() {
 try {
   //…
	std::cout << "Through\n";
   f(1.2);
   //…
 } catch (Overflow& o) {
	 std::cout << "Catch\n";
    // handle exceptions of type overflow here
 }
 system("pause");
}
