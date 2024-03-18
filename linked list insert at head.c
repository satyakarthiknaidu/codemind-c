//linked list operations
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
//aliasing
typedef struct node Node;
//linked list head as global variable
Node *head=NULL;
void insert_at_head(int val)
{
	//creting node
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next = NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void display()
{
	if(head==NULL)
	{
		printf("No Nodes to display\n");
		return;
	}
	Node *temp=head;
	while (temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	//infinite loop
	while(1)
	{
		printf("Enter\n1.Insert at head\n2.Insert at tail\n3.Display\nAny other to exist\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch==2)
		{
			//implement insert at tail
		}
		else if(ch==3)
		{
			//implement display
			display();
		}
		else
		{
			printf("THANK YOU FOR TESTING");
			break;
		}
	}
}
