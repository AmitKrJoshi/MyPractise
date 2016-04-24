#include <stdio.h>
#include<stdlib.h>

void buildHeap(int array[], int n);
void heapify(int array[], int n,  int i);
void swap(int array[], int indexA, int indexB);
void printTree(void);

int* TREE; // global variable used for printing the entire tree

int main(int argc, char *argv[])
{
int heapArray[] = {0, 1, 2, 3, 4, 5, 6 , 7, 8 ,9 ,10 , 11, 12, 13 ,14 ,15};
int n = sizeof(heapArray)/sizeof(int);
TREE = heapArray;

printTree();
buildHeap(heapArray, n);
printTree();
system("pause");
return 0;
}

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

void buildHeap(int array[], int n)
{
  printf("buildHeap\n");
  // changed starting condition
  int i = n/2;
  // changed from i-- to --i so we get to zero
  while(i > 0) heapify(array, n,--i);
}

void heapify(int array[], int n,  int i)
{
  printf("heapify [%i] = %i\n", i, array[i]);
  printTree();
  // mark nodes initially as -1 to distinguish from "valid" zero
  int childLeft = -1, childRight = -1;
  int largest = i;	//i is index

  // changed the way we check for valid nodes:
  if(2*i+1<n) childLeft = 2*i+1;
  if(2*i + 2<n) childRight = 2*i + 2;

  // see if any nodes are invalid now:
  if(childLeft < 0 && childRight < 0) return;
  if(childLeft < 0) childLeft = childRight;
  if(childRight < 0) childRight = childLeft;

  printf("child left [%i] = %i  child right [%i] = %i\n", childLeft, array[childLeft], childRight, array[childRight]);
  if(array[childLeft] > array[i]) largest = childLeft;
  if(array[childRight] > array[largest]) largest = childRight;
  if(largest != i)
  {
    swap(array, i,largest);
    heapify(array, n, largest);
  }
}

void swap(int array[], int indexA, int indexB)
{
  printf("swap [%i] %i with [%i] %i\n", indexA, array[indexA], indexB, array[indexB]);
  int temp = array[indexA];
  array[indexA] = array[indexB];
  array[indexB] = temp;
}