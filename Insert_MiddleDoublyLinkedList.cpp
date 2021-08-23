#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
int main()
{
	int n, i;
	struct node *head, *last, *newNode, *temp;
	head = last = NULL;
	printf("Enter number of node: ");
	scanf("%d",&n);
	if(n>=1)
	{
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter data of node 1: ");
		scanf("%d",&head->data);
		head->prev = NULL;
		head->next = NULL;
		last = head;
		for(i = 2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			printf("Enter data of node %d: ",i);
			scanf("%d",&newNode->data);
			newNode->prev = last;
			newNode->next = NULL;
			last->next = newNode;
			last = newNode;
		}
		printf("\nDoubly linked list created successfully");
	}
	int c = 1;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp = head;
		printf("Data in the list: \n");
		while(temp!=NULL)
		{
			printf("Data of %d node = %d\n",c,temp->data);
			c++;
			temp = temp->next;
		}
	}
	c = 1;
	int pos;
	n = 0;
	i = 0;
	printf("Enter position where you want to insert node: \n");
	scanf("%d",&pos);
	printf("Enter data of the node: \n");
	scanf("%d",&n);
	newNode = NULL;
	temp = NULL;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp = head;
		i = 1;
		while(i<pos-1 && temp!=NULL)
		{
			temp = temp->next;
			i++;
		}
		if(temp!=NULL)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			newNode->data = n;
			newNode->next = temp->next;
			newNode->prev - temp;
			if(temp->next!=NULL);
			temp->next->prev = newNode;
			temp->next = newNode;
			printf("Node inserted successfully at position %d: \n",pos);
		}
		else
		{
			printf("Invalid Position");
		}
		temp = NULL;
	}
	printf("\nData in the list after insertion: \n");
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp = head;
		printf("Data in the list: \n");
		while(temp!=NULL)
		{
			printf("Data of %d node = %d\n",c,temp->data);
			c++;
			temp = temp->next;
		}
	}
	return 0;
}
