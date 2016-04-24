#include<stdio.h>
#include<stdlib.h>

 
/* Link list node */
struct node
{
  int data;
  struct node* next;
};
 
void push(struct node** head_ref, int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data  = new_data;
	new_node->next = *head_ref;
	*head_ref    = new_node;
}

void display(struct node* head)
{
    struct node *temp = head;
    while(temp!=NULL)
    {
    printf("%d",temp->data);
    temp=temp->next;
	if(temp!=NULL)
		printf("->");
    }
	printf("\n");
}

void ReverseList(struct node ** head)
{
		struct node *first=NULL, *rest = NULL;
		if(!(*head))
			return;

		first = *head;
		rest = (*head)->next;

		if(!rest)
			return;

		printf("1. %u \n", &rest);
		ReverseList(&rest);
		printf("Data:%d rest->data: %d &reset: %u **head:%u\n", (*head)->data, rest->data, &rest, **head);
		first->next->next = first;
		printf("2. %u \n", &rest);
		first->next = NULL;
		printf("3. %u \n", &rest);
		//printf("%d %d %u\n", (*head)->data, rest->data, &rest);
		*head = rest;
		//printf("%d\n",(*head)->data);
}

int main()
{
  /* Start with the empty list */
  struct node* head = NULL;
 
  push(&head, 8);
  push(&head, 7);
  push(&head, 6);
  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);
  //printf("%p\t%d\t %p\t%d\n",head,*head,(head+8),*(head+1));
  display(head);

  ReverseList(&head);
   display(head);
 
  system("pause");
  return 0;
}