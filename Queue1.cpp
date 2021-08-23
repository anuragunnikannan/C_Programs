#include <stdio.h>
#include <stdlib.h>
int *Q = (int*)malloc(10*sizeof(int));
int f = -1, r = -1, n = 0;
void insert(int x)
{
	if(r==9)
	{
		printf("Overflow\n");
	}
	else if(f==-1 && r==-1)
	{
		f = 0;
		r = 0;
	}
	else
	{
		r = r+1;
	}
	Q[r] = x;
}
void del()
{
	int v = 0;
	if(f==-1 || f>r)
	{
		printf("Underflow\n");
	}
	else
	{
		v = Q[f];
		f = f+1;
	}
	printf("%d deleted\n",v);
}
void display()
{
	if(f==-1 || f==r+1)
	{
		printf("Empty\n");
	}
	else
	{
		printf("\nQueue is:\n");
		for(int i = f;i<=r;i++)
		{
			printf("%d ",Q[i]);
		}
	}
}
int main()
{
	int ch = 0, x = 0;
	while(true)
	{
		printf("\n1. Insert Element\n");
		printf("2. Delete Element\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an element: \n");
				scanf("%d",&x);
				insert(x);
				display();
				break;
			case 2:
				del();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Program Ends");
				exit(0);
			default:
				printf("Invalid Choice!");
		}
	}
	return 0;
}
