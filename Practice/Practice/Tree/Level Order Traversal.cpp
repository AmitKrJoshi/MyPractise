#include"header.h"

struct queueNode{
	struct linkList *front;
	struct linkList *rear;
};

struct linkList{
	struct treeNode * data;
	struct linkList *next;
};

struct treeNode{
	int value;
	struct treeNode *left;
	struct treeNode *right;
};

struct queueNode * createQueue(){
	struct queueNode *Q;
	Q = (struct queueNode*)malloc(sizeof(struct queueNode));
	if(!Q)
		return NULL;
	Q->front = Q->rear = NULL;
	return Q;
}

int isEmptyQueue(struct queueNode *Q){
	if(!Q)
		return 1;
	return (Q->front == NULL);
}

int queueSize(struct queueNode *Q){
	if(isEmptyQueue(Q))
		return 0;
	struct linkList *temp = Q->front;
	int count = 0;
	while(temp){
		temp = temp->next;
		count++;
	}
	return count;
}

void EnQueue(struct queueNode *Q, struct treeNode *data){
	struct linkList *newNode;
	newNode = (struct linkList*)malloc(sizeof(struct linkList));
	if(!newNode)
		printf("No Space\n");
	else{
		newNode->data = data;
		newNode->next = NULL;

		if(Q->rear != NULL)
			Q->rear->next = newNode;

		Q->rear = newNode;

		if(Q->front == NULL)
			Q->front = Q->rear;
	}
}

struct treeNode *DeQueue(struct queueNode *Q) {
    if (isEmptyQueue(Q)) {
        printf("Error: Queue underflow\n");
        return NULL;
		}
	else {
		struct linkList *tmp = Q->front;		
		struct treeNode *value = Q->front->data;
		Q->front = Q->front->next;
		// queue has only one node
		if(Q->front == NULL)
	           Q->rear = NULL;
		free(tmp);
		return value;
	}
}

void DeleteQueue (struct queueNode **Q){
	if(isEmptyQueue(*Q))
		return;
	else{
		struct linkList *temp,*p;
		p = (*Q)->front;
		while(p){
			temp = p;
			p = p->next;
			free(temp);
		}
		free(*Q);
		*Q = NULL;
	}
}

struct treeNode * CreateNode(int data){
	struct treeNode *root = (struct treeNode *)malloc(sizeof(struct treeNode));
	root->value = data;
	root->left  = NULL;
	root->right = NULL;
	return (root);
}
void Display(int level, struct treeNode *root){
	int i;
	printf("\n");
	if(root){
		Display(level+1,root->right);

		for(i=0; i<level ; i++)
			printf("\t");

		if(level ==0)
			printf("%d(ROOT) ",root->value);
		else
			printf("%d ",root->value);

		Display(level+1, root->left);
	}

}

void LevelOrderTravesal(struct treeNode * root){
	struct queueNode *Q = createQueue();
	struct treeNode *temp;
	if(!root)
		return;
	
	EnQueue(Q,root);
	while(!isEmptyQueue(Q)){
		temp = DeQueue(Q);
		printf("%d ",temp->value);
		if(temp->left)
			EnQueue(Q,temp->left);
		if(temp->right)
			EnQueue(Q,temp->right);		
	}
	DeleteQueue(&Q);
}
int main(){
	struct treeNode * root	= CreateNode(1);
	root->left				= CreateNode(2);
	root->right				= CreateNode(3);
	root->left->left		= CreateNode(4);
	root->left->right		= CreateNode(5);
	root->right->left		= CreateNode(6);

	Display(0,root);

	LevelOrderTravesal(root);
	system("pause");
	return 0;
}