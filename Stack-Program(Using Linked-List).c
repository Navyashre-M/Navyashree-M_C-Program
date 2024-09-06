#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node* createNode(int data)
{
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  if(!newNode)
  {
    printf("Memory allocation failed\n");
    return NULL;
  }
  newNode->data=data;
  newNode->next=NULL;
  return newNode;
}
void push(struct Node**top,int data)
{
  struct Node*newNode=createNode(data);
  if(!newNode)
  {
  return;
  }
  newNode->next=*top;
  *top=newNode;
  printf("%d pushed on to the stack\n",data);
}
int pop(struct Node**top)
{
  if(*top==NULL)
  {
    printf("stack is empty\n");
    return INT_MIN;
  }
  struct Node*temp=*top;
  int poppedValues=temp->data;
  *top=temp->next;
  free(temp);
  return poppedValues;
}
int peek(struct Node*top)
{
  if(top==NULL)
  {
    printf("Stack is empty\n");
    return INT_MIN;
  }
  return top->data;
}
int beginning(struct Node*top)
{
  if(top==NULL)
  {
    printf("Stack is empty\n");
    return INT_MIN;
  }
  struct Node*current=top;
  while(current->next!=NULL)
    {
      current=current->next;
    }
  return current->data;
}
int main()
{
  struct Node*top=NULL;
  push(&top,10);
  push(&top,20);
  push(&top,30);
  push(&top,40);
  push(&top,50);
  printf("Top element: %d\n",peek(top));
  printf("bottom element: %d\n",beginning(top));
  printf("popped element: %d\n",pop(&top));
  printf("popped element: %d\n",pop(&top));
  printf("top element after popping is %d\n",peek(top));
  return 0;
}
