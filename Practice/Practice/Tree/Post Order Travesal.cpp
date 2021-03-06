#include"header.h"


struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

struct Stack{
	struct treeNode *tNode;
	struct Stack *next;
};

struct Stack * createStack(){
	return NULL;
}

void push(struct Stack ** head, struct treeNode *value){
	struct Stack *temp = NULL;
	temp = (struct Stack*)malloc(sizeof(struct Stack));
	if(!temp){
		printf("Mem alloc Failed\n");
		return;
	}
	else{
		temp->tNode = value;
		temp->next = *head;
		*head = temp;
	}
}

int EmptyStack(struct Stack *head){
	return (head == NULL);
}

struct treeNode* pop(struct Stack **head){
	if(EmptyStack(*head)){
		printf("Stack underFlow\n");
		return NULL;
	}
	else{
		struct Stack *top = *head;
		struct treeNode * value = top->tNode;
		*head = top->next;
		free(top);
		return value;
	}
}

struct treeNode* Top(struct Stack *head){
	if(EmptyStack(head))
		return NULL;
	return head->tNode;
}

void deleteStack(struct Stack **head){
	if(EmptyStack(*head))
		return;
	else{
		struct Stack *top = *head, *temp;
		while(top->next){
			temp = top->next;
			top->next = temp->next;
			free(temp);
		}
		free(top);
	}
}

void printStack(struct Stack *node)
{
    printf("\nList is: ");
    while(node != NULL)
    {
		if(node->tNode != NULL)
			printf("%d->", node->tNode);
		else
			printf("%d", node->tNode);
        node = node->next;
    }
}

struct treeNode *newNode(int data){
	struct treeNode * node = (struct treeNode *)malloc(sizeof(struct treeNode *));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void displayTree(int level,struct treeNode* root){
	int i;
	printf("\n");
	if(root){		
		displayTree(level+1, root->right);
        for(i=0 ; i<level ; i++)
            printf("    ");
        if(level == 0)
            printf("%d(R)", root->data);
        else
            printf("%d", root->data);
		displayTree(level+1, root->left);
		       
	}
}

void RecursivePostOrder(struct treeNode* root){
	if(root){
		RecursivePostOrder(root->left);
		RecursivePostOrder(root->right);
		printf("%d", root->data);
	}
}

void NonRecursivePostOrder(struct treeNode* root){
	struct Stack *s = createStack();
	while(1){
		if(root){
			push(&s,root);
			root = root->left;
		}
		else{
			if(EmptyStack(s))
				break;
			else{
				if(Top(s)->right == NULL){
					root = pop(&s);
					printf("%d ",root->data);
					if(root == Top(s)->right){
						printf("%d ",Top(s)->data);
						pop(&s);
					}
				}
			}
			if(!EmptyStack(s))
				root = Top(s)->right;
			else
				root = NULL;
		}
	}
	deleteStack(&s);
}

int main(){
	struct treeNode * root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);

	displayTree(0,root);
	printf("\nRecursive PostOrder Traversal: \n");
	RecursivePostOrder(root);
	printf("\n");
	printf("\nNonRecursive PostOrder Traversal: \n");
	NonRecursivePostOrder(root);
	printf("\n");
	system("pause");
	return 0;
}