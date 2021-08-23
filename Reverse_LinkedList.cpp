#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n, data;
	printf("Enter number of nodes: ");
	scanf("%D",&n);
	struct node *head, *newNode, *temp, *prev, *cur;
	int i;
	if(n<=0)
	{
		printf("List size must be greater than 0\n");
		exit(0);
	}
	head = (struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("Unable to allocate memory");
	}
	else
	{
		printf("Enter the data of node 1: ");
		scanf("%d",&head->data);
		head->next = NULL;
		temp = head;
		for(i = 2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			if(newNode==NULL)
			{
				printf("Unable to allocate memory");
				break;
			}
			else
			{
				printf("Enter the data of node %d: ",i);
				scanf("%d",&data);
				newNode->data = data;
				newNode->next = NULL;
				temp->next = newNode;
				temp = temp->next;
			}
		}
		printf("Singly linked list created successfully\n");
	}
	int c = 1;
	temp = NULL;
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
	if(head!=NULL)
	{
		prev = head;
		cur = head->next;
		head = head->next;
		prev->next = NULL;
		while(head!=NULL)
		{
			head = head->next;
			cur->next = prev;
			prev = cur;
			cur = head;
		}
		head = prev;
		printf("Successfully reversed list\n");
	}
	temp = NULL;
	c = 1;
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
