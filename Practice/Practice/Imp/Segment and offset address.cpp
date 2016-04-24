#include<dos.h>
#include"header.h"

int main(){
	int ch;
	
	cout << "\nComplete address : "<< &ch;
	cout << "\nSegment Address : " <<hex<<FP_SEG(&ch);
	cout << "\nOffset Address : " <<hex<<FP_OFF(&ch);
}