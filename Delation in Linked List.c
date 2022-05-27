#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[], int size);
void printList(struct Node *head);
struct Node *delete(struct Node *head, int data);

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
   printf("Deleted data\n ");
    struct Node *newHead=delete(head,5);
    printList(newHead);
    return 0;
}

struct Node *delete(struct Node *head, int data)
{
    struct Node *dummyHead=(struct Node *)malloc(sizeof(struct Node));
    dummyHead->next=head;
    struct Node *temp=dummyHead;
    while(temp->next != NULL)
    {
        if(temp->next->data==data)
        {
            //delet
            temp->next=temp->next->next;
       }
        else{
            temp=temp->next;
        }
    }
    return dummyHead->next;
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

