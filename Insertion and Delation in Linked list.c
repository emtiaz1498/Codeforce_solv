#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[], int size);
void insertAtBeginning(struct Node *head, int data);
void printList(struct Node *head);

struct Node{
int data;
struct Node *next;
};

int main()
{
    int a[]={5,10,20,90,50,40};
    struct Node *head=NULL;
    head=createLinkedList(a,6);
    printf("Main data:\n");
    printList(head);

    printf("\n");
printf("Inserted data:\n");
    insertAtBeginning(head,100);

    return 0;
}

void insertAtBeginning(struct Node *head, int data)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    struct Node *newHead=temp;
    struct Node *current=newHead;
    newHead=temp;
    printList(newHead);
}

void printList(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head=NULL, *temp=NULL, *current=NULL;

    for( int i=0; i<size; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=arr[i];
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        current =temp;
    }
    else
    {
        current->next=temp;
        current=current->next;
    }
    }
    return head;
};
