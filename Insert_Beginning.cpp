#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void createList(int n);
void insertNodeAtBeg(int data);
void displayList();
int main()
{
	int n, data;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	createList(n);
	printf("\nData in the list\n");
	displayList();
	printf("Enter data to insert at beginning of the list: ");
	scanf("%d",&data);
	insertNodeAtBeg(data);
	printf("\nData in the list\n");
	displayList();
	return 0;
}
void createList(int n)
{
	struct node *newNode, *temp;
	int data, i;
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("Unable to allocate memory: ");
	}
	else
	{
		printf("Enter data of node 1: ");
		scanf("%d",&head->data);
		head->next = NULL;
		temp = head;
		for(i=2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			if(newNode == NULL)
			{
				printf("Unable to allocate memory");
				break;
			}
			else
			{
				printf("Enter data of node %d: ",i);
				scanf("%d",&newNode->data);
				newNode->next = NULL;
				temp->next = newNode;
				temp = temp->next;
			}
		}
	}
}
void insertNodeAtBeg(int data)
{
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	if(newNode == NULL)
	{
		printf("Unable to allocate memory");
	}
	else
	{
		newNode->data = data;
		newNode->next = head;
		head = newNode;
		printf("Data Inserted Successfully");
	}
}
void displayList()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp = head;
		while(temp!=NULL)
		{
			printf("Data = %d\n",temp->data);
			temp = temp->next;
		}
	}
}
