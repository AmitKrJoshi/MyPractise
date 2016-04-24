/*If we replace the body of while loop in program "Quick_Find_Algorithm_to_find_connectivity.cpp", 
we have a program that meets the same specification but do less computation.*/
#include<cstdio>
#include<iostream>

#define N 10
int main()
{
	int i,j, p, q, temp, id[N];
	for(i =0; i< N; i++)
	{
		id[i] = i;
		printf("%d ",id[i]);
	}
	printf("\n");

	while(scanf_s("%d %d \n",&p, &q,2) == 2)
	{
		for(i = p; i != id[i]; i = id[i]);
		for(j = q; j != id[j]; j = id[j]);
		if(i == j) continue;
		id[i] = j;	//Union Operation
			printf("%d %d :", p, q);
			for(i =0; i< N; i++)
			{
				printf("%d ",id[i]);
			}
			printf("\n");
	}
	system("pause");
	return 0;
}