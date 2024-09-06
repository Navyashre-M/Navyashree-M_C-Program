#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*createNode(int data)
{
  struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->next=NULL;
  return newNode;
}
void insertAtBeginning(struct Node**head,int data)
{
  struct Node*newNode=createNode(data);
  newNode->next=*head;
 *head=newNode;
}
void printlist(struct Node*head)
{
  struct Node*temp=head;
  while(temp!=NULL)
    {
 printf("%d->",temp->data);
      temp=temp->next;
    }
  printf("NULL\n");
}
int main(){
  struct Node* head=NULL;
  insertAtBeginning(&head,40);
  insertAtBeginning(&head,30);
  insertAtBeginning(&head,20);
  insertAtBeginning(&head,10);
  printf("Linked List:");
  printlist(head);
  return 0;
}
