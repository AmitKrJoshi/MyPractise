#include<iostream>

#define NUM_A 1
#define NUM_B 2

typedef int (*_fp)(int,int);

int sum(int x , int y){
	return (x + y);
}

int sum_using_fp_as_parameter(int x, int y, _fp fp_pointer){
	return (fp_pointer(x , y));
}
void function_pointer_as_parameter(){
	int result = sum_using_fp_as_parameter(NUM_A, NUM_B, &sum);	
	std::cout << "Function Pointer as varialbe:\t" << NUM_A << " + " << NUM_B << " = " << result << std::endl;
}

int main(){
	function_pointer_as_parameter();
	system("pause");
	return 0;
}