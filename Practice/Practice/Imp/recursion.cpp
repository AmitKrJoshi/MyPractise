#include<stdio.h>
#include<stdlib.h>

int sum(int start, int end){
	int result = start;
	if(start == end)
		return result;

	result = sum(start+2,end);
	
	//printf("%s %d %d %d\n",__FUNCTION__,start,end,result);
	result = result + start;
	//printf("2--%s %d %d %d\n",__FUNCTION__,start,end,result);
	return result;
}
/*
void sum(int start, int end){
	int i,result =0;
	for(i=start;i<=end;i+=2){
		result = i+result;
	}
	printf("%d\n",result);
}
*/
int main(){
	//sum(3,3);
	printf("%d\n",sum(3,7));
	system("pause");
	return 0;
}