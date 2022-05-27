#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node* next;
};

struct node *head;
struct node *first;

bool empty()
{
	if(head==NULL)
	return true;
	return false;
}

int size()
{
	int count=0;
	struct node *temp = head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

int front()
{
	struct node *temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	return temp->data;
}

int back()
{
	return head->data;
}

void push(int value)
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = value;
	newnode->next = head;
	head = newnode;
}

void pop()
{
	struct node *temp = head;
	if(size()==1)
	{
		head = NULL;
		return;
	}
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=NULL;
}


int main()

{
	push(1);
	push(3);
	push(7);
	push(20);
	pop();
	struct node *temp=head;
	while(!empty())

	{

	printf("%d ",front());
		pop();
	}
	printf("\n");

return 0;
}
