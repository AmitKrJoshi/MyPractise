/*sort function to sort any type of data

qsort(void *array,
      size_t length,
	  size_t item_size,
	  int (*compare)(const void*, const void*));

NOTE : It doesn’t make a copy, it actually modifies the original array.

Parameters :
	  array : Pointer to an array
	  length : Length of array
	  item_size : size of each element in array
	  compare : Pointer to a function that compare two items in the array

Description :
	  > The qsort() function compares pairs of values over and over again, and if they are in the wrong order, the computer will switch them.
	  > Comparator function will tell qsort() which order a pair of elements should be in. It does this by returning three different values +,-,0
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare_scores(const void* score_a, const void* score_b){
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a-b;
}

int compare_scores_desc(const void* score_a, const void* score_b){
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b-a;
}

typedef struct{
	int width;
	int height;
}rectangle;


int compare_areas(const void* a, const void* b){
	rectangle *ra = (rectangle*)a;
	rectangle *rb = (rectangle*)b;

	int area_a = (ra->width * ra->height);
	int area_b = (rb->width * rb->height);
	return area_a - area_b;
}

int compare_names(const void* a, const void* b){
	char ** sa = (char **)a;
	char ** sb = (char **)b;
	return strcmp(*sa,*sb);
}

int compare_areas_desc(const void* a, const void* b)
{
	//return -compare_areas(a, b);
	return compare_areas(b, a);
}

int compare_names_desc(const void* a, const void* b)
{
	//return compare_names(b, a);
	return -compare_names(a, b);
}

int main(){
	int scores[] = {543,323,32,554,11,3,112};
	int i;
	qsort(scores, 7, sizeof(scores[0]),compare_scores_desc);
	puts("These are the scores in order:");
	for (i = 0; i < 7; i++) {
		printf("Score = %i\n", scores[i]);
	}
	puts("----------------------------------------------");
	char *names[] = {"Karen", "Mark", "Brett", "Molly"};
	qsort(names, 4, sizeof(char*), compare_names);
	puts("These are the names in order:");
	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]);
	}
	puts("-----------------------------------------------");
	qsort(names, 4, sizeof(char*), compare_names_desc);
	puts("These are the names in order:");
	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]);
	}
	puts("-----------------------------------------------");
	system("pause");
	return 0;
}