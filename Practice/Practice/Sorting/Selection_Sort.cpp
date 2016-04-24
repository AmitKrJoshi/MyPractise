#if 0
Selection Sort
----------------------------------------------------------------------------------
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is 
picked and moved to the sorted subarray.
----------------------------------------------------------------------------------

arr[] = 64 25 12 22 11
// Find the minimum element in arr[0...4] and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4] and 
// place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4] and 
// place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4] and 
// place it at beginning of arr[3...4]
11 12 22 25 64 
-------------------------------------------------------------------------------------
Time Complexity: O(n*n) as there are two nested loops.

Auxiliary Space: O(1)

The good thing about selection sort is it never makes O(n) swaps and can be useful when memory write is a costly operation.
#endif

#include<stdio.h>
#include<stdlib.h>

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void selection_sort(int arr[], int size)
{
	int i,j, min_index;
	for(i=0; i<size-1; i++)
	{
		min_index = i;
		for(j=i+1; j<size; j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j;
			}
		}
		swap(&arr[min_index],&arr[i]);
	}

}

void printList(int arr[], int size)
{
	int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int size = sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,size);
	printf("New Sorted Array\n");
	printList(arr,size);
	system("pause");
	return 0;
}