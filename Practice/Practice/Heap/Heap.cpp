// C implementation of Heap Sort
#include <stdio.h>
#include <stdlib.h>
 
// A heap has current size and array of elements
struct MaxHeap
{
    int size;
    int* array;
};

int* TREE; // global variable used for printing the entire tree
 
// A utility function to swap to integers
void swap(int* a, int* b) { int t = *a; *a = *b;  *b = t; }
 
void printTree(void)
{
// lazy way to print the entire tree...
  int* array = TREE;
  printf("                        %3d\n\n ", array[0]);
  printf("            %3d                     %3d\n\n", array[1], array[2]);
  printf("      %3d         %3d         %3d         %3d\n\n", array[3], array[4], array[5], array[6]);
  printf("   %3d   %3d   %3d   %3d   %3d   %3d   %3d   %3d\n\n", array[7], array[8], array[9], array[10], array[11], array[12], array[13], array[14]);
  printf("%3d\n", array[15]);

  printf("\n");
}


// The main function to heapify a Max Heap. The function assumes that 
// everything under given root (element at index idx) is already heapified
void Heapify(struct MaxHeap* maxHeap, int idx)
{
	printf("heapify [%idx] = %idx\n", idx, maxHeap->array[idx]);
	printTree();
    int largest = idx;  // Initialize largest as root
    int left = (idx << 1) + 1;  // left = 2*idx + 1
    int right = (idx + 1) << 1; // right = 2*idx + 2
 
    // See if left child of root exists and is greater than root
    if (left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest])
        largest = left;
 
    // See if right child of root exists and is greater than the largest so far
    if (right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest])
        largest = right;
 
    // Change root, if needed
    if (largest != idx)
    {
        swap(&maxHeap->array[largest], &maxHeap->array[idx]);
        Heapify(maxHeap, largest);
    }
}
 
// A utility function to create a max heap of given capacity
struct MaxHeap* createAndBuildHeap(int *array, int size)
{
    int i;
    struct MaxHeap* maxHeap = (struct MaxHeap*) malloc(sizeof(struct MaxHeap));
    maxHeap->size = size;   // initialize size of heap
    maxHeap->array = array; // Assign address of first element of array
 
    // Start from bottommost and rightmost internal mode and heapify all
    // internal modes in bottom up way
    for (i = (maxHeap->size - 2) / 2; i >= 0; --i)
        Heapify(maxHeap, i);
    return maxHeap;
}
 
// The main function to sort an array of given size
void heapSort(int* array, int size)
{
    // Build a heap from the input data.
    struct MaxHeap* maxHeap = createAndBuildHeap(array, size);
 
    // Repeat following steps while heap size is greater than 1. The last
    // element in max heap will be the minimum element
    while (maxHeap->size > 1)
    {
       // The largest item in Heap is stored at the root. Replace it with the 
       // last item of the heap followed by reducing the size of heap by 1.
        swap(&maxHeap->array[0], &maxHeap->array[maxHeap->size - 1]);
        --maxHeap->size;  // Reduce heap size
 
        // Finally, heapify the root of tree.
        Heapify(maxHeap, 0);
    }
}
 
// A utility function to print a given array of given size
void printArray(int* arr, int size)
{
    int i;
    for (i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}
 
/* Driver program to test above functions */
int main()
{
	//int arr[] = {5,45,2,87,43,9,78,1,0,65,56,4,67,10,99,46};
	int arr[] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
	TREE = arr;
    printf("Given array is \n");
	printTree();
    //printArray(arr, size);
 
    heapSort(arr, size);
 
    printf("\nSorted array is \n");
	printTree();
    //printArray(arr, size);
	system("pause");
    return 0;
}