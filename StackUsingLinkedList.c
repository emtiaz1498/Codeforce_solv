#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int count()
{
    struct node *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void push(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = val;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

int top()
{
    return head->data;
}

void pop()
{
    head = head->next;
}

int main()
{
    push(6);
    push(9);
    push(23);
    push(88);
    push(100);
    pop();
    int element_count = count();
    while(element_count--)
    {
        printf("%d\n",top());
        pop();
    }
return 0;
}
