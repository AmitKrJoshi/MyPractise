#include<iostream>
using namespace std;

#define NUM_A 1
#define NUM_B 2

typedef int (*_fp)(int, int);

int sum(int x, int y){
	return (x + y);
}

_fp call_to_fp(){
	return &sum;
}

void function_pointer_as_return_value(){
	int result = (*call_to_fp())(NUM_A, NUM_B);
	cout << "Function Pointer as return value:\t" << NUM_A << " + " << NUM_B << " = " << result << endl;
	
}

int main(){
	function_pointer_as_return_value();
	system("pause");
	return 0;
}