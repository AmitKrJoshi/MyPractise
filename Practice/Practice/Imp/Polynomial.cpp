#include<stdio.h>
#include<stdlib.h>

struct Polynode
{
	float coeff;
	int exp;
	struct Polynode *link;
}typedef node;

void append(node **Node, float coeff, int exp)
{
	node *temp;
	temp = *Node;

	if(*Node == NULL)
	{
		*Node = (node*)malloc(sizeof(node));
		temp = *Node;
        temp->coeff = coeff;
        temp->exp = exp;
        temp->link = NULL;
	}
	else
	{
		while(temp->link != NULL)
			temp = temp->link;

		temp->link = (node*)malloc(sizeof(node));
		temp = temp->link;

		temp->coeff = coeff;
		temp->exp = exp;
		temp->link = NULL;
	}
}

void display(node * Node)
{
	char sign = '+';
	while(Node != NULL)
	{
		if(Node->link != NULL)
			printf("%.1fx^%d %c ",Node->coeff,Node->exp,sign);
		else
			printf("%.1fx^%d",Node->coeff,Node->exp);
		Node = Node->link;
	}
	printf("\b\b\b");
}

int main()
{
	node *first, *second, *third;
	first = second = third = NULL;
	append(&first, 1.4, 5);
	append(&first, 1.5, 4);
	append(&first, 1.7, 2);
	append(&first, 1.8, 1);
	append(&first, 1.9, 0);

	display(first);
	printf("\n");
	system("pause");
	return 0;
}
