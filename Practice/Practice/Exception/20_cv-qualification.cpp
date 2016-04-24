#include<iostream>
using namespace std;

class A {
  public:
    A(const volatile A& ) { }
    A() { }
};
int main()
{
  try {
    const volatile A a;
    throw a;
  } catch (A ) { cout << " A "; }
    catch (const A ) { cout << " const A "; }
    catch (const volatile A ) { cout << " const volatile A "; }
	system("pause");
}

