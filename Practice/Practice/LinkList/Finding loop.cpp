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

int loop(struct node* head)
{
	struct node *slow = head, *fast = head;
	if(head == NULL)
		return 0;
	while(slow && fast)
	{
		fast = fast->next;
		if(!fast)
			return 0;
		if(fast == slow)
			return 1;
		fast = fast->next;
		if(fast == slow)
			return 1;
		slow = slow->next;
	}
}
int main()
{
  /* Start with the empty list */
  struct node* head = NULL;
 
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 10);
  printf("%p\t%d\t %p\t%d\n",head,*head,(head+8),*(head+1));
  display(head);
  /* Create a loop for testing */
  head->next->next->next->next = head;
  if(loop(head))
	  printf("loop found\n");
 // display(head);
 
  system("pause");
  return 0;
}