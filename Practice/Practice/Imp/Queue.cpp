#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *link;
}Qnode;

void addQ(Qnode **, Qnode **, int);

int deleteQ(Qnode**, Qnode**);

void Q_display(Qnode *);

int count(Qnode *);

/* OR we can implement like Below
struct node
{
    int data;
    struct node *link;
}node;

typedef struct node Qnode;

void addQ(struct node **, struct node **, int);

void deleteQ(struct node**, struct node**);

*/


int main()
{
	Qnode *front, *rear;
	int item;

	front = rear = NULL;

	addQ(&front, &rear, 11);
	addQ(&front, &rear, 12);
	addQ(&front, &rear, 13);
	addQ(&front, &rear, 14);
	addQ(&front, &rear, 15);
	addQ(&front, &rear, 16);
	
	Q_display(front);
	printf("\nNumber of items in Queue : %d\n",count(front));
	printf("Item Deleted form queue : %d\n",deleteQ(&front, &rear));

    Q_display(front);
    printf("\nNumber of items in Queue : %d\n",count(front));
	printf("Item Deleted form queue : %d\n",deleteQ(&front, &rear));

    Q_display(front);
    printf("\nNumber of items in Queue : %d\n",count(front));
	printf("Item Deleted form queue : %d\n",deleteQ(&front, &rear));

    Q_display(front);
    printf("\nNumber of items in Queue : %d\n",count(front));
	printf("Item Deleted form queue : %d\n",deleteQ(&front, &rear));

    Q_display(front);
    printf("\nNumber of items in Queue : %d\n",count(front));
	system("pause");
	return 0;
}

void addQ(Qnode **front, Qnode **rear, int item)
{
	Qnode *temp;

	temp = (Qnode*)malloc(sizeof(Qnode));
	temp->data = item;
	temp->link = NULL;

	if(*front == NULL)
		*front = temp;
	else
		(*rear)->link = temp;

	*rear = temp;
}


int deleteQ(Qnode **front , Qnode **rear)		//Remove from front
{
	Qnode *temp;
	int item;

	if(*front == NULL)		//If queue is empty
		printf("Empty Queue\n");
	else
	{						//Delete the node
		temp = *front;
		*front = temp->link;
		item = temp->data;
		free(temp);
		if(*front == NULL)		//If on deletion the queue has become empty
			*rear = NULL;

		return item;
	}
}

void Q_display(Qnode *front)
{
	printf("Front->");
	//Traverse the entire List
	while(front !=NULL)
	{
		printf(" %d ",front->data);
		if(front->link == NULL)
			printf("<-Rear");
		
		front = front->link;

	}
	
	printf("\n");
}

int count(Qnode *front)
{
	int c = 0;
	while(front !=NULL)
	{
		front = front->link;
		c++;
	}
	return c;
}
