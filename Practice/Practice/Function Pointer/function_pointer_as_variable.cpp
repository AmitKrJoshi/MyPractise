#include<iostream>
using namespace std;

#define NUM_A 1
#define NUM_B 2

// define a function pointer type
typedef int (*_fp)(int,int);
//note that the typedef name is indeed _fp

// an actual standalone function
static int sum(int a, int b) {
    return a + b;
}

void fp_as_variable(){
	_fp fp_pointer = &sum;	
	cout << "Function Pointer as variable:\t " << NUM_A << " + " << NUM_B << " = " << fp_pointer(NUM_A, NUM_B)<<endl;
}

int main(){
	fp_as_variable();
	system("pause");
	return 0;
}
