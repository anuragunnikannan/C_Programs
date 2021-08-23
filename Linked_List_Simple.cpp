/*Single Linked List Operations*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int len;
struct node* root = NULL;
void insert_end(void);
void insert_begin(void);
void insert_any(void);
int length(void);
void display(void);
void del(void);
void swap(void);
void search(void);
void reverse(void);
int main()
{
	int ch;
	while(1)
	{
		printf("Single Linked List Operations: \n");
		printf("1. Insert at End\n");
		printf("2. Insert at Beginning\n");
		printf("3. Insert at any position\n");
		printf("4. Length\n");
		printf("5. Display\n");
		printf("6. Delete\n");
		printf("7. Swap\n");
		printf("8. Search\n");
		printf("9. Reverse\n");
		printf("10. Quit\n");
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_end();
				break;
			case 2:
				insert_begin();
				break;
			case 3:
				insert_any();
				break;
			case 4:
				len = length();
				printf("Length: %d\n\n",len);
				break;
			case 5:
				display();
				break;
			case 6:
				del();
				break;
			case 7:
				swap();
				break;
			case 8:
				search();
				break;
			case 9:
				reverse();
				break;
			case 10:
				exit(1);
			default:
				printf("Invalid Input\n");
		}
	}
	return 0;
}

void insert_end()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		struct node* p;
		p = root;
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link = temp;
	}
}

void insert_begin()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data:\n");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		temp->link = root;	//right side connection
		root = temp;	//left side connection
	}
}

void insert_any()
{
	struct node* temp, *p;
	int loc, len, i = 1;
	printf("Enter location: \n");
	scanf("%d",&loc);
	len = length();
	if(loc>len)
	{
		printf("Invalid Location\n");
		printf("Currently list is having %d nodes\n",len);
	}
	else
	{
		p = root;
		while(i<loc)
		{
			p = p->link;
			i++;
		}
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data: \n");
		scanf("%d",&temp->data);
		temp->link = p->link;	//right side connection
		p->link = temp;	//left side connection
	}
}

int length()
{
	int count = 0;
	struct node* temp;
	temp = root;
	while(temp!=NULL)
	{
		count++;
		temp = temp->link;
	}
	return count;
}

void display()
{
	struct node* temp;
	temp = root;
	if(temp==NULL)
	{
		printf("List is empty \n\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		printf("\n\n");
	}
}

void del()
{
	struct node* temp;
	int loc;
	printf("Enter location: \n");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("Invalid Location\n");
	}
	else if(loc==1)	//Deletion at beginning
	{
		temp = root;
		root = temp->link;
		temp->link = NULL;
		free(temp);
	}
	else	//Deletion at any point
	{
		struct node* p = root, *q;
		int i = 1;
		while(i<loc-1)
		{
			p = p->link;
			i++;
		}
		q = p->link;
		p->link = q->link;
		q->link = NULL;
		free(q);
	}
}

void swap()
{
	struct node *p, *q, *r;
	int loc, i=1;
	printf("Enter location where data is to be swapped: ");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("Invalid Location\n");
	}
	else
	{
		p = root;
		while(i<loc-1)
		{
			p = p->link;
			i++;
		}
		q = p->link;
		r = q->link;
	}
	q->link = r->link;
	r->link = q;
	p->link = r;
}

void search()
{
	struct node* temp;
	temp = root;
	int k, p = 1;
	printf("Enter data to be searched: ");
	scanf("%d",&k);
	while(temp!=NULL && k!=temp->data)
	{
		p++;
		temp = temp->link;
	}
	if(temp!=NULL)
	{
		printf("%d found at position %d\n",k,p);
	}
	else
	{
		printf("%d not found",k);
	}
}

void reverse()
{
	int i = 0;
	int j = length()-1;
	struct node *p, *q;
	int temp;
	p = q = root;
	while(i<j)
	{
		int k = 0;
		while(k<j)
		{
			q = q->link;
			k++;
		}
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->link;
		q = root;
	}
}