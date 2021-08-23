#include <stdio.h>
#include <stdlib.h>
int *st = (int*)malloc(1000*sizeof(int));
int n, top = -1;
void push()
{
	int val;
	if(top==n)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter value:\n");
		scanf("%d",&val);
		top = top + 1;
		st[top] = val;
	}
}
void pop()
{
	int val;
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		val = st[top];
		top = top - 1;
		printf("%d popped\n", val);
	}
}
void display()
{
	for(int i = top;i>=0;i--)
	{
		printf("%d\n", st[i]);
	}
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
}
int main()
{
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	int ch = 0;
	while(true)
	{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Program Ends!");
				exit(0);
			default:
				printf("Invalid Choice!");
		}
	}
	return 0;
}
