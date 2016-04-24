#include<cstdio>
#include<iostream>

#define N 10
int main()
{
	int i, p, q, temp, id[N];
	for(i =0; i< N; i++)
	{
		id[i] = i;
		printf("%d ",id[i]);
	}
	printf("\n");

	while(scanf_s("%d %d \n",&p, &q,2) == 2)
	{
		if(id[p] == id[q])
			continue;
		temp = id[p];
		for( i=0; i<N; i++)
			if(id[i] == temp)
				id[i] = id[q];

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