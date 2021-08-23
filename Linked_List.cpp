#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void createNode(int n)
{
	struct node *newNode, *temp;
	head = (struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		printf("\nEnter data for node 1: ");
		scanf("%d",&head->data);
		head->next = NULL;
		temp = head;
		for(int i = 2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			if(newNode==NULL)
			{
				printf("\nUnable to allocate memory: ");
			}
			else
			{
				printf("\nEnter data for node %d: ",i);
				scanf("%d",&newNode->data);
				newNode->next = NULL;
				temp->next = newNode;
				temp = temp->next;
			}
		}
	}
}
void insertBeg(int x)
{
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		newNode->data = x;
		newNode->next = head;
		head = newNode;
		printf("\nData inserted successfully");
	}
}
void insertMiddle(int x, int p)
{
	struct node *newNode, *temp;
	newNode = (struct node *)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
		temp = head;
		for(int i = 2;i<=p-1;i++)
		{
			temp = temp->next;
			if(temp==NULL)
			{
				break;
			}
		}
		if(temp!=NULL)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			printf("\nData inserted successfully");
		}
		else
		{
			printf("\nUnable to insert data at given position");
		}
	}
}
void insertEnd(int x)
{
	struct node *newNode, *temp;
	newNode = (struct node *)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
		temp = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		printf("\nData entered successfully");
	}
}
void deleteBeg()
{
	struct node *toDelete;
	if(toDelete==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		toDelete = head;
		head = head->next;
		printf("\nDeleted Data = %d",toDelete->data);
		free(toDelete);
	}
}
void deleteMiddle(int x, int p)
{
	struct node *toDelete, *temp;
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		toDelete = head;
		temp = head;
		for(int i = 1;i<p;i++)
		{
			temp = toDelete;
			toDelete = toDelete->next;
			if(toDelete==NULL)
			{
				break;
			}
		}
		if(toDelete!=NULL)
		{
			if(toDelete==head)
			{
				head = head->next;
			}
			temp->next = toDelete->next;
			toDelete->next = NULL;
			printf("\nData Deleted = %d",toDelete->data);
			free(toDelete);
		}
		else
		{
			printf("\nUnable to delete data at given position");
		}
	}
}
void deleteEnd()
{
	struct node *toDelete, *temp;
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		toDelete = head;
		temp = head;
		while(toDelete->next!=NULL)
		{
			temp = toDelete;
			toDelete = toDelete->next;
		}
		if(toDelete==head)
		{
			head = NULL;
		}
		else
		{
			temp->next = NULL;
		}
		printf("\nData Deleted = %d",toDelete->data);
		free(toDelete);
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		temp = head;
		while(temp!=NULL)
		{
			printf("\nData = %d",temp->data);
			temp = temp->next;
		}
	}
}
void search(int x)
{
	struct node *temp;
	int i = 0;
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		temp = head;
		while(temp!=NULL && temp->data!=x)
		{
			i++;
			temp = temp->next;
		}
		if(temp!=NULL)
		{
			printf("\n%d found at position %d", x, (i+1));
		}
		else
		{
			printf("\nNot found");
		}
	}
}
int main()
{
	int n, ch;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	createNode(n);
	while(1)
	{
		printf("\n1. Insert at Beginning");
		printf("\n2. Insert at Middle");
		printf("\n3. Insert at End");
		printf("\n4. Delete from Beginning");
		printf("\n5. Delete from Middle");
		printf("\n6. Delete from End");
		printf("\n7. Display");
		printf("\n8. Search");
		printf("\n9. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		int x, p;
		switch(ch)
		{
			case 1:
				printf("\nEnter data to be inserted: ");
				scanf("%d",&x);
				insertBeg(x);
				break;
			case 2:
				printf("\nEnter data to be inserted: ");
				scanf("%d",&x);
				printf("\nEnter position: ");
				scanf("%d",&p);
				insertMiddle(x, p);
				break;
			case 3:
				printf("\nEnter data to be inserted: ");
				scanf("%d",&x);
				insertEnd(x);
				break;
			case 4:
				deleteBeg();
				break;
			case 5:
				printf("\nEnter data to be deleted: ");
				scanf("%d",&x);
				printf("\nEnter position: ");
				scanf("%d",&p);
				deleteMiddle(x, p);
				break;
			case 6:
				deleteEnd();
				break;
			case 7:
				display();
				break;
			case 8:
				printf("\nEnter data to search: ");
				scanf("%d",&x);
				search(x);
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	return 0;
}
