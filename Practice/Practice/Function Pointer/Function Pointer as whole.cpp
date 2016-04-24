#include<iostream>
using namespace std;

#define NUM_A 1
#define NUM_B 2

int sum(int a, int b){		//For a time being adding num_a and num_b
	return (NUM_A + NUM_B);
}
typedef int (*FUNCTION_POINTER)(int ,int);


void fp_as_variable(){
	FUNCTION_POINTER _fp = &sum;
	cout << "As Variable:\t"<<(*_fp)(0,0)<<endl;
}

int get_sum(int a, int b, FUNCTION_POINTER _fp){
	int result = (*_fp)(a,b);
	return result;
}
void fp_as_parameter(){
	int result = get_sum(0,0,&sum);
	cout << "As Parameter:\t" <<result<<endl;
}

FUNCTION_POINTER return_sum(){
	return &sum;
}
void fp_as_return_type(){
	FUNCTION_POINTER _fp = return_sum();
	cout << "As return Type:\t"<<_fp(1,1) << endl;
}
int main(){
	fp_as_variable();
	fp_as_parameter();
	fp_as_return_type();
	system("pause");
	return 0;
}