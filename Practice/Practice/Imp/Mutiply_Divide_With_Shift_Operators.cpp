/*#if 0
Left Shift ">>" means we are Multiplying.
	i.e. if we do "<< 1" (Left shift by 1) we are Multiplying by 2 :(2^n = 2^1 = 2): (1<<1 = 1*2^1 =2)
				  "<< 2" (Left shift by 2) we are Multiplying by 4 :(2^n = 2^2 = 4): (1<<2 = 1*2^2 =4)

Right Shift ">>" means we are dividing.
	i.e. if we do ">> 1" (right shift by 1) we are dividing by 2 (2^n = 2^1 = 2)
				  ">> 2" (right shift by 2) we are dividing by 4 (2^n = 2^2 = 4)
#endif
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 2, j = 60,k,l=1;
	printf("%d * %d = %d\n",i,i,(i<<1));
	printf("%d * %d = %d\n",i,(i<<1),(i<<2));

	printf("%d / %d = %d\n",j,i,(j>>1));
	printf("%d / %d = %d\n",j,(i<<1),(j>>2));
	system("pause");
	return 0;
}