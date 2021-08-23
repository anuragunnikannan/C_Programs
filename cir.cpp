#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void createList(struct node **head, int n);
void display(struct node **head);
void deleteElement(struct node **head, int k);
int main()
{
	int n, k, d, choice;
	struct node *head = NULL;
	while(choice!=0)
	{
		printf("\n1. Create List\n");
		printf("2. Display list\n");
		printf("3. Delete element\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d",&n);
				createList(&head, n);
				break;
			case 2:
				display(&head);
				break;
			case 3:
				printf("\nEnter key to delete from list: \n");
				scanf("%d",&k);
				deleteElement(&head, k);
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	return 0;
}
void deleteElement(struct node ** head, int k)
{
	int i, count;
	struct node *prev, *cur;
	if(*head ==NULL)
	{
		printf("List is empty");
		return;
	}
	count = 0;
	cur = *head;
	prev = cur;
	while(prev->next!=*head)
	{
		prev = prev->next;
		count++;
	}
	i = 0;
	while(i<=count)
	{
		if(cur->data==k)
		{
			if(cur->next!=cur)
			{
				prev->next = cur->next;
			}
			else
			{
				prev->next = NULL;
			}
			if(cur==*head)
			{
				*head = prev->next;
			}
			free(cur);
			if(prev!=NULL)
			{
				cur = prev->next;
			}
			else
			{
				cur = NULL;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
		i++;
	}
}
void createList(struct node **head, int n)
{
	int i;
	struct node *prev, *newNode;
	prev = NULL;
	for(i = 1;i<=n;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		printf("\nEnter data of node %d: ",i);
		scanf("%d",&newNode->data);
		newNode->next = NULL;
		if(prev!=NULL)
		{
			prev->next = newNode;
		}
		if(*head==NULL)
		{
			*head = newNode;
		}
		prev = newNode;
	}
	prev->next = *head;
	printf("Circular linked list created\n");
}
void display(struct node **head)
{
	struct node *cur;
	int n = 1;
	if(*head==NULL)
	{
		printf("List is empty");
		exit(0);
	}
	cur = *head;
	printf("Data in the list: \n");
	while(cur!=*head)
	{
		printf("Data %d = %d\n", n, cur->data);
		cur = cur->next;
		n++;
	}
}
