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
	struct node *temp = *head_ref;
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data  = new_data;
	new_node->next = NULL;

	if(!*head_ref)
		*head_ref = new_node;
	else{
		while(temp->next != NULL)
			temp=temp->next;
		
		temp->next = new_node;
	}
	//*head_ref    = new_node;
	
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
/*void ReverseList(struct node** head)
{
	struct node* first=NULL, *rest=NULL;
	first = *head;
	rest = first->next;

	if(rest==NULL)
		return;

	ReverseList(&rest);
	first->next->next = first;
	first->next = NULL;

	*head = rest;
}*/
/*
void ReverseList(struct node** head)
{
	struct node* current = NULL, *prev = NULL,*next = NULL;
	current = *head;
	int count = 1;
	while(current != NULL ){
		count++;
		next = current->next;
		current->next = prev;
		prev = current;
		current= next;
	}
	*head = prev;	
}
*/
struct node* ReverseListInPair(struct node* head,int pairValue)
{
	struct node* current = NULL, *prev = NULL,*next = NULL;
	current = head;
	int count = 0;
	while(current != NULL && count < pairValue){
		count++;
		next = current->next;
		current->next = prev;
		prev = current;
		current= next;
	}
	if(next != NULL)
		head->next = ReverseListInPair(next,pairValue);

	return prev;	
}

int main()
{
  /* Start with the empty list */
  struct node* head = NULL;
  int pairValue;
  printf("Enter Pair Value : ");
  scanf("%d",&pairValue);
  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 5);
  push(&head, 6);
  push(&head, 7);
  push(&head, 8);
  //printf("%p\t%d\t %p\t%d\n",head,*head,(head+8),*(head+1));
  display(head);
  //ReverseList(&head);
  display(head);
  head = ReverseListInPair(head,pairValue);
  display(head);
 
  system("pause");
  return 0;
}